#include "ListaCliente.hpp"
#include <iostream>
int ListaCliente:: Cliente_contador=1;
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
Cliente* ListaCliente::getTail()
{
    return tail;
}
void ListaCliente::setTail(Cliente* tail)
{
    this->tail=tail;
}
void ListaCliente::addCliente(string nome, string cpf, string num_agencia, string num_conta, int prio) {
  Cliente* p = new Cliente(nome, cpf, num_agencia, num_conta, prio);
  if (vazia()) {
    head = p;
    tail = p;
  } else {
    Cliente* banana = head;
    Cliente* pitaya = nullptr;
    while (banana != nullptr) {
      if (p->getPrio() > banana->getPrio()) {
        p->setProx(banana);
        if (pitaya == nullptr) {
          head = p;
        } else {
          pitaya->setProx(p);
        }
        return;
      }
      pitaya = banana;
      banana = banana->getProx();
    }
    pitaya->setProx(p);
    tail = p;
  }
}


void ListaCliente:: Remover_Cliente(string cpf)
{
   if(vazia())
	cout << "Não há nenhum Cliente cadastrado\n";
	else if(head->getProx()==NULL && head->getCpf()==cpf)
		head=NULL;
	else if(head->getProx()->getProx()==NULL && head->getCpf()==cpf){
		head=head->getProx();
	}
	else if(head->getProx()->getProx()==NULL && head->getProx()->getCpf()==cpf){
		head->setProx(NULL);
        tail=head;
	}
	else{
		Cliente* previous=head;
		Cliente* i=head->getProx();
		Cliente* next=head->getProx()->getProx();
		while(next){
			if(head->getCpf()==cpf){
				head=head->getProx();
			}
			else if(i->getCpf()==cpf){
				previous->setProx(next);
				free(i);
			}
			previous=i;
			i=next;
			next=next->getProx();
		}
		if(i->getCpf()==cpf)
        {
			previous->setProx(NULL);
			free(i);
			tail=previous;
	    }
    }
}

void ListaCliente:: imprimirCliente()
{ 
  Cliente* p=head;
    if(vazia())
    {
        head=p;
        tail=p;
        cout<<"\n Não tem pacientes cadastrados!! \n";
    }
    else{
        while(p){
        cout<<"----------------Paciente "<<Cliente_contador++<<"----------------";
        cout<<endl;
        cout << "nome: \t\t" << p->getNome() << endl;
        cout << "cpf: " << p->getCpf() << endl;
        cout << "Numero de agencia : "<<p->getNum_agencia()<<endl;
        cout << "Numero da conta : "<<p->getNum_conta()<<endl;
        cout << "Prioridade :"<<p->getPrio();//se get prio 1 = prioridade se for 2 = superprioridade e 0 normal 
        cout<<endl;
        cout<<"---------------------------------------------------\n";
        p=p->getProx();
        }
    }
} 