#pragma once
#include "Joueur.h"
class Guerrier :
    public Joueur
{
    public:
        Guerrier(std::string);
        void actionUne();
        void actionDeux();
        void actionTrois();
        void recevoirDegats();


};

