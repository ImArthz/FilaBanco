#include <iostream>
#include "PilhaProva.hpp"
#include "Prova.hpp"
#include "Aluno.hpp"
using namespace std;
PilhaProva::PilhaProva(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos)
{
    top = new Prova(Disciplina,Codigo_da_prova,Nota,alunos);
    bottom = top;
}
PilhaProva::PilhaProva()
{
    top = NULL;
    bottom = NULL;
}
void PilhaProva::setTop(Prova* top)
{
    this->top=top;
}
Prova* PilhaProva::getTop()
{
    return top;
}
void PilhaProva::setBottom(Prova* bottom)
{
    this->bottom=bottom;
}
Prova* PilhaProva::getBottom()
{
    return bottom;
}
bool PilhaProva::vazia()
{
    return(top==NULL);
}
void PilhaProva::adicionarProva(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos)
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
void PilhaProva::RemoverProva(string Codigo_da_prova)
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
void PilhaProva::ImprimirProva()
{
    Prova* p=top;
    if(vazia())
    {
      top=p;
      bottom=p;
      cout<<"Não existem provas cadastradas "<<endl;  
    }
    else{
        while(p)
        {
            cout<<"------------------------Provas----------------------------"<<endl;
            cout<<"Disciplina           : "<<p->getDisciplina()<<endl;
            cout<<"Codigo da Disciplina : "<<p->getCodigo()<<endl;
            cout<<"Nota                 : "<<p->getNota()<<endl;
            cout<<"Alunos               : "<<p->ImprimirAluno()<<endl;
            cout<<"----------------------------------------------------------"<<endl;
            p->cadastrarProvaaux(p->getDisciplina(),p->getCodigo(),p->getNota(),p->getAluno());
            p->removerProvaaux(p->getCodigo());
            p=p->getProx();
        }
        p->voltarpilha();
    }

}