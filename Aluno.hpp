#ifndef ALUNO_HPP
#define ALUNO_HPP
#include "Pessoa.hpp"
#include <iostream>
#include <string>
class Aluno: public Pessoa
{
  private:
    int numero_de_matricula;
    string curso;
  public:
    Aluno(string nome,string cpf,int numero_de_matricula,string curso);
    Aluno();
    void setMatricula(int numero_de_matricula);
    int getMatricula();
    void setCurso(string curso);
    string getCurso();
    void imprimirAluno();
    
  
};
#endif
