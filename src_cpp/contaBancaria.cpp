#include "contaBancaria.hpp"
using namespace std;
#include <iostream>
class contaBancaria{
    private:
    int numeroConta;
    double saldo;
    cliente cliente1; //O objeto instaciado da classe tem que ser diferente do nome da classe
    public:
    contaBancaria(int n, cliente c){
        numeroConta = n;
        cliente1 = c;
        saldo = 0.0;
    } 
    int getNumeroConta(){
        return numeroConta;
    }
    double getSaldo(){
        return saldo;
    }
    cliente getCliente(){
        return cliente1;
    }
    void setNumeroConta(int n){
        numeroConta = n;
    }
    void setCliente(cliente c){
        cliente1 = c;
    }
    void setSaldo(double s){
        saldo = s;
    }
    void depositar(double valor){
        if(valor > 0){
            saldo += valor;
            cout << "Depósito de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor de depósito inválido." << endl;
        }
    }
    void sacar(double valor){
        if(valor >=0 && valor <= saldo){
            saldo -=valor;
            cout << "Saque de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente ou valor inválido para saque." << endl;
        }
    }

    void transferir(double valor, contaBancaria &destino){
        if(valor >= 0 && valor <= saldo){
            double resultado = destino.getSaldo() + valor;
            destino.setSaldo(resultado);
            saldo -= valor;
            cout << "Transferência de R$" << valor << " para a conta " << destino.numeroConta << " realizada com sucesso." << endl;
        } else {
            cout <<"Saldo insifuciente ou valor negativo para transferência." << endl;
        }
    }
    void transferir(double valor, contaBancaria &destino1, contaBancaria &destino2){
        if(valor>=0 && valor <=saldo){
            double resultado1 = destino1.getSaldo() +(valor/2);
            double resultado2 = destino1.getSaldo() +(valor/2);
            destino1.setSaldo(resultado1);
            destino2.setSaldo(resultado2);
            saldo -= valor;
        }else {
            cout <<"Saldo insifuciente ou valor negativo para transferência." << endl;
        }
    }
   void exibirSaldo(){
    cout << "Saldo atual: R$" << saldo << endl;
   }
   void exibirDadosCliente(){ 
    cout << "Nome do cliente:" << cliente1.getNome() << endl;
    cout << "cpf do cliente:" << cliente1.getCpf() << endl;
    
   }
};  