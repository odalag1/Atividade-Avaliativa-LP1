#include "../includes_cpp/contaBancaria.hpp"
using namespace std;
#include <iostream>

 //O objeto instaciado da classe tem que ser diferente do nome da classe
contaBancaria::contaBancaria(int n, cliente c, double s){
        numeroConta = n;
        cliente1 = c;
        saldo = s;
    }
   contaBancaria::contaBancaria(int n, cliente c){
        numeroConta = n;
        cliente1 = c;
        saldo = 0.0;
    } 
    
    int contaBancaria::getNumeroConta(){
        return numeroConta;
    }
    double contaBancaria::getSaldo(){
        return saldo;
    }
    cliente contaBancaria::getCliente(){
        return cliente1;
    }
    void contaBancaria::setNumeroConta(int n){
        numeroConta = n;
    }
    void contaBancaria::setCliente(cliente c){
        cliente1 = c;
    }
    void contaBancaria::setSaldo(double s){
        saldo = s;
    }
    void contaBancaria::depositar(double valor){
        if(valor > 0){
            saldo += valor;
            cout << "Depósito de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor de depósito inválido." << endl;
        }
    }
    void contaBancaria::sacar(double valor){
        if(valor >=0 && valor <= saldo){
            saldo -=valor;
            cout << "Saque de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente ou valor inválido para saque." << endl;
        }
    }

    void contaBancaria::transferir(double valor, contaBancaria &destino){
        if(valor >= 0 && valor <= saldo){
            double resultado = destino.getSaldo() + valor;
            destino.setSaldo(resultado);
            saldo -= valor;
            cout << "Transferência de R$" << valor << " para a conta " << destino.numeroConta << " realizada com sucesso." << endl;
        } else if (saldo == 0) {
            cout <<"Saldo insifuciente." << endl;
        } else {
            cout <<"Valor negativo para transferência." << endl;
        }
    }
    void contaBancaria::transferir(double valor, contaBancaria &destino1, contaBancaria &destino2){
         if(valor <0) {
            cout <<"Valor negativo para transferência." << endl;
        } else if (saldo == 0 || saldo < valor) {
            cout <<"Saldo insifuciente." << endl;
        }  else {
            double resultado1 = destino1.getSaldo() +(valor/2);
            double resultado2 = destino2.getSaldo() +(valor/2);
            destino1.setSaldo(resultado1);
            destino2.setSaldo(resultado2);
            saldo -= valor;
            cout << "Transferência de R$" << valor << " para as contas " << destino1.getNumeroConta() << " e " << destino2.getNumeroConta() << " realizada com sucesso." << endl;
        }
    }
   void contaBancaria::exibirSaldo(){
    cout << "Saldo atual: R$" << saldo << endl;
   }
   void contaBancaria::exibirDadosCliente(){ 
    cout << "Nome do cliente:" << cliente1.getNome() << endl;
    cout << "cpf do cliente:" << cliente1.getCpf() << endl;
    
   }
