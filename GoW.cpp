#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <limits>
#include <chrono>
#include <thread>

using namespace std;

int loss1 = 0;
int loss2 = 0;
int wins1 = 0;
int wins2 = 0;

int viata_cavaler = 200;
int viata_arcas = 100;
int viata_swordsman = 150;

int dmg_cavaler = 20;
int dmg_swordsman = 40;
int dmg_arcas = 30;

int counter = 0;
int player1 = 0;
int cavaler1 = 0;
int viata_totala_cavaleri1 = cavaler1 * viata_cavaler;
int swordsman1 = 0;
int viata_totala_swordsman1 = swordsman1 * viata_swordsman;
int arcas1 = 0;
int viata_totala_arcas1 = arcas1 * viata_arcas;

int player2 = 0;
int cavaler2 = 0;
int viata_totala_cavaleri2 = cavaler2 * viata_cavaler;
int swordsman2 = 0;
int viata_totala_swordsman2 = swordsman2 * viata_swordsman;
int arcas2 = 0;
int viata_totala_arcas2 = arcas2 * viata_arcas;

void player1_win()
{
    cout << "Orcs win the battle" << endl;
    player1++;
}

void player2_win()
{
    cout << "Humans win the battle" << endl;
    player2++;
}

void atac_cavaleri()
{
    cout << "The Knights are raging first!" << endl;
    while (viata_totala_cavaleri1 > 0 && viata_totala_cavaleri2 > 0)
    {
        viata_totala_cavaleri2 -= dmg_cavaler;
        viata_totala_cavaleri1 -= dmg_cavaler;
    }
    if (viata_totala_cavaleri1 <= 0)
    {
        cout << "Player 1: All Knights are dead";
        loss1++;
        wins2++;
    }
    else if (viata_totala_cavaleri2 <= 0)
    {
        cout << "Player 2: All Knights are dead";
        loss2++;
        wins1++;
    }
    cout << endl
         << endl
         << endl;
}

void atac_swordsman()
{
    cout << "The Swordsman are next!" << endl;
    while (viata_totala_swordsman1 > 0 && viata_totala_swordsman2 > 0)
    {
        viata_totala_swordsman2 -= dmg_swordsman;
        viata_totala_swordsman1 -= dmg_swordsman;
    }
    if (viata_totala_swordsman1 <= 0)
    {
        cout << "Player 1: All Swordsman are dead";
        loss1++;
        wins2++;
    }
    else if (viata_totala_swordsman2 <= 0)
    {
        cout << "Player 2: All Swordsman are dead";
        loss2++;
        wins1++;
    }
    cout << endl
         << endl
         << endl;
}

void atac_arcasi()
{
    cout << "The last hopes are our Archers!" << endl;
    while (viata_totala_arcas1 > 0 && viata_totala_arcas2 > 0)
    {
        viata_totala_arcas1 -= dmg_arcas;
        viata_totala_arcas2 -= dmg_arcas;
    }
    if (viata_totala_arcas1 <= 0)
    {
        cout << "Player 1: All Archers are dead";
        loss1++;
        wins2++;
    }
    else if (viata_totala_arcas2 <= 0)
    {
        cout << "Player 2: All Archers are dead";
        loss2++;
        wins1++;
    }
    cout << endl
         << endl
         << endl;
}

int main()
{
    while (true)
    {
        cout << "The war between Orcs and Humans rages on forever." << endl;
        cout << "You are the new commander. You have 100 men which you have to allocate to the appropriate positions to win the war." << endl;

        while (true)
        {
            cout << "Player 1: How many Knights? ";
            try
            {
                cin >> cavaler1;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        while (true)
        {
            cout << "Player 2: How many Knights? ";
            try
            {
                cin >> cavaler2;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        while (true)
        {
            cout << "Player 1: How many Archers? ";
            try
            {
                cin >> arcas1;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        while (true)
        {
            cout << "Player 2: How many Archers? ";
            try
            {
                cin >> arcas2;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        while (true)
        {
            cout << "Player 1: How many Swordsman? ";
            try
            {
                cin >> swordsman1;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        while (true)
        {
            cout << "Player 2: How many Swordsman? ";
            try
            {
                cin >> swordsman2;
                if (cin.fail())
                {
                    throw runtime_error("Not a number");
                }
                break;
            }
            catch (runtime_error &e)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << e.what() << endl;
            }
        }

        int total1 = cavaler1 + arcas1 + swordsman1;
        int total2 = cavaler2 + arcas2 + swordsman2;

        if (total1 > 100)
        {
            cout << "Player 1: You have allocated over 100." << endl;
        }
        else
        {
            cout << "Player 1: You have " << cavaler1 << " Knights, " << arcas1 << " Archers, and " << swordsman1 << " Swordsman." << endl;
            break;
        }

        if (total2 > 100)
        {
            cout << "Player 2: You have allocated over 100." << endl;
        }
        else
        {
            cout << "Player 2: You have " << cavaler2 << " Knights, " << arcas2 << " Archers, and " << swordsman2 << " Swordsman." << endl;
            break;
        }
    }

    while (true)
    {
        while (true)
        {
            viata_totala_cavaleri1 = cavaler1 * viata_cavaler;
            viata_totala_swordsman1 = swordsman1 * viata_swordsman;
            viata_totala_arcas1 = arcas1 * viata_arcas;

            viata_totala_cavaleri2 = cavaler2 * viata_cavaler;
            viata_totala_swordsman2 = swordsman2 * viata_swordsman;
            viata_totala_arcas2 = arcas2 * viata_arcas;

            cout << "Player 1: Viata Archers: " << viata_totala_arcas1 << endl;
            cout << "Player 1: Viata Swordsman: " << viata_totala_swordsman1 << endl;
            cout << "Player 1: Viata Knights: " << viata_totala_cavaleri1 << endl;

            cout << "Player 2: Viata Archers: " << viata_totala_arcas2 << endl;
            cout << "Player 2: Viata Swordsman: " << viata_totala_swordsman2 << endl;
            cout << "Player 2: Viata Knights: " << viata_totala_cavaleri2 << endl;

            cout << endl
                 << endl;

            atac_cavaleri();
            atac_swordsman();
            atac_arcasi();

            cout << "A victor has been decided." << endl;

            int x = rand() % 3 + 1;

            this_thread::sleep_for(chrono::seconds(x));

            cout << "Orc victory: " << wins1 << " Human victory: " << wins2 << endl;
            counter = 0;

            if (loss1 > loss2)
            {
                cout << "Player 2 has won the war. You have been defeated!!" << endl;
            }
            else if (loss2 > loss1)
            {
                cout << "Player 1 has won the war, congratulations!!" << endl;
            }
            else
                cout << "Tie!" << endl;
            break;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Press enter to exit" << endl;
        cin.get();

        return 0;
    }
}
