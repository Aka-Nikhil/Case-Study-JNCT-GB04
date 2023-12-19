#include <iostream>
#include <string>
using namespace std;
class Game {
public:
    void displayMenu() {
        cout << " __________________ "<<endl;
        cout << "|                  |"<<endl;
        cout << "| Wellcome to game.|"<<endl;
        cout << "|------------------|"<<endl;
        cout << "| 1. Start         |"<<endl;
        cout << "| 2. Rules         |"<<endl;
        cout << "| 3. Weapon        |"<<endl;
        cout << "| 4. Exit          |"<<endl;
        cout << "|__________________|"<<endl;
    }
};
class level {
    public:
    void level1(){
        cout<<"   "<<endl;
        cout<<" __________________________________________________ "<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|           You are Character Naruto               |"<<endl;
        cout<<"|      Your goal is to save Princess Hinata        |"<<endl;
        cout<<"|   Choose your Weapons according to your enemy    |"<<endl;
        cout<<"|--------------------------------------------------|"<<endl;
        cout<<"|   Level 1 Begins                                 |"<<endl;
        cout<<"|--------------------------------------------------|"<<endl;
        cout<<"|  Your enemy is Pain.                             |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  1. Rasenshuriken + Sage Jutsu                   |"<<endl;
        cout<<"|  2. Transformation jutsu                         |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  your health is *******                          |"<<endl;
        cout<<"|__________________________________________________|"<<endl;
        cout<<"   "<<endl;
    }

    void level2(){
        cout<<"   "<<endl;
        cout<<" __________________________________________________ "<<endl;
        cout<<"|   Level 2 Begins                                 |"<<endl;
        cout<<"|--------------------------------------------------|"<<endl;
        cout<<"|  Your enemy is Madara Uchiha.                    |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  1. Shadow Clone + Preety Jutsu                  |"<<endl;
        cout<<"|  2. Rasengan + Kurama Chakra                     |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  your health is ****                             |"<<endl;
        cout<<"|__________________________________________________|"<<endl;
        cout<<"   "<<endl;
    }
    void level3(){
        cout<<"   "<<endl;
        cout<<" __________________________________________________ "<<endl;
        cout<<"|   Level 3 Begins                                 |"<<endl;
        cout<<"|--------------------------------------------------|"<<endl;
        cout<<"|  Your enemy is Kaguya Otsutsuki.                 |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  1. Six Path                                     |"<<endl;
        cout<<"|  2. Preety Jutst                                 |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  your health is *****                            |"<<endl;
        cout<<"|__________________________________________________|"<<endl;
        cout<<"   "<<endl;
    }
    void level4(){
        cout<<"   "<<endl;
        cout<<" __________________________________________________ "<<endl;
        cout<<"|   Level 4 Begins                                 |"<<endl;
        cout<<"|--------------------------------------------------|"<<endl;
        cout<<"|  Your enemy is Oruchimaru.                       |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  1. 7 tail Kurama                                |"<<endl;
        cout<<"|  2. Rasengan                                     |"<<endl;
        cout<<"|                                                  |"<<endl;
        cout<<"|  your health is ***                              |"<<endl;
        cout<<"|__________________________________________________|"<<endl;
        cout<<"   "<<endl;
    }
    void thanks(){
        cout<<"   "<<endl;
        cout<<" ________________________________________________ "<<endl;
        cout<<"|                                                |"<<endl;
        cout<<"|               Congratulations                  |"<<endl;
        cout<<"|      Prince naruto saved Princess Hinata       |"<<endl;
        cout<<"|            Thanks for Playaing Game            |"<<endl;
        cout<<"|             Come again to play game.           |"<<endl;
        cout<<"|________________________________________________|"<<endl;
    }

    void displayweapons() {
        cout<<" ________________________ "<<endl;   
        cout<<"|       WEAPONS          |"<<endl;
        cout<<"|                        |"<<endl;
        cout<<"| * Rasengan             |"<<endl;
        cout<<"| * Shadow clone         |"<<endl;
        cout<<"| * Kurama Chakra        |"<<endl;
        cout<<"| * Sage Mode Jutsu      |"<<endl; 
        cout<<"| * Rasenshuriken        |"<<endl;
        cout<<"| * Six Path             |"<<endl;
        cout<<"| * Pretty Jutsu         |"<<endl;
        cout<<"| * Toad Sage            |"<<endl; 
        cout<<"|------------------------|"<<endl;
        cout<<"|  1. Start              |"<<endl;
        cout<<"|  2. Exit               |"<<endl;
        cout<<"|________________________|"<<endl;
        cout<<" "<<endl;
    }

    void displayRules() {
        cout<<" __________________________________________"<<endl;   
        cout<<"|                RULES                     |"<<endl;
        cout<<"|                                          |"<<endl;
        cout<<"| - This game is based on story telling.   |"<<endl;
        cout<<"|                                          |"<<endl;
        cout<<"| - You will go Through 4 Levels           |"<<endl; 
        cout<<"|   for Each level you have to choose      |"<<endl;
        cout<<"|   Right Weapon in order to win game.     |"<<endl;
        cout<<"|                                          |"<<endl; 
        cout<<"| - If you loose The Game will be over.    |"<<endl;
        cout<<"|------------------------------------------|"<<endl;
        cout<<"|  1. Start                                |"<<endl;
        cout<<"|  2. Exit                                 |"<<endl;
        cout<<"|__________________________________________|"<<endl;
    }
};

