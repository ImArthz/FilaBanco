#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "Pessoa.hpp"
#include <iostream>
#include <string>
class Cliente: public Pessoa
{
  private:
    string num_conta;
    string num_agencia;
    int prio;
    Cliente* prox;
  public:
    void setNum_conta(string num_conta);
    string getNum_conta();
    void setNum_agencia(string num_agencia);
    void setPrio(int prio);
    int getPrio();
    string getNum_agencia();
    Cliente* getProx();
    void setProx(Cliente* prox);
    Cliente();
    static int Cliente_contador; 
    Cliente(string nome,string cpf,string num_conta,string num_agencia,int prio);
    
  
};
#endif
