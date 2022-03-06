#pragma once
#include "Joueur.h"
class Magicien :
    public Joueur
{
    public:
    Magicien(std::string);
    void actionUne();
    void actionDeux();
    void actionTrois();
    void recevoirDegats();

    protected:
};

