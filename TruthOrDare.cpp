#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start=1, ask1, quest, dares;
    char ans[250];


    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ Truth or Dare? ////////////////////////////////////////\n");
    printf("\t\t\t\tGame Start:\n");
    printf("\t\t(Enter '1' to start.)   (Enter '2' to exit.)\n\n");
    scanf("%d", &start);

    if(start != 1){
        printf("Thank you for playing the game. (😣)\n\n");
    }
    else
    {
        if(start == 1){
            printf("Truth(1) or Dare(0)?  ");
            scanf("%D", &ask1);
            if(ask1 == 1)
            {
            printf("You have picked Truth(%d)\n\n", ask1);
            }
            else
            printf("You have picked Dare(%d)\n\n", ask1);
        }

    }


    if(ask1 == 1)
    {
        printf("Pick a number from 1-10:  ");
        scanf("%d", &quest);
        if(quest == 1)
        {
            printf("What is the last lie you told?  ");
            scanf("%s", &ans);
        }
        else if(quest == 2)
        {
            printf("What is the craziest thing you have done on public transportation?  ");
            scanf("%s", &ans);
        }
        else if(quest == 3)
        {
            printf("If you met a Genie, what would your three wishes would be?  ");
            scanf("%s", &ans);
        }
        else if(quest == 4)
        {
            printf("If you could write anyone on Earth in for President of the Philippines, who would it be and why? ");
            scanf("%s", &ans);
        }
        else if(quest == 5)
        {
            printf("Have you ever peed in the pool?  ");
            scanf("%s", &ans);
        }
        else if(quest == 6)
        {
            printf("What app do you waste the most time on?  ");
            scanf("%s", &ans);
        }
        else if(quest == 7)
        {
            printf("Would you break up with your partner for $1 million?  ");
            scanf("%s", &ans);
        }
        else if(quest == 😎
        {
            printf("If you switched genders for a day, what would you do?  ");
            scanf("%s", &ans);
        }
        else if(quest == 9)
        {
            printf("What was the greatest day of your life?  ");
            scanf("%s", &ans);
        }
        else if(quest == 10)
        {
            printf("What is your biggest fear today?  ");
            scanf("%s", &ans);
        }
        else
            ;
    }
    else if(ask1 == 0)
    {
        printf("Pick a number from 1-10:  ");
        scanf("%d", &dares);

        if(dares == 1)
        {
            printf("Stand in front of your window and say 'Hi' to the people who passes by for 3 minutes.\n\n");
        }
        else if(dares == 2)
        {
            printf("Do a handstand for 1 minute.\n\n");
        }
        else if(dares == 3)
        {
            printf("Drink 2 full glasses of water consecutively.\n\n");
        }
        else if(dares == 4)
        {
            printf("Take a picture of yourself posing a smirk and post it on your story for a day.\n\n");
        }
        else if(dares == 5)
        {
            printf("Tell this to your parent 'Ma/pa, sorry po, buntis ako' (galingan mo umarte).\n\n");
        }
        else if(dares == 6)
        {
            printf("Video call someone on messenger and ask 'Anong paborito mong number sa electric fan?' if answered, end the call.\n\n");
        }
        else if(dares == 7)
        {
            printf("Unplug the Wifi/internet at home for 1 minute, if none you're safe.\n\n");
        }
        else if(dares == 😎
        {
            printf("Send a voice message of you singing a song to someone and ask them to rate it from 1 out of 10.\n\n");
        }
        else if(dares == 9)
        {
            printf("Set your cellphone language to Chinese for an hour\n\n");
        }
        else if(dares == 10)
        {
            printf("Do what you want, lucky.\n\n");
        }
        else
        {
            printf("Please input a number from 1-10");
        }
    }



    return 0;
}