#include "Cliente.hpp"
#include <iostream>
using namespace std;
Cliente::Cliente(string nome,string cpf,string num_conta,string num_agencia,int prio):Pessoa(nome,cpf),num_conta(num_conta),num_agencia(num_agencia),prio(prio)
{
  this->prox=NULL;
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
string  Cliente::string getNum_agencia()

{
  return->num_agencia;
}
Cliente* Cliente::getProx()
{
  return prox;
}
int Cliente:: getPrio()
{
  return prio;
}
void Cliente:: setPrio()
{
 this->prio=prio; 
}

