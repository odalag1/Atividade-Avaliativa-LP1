#pragma once //Para evitar de ser compilado mais de uma vez

using namespace std; 
#include <string>
class cliente{
    private:
    string nome;
    string cpf;
    public:
    cliente(string n, string c_p_f);
    cliente();
    string getNome();
    string getCpf();
    void setNome(string name);
    void setCpf(string cpf_);
    //funcoes get, set e construtores criadas para ser implementas nos arquivos .cpp
        //modularizei os metodos para treinar mais entender melhor o conceito de classes e objetos

}; 