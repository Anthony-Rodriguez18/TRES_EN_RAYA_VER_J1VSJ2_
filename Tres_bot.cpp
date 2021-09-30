/*Grupo: El profesor y las chicas super poderosas        CIENCIA DE LA COMPUTACIÓN I  CCOMP2-1
INTEGRANTES:
- Josue Carpio
- Ariana Leon
- Jorge Nuñez
- Anthony Rodriguez */

#include <iostream>
#include <string.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>


int main()
{
    //Sonido, cambio de color y titulo de la consola 
    system("title Juego Michi - CCOMP2-1");
    system("color 5");
    Beep(900, 800);

    //Números random
    srand((unsigned)time(0));

    //Posiciones 
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';

    //Simbolos 
    char simb1 = ' ', simb_bot = ' ';

    //Niveles 
    char niveles;

    //Nombres de los jugadores 
    std::string jug1, bot = "Ted";

    //Tablero
    std::cout << "Tabla de posiciones" << std::endl;
    std::cout << " 1 | 2 | 3 " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " 4 | 5 | 6 " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " 7 | 8 | 9 " << std::endl;
    std::cout << std::endl;

    //Nombre, simbolo y nivel
    while (true)
    {
        std::cout << "Elija el nivel(1,2): ";
        std::cin >> niveles;
        if (niveles != '1' && niveles != '2')
        {
            std::cout << "No existe ese nivel" << std::endl;
            continue;
        }
        else
            break;
    }
    std::cout << "Jugador 1 ingrese su nombre: ";
    std::cin >> jug1;
    while (true)
    {
        std::cout << jug1 << " Elija su simbolo (x, o): ";
        std::cin >> simb1;
        if (simb1 == 'x' || simb1 == 'X')
        {
            simb_bot = 'o';
            break;
        }
        else if (simb1 == 'o' || simb1 == 'O')
        {
            simb_bot = 'x';
            break;
        }
        else
            std::cout << "Simbolo no disponible" << std::endl;
        continue;
    }
    std::cout << "Jugador 1: " << jug1 << " (" << simb1 << ") " << std::endl;
    std::cout << "Bot: " << bot << "(" << simb_bot << ")" << std::endl;
    std::cout << std::endl;

    //Bucle de los niveles
    bool jugar = true;
    int jugadas = 0;
    while (niveles == '1')
    {
        //Bucle del jugador 1
        while (jugar)
        {
            //Elegir posición
            char posi1 = ' ';
            std::cout << jug1 << " Elija la posicion: " << std::endl;
            std::cin >> posi1;
            Beep(800, 200);

            //Posiciones 
            switch (posi1)
            {
            case '1':
                if (a != '1')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else
                {
                    a = simb1;
                }
                break;
            case '2':
                if (b != '2')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {b = simb1; }
                break;
            case '3':
                if (c != '3')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {c = simb1; }
                break;
            case '4':
                if (d != '4')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {d = simb1; }
                break;
            case '5':
                if (e != '5')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {e = simb1; }
                break;
            case '6':
                if (f != '6')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {f = simb1; }
                break;
            case '7':
                if (g != '7')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {g = simb1; }
                break;
            case '8':
                if (h != '8')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {h = simb1; }
                break;
            case '9':
                if (i != '9')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {i = simb1; }
                break;
            default:
                std::cout << "No existe esa posicion" << std::endl;
                Beep(700, 400);
                Beep(700, 400);
                continue;
            }

            //Posiciones actualizadas
            std::cout << " " << a << " | " << b << " | " << c << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << d << " | " << e << " | " << f << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << g << " | " << h << " | " << i << std::endl;
            std::cout << std::endl;
            break;
        }
        jugadas += 1;

        //Comprobar si gana 
        if (a == simb1 && b == simb1 && c == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb_bot && b == simb_bot && c == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (d == simb_bot && e == simb_bot && f == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (g == simb_bot && h == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (a == simb_bot && d == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (b == simb_bot && e == simb_bot && h == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && f == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (a == simb_bot && e == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && e == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        //Fin del juego n 
        if (jugadas == 9)
        {
            std::cout << "Empate :D" << std::endl;
            Beep(900, 300);
            Beep(900, 300);
            system("color 1");
            break;
        }

        //Bucle bot
        std::cout << "Turno del bot" << std::endl;
        while (jugar)
        {
            //Turno PC random 
            char posi_bot = ' ';
            posi_bot = (rand() % 9) + '0';

            //Posiciones 
            switch (posi_bot)
            {

            case '1':
                if (a != '1')
                {
                    continue;
                }
                else;
                {
                    a = simb_bot;
                    break;
                }
            case '2':
                if (b != '2')
                {
                    continue;
                }
                else;
                {
                    b = simb_bot;
                    break;
                }
            case '3':
                if (c != '3')
                {
                    continue;
                }
                else;
                {
                    c = simb_bot;
                    break;
                }
            case '4':
                if (d != '4')
                {
                    continue;
                }
                else;
                {
                    d = simb_bot;
                    break;
                }
            case '5':
                if (e != '5')
                {
                    continue;
                }
                else;
                {
                    e = simb_bot;
                    break;
                }
            case '6':
                if (f != '6')
                {
                    continue;
                }
                else;
                {
                    f = simb_bot;
                    break;
                }
            case '7':
                if (g != '7')
                {
                    continue;
                }
                else;
                {
                    g = simb_bot;
                    break;
                }
            case '8':
                if (h != '8')
                {
                    continue;
                }
                else;
                {
                    h = simb_bot;
                    break;
                }
            case '9':
                if (i != '9')
                {
                    continue;
                }
                else;
                {
                    i = simb_bot;
                    break;
                }
            default:
                continue;
            }

            //Posiciones actualizadas
            std::cout << " " << a << " | " << b << " | " << c << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << d << " | " << e << " | " << f << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << g << " | " << h << " | " << i << std::endl;
            std::cout << std::endl;
            break;
        }
        jugadas += 1;

        if (a == simb1 && b == simb1 && c == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb_bot && b == simb_bot && c == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (d == simb_bot && e == simb_bot && f == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (g == simb_bot && h == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (a == simb_bot && d == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (b == simb_bot && e == simb_bot && h == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && f == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (a == simb_bot && e == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && e == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
    }
    while (niveles == '2')
    {
        //Bucle del jugador 1
        while (jugar)
        {
            //Elegir posición
            char posi1 = ' ';
            std::cout << jug1 << " Elija la posicion: " << std::endl;
            std::cin >> posi1;
            Beep(800, 200);

            //Posiciones 
            switch (posi1)
            {
            case '1':
                if (a != '1')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else
                {
                    a = simb1;
                }
                break;
            case '2':
                if (b != '2')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {b = simb1; }
                break;
            case '3':
                if (c != '3')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {c = simb1; }
                break;
            case '4':
                if (d != '4')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {d = simb1; }
                break;
            case '5':
                if (e != '5')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {e = simb1; }
                break;
            case '6':
                if (f != '6')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {f = simb1; }
                break;
            case '7':
                if (g != '7')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {g = simb1; }
                break;
            case '8':
                if (h != '8')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {h = simb1; }
                break;
            case '9':
                if (i != '9')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {i = simb1; }
                break;
            default:
                std::cout << "No existe esa posicion" << std::endl;
                Beep(700, 400);
                Beep(700, 400);
                continue;
            }

            //Posiciones actualizadas
            std::cout << " " << a << " | " << b << " | " << c << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << d << " | " << e << " | " << f << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << g << " | " << h << " | " << i << std::endl;
            std::cout << std::endl;
            break;
        }
        jugadas += 1;

        //Comprobar si gana 
        if (a == simb1 && b == simb1 && c == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb_bot && b == simb_bot && c == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (d == simb_bot && e == simb_bot && f == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (g == simb_bot && h == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (a == simb_bot && d == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (b == simb_bot && e == simb_bot && h == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && f == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (a == simb_bot && e == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && e == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        //Fin del juego n 
        if (jugadas == 9)
        {
            std::cout << "Empate :D" << std::endl;
            Beep(900, 300);
            Beep(900, 300);
            system("color 1");
            break;
        }

        //Bucle bot
        std::cout << "Turno de Ted" << std::endl;
        while (jugar)
        {
            //Turno PC random;
            char posi2 = ' ';
            if (a == e && e == simb1 && i == '9')
            {
                posi2 = '9';
            }
            else if (a == i && i == simb1 && e == '5')
            {
                posi2 = '5';
            }
            else if (e == i && i == simb1 && a == '1')
            {
                posi2 = '1';
            }
            else if (e == g && g == simb1 && c == '3')
            {
                posi2 = '5';
            }
            else if (e == c && c == simb1 && g == '7')
            {
                posi2 = '7';
            }
            else if (d == g && g == simb1 && a == '1')
            {
                posi2 = '1';
            }
            else if (a == g && g == simb1 && d == '4')
            {
                posi2 = '4';
            }
            else if (a == d && d == simb1 && g == '7')
            {
                posi2 = '7';
            }
            else if (e == h && h == simb1 && b == '2')
            {
                posi2 = '2';
            }
            else if (b == h && h == simb1 && e == '5')
            {
                posi2 = '5';
            }
            else if (b == e && e == simb1 && h == '8')
            {
                posi2 = '8';
            }
            else if (f == i && i == simb1 && c == '3')
            {
                posi2 = '3';
            }
            else if (c == i && i == simb1 && f == '6')
            {
                posi2 = '6';
            }
            else if (c == f && f == simb1 && i == '9')
            {
                posi2 = '9';
            }
            else if (b == c && c == simb1 && a == '1')
            {
                posi2 = '1';
            }
            else if (a == c && c == simb1 && b == '2')
            {
                posi2 = '2';
            }
            else if (a == b && b == simb1 && c == '3')
            {
                posi2 = '3';
            }
            else if (e == f && f == simb1 && d == '4')
            {
                posi2 = '4';
            }
            else if (d == f && f == simb1 && e == '5')
            {
                posi2 = '5';
            }
            else if (d == e && e == simb1 && f == '6')
            {
                posi2 = '6';
            }
            else if (h == i && i == simb1 && g == '7')
            {
                posi2 = '7';
            }
            else if (g == i && i == simb1 && h == '8')
            {
                posi2 = '8';
            }
            else if (g == h && h == simb1 && i == '9')
            {
                posi2 = '9';
            }
            else
            {
                posi2 = (1 + rand() % 9) + '0';
            }

            //Posiciones
            bool error = false;
            switch (posi2) {
            case '1':
                if (a != '1')
                {
                    //continue;
                    error = true;
                }
                else
                {
                    a = simb_bot;
                }
                break;
            case '2':
                if (b != '2')
                {
                    //continue;
                    error = true;
                }
                else
                {
                    b = simb_bot;
                }
                break;
            case '3':
                if (c != '3')
                {
                    error = true;
                }
                else
                {
                    c = simb_bot;
                }
                break;
            case '4':
                if (d != '4')
                {
                    error = true;
                }
                else
                {
                    d = simb_bot;
                }
                break;
            case '5':
                if (e != '5')
                {
                    error = true;
                }
                else
                {
                    e = simb_bot;
                }
                break;
            case '6':
                if (f != '6')
                {
                    error = true;
                }
                else
                {
                    f = simb_bot;
                }
                break;
            case '7':
                if (g != '7')
                {
                    error = true;
                }
                else
                {
                    g = simb_bot;
                }
                break;
            case '8':
                if (h != '8')
                {
                    error = true;
                }
                else
                {
                    h = simb_bot;
                }
                break;
            case '9':
                if (i != '9')
                {
                    error = true;
                }
                else { i = simb_bot; }
                break;
            default:
                error = true; break;
            }

            if (error == false)
            {
                //Posiciones actualizadas
                std::cout << " " << a << " | " << b << " | " << c << std::endl;
                std::cout << "-----------" << std::endl;
                std::cout << " " << d << " | " << e << " | " << f << std::endl;
                std::cout << "-----------" << std::endl;
                std::cout << " " << g << " | " << h << " | " << i << std::endl;
                std::cout << std::endl;
                break;
            }
        }
        jugadas += 1;

        //Comprobar si gana 
        if (a == simb1 && b == simb1 && c == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :) " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);;
            break;
        }
        else if (a == simb_bot && b == simb_bot && c == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (d == simb_bot && e == simb_bot && f == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (g == simb_bot && h == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);
            break;
        }
        else if (a == simb_bot && d == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (b == simb_bot && e == simb_bot && h == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && f == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (a == simb_bot && e == simb_bot && i == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
        else if (c == simb_bot && e == simb_bot && g == simb_bot)
        {
            std::cout << jug1 << " Perdiste :( " << std::endl;
            system("color 1");
            Beep(1100, 400);
            Beep(1000, 400);
            Beep(900, 400);;
            break;
        }
    }
    return 0;
}
