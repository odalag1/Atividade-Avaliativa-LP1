#pragma once
  #include "cliente.hpp"
using namespace std;
class contaBancaria{
    private:
    int numeroConta;
    double saldo;
    cliente cliente1; //O objeto instaciado da classe tem que ser diferente do nome da classe
    public:
    contaBancaria(int n,  cliente c, double saldo);
    contaBancaria(int n, cliente c);
    int getNumeroConta();
    double getSaldo();
    cliente getCliente();
    void setNumeroConta(int n);
    void setCliente(cliente c);
    void setSaldo(double s);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, contaBancaria &destino);
    void transferir(double valor, contaBancaria &destino1,contaBancaria &destino2);
    void exibirSaldo();
    void exibirDadosCliente();
    //modulos get, set, funcoes e construtores criadas para ser implementas nos arquivos .cpp
};