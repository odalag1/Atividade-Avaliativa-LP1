#include "cliente.hpp"


class cliente{ 
    private:
    string nome;
    string cpf;
    public:
    cliente(string n, string c_p_f){
        nome = n;
        cpf = c_p_f;
    }
    cliente(){
        nome = "";
        cpf = "";
    }
    string getNome(){
        return nome;
    }
    string getCpf(){
        return cpf;
    }
    void setNome(string name){
        nome = name;
    }
    void setCpf(string cpf_){
        cpf = cpf;
    }




};

