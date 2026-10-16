#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    // testing new constructors
    // Goat g1;
    // cout << "g1 created" << endl;

    // Goat g2("a");
    // cout << "g2 created" << endl;

    // Goat g3("b", 2);
    // cout << "g3 created" << endl;

    // Goat g4("c", 5, "brown");
    // cout << "g4 created" << endl;

    // cout << (g3 < g4) << endl;
    // cout << (g4 < g3) << endl;


    int choice;

    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;
    cout << "Choice --> ";
    cin >> choice;

    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Try again." << endl;
        cout << "Choice --> ";
        cin >> choice;
    }

    return choice;

    
    // srand(time(0));
    // bool again;

    // read & populate arrays for names and colors
    // ifstream fin("names.txt");
    // string names[SZ_NAMES];
    // int i = 0;
    // while (fin >> names[i++]);
    // fin.close();
    // ifstream fin1("colors.txt");
    // string colors[SZ_COLORS];
    // i = 0;
    // while (fin1 >> colors[i++]);
    // fin1.close();




    return 0;
}

