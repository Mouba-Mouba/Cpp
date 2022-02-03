#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;
void ease();
void midle();
void dificult();

int main()
{


    cout << "\t\t\t*** Are You Genius ???***" << endl;
    cout << "\t\t\tAnswer those question" << endl;
    ease();
    midle();
    dificult();
    cout << "============================================================"<<endl;
    cout << "               CONGRATULATION YOU ARE GENUIS                "<<endl;
    cout << "============================================================"<<endl;

    return 0;
}

void ease()
{
    char answer;
    int randQuestion;

    for (int i=1; i<=2; ++i)
    {
        srand(time(NULL));
        randQuestion = i+rand()%(10-i);
        switch (randQuestion)
        {
        case 1:
            cout << "Question Easy"<<endl;
            cout << "What is the distance between Earth and Moon ?"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:389,467 km \nB:384,400 km \nC:400,400 km \nD:360,000 km"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
                {
                    cout<< " Game over "<<endl;
                    exit(1);
                }
            }
            system("cls");
            break;

        case 2:
            cout << "Question Easy"<<endl;
            cout << "The molecular formula of water is..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:H2O \nB:NaOH \nC:Ca \nD:water"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'a':
            case 'A':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
                cout << "Game Over"<<endl;
                exit(1);
            }
            system("cls");
            break;

        case 3:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "The light speed value is..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:300 000 km/s \nB:280 000 km/s \nC:Any Value \nD:400 km/s"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'a':
            case 'A':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
                cout << "Game Over"<<endl;
                exit(1);
            }
            system("cls");
            break;
        case 4:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "The nuclei of an atom are formed of... "<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Electron  \nB:Proton  \nC:Neutron \nD:All those elements"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'd':
            case 'D':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
                cout << "Game Over"<<endl;
                exit(1);
            }
            system("cls");
            break;

        case 5:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "What are the main human blood group systems ?"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Blood  \nB:Red blood cell \nC:System Blood \nD: ABO system, Rh system and MN system"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'd':
            case 'D':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 6:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "When the heart stops beating then the person is"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Stilling alive \nB:Dead \nC:Sick \nD:Need blood"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 7:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "Science is"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Job \nB:Humane Competence \nC:Knowledge \nD:Operation"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'c':
            case 'C':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 8:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "The science that studies human beings is..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Biology \nB:Science \nC:Geology \nD:Psychology"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'a':
            case 'A':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 9:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "The molar mass of oxygen is"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:1 \nB:16 \nC:10 \Dn:32"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 10:
            cout << "Question "<<i<<" : Easy"<<endl;
            cout << "The Earth rotates around the Sun in..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:364 Days \nB:7 weeks \nC:Until the End \nD:12 months"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'd':
            case 'C':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        }
    }
    return ;
}
void midle()
{
    char answer;
    int randQuestion;

    for (int i=1; i<=2; ++i)
    {
        srand(time(NULL));
        randQuestion = i+rand()%(10-i);
        switch (randQuestion)
        {
        case 1:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "Radiocarbon is produced in the atmosphere as a result of..."<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:collision between fast neutrons and nitrogen nuclei present in the atmosphere \nB:action of ultraviolet light from the sun on atmospheric oxygen \nC:action of solar radiations particularly cosmic rays on carbon dioxide present in the atmosphere \nD:lightning discharge in atmosphere"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'a':
            case 'A':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 2:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "Planets do not twinkle because..."<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:they emit light of a constant intensity  \nB:their distance from the earth does not change with time \nC:they are very far away from the earth resulting in decrease in intensity of light \nD:they are nearer to earth and hence we receive a greater amount of light and, therefore minor variations in the intensity are not noticeable"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'd':
            case 'D':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 3:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "How many party the 'Brain' is divides ?"<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:2 \ntB:5 \nC:3 \nD:1 "<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'c':
            case 'C':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 4:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "Pa(Pascal) is the unit for "<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:thrust  \nB:pressure   \nC:frequency  \nD:conductivity "<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 5:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "Stars appears to move from east to west because "<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:all stars move from east to west   \nB:the earth rotates from west to east \nC:the earth rotates from east to west \nD:the background of the stars moves from west to east"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'd':
            case 'D':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;
        case 6:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "The method of concentrating the ore which makes use of the difference in density between ore and impurities is called..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:liquidation \nB:leaching \nC:levitation \nD:magnetic separation"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'c':
            case 'C':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 7:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "The gas present in the stratosphere which filters out some of the sun's ultraviolet light and provides an effective shield against radiation damage to living things is..."<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:helium \nB:ozone \nC:oxygen \nD:methane"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 8:
            cout << "Question "<<i<<" : Medium"<<endl;
            cout << "A farmer wants to sell mangoes from his farm. The farmer sprays all the mangoes with hormone X to ensure that all the mangoes ripen at the same time. What is hormone X ?"<<endl;
            cout << "\t\t Choose"<<endl;
            cout << "A:Auxin \nB:Ethylene  \nC:Cytosine \nD:Gibberish "<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout << "Game Over"<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 9:
            cout << "Question "<<i<<" : Difficult"<<endl;
            cout << "At the time of photosynthesis the plants absorb..."<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:Water \t\t\tB:Oxygen \nC:carbon dioxide \t\t\tD:Nitrogen"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'c':
            case 'C':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }

        }
    }
    return ;
}
void dificult()
{
    char answer;
    int randQuestion;

    for (int i=1; i<=1; ++i)
    {
        srand(time(NULL));
        randQuestion = i+rand()%(5);
        switch (randQuestion)
        {
        case 1:
            cout << "Question "<<i<<" : Difficult"<<endl;
            cout << " The absorption of ink by blotting paper involves "<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:viscosity of ink \nB:capillary action phenomenon \nC:diffusion of ink through the blotting \nD:siphon action"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'b':
            case 'B':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;

        case 2:
            cout << "Question "<<i<<" : Difficult"<<endl;
            cout << "Who is at the origin of the force of gravity"<<endl;
            cout << "\t\t Answer"<<endl;
            cout << "A:Newton \t\t\tB:Hertz \nC:Archimedes \t\t\tD:No One"<<endl;
            cout << "Enter Your Answer: ";
            cin >> answer;
            switch (answer)
            {
            case 'a':
            case 'A':
                cout << "**GOOD**\n"<<endl;
                break;
            default:
            {
                cout<< " Game over "<<endl;
                exit(1);
            }
            }
            system("cls");
            break;
        }
    }
    return ;
}
