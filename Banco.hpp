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
    double telefone;
    string nome, endereco;
public:
    Banco(ListaCliente* clientes,string nome,string endereco, double telefone);
    Banco();
    ~Banco();
    void setTelefone(double telefone);
    double getTelefone();
    void setNome(string nome);
    string getNome();
    void setEndereco(string endereco);
    string getEndereco();
    bool cadastraCliente();
    bool removeCliente(string cpf);
    void imprimirCliente();
};
#endif
