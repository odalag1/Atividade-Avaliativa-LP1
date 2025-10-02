#include "../includes_cpp/contaBancaria.hpp"
using namespace std;
#include <iostream>

 //O objeto instaciado da classe tem que ser diferente do nome da classe
contaBancaria::contaBancaria(int n, cliente c, double s){
        numeroConta = n;
        cliente1 = c;
        saldo = s;
    } //Construtor com saldo incluso para a pessoa poder criar o objeto com saldo inicial
   contaBancaria::contaBancaria(int n, cliente c){ //Construtor com saldo zerado inicialmente mas contendo o numero da conta e o cliente
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
    //criei tambem os metodos get e set para acessar ou modificar os atributos privados 
    void contaBancaria::depositar(double valor){
        if(valor > 0){
            saldo += valor;
            cout << "Depósito de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor de depósito inválido." << endl;
        }
    } /*Método para depositar dinheiro na conta analisa se o valor é positivo e adiciona ao saldo caso nao seja positivo retorna mensagem
     de valor invalido */
    void contaBancaria::sacar(double valor){
        if(valor >0 && valor <= saldo){
            saldo -=valor;
            cout << "Saque de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente ou valor inválido para saque." << endl;
        } /*Da mesma forma que o metodo anterior, mas com a diferença de analisar se o valor é menor que 0 e se valor for menor ou  igual ao saldo 
            permite a transferencia. Caso nao atenda a condicao  entra no else que abrange o caso contrario a essas duas opcoes*/
    }

    void contaBancaria::transferir(double valor, contaBancaria &destino){
        if(valor > 0 && valor <= saldo){
            double resultado = destino.getSaldo() + valor;
            destino.setSaldo(resultado);
            saldo -= valor;
            cout << "Transferência de R$" << valor << " para a conta " << destino.numeroConta << " realizada com sucesso." << endl;
        } else if (saldo == 0) {
            cout <<"Saldo insifuciente." << endl;
        } else {
            cout <<"Valor negativo para transferência." << endl;
        } /*Seguindo a mesma logica que os dois metodos anteriores, o metodo transferir segue pedindo dois parametros para poder  ser transferido, sendo ele o valor e o 
            endereco do objeto contaBancaria, a qual ira ser destinada o valor. Dentro dela possui tres condicionais, sendo elas duas com parametros e uma sem
            Na primeira condicional verifica o valor que foi inserido e caso ele seja maior que  0 e sendo menor ou igual ao saldo, inicia o processo de transferencia
            Na segunda condicional verifica se o saldo é igual a 0 caso seja retorna a mensagem de saldo insuficiente e por fim no else
            retorna a mensagem de valor negativo para transferencia */
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
        } /* mesma logica que o metodo transferir porem com dois destinos de transferencia e o valor dividido entre os dois destinos em partes iguais
             para ser tramsferido para os dois objetos destino, onde inicialmente tem a verificao se o valor é valido ou se o valor for manior q o saldo nao perm-
             -itira a transferencia ou se saldo for igual a 0. Caso nao atenda as duas condicao, entrara no bloco de else
             onde eu crio duas variaveis que irao armazenar o valor do saldo atual  de cada objeto e irao ser acrescentado o valor da transferencia dividido por 2
             logo apos setto o novo valor nas suas respectivas variaveis e no fim substraio o valor que foi transferido na conta que vai fazer a transferencia  */

    }
   void contaBancaria::exibirSaldo(){
    cout << "Saldo atual: R$" << saldo << endl;
   } // exibe o saldo atual da conta
   void contaBancaria::exibirDadosCliente(){ 
    cout << "Nome do cliente: " << cliente1.getNome() << endl;
    cout << "cpf do cliente: " << cliente1.getCpf() << endl;
   } // exibe os dados do cliente associado a contaBancaria
