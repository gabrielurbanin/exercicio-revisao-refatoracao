#include "Vendedor.hpp"

void Vendedor::SetQuotaMensalVendas(double quotaMensalVendas) {
	_quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::GetQuotaMensalVendas() {
	return _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return this->GetQuotaMensalVendas() * 12;
}

