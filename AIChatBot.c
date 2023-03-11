//Program to make a basic chatbot
//including various header file required in the programe
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>//header file for time

char user_input[10000];//specifying the char input upto 10000

int main()
{
    system("cls");//clear the terminal
    printf("\t\t\t\t\t\tAICHATBOT\n");
    printf("\t\t\t\t\tWelcome to AIChatBot\n");
    while(1)//Runs a infinite loop
    {
        printf("User ==> ");
        gets(user_input);
        if(strcmp(user_input,"exit") == 0)//comparing the two strings
        {
            system("cls");
            printf("bot ==> ok bye Sir\n");
            printf("\t\t\t\t\tAI ChatBot left the chat\n");
            getch();//keeps the program open until pressed any key
            break;
        }
        else if(strcmp(user_input,"hi") == 0)
        {
            printf("Hi Sir\n");
        }
        else if(strcmp(user_input,"what are you doing") == 0)
        {
            printf("answering your question sir\n");
        }
        else if(strcmp(user_input,"what is your name") == 0)
        {
            printf("My name is AIChatBot\n");
        }
        else if(strcmp(user_input,"who created you") == 0)
        {
            printf("I was created by aryansh05\n");
        }
        else if(strcmp(user_input,"what can you do") == 0)
        {
            printf("Whatever you tell Sir\n");
        }
        else if(strcmp(user_input,"who are you") == 0)
        {
            printf("i am a chatbot made by aryansh05 to make your life easier.\n");
        }
        else if(strcmp(user_input,"thank you") == 0)
        {
            printf("thank you Sir for using me\n");
        }
        else if(strcmp(user_input,"how are you") == 0)
        {
            printf("I am fine Sir\n");
        }
        else if(strcmp(user_input,"what came first hen or egg") == 0)
        {
            printf("with amniotic eggs showing up roughly 340 million or so years ago, and the first chickens evolving at around 58 thousand years ago at the earliest, it's a safe bet to say the egg came first. Eggs were around way before chickens even existed.\n");
        }
        else if(strcmp(user_input,"open chrome") == 0)
        {
            printf("Ok Sir, opening chrome browser\n");
            system("start chrome");//opens chrome browser for you
        }
        else if(strcmp(user_input,"open my email") == 0)
        {
            printf("Ok Sir, opening gmail\n");
            system("start https://www.google.com/gmail/about/");//opens email
        }
        else if(strcmp(user_input,"open firefox") == 0)
        {
            printf("Ok Sir, opening firefox browser\n");
            system("start firefox");//opens firefox
        }
        else if(strcmp(user_input,"open notepad") == 0)
        {
            printf("Ok Sir, opening notepad\n");
            system("start notepad");//opens notepad
        }
        else if(strcmp(user_input,"open cmd") == 0)
        {
            printf("Ok Sir, opening cmd terminal\n");
            system("start cmd");//opens cmd terminal 
        }
        else if(strcmp(user_input,"time") == 0)
        {
            time_t s, val = 1;
            struct tm* current_time;//specified the variable
            s = time(NULL);
            current_time = localtime(&s);//printing time in hour and minute and seconds
            //prints 2 integer in time in hours, minute and seconds
            printf("bot ==> %02d:%02d:%02d\n",current_time -> tm_hour,current_time -> tm_min, current_time -> tm_sec);
        }
        else if(strcmp(user_input,"open youtube") == 0)
        {
            printf("Ok Sir, opening youtube\n");
            system("start https://youtube.com");//opens youtube
        }
        else if(strcmp(user_input,"open vtop") == 0)
        {
            printf("Ok Sir, opening vtop\n");
            system("start https://vtop.vit.ac.in/vtop/open/page");//opens vtop 
        }
        else if(strcmp(user_input,"open w3school") == 0)
        {
            printf("Ok Sir, opening w3schools\n");
            system("start https://www.w3schools.com/");//opens w3school
        }
        else if(strcmp(user_input,"play music") == 0)
        {
            printf("Ok Sir, opening spotify\n");
            system("start spotify");//opens spotify if you have it in you system
        }
        else if(strcmp(user_input,"projects") == 0)
        {
            printf("Ok Sir, opening github\n");
            system("start https://github.com/login");//opens github
        }

    }

    return 0;
}
