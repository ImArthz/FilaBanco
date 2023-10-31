#include "Lista_Cliente"
#include <iostream>
int ListaCliente::Cliente_Contador=1;
using namespace std;
ListaCliente::ListaCliente(string nome,string cpf,string num_agencia,string num_conta,int prio)
{
  head = new Cliente(nome,cpf,num_agencia,num_conta,prio);
  tail = head;
}
ListaCliente::ListaCliente()
{
  head = NULL;
  head = NULL;
}
bool ListaCliente::vazia()
{
  return (head==NULL);
}
ListaCliente::~ListaCliente()
{
  delete head;
}
Cliente* ListaCliente::getHead()
{
    return head;
}
void ListaCliente::setHead(Cliente* head)
{
    this->head=head;
}
Paciente* ListaCliente::getTail()
{
    return tail;
}
void ListaCliente::setTail(Paciente* tail)
{
    this->tail=tail;
}
void ListaCliente:: addPaciente(string nome,string cpf,string num_agencia,string num_conta,int prio)
{
    
}

void ListaPaciente::Remover_Paciente(string cpf)
{

   
}

void ListaPaciente:: Imprimir_Paciente()
{
    
}
