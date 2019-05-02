#include <iostream>
#include "Alarme.h"
#include "unistd.h" //Fonction sleep

using namespace std;

namespace nsDigicode {

Alarme::Alarme()
{

}

void Alarme::declencher(){
    while (true) {
        cout<<"Alarme: La porte n'a pas été refermée !"<<endl;
        sleep(1);
    }

}
}
