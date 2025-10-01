#include "../includes_cpp/cliente.hpp"
#include "../includes_cpp/contaBancaria.hpp"
#include <iostream>
using namespace std;


int main(){
    cliente cliente1("David Santos","136.293.834.32");
    cliente cliente2("Ana Julia","123.456.789.00");
    cliente cliente3("Carlos Eduardo","987.654.321.00");

    contaBancaria conta1(1579,cliente1);
    contaBancaria conta2(2580,cliente2, 1000);
    contaBancaria conta3(3691,cliente3, 500);
    conta1.exibirDadosCliente();
    conta1.depositar(500);
    conta1.transferir(200,conta2);
    conta1.transferir(-1,conta2);
    conta1.exibirSaldo();
    return 0;
}