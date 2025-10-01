#include "../includes_cpp/cliente.hpp"

cliente::cliente(string n, string c_p_f){
    nome = n;
    cpf = c_p_f;
}
cliente::cliente() {
    nome = "";
    cpf = "";
}

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