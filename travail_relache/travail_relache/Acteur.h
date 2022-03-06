#pragma once
#include <iostream>
class Acteur
{
public:
	Acteur(std::string);
	virtual void recevoirDegats() = 0;
	std::string getNom() const;
	int getVie() const;
protected:
	std::string m_nom;
	int m_niveau;
	int m_ptExp;
	int m_ptVieMax;
	int m_ptVie;
	int m_coefAttaque;
};

