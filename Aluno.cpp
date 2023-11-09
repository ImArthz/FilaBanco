#include "Aluno.hpp"
#include <iostream>
using namespace std;

Aluno::Aluno(string nome,string cpf,int numero_de_matricula,string curso):Pessoa(nome,cpf),numero_de_matricula(numero_de_matricula),curso(curso)
{

}
Aluno::Aluno(){}
void Aluno::setMatricula(int numero_de_matricula)
{
    this->numero_de_matricula=numero_de_matricula;
}
int Aluno::getMatricula()
{
    return numero_de_matricula;
}
void Aluno::setCurso(string curso)
{
    this->curso=curso;
}
string Aluno::getCurso()
{
    return curso;
}
void Aluno::imprimirAluno()
{
    Aluno a;
    cout<<"--------------------------Alunos-----------------------------"<<endl;
    cout<<"Nome                : "<<a.getNome()<<endl;
    cout<<"Cpf                 : "<<a.getCpf()<<endl;
    cout<<"Numero de Matricula : "<<a.getMatricula()<<endl;
    cout<<"Nome do curso       : "<<a.getCurso()<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}