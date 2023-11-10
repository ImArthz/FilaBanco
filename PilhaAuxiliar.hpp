#ifndef PILHAAUXILIAR_HPP
#define PILHAAUXILIAR_HPP
#include "Prova.hpp"
#include <iostream>
#include "Aluno.hpp"
using namespace std;
class PilhaAuxiliar
{
private:
    Prova* top;
    Prova* bottom;
public:
    PilhaAuxiliar(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos);
    PilhaAuxiliar();
    void setTop(Prova* top);
    Prova* getTop();
    void setBottom(Prova* bottom);
    Prova* getBottom();
    void adicionarProva(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos);
    void RemoverProva(string Codigo_da_prova);
    bool vazia();
    void voltarpilha();
};
#endif