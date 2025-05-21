#include <iostream>
#include <string>
using namespace std;

class Livro {
protected:
    string titulo;
    string autor;
    string isbn;
    int ano;

public:
    Livro(string t, string a, string i, int an)
        : titulo(t), autor(a), isbn(i), ano(an) {}

    virtual void imprimirDados() const {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Ano: " << ano << endl;
    }

    virtual ~Livro() {}
};

class LivroBiblioteca : public Livro {
private:
    bool emprestado;

public:
    LivroBiblioteca(string t, string a, string i, int an, bool emp = false)
        : Livro(t, a, i, an), emprestado(emp) {}

    void emprestar() {
        if (!emprestado) {
            emprestado = true;
            cout << "Livro emprestado com sucesso!" << endl;
        } else {
            cout << "Livro já está emprestado!" << endl;
        }
    }

    void devolver() {
        if (emprestado) {
            emprestado = false;
            cout << "Livro devolvido com sucesso!" << endl;
        } else {
            cout << "Livro não estava emprestado!" << endl;
        }
    }

    void imprimirDados() const override {
        Livro::imprimirDados();
        cout << "Emprestado: " << (emprestado ? "Sim" : "Não") << endl;
    }
};

class LivroLivraria : public Livro {
private:
    double preco;
    int estoque;

public:
    LivroLivraria(string t, string a, string i, int an, double p, int est)
        : Livro(t, a, i, an), preco(p), estoque(est) {}

    void vender(int qtd) {
        if (qtd <= estoque) {
            estoque -= qtd;
            cout << "Venda realizada! Quantidade: " << qtd << endl;
        } else {
            cout << "Estoque insuficiente!" << endl;
        }
    }

    void repor(int qtd) {
        estoque += qtd;
        cout << "Estoque reposto. Novo estoque: " << estoque << endl;
    }

    void imprimirDados() const override {
        Livro::imprimirDados();
        cout << "Preço: R$" << preco << endl;
        cout << "Estoque: " << estoque << " unidades" << endl;
    }
};

int main() {
    cout << "===== SISTEMA DE BIBLIOTECA =====" << endl;
    LivroBiblioteca livroBib("Dom Quixote", "Miguel de Cervantes", "978-8533300037", 1605);
    livroBib.imprimirDados();
    livroBib.emprestar();
    livroBib.imprimirDados();
    livroBib.devolver();
    livroBib.imprimirDados();

    cout << "\n===== SISTEMA DE LIVRARIA =====" << endl;
    LivroLivraria livroLiv("1984", "George Orwell", "978-8535914849", 1949, 49.90, 10);
    livroLiv.imprimirDados();
    livroLiv.vender(3);
    livroLiv.imprimirDados();
    livroLiv.repor(5);
    livroLiv.imprimirDados();

    return 0;
}
