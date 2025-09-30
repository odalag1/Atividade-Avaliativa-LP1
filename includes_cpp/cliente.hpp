#pragma once

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

};