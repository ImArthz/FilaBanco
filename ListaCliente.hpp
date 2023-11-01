#ifndef LISTA_CLIENTE_HPP
#define LISTA_CLIENTE_HPP
#include "Cliente.hpp"
using namespace std;
class ListaCliente
{
  public:
    ListaCliente(string nome,string cpf,string num_agencia,string num_conta,int prio);
    ListaCliente();
    void addCliente(string nome,string cpf,string num_agencia,string num_conta,int prio);
    void imprimirCliente();
    void Remover_Cliente(string cpf);
    virtual ~ListaCliente();
    bool vazia();
    Cliente* getHead();
    void setHead(Cliente* head);
    Cliente* getTail();
    void setTail(Cliente* tail);
  private:
    Cliente* head;
    Cliente* tail;
    static int Cliente_contador;
};
#endif
