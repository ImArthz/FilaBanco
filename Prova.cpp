// #include <iostream>
// #include "Prova.hpp"
// #include "Aluno.hpp"
// #include "PilhaProva.hpp"
// #include "PilhaAuxiliar.hpp"
// #include <limits> // Biblioteca para lidar com erros de leitura de inteiro
// #include <random>// Biblioteca para gerar numeros aleatorios
// #include <list>
// #include <algorithm>
// using namespace std;
// Prova::Prova(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos,PilhaProva* provas,PilhaAuxiliar* auxiliar)
// {
//     this->provas=provas;
//     this->auxiliar=auxiliar;
//     this->Disciplina=Disciplina;
//     this->Codigo_da_prova=Codigo_da_prova;
//     this->Nota=Nota;
//     this->alunos=alunos;
//     this->prox=NULL;
// }
// Prova::Prova()
// {
//     this->provas=new PilhaProva();
//     this->auxiliar=new PilhaAuxiliar();
    
// }
// void Prova::setDisciplina(string Disciplina)
// {
//     this->Disciplina=Disciplina;
// }
// string Prova::getDisciplina()
// {
//     return Disciplina;
// }
// void Prova::setCodigo(string Codigo_da_prova)
// {
//     this->Codigo_da_prova=Codigo_da_prova;
// }
// string Prova::getCodigo()
// {
//     return Codigo_da_prova;
// }
// void Prova::setNota(float Nota)
// {
//     this->Nota=Nota;
// }
// float Prova::getNota()
// {
//     return Nota;
// }
// void Prova::setProx(Prova* prox)
// {
//     this->prox=prox;
// }
// Prova* Prova::getProx()
// {
//     return prox;
// }
// Aluno Prova::getAluno()
// {
//     return alunos;
// }
// bool Prova::adicionarAluno()
// {
//     string nome,cpf;
//     int ano;
//     int anolimite = 2023;
//     cout<<"Digite o Nome do(a) aluno(a) : "<<endl;
//     cin.ignore();
//     getline(cin,nome);
//     while(true){
//         cout<<"->Digite o cpf do(a) Aluno(a) : "<<endl;
//         cin>>cpf;
//         // Verifique o comprimento da string para garantir que seja um CPF válido
//             if (cpf.length() == 11) {
//                 // CPF tem 11 dígitos, o que é um CPF válido
//                 break;
//             }   else {
//                 cout << "CPF inválido. Digite um CPF com 11 dígitos." << endl;
//     }
//     }
//     while (true) {
//             bool saidaaux= true;
//             cout<<"Digite o ano de entrada  do(a) aluno(a) : "<<endl;
//             cin >> ano;

//             if (cin.fail()) {
//                 cin.clear();  // Limpa o estado de erro
//                 cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
//                 cout << "Entrada inválida. Digite um número inteiro." << endl;
//                 saidaaux = false;
//             } else {
//                 if(ano>anolimite || ano<1900){
//                 cout<<"ano invalido \n";
//                 saidaaux = false;
                
//             }
//                 if(saidaaux)
//                 {
//                     // Entrada válida, podemos sair do loop
//                     break;
//                 }
//             }   
//         }
//         //funções da biblioteca para gerar numero identificador 
//         random_device rd;
//         mt19937 mt(rd());
//         // Defina o intervalo e gere números inteiros com até 4 dígitos.
//         std::uniform_int_distribution<int> dist(001, 9999);
//         int anoMatricula = ano*10000+dist(mt);
//         cout<<"Numero de Matricula = "<<anoMatricula<<endl;
//         string nomecurso;
//         bool sair = false;
//         cout << "Digite o nome do curso do aluno: " << endl;
//         getline(cin, nomecurso);
//         Aluno(nome,cpf,anoMatricula,nomecurso);
//         return true;
//         }
// bool Prova::ImprimirAluno(){
//     Aluno a;
//     a.imprimirAluno();
//     return true;
// }
// void Prova::cadastrarProvaaux(string Disciplina,string Codigo_da_prova,float Nota,Aluno alunos)
// {
//     PilhaAuxiliar* pi = new PilhaAuxiliar();
//     pi->adicionarProva(Disciplina,Codigo_da_prova,Nota,alunos);
//     cout<<"item foi empilhado em outra pilha com sucesso "<<endl;
// }
// void Prova::removerProvaaux(string Codigo_da_prova)
// {
//     provas->RemoverProva(Codigo_da_prova);
// }
// void Prova::voltarpilha()
// {
    
// }
// void Prova::removerProvaauxx(string Codigo_da_prova)
// {
//   auxiliar->RemoverProva(Codigo_da_prova);
// }
// bool Prova::cadastrarProva()
// {
//     string Disciplina,Codigo_da_prova;
//     float Nota;
//     string cpfaluno;
//     Prova* pr = provas->getTop();
//     Aluno a;
//     random_device rd;
//     mt19937 mt(rd());
//     bool verificaalu = false;
//     // Defina o intervalo e gere números inteiros com até 8 dígitos.
//     std::uniform_int_distribution<int> dist(001, 99999999);
//     Codigo_da_prova  = dist(mt);
//     cout<<"Codigo da prova : "<<Codigo_da_prova<<endl;
//     cout<<"Nome da Disciplina : "<<endl;
//     cin.ignore();
//     getline(cin,Disciplina);
//     while (true) {
//             cout << "->Digite o cpf do aluno : ";
//             cin >> cpfaluno;
//             // Verifique o comprimento da string para garantir que seja um CPF válido
//             if (cpfaluno.length() == 11) {
//                 // CPF tem 11 dígitos, o que é um CPF válido
//                 break;
//             }   else {
//                 cout << "CPF inválido. Digite um CPF com 11 dígitos." << endl;
//             }
//         }
//         if(a.getCpf()==cpfaluno){
//             verificaalu = true;
//         }
//         if(!verificaalu){
//             cout<<" Nenhum aluno cadastrado com este cpf "<<endl;
//             return false;
//         }
//         else
//         {
            
//             cout<<"Digite a nota : "<<endl;
//             cin>>Nota;
//             provas->adicionarProva(Disciplina,Codigo_da_prova,Nota,pr->getAluno());
//             return true;
//         }
// }
// bool Prova::removerProva(string Codigo_da_prova)
// {
//     while(true)
//     {
//         string op;
//         bool encontrado = false;
//         cout << "Tem certeza disso ?  (S/N)?" << endl;
//         cout <<" Ao digitar sim a Prova de Codigo "<<Codigo_da_prova<< " sera permanentemente excluida"<<endl;
//         cin.ignore();
//         getline(cin, op);
//         if (op == "Sim" || op == "sim" || op == "S" || op == "s") 
//         {
                
//             provas->RemoverProva(Codigo_da_prova);
//             encontrado=true;
//             return true;
//             throw std::runtime_error("Erro ao remover Prova"); 
//             return false; 
            
//             if (!encontrado) 
//                 {
//                 cout << "a Prova de Codigo: " << Codigo_da_prova << " não foi encontrado" << endl;
//                 }
//         }
//         else if (op == "Não" || op == "nao" || op == "N" || op == "n") 
//         {
//             cout << "Voltando ao menu" << endl;
//             return false ; // Sai da função se o usuário decide não excluir a Prova;
//         }
    
//         else 
//         {
//             cout << "Opção inválida. Por favor, digite 'Sim' ou 'Não'." << endl;
//         }
//     }      
// }    
