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
#include <vector>
using namespace std;

// funkčné prototypy
void print_menu(string name);
void print_list();
void add_item();
void delete_item();

//globálne premenné, treba chceck na null
vector<string> list;
string name;

// main funkcia
int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        name = string(argv[1]);
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
    case 1 :
        print_list();
        break;
    case 2 :
        add_item();
        break;
    case 3 :
        delete_item();
        break;
    case 4 :
        exit(0);
        break;
    
    default:
        cout << "Neznáma voľba." << endl;
        break;
    }


    
}    

void add_item()
{
    cout << endl;
    cout << "=== Pridaj do zoznamu ===" << endl;
    cout << "Napíš názov položky a stlač ENTER: ";

    string item;
    cin >> item;

    list.push_back(item);
    cout << endl;

    cout << "Položka " << item << " úspešne pridaná do zoznamu." << endl;
    cin.clear();
    cout << "========================" << endl;
    print_menu(name);
}

void delete_item()
{
    cout << "=== Vymaž zo zoznamu ===" << endl;
    cout << "Napíš index položky a stlač ENTER: ";
    cout << endl;
    if (list.size())
    {
        for (int i = 0; i < (int)list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }
        
    }
    else
    {
        cout << "Nie sú žiadne položky v zozname na vymazanie" << endl;
    }
    cout << "========================" << endl;
    print_menu(name);

}

void print_list()
{
    cout << endl;
    cout << "=== Výpis zo zoznamu ===" << endl;
    
    for (int i = 0; i < (int)list.size(); i++)
    {
        cout << " * " << list[i] << endl;
    }
    cout << "========================" << endl;
    print_menu(name);
}