int main() {
    Game game;
    level level;
    int n;
    int b;
    do{

        game.displayMenu();
        cout<<"                "<<endl;
        std::cout << "Enter your choice: ";
        std::cin >> b;
    
        switch (b) 
        {
            case 1:
                level.level1();
                cout<<"Enter Your Option:- ";
                cin>>n;
                cout<<"                     "<<endl;
    
                switch (n)
                {
                    case 1:
                    level.level2();
                        
                        cout<<"Enter Your Option:- ";
                        cin>>n;
                        cout<<"                     "<<endl;
    
                        switch (n)
                        {
                            case 1:
                            
                                cout<<"Game Over\n";
                                break;
                            case 2:
                                level.level3();
                                cout<<"Enter Your Option:- ";
                                cin>>n;
                                switch (n)
                                {
                                case 1:
                                    cout<<"Game Over\n";
                                    break;
                                case 2:
                                    level.level4();
                                    cout<<"Enter Your Option:- ";
                                    cin>>n;
    
                                    switch (n)
                                    {
                                    case 1:
                                    level.thanks();
                                        break;
                                    case 2:
                                        cout<<"Game over\n";
                                    default:
                                        cout<< "Choose the correct option.\n";
                                        break;
                                    }
                                    break;
    
                                default:
                                    cout<< "Choose the correct option.\n";
                                    break;
                                }
                                break;
    
                            default:
                                cout<< "Choose the correct option.\n";
                                break;
                        }
                    break;
                    case 2:
                        cout<<"Game Over\n";
                        break;
                    default:
                        cout<< "Choose the correct option.\n";
                        break;
    
                }
            break;
            case 2:
                level.displayRules();
                cout<<"Enter the option:- ";
                cin>>n;
                
            
                switch (n) 
                {
                    case 1:
                        level.level1();
                        cout<<"Enter Your Option:- ";
                        cin>>n;
                        cout<<"                     "<<endl;
    
                        switch (n)
                        {
                            case 1:
                            level.level2();
                                cout<<"Enter Your Option:- ";
                                cin>>n;
                                cout<<"                     "<<endl;
    
                                switch (n)
                                    {
                                    case 1:
    
                                        cout<<"Game Over\n";
                                        break;
                                    case 2:
                                        level.level3();
                                        cout<<"Enter Your Option:- ";
                                        cin>>n;
                                        switch (n)
                                        {
                                        case 1:
                                            cout<<"Game Over\n";
                                            break;
                                        case 2:
                                            level.level4();
                                            cout<<"Enter Your Option:- ";
                                            cin>>n;
    
                                            switch (n)
                                            {
                                            case 1:
                                                level.thanks();
                                                break;
                                            case 2:
                                                cout<<"Game over\n";
                                            default:
                                                cout<< "Choose the correct option.\n";
                                                break;
                                            }
                                            break;
    
                                        default:
                                            cout<< "Choose the correct option.\n";
                                            break;
                                        }
                                        break;
                                    default:
                                        cout<< "Choose the correct option.\n";
                                        break;
                                    }
                                break;
                            case 2:
                                cout<<"Game Over\n";
                                break;
                            default:
                                cout<< "Choose the correct option.\n";
                                break;
                        }
                        break;
                    case 2:
                        cout<<"Game Over"<<endl;
                        break;
                    default:
                        cout<< "Choose the correct option.\n";
                        break;
                }
            break;
    
            case 3:
                level.displayweapons();
                cout<<"Enter the option:- ";
                cin>>n;
                
            
                switch (n) 
                {
                    case 1:
                        level.level1();
                        cout<<"Enter Your Option:- ";
                        cin>>n;
                        cout<<"                     "<<endl;
    
                        switch (n)
                        {
                            case 1:
                            level.level2();
                                cout<<"Enter Your Option:- ";
                                cin>>n;
                                cout<<"                     "<<endl;
    
                                switch (n)
                                    {
                                    case 1:
    
                                        cout<<"Game Over\n";
                                        break;
                                    case 2:
                                        level.level3();
                                        cout<<"Enter Your Option:- ";
                                        cin>>n;
                                        switch (n)
                                        {
                                        case 1:
                                            cout<<"Game Over\n";
                                            break;
                                        case 2:
                                            level.level4();
                                            cout<<"Enter Your Option:- ";
                                            cin>>n;
    
                                            switch (n)
                                            {
                                            case 1:
                                            level.thanks();
                                                break;
                                            case 2:
                                                cout<<"Game over\n";
                                            default:
                                                cout<< "Choose the correct option.\n";
                                                break;
                                            }
                                            break;
    
                                        default:
                                            cout<< "Choose the correct option.\n";
                                            break;
                                        }
                                        break;
    
                                    default:
                                        cout<< "Choose the correct option.\n";
                                        break;
                                    }
                                break;
                            case 2:
                                cout<<"Game Over\n";
                                break;
                            default:
                                cout<< "Choose the correct option.\n";
                                break;
                        }
                    break;
                }
            break;
            case 4:
                cout << "You are Exitied from game.\n";
                cout<<" ";
                break;
            default:
                cout<< "Choose the correct option.\n";
                break;
            }            
    } while (n !=4);
    return 0;
} 
