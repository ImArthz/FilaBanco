#ifndef PROVA_HPP
#define PROVA_HPP
#include <iostream>
#include "Aluno.hpp"
#include "PilhaProva.hpp"
#include "PilhaAuxiliar.hpp"
#include <string>

using namespace std;
class Prova {
    private:
    string Disciplina;
    string Codigo_da_prova;
    float Nota;
    Aluno alunos;
    Prova* prox;
    PilhaProva* provas;
    public:
    void setDisciplina(string Disciplina);
    string getDisciplina();
    void setCodigo(string Codigo_da_prova);
    string getCodigo();
    void setNota(float Nota);
    float getNota();
    Prova(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos);
    Prova();
    void setProx(Prova* prox);
    Prova* getProx();
    Aluno getAluno();
    bool adicionarAluno();
    bool removerAluno(string cpf);
    bool ImprimirAluno();
    void cadastrarProvaaux(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos);
    void removerProvaaux(string Codigo_da_prova);
    void voltarpilha();
    bool imprimirProvas();
    
    /*
    desempilhar ler cada elemento desempilhado e adicionado a uma pilha x , apos leitura imprima , 
    apos imprimir todos desempilhe todos elementos e empilhe-os em suas posições originais da 1 pilha
    */
};
#endif