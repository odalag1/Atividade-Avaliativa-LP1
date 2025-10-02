#include "../includes_cpp/cliente.hpp"

cliente::cliente(string n, string c_p_f){
    nome = n;
    cpf = c_p_f;
} //construtor que inicializa os atributos nome e cpf com os valores fornecidos como argumentos
cliente::cliente() {
    nome = "";
    cpf = "";
} //construtor vazio que inicializa os atributos nome e cpf com strings vazias

string cliente::getNome() {
    return nome;
}

string cliente::getCpf() {
    return cpf;
}

void cliente::setNome(string name) {
    nome = name;
}

void cliente::setCpf(string cpf_) {
    cpf = cpf_;
} 

// metodos get e set para acessar e modificar os atributos privados nome e cpf da classe cliente