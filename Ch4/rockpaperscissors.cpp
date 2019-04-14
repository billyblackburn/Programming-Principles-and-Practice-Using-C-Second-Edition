#include "std_lib_facilities.h"
/*
10. Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the
game do some research (e.g., on the web using Google). Research is a common task for
programmers. *********Use a switch-statement to solve this exercise. Also, the machine should give
random answers (i.e., select the next rock, paper, or scissors randomly). Real randomness is too
hard to provide just now, so just build a vector with a sequence of values to be used as “the next
value.” If you build the vector into the program, it will always play the same game, so maybe
you should let the user enter some values. Try variations to make it less easy for the user to
guess which move the machine will make next.
*/
//vector<string> answer = {"r", "p", "s"};
vector<char> answers =  {'r', 'p', 's'};
char reply;
char humanAnswer;

int gamesplayed = 0;
int cpuwin = 0;
int humanwin = 0;





int main()
{
    while(cpuwin + humanwin < 5 ){
        ++gamesplayed;
    cout << "Enter rock, paper, or scissor: \n";
    cin >> reply;
    for(int x = 0; x < answers.size(); ++x)
    {
        if(answers[x] == reply)
        humanAnswer = answers[x];   
    }
    srand((time(NULL)));
    char cpuAnswer = answers[rand() % 3];
    cout << "You put: " << humanAnswer << '\n';
    cout << "Computer put: " << cpuAnswer << '\n';
    
    if(humanAnswer == answers[0])
    {// If human choose rock
        switch (cpuAnswer)
        {
            case 'r':
                cout << "Rock vs rock ties \n";
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 'p':
                cout << "Paper beats rock, Cpu wins \n";
                ++ cpuwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 's':
                cout << "Rock beats scissors, Human wins! \n";
                ++ humanwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
        }
    }
    if(humanAnswer == answers[1])
    {// If human choose paper
        switch (cpuAnswer)
        {
            case 'r':
                cout << "Paper beats rock, Human wins! :-) \n";
                ++ humanwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 'p':
                cout << "Paper ties paper \n";
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 's':
                cout << "Scissors beat paper, CPU wins \n";
                ++ cpuwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
        }
    }
    if(humanAnswer == answers[2])
    {// If human choose scissors
        switch (cpuAnswer)
        {
            case 'r':
                cout << "Rock beats scissors, CPU wins \n";
                ++ cpuwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 'p':
                cout << "Scissors beat paper, Human wins! \n";
                ++ humanwin;
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
            case 's':
                cout << "Scissors ties scissors \n";
                cout << "CPU: " << cpuwin << "\tHuman: " << humanwin << '\n';
                break;
        }
    }
    }
}


        
   
    
        
          

