#include <iostream>
#include "PilhaAuxiliar.hpp"
using namespace std;
PilhaAuxiliar::PilhaAuxiliar(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos)
{
    top = new Prova(Disciplina,Codigo_da_prova,Nota,alunos);
    bottom = top;
}
PilhaAuxiliar::PilhaAuxiliar()
{
    top = NULL;
    bottom = NULL;
}
void PilhaAuxiliar::setTop(Prova* top)
{
    this->top=top;
}
Prova* PilhaAuxiliar::getTop()
{
    return top;
}
void PilhaAuxiliar::setBottom(Prova* bottom)
{
    this->bottom=bottom;
}
Prova* PilhaAuxiliar::getBottom()
{
    return bottom;
}
bool PilhaAuxiliar::vazia()
{
    return(top==NULL);
}
void PilhaAuxiliar::adicionarProva(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos)
{
    Prova* p = new Prova(Disciplina,Codigo_da_prova,Nota,alunos);
    if(vazia)
    {
        top = p;
        bottom = p;
    }
    else 
    {
        Prova* current = top;
        Prova* fim = nullptr;
        while(current!= nullptr)
        {
            p->setProx(current);
            if(fim == nullptr){
                top = p;
            }
            else{
            fim->setProx(p);
            }
            return;
        current = fim;
        fim = fim->getProx();
        }
    }
}
void PilhaAuxiliar::RemoverProva(string Codigo_da_prova)
{
    if(vazia())
    cout<<"Não há nenhuma prova cadastrada\n";
    else if(top->getProx()==NULL && top->getCodigo()==Codigo_da_prova)
        top=NULL;
    else if(top->getProx()->getProx()==NULL&&top->getCodigo()==Codigo_da_prova){
        top=top->getProx();
    }
    else if(top->getProx()->getProx()==NULL&&top->getProx()->getCodigo()==Codigo_da_prova){
        top->setProx(NULL);
        bottom = top;
    }
    else
    {
		Prova* previous=top;
		Prova* i=top->getProx();
		Prova* next=top->getProx()->getProx();
		while(next){
			if(top->getCodigo()==Codigo_da_prova){
				top=top->getProx();
			}
			else if(i->getCodigo()==Codigo_da_prova){
				previous->setProx(next);
				free(i);
			}
			previous=i;
			i=next;
			next=next->getProx();
		}
		if(i->getCodigo()==Codigo_da_prova)
        {
			previous->setProx(NULL);
			free(i);
			bottom=previous;
	    }
    }
}