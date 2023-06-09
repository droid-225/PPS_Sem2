/*
    Create a class player with following data members:
    Player name, Team name, Batting average
    Read data for 10 payers 
    Use constructors and destructors properly
    Write member function for each of the following 
    a. To get the data 
    b. To display the data 
    c. Sort it according to the batting average 
    d. Print a team wise sorted list of player’s name with their batting average 
*/

#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string playerName;
    string teamName;
    double battingAverage;

    Player() {}

    // Destructor
    ~Player() {
    }

    // Display player's data
    void displayData() const {
        cout << "Player Name: " << playerName << endl;
        cout << "Team Name: " << teamName << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << endl;
    }

    // Compare players based on batting average (used for sorting)
    bool operator<(const Player& other) const {
        return battingAverage < other.battingAverage;
    }
};

// Sort players based on batting average (using bubble sort)
void sortPlayers(Player* players, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (players[j] < players[j + 1]) {
                swap(players[j], players[j + 1]);
            }
        }
    }
}

// Print team-wise sorted list of players
void print(Player* players, int size) {
    sortPlayers(players, size);
    
    string currentTeam;
    cout << "Team-wise Sorted Players:" << endl;
    for (int i = 0; i < size; ++i) {
        if (players[i].teamName != currentTeam) {
            currentTeam = players[i].teamName;
            cout << "Team: " << currentTeam << endl;
        }

        cout << players[i].playerName << " (" << players[i].battingAverage << ")" << endl;
    }
}

// Function to get player data
void getData(Player* players, int size) {
    for (int i = 0; i < size; ++i) {
        Player player;

        cout << "Enter details for Player " << i + 1 << ":" << endl;
        cout << "Player Name: ";
        getline(cin, player.playerName);

        cout << "Team Name: ";
        getline(cin, player.teamName);

        cout << "Batting Average: ";
        cin >> player.battingAverage;
        cin.ignore();  // Ignore the newline character after reading battingAverage

        // Create a Player object and add it to the array
        players[i] = player;

        cout << endl;
    }
}

int main() {
    Player players[10];

    getData(players, 10);
    print(players, 10);

    return 0;
}
