#include "utilitaires.h"
#include <random>

// Code provenant de https://github.com/talebFrederik/prog3_magiciens/blob/master/prog3_magiciens/utilitaires.cpp

// Regroupe les fonctions utilitaires
// utilis�es dans le projet. Ex:(Obtenir un nombre random)

/// <summary>
/// Fonction qui g�n�re un nombre 
/// al�atoire entre deux bornes
/// </summary>
/// <param name="min">Valeur minimale du random</param>
/// <param name="max">Valeur maximale du random</param>
/// <returns></returns>
int utilitaires::rng(int min, int max)
{
	std::random_device rd;
	std::mt19937 rn(rd());
	std::uniform_int_distribution<> rng(min, max);

	int nombre = rng(rn);

	return nombre;

}
