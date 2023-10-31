#include "Pessoa.hpp"
#include <iostream>
#include <string>
Pessoa::Pessoa(string nome,string cpf),nome(nome),cpf(cpf){
  this->next = NULL;
}
Pessoa::Pessoa(){
}
Pessoa::string getNome(){
  return nome;  
}
Pessoa::void setNome(string nome){
  this->nome=nome;
}
Pessoa::string getCpf(){
  return cpf;
}
Pessoa::void setCpf(string cpf){
  this->cpf=cpf;
}

