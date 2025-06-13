// arquivo pilha.h

#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <stdexcept>

class CPilha
{
private:
    int *m_dados;               // Ponteiro para os dados da pilha
    int m_ponteirodaPilha;      // Apontador para o topo da pilha
    int m_tamanho;              // Espaço de memória reservado para o objeto

public:
    // Construtor com parâmetro para alocar memória para a pilha
    CPilha(int memoria);         
    
    // Construtor sem parâmetro
    CPilha(void);               
    
    // Destrutor para liberar a memória alocada
    ~CPilha(void);              
    
    // Método para remover um elemento da pilha
    int pop(int *pop_to);        
    
    // Método para adicionar um elemento à pilha
    int push(int push_this);     

    // Sobrecarga do operador de leitura (>>) para a pilha
    friend std::istream& operator>>(std::istream& in, CPilha& pilha);

    // Sobrecarga do operador de impressão (<<) para a pilha
    friend std::ostream& operator<<(std::ostream& out, const CPilha& pilha);
};

#endif
