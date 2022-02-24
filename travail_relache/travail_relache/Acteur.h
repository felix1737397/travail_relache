#pragma once
#include <iostream>
class Acteur
{
public:
	virtual void attaquer() = 0;
	virtual void recevoirDegats() = 0;
protected:
	std::string m_nom;
	int m_niveau;
	int m_ptExp;
	int m_ptVieMax;
	int m_ptVie;
};

