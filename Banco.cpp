#include <iostream>
#include "Cliente.hpp"
#include "Banco.hpp"
#include <string>
#include <limits> // Biblioteca para lidar com erros de leitura de inteiro
using namespace std;
Banco::Banco(ListaCliente* clientes,string nome,string endereco, int ddd,int telefone)
{
    this->clientes=clientes;
    this->nome=nome;
    this->endereco=endereco;
    this->ddd=ddd;
    this->telefone=telefone;
}
Banco::Banco()
{
    this->clientes= new ListaCliente();
}
void Banco::setTelefone(int telefone)
{
    this->telefone = telefone;
}
int Banco::getTelefone()
{
    return telefone;
}
void Banco::setDDD(int ddd)
{
    this->ddd=ddd;
}
int Banco::getDDD()
{
    return ddd;
}
void Banco::setNome(string nome)
{
    this->nome=nome;
}
string Banco::getNome()
{
    return nome;
}
void Banco::setEndereco(string endereco)
{
    this->endereco=endereco;
}
string Banco::getEndereco()
{
    return endereco;
}
bool Banco::cadastraCliente()
{
    string num_conta,num_agencia,nome,cpf;
    int prio;
    Cliente* cliente=NULL;
    Cliente* cl =clientes->getHead();
    while(true){
        cout<<"->Digite o cpf do Cliente : "<<endl;
        cin>>cpf;
        // Verifique o comprimento da string para garantir que seja um CPF válido
            if (cpf.length() == 11) {
                // CPF tem 11 dígitos, o que é um CPF válido
                break;
            }   else {
                cout << "CPF inválido. Digite um CPF com 11 dígitos." << endl;
    }
    }
    while(cl)
    {
        if(cl->getCpf()==cpf){
            cliente=cl;
            cout<<"\nCliente ja cadastrado\n";
            return false;
        }
        cl=cl->getProx();
    }
    if(cliente==NULL)
    {
        cout<<"\n -> nome completo :"<<endl;
        cin.ignore();
        getline(cin,nome);
        cout<<"\n numero da agencia :"<<endl;
        getline(cin,num_agencia);
        cout<<"\n numero da conta :"<<endl;
        getline(cin,num_conta);
        while (true) {
            bool saidaaux= true;
            cout << "->selecione a prioridade (2/1/0)\n2 - superprioridade \n1-prioridade \n 0-normal : ";
            cin >> prio;

            if (cin.fail()) {
                cin.clear();  // Limpa o estado de erro
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                cout << "Entrada inválida. Digite um número inteiro." << endl;
                saidaaux = false;
            } else {
                if(prio>2 || prio<0){
                cout<<"Prioridade invalidade\n";
                saidaaux = false;
                
            }
                if(saidaaux)
                {
                    // Entrada válida, podemos sair do loop
                    break;
                }
            }   
        }
        //cpf usado o anterior
        clientes->addCliente(nome,cpf,num_conta,num_agencia,prio);
        return true;
    }
    return true;
}
bool Banco::removeCliente(string cpf)
{
    while(true)
    {
        string op;
        bool encontrado = false;
        cout << "Tem certeza disso ?  (S/N)?" << endl;
        cout <<" Ao digitar sim o Cliente de cpf "<<cpf<< " sera permanentemente excluido"<<endl;
        cin.ignore();
        getline(cin, op);
        if (op == "Sim" || op == "sim" || op == "S" || op == "s") 
        {
                
            clientes->Remover_Cliente(cpf);
            encontrado=true;
            return true;
            throw std::runtime_error("Erro ao remover Cliente"); 
            return false; 
            
            if (!encontrado) 
                {
                cout << "O Cliente de cpf: " << cpf << " não foi encontrado" << endl;
                }
        }
        else if (op == "Não" || op == "nao" || op == "N" || op == "n") 
        {
            cout << "Voltando ao menu" << endl;
            return false ; // Sai da função se o usuário decide não excluir o cliente;
        }
    
        else 
        {
            cout << "Opção inválida. Por favor, digite 'Sim' ou 'Não'." << endl;
        }
    }      
}    
void Banco::imprimirCliente()
{
    cout<<"\t Imprimindo Clientes"<<endl;
    clientes->imprimirCliente();
}