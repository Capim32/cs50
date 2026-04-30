#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int score(string word);
int points(char c);
string winner(string players[2]);

int main()
{
    string players[2];

    for (int i = 0; i < 2; i++)
    {
        players[i] = get_string("Player %i: ", i + 1);
    }
    printf("%s\n", winner(players));
}

int score(string word)
{
    int total_score = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        char c = toupper(word[i]);
        total_score += points(c);
    }
    return total_score;
}

int points(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O' || c == 'R' ||
        c == 'S' || c == 'T' || c == 'U')
    {
        return 1;
    }
    else if (c == 'D' || c == 'G')
    {
        return 2;
    }
    else if (c == 'B' || c == 'C' || c == 'M' || c == 'P')
    {
        return 3;
    }
    else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
    {
        return 4;
    }
    else if (c == 'K')
    {
        return 5;
    }
    else if (c == 'J' || c == 'X')
    {
        return 8;
    }
    else if (c == 'Q' || c == 'Z')
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

string winner(string players[2])
{
    if (score(players[0]) > score(players[1]))
    {
        return "Player 1 wins!";
    }
    else if (score(players[0]) < score(players[1]))
    {
        return "Player 2 wins!";
    }
    else
    {
        return "Tie!";
    }
}
