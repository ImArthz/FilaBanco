#include "Cliente.hpp"
#include <iostream>
using namespace std;
int Cliente::Cliente_contador = 1;
Cliente::Cliente(string nome,string cpf,string num_conta,string num_agencia,int prio):Pessoa(nome,cpf),num_conta(num_conta),num_agencia(num_agencia),prio(prio)
{
  this->prox=NULL;
  Cliente_contador++;
}
Cliente::Cliente(){}
void Cliente:: setNum_conta(string num_conta)
{
  this->num_conta=num_conta;
}
string Cliente:: getNum_conta()
{
  return num_conta;
}
void Cliente:: setNum_agencia(string num_agencia)
{
  this->num_agencia=num_agencia;
}
string  Cliente::getNum_agencia()
{
  return num_agencia;
}
Cliente* Cliente::getProx()
{
  return prox;
}
int Cliente:: getPrio()
{
  return prio;
}
void Cliente:: setPrio(int prio)
{
 this->prio=prio; 
}
void Cliente::setProx(Cliente* prox)
{
  this->prox=prox;
}
