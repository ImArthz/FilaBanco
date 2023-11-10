#include "Prova.hpp"
#include <iostream>
#include <locale>
#include <string>
#include <locale>
#include "Banco.hpp"
#include <cstdlib> // For the system function
#include <limits> // Biblioteca para lidar com erros de leitura de inteiro
using namespace std;
int main(){
    string link,command;
    int opcaopro;
    bool saidamain=false;
    int result;
    while(!saidamain)
    {
    while (true) {
            cout << "Escolha um Programa :\n1-Fila Prioritaria Banco \n2-Pilha de provas\n3-Sair " << endl;
            cin >> opcaopro;

            if (cin.fail()) {
                cin.clear();  // Limpa o estado de erro
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                cout << "Entrada inválida. Digite um número inteiro." << endl;
            } else if(opcaopro>3||opcaopro<=0) {
                cout<<"Opção invalida escolha um programa dentro as opções"<<endl;
            }
            else {
                // Entrada válida, podemos sair do loop
                break;
            }
            }
    if(opcaopro == 1)
    {

    Banco *banco=new Banco();
    Cliente *cliente=new Cliente();
    int opcao;
    int telbanco,ddd;
    string CpfRemove,nomeBanco,op,enderecoBanco;
    bool saida= true;
     cout<<" ======================BEM VINDO========================"<<endl;
        cout<<"Vamos inicializar a criação do banco !"<<endl;
        while(true){
            cout<<"Digite o nome do banco :"<<endl;
            getline(cin,nomeBanco);
            cout<<"Depois de Criado é impossivel mudar o nome do banco ! \ndeseja confirmar ? (S/N)"<<endl;
            getline(cin, op);
                if (op == "Sim" || op == "sim" || op == "S" || op == "s") {
                    banco->setNome(nomeBanco);
                    break;
                }
                else if (op == "Não" || op == "nao" || op == "N" || op == "n") {
                    cout << "Voltando ..." << endl;
                }
        
                else 
                {
                    cout << "Opção inválida. Por favor, digite 'Sim' ou 'Não'." << endl;
                }
            }
        while(true){
            cout<<"->Digite o endereço do banco :"<<endl;
            getline(cin,enderecoBanco);
            cout<<"->Depois de Criado é impossivel mudar o endereço do banco ! \ndeseja confirmar ? (S/N)"<<endl;
            getline(cin, op);
                if (op == "Sim" || op == "sim" || op == "S" || op == "s") {
                    banco->setEndereco(enderecoBanco);
                    break;
                }
                else if (op == "Não" || op == "nao" || op == "N" || op == "n") {
                    cout << "Voltando ..." << endl;
                }
        
                else 
                {
                    cout << "Opção inválida. Por favor, digite 'Sim' ou 'Não'." << endl;
                }
            }
        while(true){
            while (true) {
                cout << "->Telefone Do banco : (9 - digitos) ";
                cin >> telbanco;

                if (cin.fail() || cin.peek() != '\n' || to_string(telbanco).length() != 9) {
                    cin.clear();  // Limpar o estado de erro
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpar o buffer de entrada
                    cout << "Entrada inválida. Digite um número de telefone com 9 dígitos." << endl;
                }
                else {
                    // Entrada válida, podemos sair do loop
                    break;
                }
            }
            while(true){
                cout<<"->DDD do telefone : ";
                cin>>ddd;
                if (cin.fail()) {
                    cin.clear();  // Limpa o estado de erro
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                    cout << "Entrada inválida. Digite um número inteiro." << endl;
                }
                else if(ddd>99||ddd<11){
                
                    cout<<"DDD invalido"<<endl;
                }
                else{
                    // Entrada válida, podemos sair do loop
                    break;
                } 
            }
            cout<<"Depois de Criado é impossivel mudar o telefone do consultorio ! \n deseja confirmar ? (S/N)"<<endl;
            cin.ignore();
            getline(cin, op);
                if (op == "Sim" || op == "sim" || op == "S" || op == "s") {
                    banco->setTelefone(telbanco);
                    banco->setDDD(ddd);
                    break;
                }
                else if (op == "Não" || op == "nao" || op == "N" || op == "n") {
                    cout << "Voltando ..." << endl;
                }
        
                else 
                {
                    cout << "Opção inválida. Por favor, digite 'Sim' ou 'Não'." << endl;
                }
            }
            while(saida)
            {
                cout << "----------------------MENU-------------------------"<<endl;
                cout << "Escolha uma opção:" << endl;
                cout << "1-  Cadastrar Cliente"<<endl;
                cout << "2 - Remover Cliente "<<endl;
                cout << "3 - Imprimir Cliente"<<endl;
                cout << "4 - sair"<<endl;
                cout << "----------------------------------------------------"<<endl;
            
            while (true) {
            cout << "Escolha uma opção: " << endl;
            cin >> opcao;

            if (cin.fail()) {
                cin.clear();  // Limpa o estado de erro
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                cout << "Entrada inválida. Digite um número inteiro." << endl;
            } else {
                // Entrada válida, podemos sair do loop
                break;
            }
            }
            switch(opcao)
            {
                case 1:
                    cin.ignore();
                    if(banco->cadastraCliente())
                    {
                        cout<<"Cliente cadastrado com sucesso"<<endl;
                    }
                    else{
                        cout<<"Erro ao cadastrar cliente"<<endl;
                    }
                    break;
                case 2:
                    while (true)
                    {   
                        cin.ignore();
                        cout<<"Digite o cpf do Cliente que deseja remover "<<endl;
                        getline(cin,CpfRemove);
                        // Verifique o comprimento da string para garantir que seja um CPF válido
                        if (CpfRemove.length() == 11) {
                            // CPF tem 11 dígitos, o que é um CPF válido
                            break;
                        }   else {
                        cout << "CPF inválido. Digite um CPF com 11 dígitos." << endl;
                        }
                    }
                    if(banco->removeCliente(CpfRemove))
                    {
                        cout<<"Cliente removido com sucesso"<<endl;
                    }
                    else{
                        cout<<"erro ao remover Cliente"<<endl;
                    }
                    break;
                    
                case 3: 
                    banco->imprimirCliente();
                    break;
                case 4:
                    cout<<"Obrigado caro Cliente"<<endl;
                    cout<<"===================================================="<<endl;
                    cout<<"Banco : "<<banco->getNome()<<endl;
                    cout<<"endereço : "<<banco->getEndereco()<<endl;
                    cout<<"Telefone : ("<<banco->getDDD()<<")"<<banco->getTelefone()<<endl;
                    cout<<"===================================================="<<endl;
                    saida = false;
                    cout<<"Saindo do programa de fila..."<<endl;
                    break;
            }
        }
    }
    else if(opcaopro == 2)
    {
        Prova *p = new Prova();
        Aluno *al=new Aluno();


        int opcaomen2;
        bool saida = false;
        string cpfremove,codigoremove;
        while(!saida)
        {
            cout << "----------------------MENU-------------------------"<<endl;
            cout << "1  - Cadastrar Um Aluno "<<endl;
            cout << "2  - Remover Um Aluno "<<endl;
            cout << "3  - Imprimir Um Aluno"<<endl;
            cout << "4  - Cadastrar uma prova"<<endl;
            cout << "5  - Remover uma Prova"<<endl;
            cout << "6  - Imprimir uma prova"<<endl;
            cout << "7  - Sair "<<endl;
            cout << "----------------------------------------------------"<<endl;

        }
        while (true) {
            cout << "Escolha uma opção: " << endl;
            cin >> opcaomen2;

            if (cin.fail()) {
                cin.clear();  // Limpa o estado de erro
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                cout << "Entrada inválida. Digite um número inteiro." << endl;
            } else if (opcaomen2>7||opcaomen2<=0) {
                cout<<"Opção Invalida Selecione uma opção valida"<<endl;
            }
            else{
                // Entrada válida, podemos sair do loop
                break;
            }
            }
        switch (opcaomen2)
        {
        case 1:
            if(p->adicionarAluno())
            {
                cout<<"Aluno cadastrado com sucesso"<<endl;

            }
            else{
                cout<<"Erro ao cadastrar aluno "<<endl;
            }
            break;
        case 2:
            while (true)
                    {   
                    cin.ignore();
                    cout<<"Digite o cpf do Aluno que deseja remover "<<endl;
                    getline(cin,cpfremove);
                    // Verifique o comprimento da string para garantir que seja um CPF válido
                    if (cpfremove.length() == 11) {
                        // CPF tem 11 dígitos, o que é um CPF válido
                        break;
                    }
                    else {
                    cout << "CPF inválido. Digite um CPF com 11 dígitos." << endl;
                    }
                }
            if(p->removerAluno(cpfremove))
            {
                cout<<"Aluno Removido com sucesso"<<endl;

            }
            else{
                cout<<"Erro ao remover Aluno"<<endl;
            }
            break;
        case 3:
            p->ImprimirAluno();
            break;
        case 4:
            if(p->cadastrarProva())
            {
                cout<<"Prova cadastrada com sucesso"<<endl;
            }
            else
            {
                cout<<"Erro ao cadastras Prova"<<endl;
            }
            break;
        case 5:
            cout<<"Digite o Codigo da prova que deseja remover :"<<endl;
            cin.ignore();
            getline(cin,codigoremove);
            if(p->removerProva(codigoremove))
            {
                cout<<"Prova Removida com sucesso"<<endl;
            }
            else 
            {
                cout<<"Erro ao remover prova"<<endl;
            }
            break;

        case 6:
            if(p->imprimirProvas())
            {
                cout<<"Provas impressas com sucesso "<<endl;
            }
            else{
                cout<<"Erro ao imprimir as provas"<<endl;
            }
            break;
        case 7:
        saida = true;
        cout<<" Saindo do programa de Pilha ..."<<endl;
            break;
        }

    }
    else if(opcaopro == 3)
    {
        saidamain = true;

    }
    }
            link = "https://github.com/ImArthz/Consultorio";

                // Construct the command to open the URL in the default web browser
                command = "xdg-open " + link;

                // Use the system function to execute the command
                result = system(command.c_str());

                // Check the result of the system call
                if (result == 0) {
                    cout << "Web browser opened successfully." << endl;
                } else {
                    cerr << "Failed to open web browser." << endl;
                }
}