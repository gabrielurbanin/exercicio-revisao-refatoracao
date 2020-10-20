#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {

  public:

    // construtor
    Empregado(std::string nome, double salarioHora) 
      : _nome(nome), _salarioHora(salarioHora) 
      {
      }

    void SetNome(std::string nome);
    std::string GetNome();

    void SetSalarioHora(double salarioHora);
    double GetSalarioHora();

    double pagamentoMes(double horasTrabalhadas);
	
  private:

    std::string _nome;
    double _salarioHora;  
  
};

#endif