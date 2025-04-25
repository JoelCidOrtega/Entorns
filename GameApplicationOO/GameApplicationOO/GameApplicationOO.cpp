#include <iostream>
#include "Character.h"
#include "Boss.h"
using namespace std;

int main()
{
    Character hero("Joel", 100, 20);
    Character enemy("Trol", 100, 10);
    Boss boss("Sauron", 200, 30); 

    cout << hero.getStatus() << endl;
    cout << enemy.getStatus() << endl;

    while (hero.getHP() > 0 && enemy.getHP() > 0)
    {
        cout << "Es turno del heroe, vamos " << hero.getName() << " ataca." << endl;
        hero.attack(enemy);
        cout <<"Has atacado al enemigo, vida del enemigo: "<< enemy.getHP() << endl;

        if (enemy.getHP() <= 0) break;

        cout << "Es turno de " << enemy.getName() << ", ves con cuidado " << hero.getName() << endl;
        enemy.attack(hero);
        cout << "El enemigo te ha atacado, vida restante: " << hero.getHP() << endl;
    }

    if (hero.getHP() <= 0)
    {
        cout << "Has sido derrotado por el Trol :(" << endl;
        return 0; 
    }
    else
    {
        cout << "Has derrotado al Trol! Pero... algo oscuro se acerca..." << endl;
        cout << "APARECE EL JEFE FINAL: " << boss.getName() << "!!!" << endl;
        cout << boss.getStatus() << endl;
    }

    while (hero.getHP() > 0 && boss.getHP() > 0)
    {
        cout << "Es turno del heroe, vamos " << hero.getName() << " ataca." << endl;
        hero.attack(boss);
        cout << "Has atacado con exito al enemigo, vida restante: " << boss.getHP() << endl;

        if (boss.getHP() <= 0) break; 

        cout << "Es turno de " << boss.getName() << ", cuidado con su ataque especial!" << endl;
        boss.attack(hero); 
        cout <<"El enemigo te ha atacado, vida restante: "<< hero.getHP() << endl;
    }

    if (hero.getHP() <= 0)
    {
        cout << "Has sido derrotado por " << boss.getName() << " :(" << endl;
    }
    else
    {
        cout << "INCREIBLE! Has derrotado a " << boss.getName() << "!! Eres el verdadero heroe!" << endl;
    }

    return 0;
}