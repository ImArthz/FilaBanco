#include <iostream>
#include <locale>
#include <string>
#include <locale>
#include "Banco.hpp"
#include <cstdlib> // For the system function
#include <limits> // Biblioteca para lidar com erros de leitura de inteiro
using namespace std;
int main(){
    Banco *banco=new Banco();
    Cliente *cliente=new Cliente();
    int opcao,result;
    int telbanco,ddd;
    string CpfRemove,link,command,nomeBanco,op,enderecoBanco;
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
                    break;
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