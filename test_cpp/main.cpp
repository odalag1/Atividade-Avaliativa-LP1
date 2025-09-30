#include "../includes_cpp/cliente.hpp"
#include "../includes_cpp/contaBancaria.hpp"
#include <iostream>
using namespace std;


int main(){
    cliente cliente1("David Santos","136.293.834.32");
    contaBancaria conta1(1579,cliente1);
    conta1.exibirDadosCliente();
}