#pragma once
#include <string>
class Ressource
{
public:

	Ressource();
	std::string getNom();
	void regeneration(); 

protected:

	std::string m_nom; 
	
};

