#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

    public:
        
        Engenheiro(std::string nome, double salarioHora, int projetos) 
            : Empregado(nome, salarioHora), _projetos(projetos)
            {
            }

        void SetProjetos(int projetos);
        int GetProjetos();
 
    private:

        int _projetos;
	
};

#endif