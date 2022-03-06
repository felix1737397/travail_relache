#include "Equipement.h"
#include "Utilitaires.h"

Equipement::Equipement(std::string nom)
{
    m_nom = nom; 
    m_qualite = setQualite(); 
    m_prix = setPrix(); 
    m_classPermise = list<Joueur&>; 
    m_tauxDrop = 20; 
}

bool Equipement::Destruction()
{
    return false;
}

std::string Equipement::setQualite()
{
    int qualite = utilitaires::rng(1,4)

    
    if (qualite == 1) {
        return "Commun";
    }
    if (qualite == 2) {
        return "Rare";
    }
    if (qualite == 3) {
        return "Epique";
    }
    if (qualite == 4) {
        return "Legendaire";
    }
    

}

float Equipement::setPrix()
{
    switch(m_qualite) {
         case "Commun":
             return 100.00;
             break;
         case "Rare":
             return 200.00;
             break;
         case "Epique":
             return 300.00; 
             break;
         case "Legendaire":
             return 900.00;
             break;
         default:
             return 50.00; 
             break;
    }
}
