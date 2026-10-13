#include <iostream>

using namespace std;

class Game
{
public:
    string Name;
    int Difficulty;

    Game(string N, int D) : Name(N), Difficulty(D) {}

    // void()
    // {

    // }
};

class Player
{
protected:
    string Pname;
    string PAchievement;
    int PRating;
    string Rating;
    string GameD;
    Game *GamePlayed;

public:
    Player(string PN, string PA, int PR, Game* G)
    {
        Pname = PN;
        PAchievement = PA;
        PRating = PR;
        GamePlayed = G;
        if (GamePlayed->Difficulty <= 3)
        {
            GameD = "Casual";
        }
        else if (GamePlayed->Difficulty <= 6)
        {
            GameD = "Hard";
        }
        else
        {
            GameD = "Crazy";
        }

        if (PR <= 3)
        {
            Rating = "LolCow";
        }
        else if (PR <= 5)
        {
            Rating = "Casual";
        }
        else if (PR <= 8)
        {
            Rating = "Pro";
        }
        else
        {
            Rating = "GOAT";
        }
    }

    void InfoPlayer()
    {
        cout << "Player Name: " << Pname << "\nAchievement: " << PAchievement
            << "\nPlayer Rating : " << Rating<< "\nGame Played: " << 
            GamePlayed->Name << "\nGame Difficulty: " << GameD 
            << "\n===========================================\n";
    }
};

int main()
{
    Game* ListGame[2];
    ListGame[0] = new Game("Minecraft", 3);
    ListGame[1] = new Game("League of Legends", 10);
    ListGame[2] = new Game("BTD 6", 6);

    Player* ListPlayer[5];
    ListPlayer[0] = new Player("Feinberg", "35x All Advancements (AA) world record holder" ,9, ListGame[0]);
    ListPlayer[1] = new Player("Ludwig", "throw pearl with left mouse click" ,1, ListGame[0]);
    ListPlayer[2] = new Player("kesha", "Average League Player" ,8, ListGame[1]);
    ListPlayer[3] = new Player("Faker", "6x World Champion (back to back to back)" ,10, ListGame[1]);
    ListPlayer[4] = new Player("ISAB", "Married to sauda" ,6, ListGame[2]);
    ListPlayer[5] = new Player("Felicia", "Best Boss Event Tournaments" ,8, ListGame[2]);

    for (int i = 0; i < 6; i++){
        ListPlayer[i]->InfoPlayer();
    }

    // minecraft.InfoGame();
}