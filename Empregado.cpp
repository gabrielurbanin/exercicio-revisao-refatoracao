#include "Empregado.hpp"

void Empregado::SetNome(std::string nome) {
    _nome = nome;
}

std::string Empregado::GetNome() {
    return _nome;
}

void Empregado::SetSalarioHora(double salarioHora) {
    _salarioHora = salarioHora;
}

double Empregado::GetSalarioHora() {
    return _salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
	return t * _salarioHora;
}