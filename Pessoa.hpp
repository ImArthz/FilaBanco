#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
class Pessoa 
{
  private:
    string nome;
    string cpf;
  public:
    Pessoa(string nome,string cpf);
    Pessoa();
    string getNome();
    void setNome(string nome);
    string getCpf();
    void getCpf();
    
};
#endif

