/*Grupo: el profesor y las chicas super poderosas        CIENCIA DE LA COMPUTACIÓN I  CCOMP2-1
INTEGRANTES: 
- Josue Carpio 
- Ariana Leon 
- Jorge Nuñez
- Anthony Rosriguez*/

#include <iostream>
#include <string.h>
#include <windows.h>


int main()
{
    //Sonido, cambio de color y titulo de la consola 
    system("title Juego Michi - CCOMP2-1");
    system("color 5");
    Beep(900,800);

    //Posiciones 
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';

    //Simbolos 
    char simb1, simb2;

    //Nombres de los jugadores 
    std::string jug1, jug2;

    //Tablero
    std::cout << "Tabla de posiciones" << std::endl;
    std::cout << " 1 | 2 | 3 " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " 4 | 5 | 6 " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " 7 | 8 | 9 " << std::endl;
    std::cout << std::endl;

    //Nombre y simbolo
    std::cout << "Jugador 1 ingrese su nombre: " << std::endl;
    std::cin >> jug1;
    std::cout << jug1 << " Elija su simbolo (X, O): " << std::endl;
    std::cin >> simb1;
    if (simb1 == 'x')
        simb2 = 'o';
    else if (simb1 == 'o')
        simb2 = 'x';
    std::cout << "Jugador 2 ingrese su nombre (X, O): " << std::endl;
    std::cin >> jug2;
    std::cout << "Jugador 1: " << jug1 << " (" << simb1 << ") " << std::endl;
    std::cout << "Jugador 2: " << jug2 << " (" << simb2 << ") " << std::endl;
    std::cout << std::endl;

    //Bucle principal
    bool jugar = true; 
    int jugadas = 0;
    while (jugar)
    {
        //Bucle del jugador 1
        while(jugar)
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
                    {std::cout << "Posicion ya elegida"<<std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {a = simb1;
                    break; }
            case '2':
                if (b != '2')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {b = simb1;
                    break;}
            case '3':
                if (c != '3')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {c = simb1;
                    break; }
            case '4':
                if (d != '4')
                    { std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {d = simb1;
                    break; }
            case '5':
                if (e != '5')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {e = simb1;
                    break; }
            case '6':
                if (f != '6')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {f = simb1;
                    break; }
            case '7':
                if (g != '7')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {g = simb1;
                    break; }
            case '8':
                if (h != '8')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {h = simb1;
                    break; }
            case '9':
                if (i != '9')
                    {std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;}
                else;
                    {i = simb1;
                    break; }
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
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && b == simb2 && c == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (d == simb2 && e == simb2 && f == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (g == simb2 && h == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && d == simb2 && g == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (b == simb2 && e == simb2 && h == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb2 && f == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && e == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb2 && e == simb2 && g == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }

        //Fin del juego n 
        if (jugadas == 9)
        {
            std::cout << "Empate :D"<<std::endl;
            Beep(900, 300);
            Beep(900, 300);
            system("color 1");
            jugar = false;
        }
        
        //Bucle del jugador 2
        while(jugar)
        {
            //Elegir posición 
            char posi2 = ' ';
            std::cout << jug2 << " Elija la posicion: " << std::endl;
            std::cin >> posi2;
            Beep(900, 200);

            //Posiciones 
            switch (posi2)
            {

            case '1':
                if (a != '1')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {a = simb2;
                break; }
            case '2':
                if (b != '2')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {b = simb2;
                break; }
            case '3':
                if (c != '3')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {c = simb2;
                break; }
            case '4':
                if (d != '4')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {d = simb2;
                break; }
            case '5':
                if (e != '5')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {e = simb2;
                break; }
            case '6':
                if (f != '6')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {f = simb2;
                break; }
            case '7':
                if (g != '7')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {g = simb2;
                break; }
            case '8':
                if (h != '8')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {h = simb2;
                break; }
            case '9':
                if (i != '9')
                {
                    std::cout << "Posicion ya elegida" << std::endl;
                    Beep(700, 400);
                    Beep(700, 400);
                    continue;
                }
                else;
                {i = simb2;
                break; }
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
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (d == simb1 && e == simb1 && f == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (g == simb1 && h == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb1 && d == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (b == simb1 && e == simb1 && h == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb1 && f == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb1 && e == simb1 && i == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb1 && e == simb1 && g == simb1)
        {
            std::cout << jug1 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && b == simb2 && c == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (d == simb2 && e == simb2 && f == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (g == simb2 && h == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && d == simb2 && g == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (b == simb2 && e == simb2 && h == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb2 && f == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (a == simb2 && e == simb2 && i == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
        else if (c == simb2 && e == simb2 && g == simb2)
        {
            std::cout << jug2 << " Ganaste :D " << std::endl;
            system("color 1");
            Beep(900, 400);
            Beep(1000, 400);
            Beep(1100, 400);
            break;
        }
    }
    return 0;
}
