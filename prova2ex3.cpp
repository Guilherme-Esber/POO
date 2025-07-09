#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<int, std::string> arvore;
    int opcao;
    do {
        std::cout << "======================================\n";
        std::cout << "Implementacao de Arvore (map) no STL\n";
        std::cout << "======================================\n";
        std::cout << "1. Inserir elemento\n";
        std::cout << "2. Remover elementos pelo valor da chave\n";
        std::cout << "3. Exibir elementos em ordem\n";
        std::cout << "4. Exibir quantidade de elementos\n";
        std::cout << "5. Remover todos os elementos\n";
        std::cout << "6. Consultar qtd de elementos com determinado valor\n";
        std::cout << "7. Dada uma chave, exibir o valor do conteudo associado\n";
        std::cout << "8. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        if(opcao == 1) {
            int chave;
            std::string valor;
            std::cout << "Chave: "; std::cin >> chave;
            std::cout << "Valor: "; std::cin >> valor;
            arvore.insert({chave, valor});
        }
        else if(opcao == 2) {
            int chave;
            std::cout << "Chave a remover: "; std::cin >> chave;
            arvore.erase(chave);
        }
        else if(opcao == 3) {
            std::cout << "Elementos (ordenados por chave):\n";
            for(const auto& par : arvore)
                std::cout << par.first << " => " << par.second << "\n";
        }
        else if(opcao == 4) {
            std::cout << "Quantidade de elementos: " << arvore.size() << "\n";
        }
        else if(opcao == 5) {
            arvore.clear();
            std::cout << "Todos os elementos removidos.\n";
        }
        else if(opcao == 6) {
            std::string valor;
            int count = 0;
            std::cout << "Valor a consultar: "; std::cin >> valor;
            for(const auto& par : arvore)
                if(par.second == valor) ++count;
            std::cout << "Quantidade: " << count << "\n";
        }
        else if(opcao == 7) {
            int chave;
            std::cout << "Chave a consultar: "; std::cin >> chave;
            auto range = arvore.equal_range(chave);
            if(range.first == range.second)
                std::cout << "Chave nao encontrada.\n";
            else
                for(auto it = range.first; it != range.second; ++it)
                    std::cout << it->first << " => " << it->second << "\n";
        }
    } while(opcao != 8);
    return 0;
}
