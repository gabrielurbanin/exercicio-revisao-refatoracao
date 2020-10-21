#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"
#include <string>

class Vendedor : public Empregado {

  	public:	  

        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) 
            : Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) 
            {
            }
        
        void SetQuotaMensalVendas(double quotaMensalVendas);
        double GetQuotaMensalVendas();

		double quotaTotalAnual(); 
	
	private:

		double _quotaMensalVendas;
};

#endif