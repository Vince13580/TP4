#include "Voyant.h"
#include <string>


namespace nsDigicode {



Voyant::Voyant(Couleur couleur, Etat etat): myCouleur(couleur), myEtat(etat)
{

}
void Voyant::allumer(){
    if(myEtat == Etat::eteint)
        myEtat = Etat::allume;
}
void Voyant:: eteindre()
{
    if(myEtat == Etat::allume)
        myEtat = Etat::eteint;
}

std::string Voyant::getStatut(){
    if(myEtat == Etat::allume)return "ON";
    else return "OFF";

}
}


