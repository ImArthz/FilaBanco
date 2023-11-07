#include <iostream>
#include <locale>
#include <string>
#include "Banco.hpp"
#include <cstdlib> // For the system function
#include <limits> // Biblioteca para lidar com erros de leitura de inteiro
using namespace std;
int main(){
    Banco *banco=new Banco();
    Cliente *cliente=new Cliente();
    int opcao,CrmRemove,IdenRemove,result;
    double telbanco;
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
                cout << "->Telefone Do banco : ";
                cin >> telbanco;

                if (cin.fail()) {
                    cin.clear();  // Limpa o estado de erro
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
                    cout << "Entrada inválida. Digite um número inteiro." << endl;
                } else {
                    // Entrada válida, podemos sair do loop
                    break;
                }
            }
            cout<<"Depois de Criado é impossivel mudar o telefone do consultorio ! \n deseja confirmar ? (S/N)"<<endl;
            cin.ignore();
            getline(cin, op);
                if (op == "Sim" || op == "sim" || op == "S" || op == "s") {
                    banco->setTelefone(telbanco);
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
                //menu
            }
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
                //cases
            }
}