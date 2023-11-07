#ifndef BANCO_HPP
#define BANCO_HPP
#include <iostream>
#include "Cliente.hpp"
#include "ListaCliente.hpp"
#include <string>
using namespace std;
class Banco
{
private:
    ListaCliente* clientes;
    int telefone;
    int ddd;
    string nome, endereco;
public:
    Banco(ListaCliente* clientes,string nome,string endereco, int ddd,int telefone);
    Banco();
    ~Banco();
    void setTelefone(int telefone);
    int getTelefone();
    void setDDD(int ddd);
    int getDDD();
    void setNome(string nome);
    string getNome();
    void setEndereco(string endereco);
    string getEndereco();
    bool cadastraCliente();
    bool removeCliente(string cpf);
    void imprimirCliente();
};
#endif
