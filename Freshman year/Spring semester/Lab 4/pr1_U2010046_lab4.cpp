/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. Define a class FullName and Player with the following specification 
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class FullName;
class FullName
{
private:
    string First_Name;
    string Middle_Name;
    string Last_Name;
public:
    FullName(string First_Name, string Middle_Name, string Last_Name) //constructor 
    {
        this->First_Name = First_Name;  // using this pointer
        this->Middle_Name = Middle_Name;
        this->Last_Name = Last_Name;
    }
    ~FullName() // destructor fo deletion
    {
        cout << "Object of FullName was deleted" << endl;
    }
    void setFirstName(string First_Name) //setting name 
    {
        this->First_Name = First_Name;
    }
    void setMiddleName(string Middle_Name) //setting middle name
    {
        this->Middle_Name = Middle_Name;
    }
    void setLastName(string Last_Name) //setting last name
    {
        this->Last_Name = Last_Name;
    }
    // we use get functions
    string getFirstName()
    {
        return First_Name;
    }
    string getMiddleName()
    {
        return Middle_Name;
    }
    string getLastName()
    {
        return Last_Name;
    }
    friend class Player; // we are using class object
};
class Player // player 
{
private:
    string player_Id;
    FullName* player_Name; //this is the worst line that wasted my much time
    int matches_Played;
    int goals_Scored;
public:
    Player(string player_Id, FullName& player_Name, int matches_Played, int goals_Scored) // parametrized constructor
    {
        this->player_Id = player_Id; // defining using with this pointer
        this->player_Name = new FullName(player_Name);
        this->matches_Played = matches_Played;
        this->goals_Scored = goals_Scored;
    }
    ~Player()
    {
        cout << "Object of Player class was deleted \n"; // for deletion 
    }

    // setting player id, name, matches and goals
    void setPlayerId(string player_Id)
    {
        this->player_Id = player_Id;
    }
    void setPlayerName(FullName player_Name)
    {
        this->player_Name = new FullName(player_Name);
    }
    void setMatchesPlayed(int matches_Played)
    {
        this->matches_Played = matches_Played;
    }
    void setGoalsScored(int goals_Scored)
    {
        this->goals_Scored = goals_Scored;
    }
    // using get
    string getPlayerId()
    {
        return player_Id;
    }
    FullName getPlayerName()
    {
        return *player_Name;
    }
    int getMatchesPlayed()
    {
        return matches_Played;
    }
    int getGoalsScored()
    {
        return goals_Scored;
    }
    void printPlayer_Information()  // printing player information
    {
        cout << "Player ID: " << player_Id << endl;
        cout << "First Name: " << (*player_Name).First_Name << endl;
        cout << "Middle Name: " << (*player_Name).Middle_Name << endl;
        cout << "Last Name: " << (*player_Name).Last_Name << endl;
        cout << "Matches played: " << matches_Played << endl;
        cout << "Goals scored: " << goals_Scored << endl << endl;
    }
    friend void Increase_ScoredGoals(Player& player, int increasegoal); // using friend function this part plays important role
};
void Increase_ScoredGoals(Player& player, int increasegoal)
{
    player.goals_Scored += increasegoal; // incrreasing goals
}
int main() // change here to int main() 
{
    system("Color 0A"); // my hint
    // PLAYER INFORMATION 
    string First_Name, Middle_Name, Last_Name, player_Id;
    int matches_Played, goals_Scored;
    cout << " \n\t Add player details" << endl;
    cout << "Input Player id: "; cin >> player_Id;
    cout << "Input First name: "; cin >> First_Name;
    cout << "Input Middle name: "; cin >> Middle_Name;
    cout << "Input Last name: "; cin >> Last_Name;
    cout << "Input Played matches: ";cin >> matches_Played;
    cout << "Input Scored goals: ";cin >> goals_Scored; 

    FullName FULL_NAME(First_Name, Middle_Name, Last_Name);
    Player MEKHROL(player_Id, FULL_NAME, matches_Played, goals_Scored);

    while (1)
    {
        system("cls"); //clears screen
        cout <<" \n\t 1. Display player details";
        cout <<" \n\t 2. Increase scored goal";
        cout <<" \n\t 3. Exit \n";
        cout << "\n\t Choice = ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls"); //clears screen
            //to show player info
            MEKHROL.printPlayer_Information(); // print information of player 
            // cout << "\n\t Choice = ";
            system("pause");
            break;
        case 2:
            system("cls"); //clears screen
            cout << "Increase scored goals as you want = ";
            cin >> goals_Scored;
            Increase_ScoredGoals(MEKHROL, goals_Scored); // this function for increasing goal
            cout << "It is sucessfully increased. ";
            Sleep(1000); // you can see the phrase It is successfully increased
            system("cls"); //clears screen
            break;
        case 3:
            return 0;
        }
    }
}