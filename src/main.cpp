// #include <iostream>

// using namespace std;

// int main()
// {   
//     int x, y;
//     std::cout << "Napíš 2 čísla: " << std::endl;
//     cin >> x >> y;
//     cout << "Výsledok je " << x + y << "." << endl;

//     cin.ignore();
//     cin.get();

//     return 0;
// }

#include <iostream>
using namespace std;

// funkčné prototypy
void print_menu(string name);

// main funkcia
int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        string name(argv[1]);
        print_menu(name);
    }
    else
    {
        cout << "Používateľ nebol zadaný. Končím program." << endl;
    }
    
    
    return 0;
}

// vytlačí menu
void print_menu(string name)
{
    int choice;
    cout << "======================================" << endl;
    cout << "1 - Vytlač zoznam" << endl;
    cout << "2 - Pridaj do zoznau" << endl;
    cout << "3 - Vymaž zo zoznamu" << endl;
    cout << "4 - Ukonči program" << endl;
    cout << "======================================" << endl;
    cout << "Vyberte si číslo a stlačte ENTER: ";

    cin >> choice;
    cout << endl;

    //kontrola vstupu
    switch (choice)
    {
    case 4 :
        exit(0);
        break;
    
    default:
        cout << "Neznáma voľba." << endl;
        break;
    }
    
}