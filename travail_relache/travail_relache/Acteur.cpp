#include "Acteur.h"

Acteur::Acteur(std::string nom) : m_nom{ nom }
{
	m_niveau = 1;
	m_ptExp = 0;
	m_ptVie = 50;
	m_ptVieMax = 200;
	m_coefAttaque = 1;

};

std::string Acteur::getNom() const 
{
	return m_nom;
}

int Acteur::getVie() const
{
	return m_ptVie;
}
