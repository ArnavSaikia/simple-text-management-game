#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct player{
    char name[50];
    int funds;
}PLAYER;

/*int getROI(){
    srand(time(0));
    int roi=(rand()%10)+1;
    return roi;
}*/

void main(){
    PLAYER player;
    player.funds=100000;
    char choice;
    int options,i=0,roi=0,cumulativeroi=0;
    int finalchoices[5]={0,0,0,0,0};
    srand(time(0));

    start:
    printf("********************************WELCOME TO CEO SIMULATOR********************************\n");
    printf("Please Enter Your Name: ");
    scanf("%[^\n]s",player.name);
    fflush(stdin);                                          //choice input not going thru properly without it
    printf("\nHi %s. I'm Morgan, your PA. Are you doing well today?(Y/N)\n> ");
    scanf("%c",&choice);
    fflush(stdin);
    //printf("%c",choice);

    //try and implement a do while statement here for the case when user inputs other than Y or N

    //First Gibberish Dialogue
    if(choice=='Y') printf("\nI'm glad to hear that. \n");
    
    else if(choice=='N') printf("\nI'm very sorry to hear that. Let's talk about it this evening? However, I apologize but we have to talk business right now\n");

    else {printf("\n***come on you know i'm not programmed for that reply. very rude. restarting the game***\n");
            goto start;}
    

    //Common Dialogue
    printf("\nImportant day ahead of us today. Our company is barely profitable. We need to make some investments strategically to get good returns otherwise we'll go under!");
    printf("\nHere's a list of investment options that we've prepared for you. Our current available funds are $%d. A brief portfolio of every options is attatched. Please choose wisely",player.funds);
    //Options 1 and 2
    printf("\n\n1. Social Media Advertisement:\nWe invest in a dedicated social media team. We will lose hefty amount of money but this will be our bid for a loss leader strategy. We hope to garner a loyal customer base in exchange of running a loss initially.\nCost:$45000\n2. Renovate Existing Manufacturing Units:\nThis is another highly expensive option. Renovating all the existing manufacturing units will cost more than setting up a new one. We run the risk of not getting enough ROI in face of the reward being a significantly higher production.\nCost:$55000");
   
    printf("\n3. Opening New Manufacturing Unit");
    printf("\nThis will be relatively economic for us but again will run a risk of being a loss making asset in case the production quantity is not up to par. However, the new equipment brought through will increase product quality significantly");
    printf("\nCost:$40000");

    printf("\n4. Laying Employees Off and Purchasing Better Equipment");
    printf("\nWe will need to lay off nearly a third of our workforce but will utilise those funds to purchase better automated machinery. This is a guaranteed way to improve production");
    printf("\nCost:$15000");

    printf("\n5. Giving Away to Charity");
    printf("\nThis would probably be the most foolish idea to trust in. We will give away part of our already limited funds in goodwill. However, this has a chance of catching the public eye and garnering huge popularity for the company");
    printf("\nCost:$20000");

    //Taking Choices
    printf("\n\nNow that you've gone through the options. What do you want to choose?(1/2/3/4/5/ 0 to exit)");


    do{
        printf("\n> ");
        scanf("%d",&options);
        switch(options){
            case 1:{
                if((player.funds-45000)>=0){
                    player.funds=player.funds-45000;
                    printf("\nCurrent Funds Balance:$%d",player.funds);
                    finalchoices[i]=1;
                    i++;
                }
                else printf("\nInsufficient Balance");
                break;
            }

            case 2:{
                if((player.funds-55000)>=0){
                    player.funds=player.funds-55000;
                    printf("\nCurrent Funds Balance:$%d",player.funds);
                    finalchoices[i]=2;
                    i++;
                }
                else printf("\nInsufficient Balance");
                break;
            }

            case 3:{
                if((player.funds-40000)>=0){
                    player.funds=player.funds-40000;
                    printf("\nCurrent Funds Balance:$%d",player.funds);
                    finalchoices[i]=3;
                    i++;
                }
                else printf("\nInsufficient Balance");
                break;
            }

            case 4:{
                if((player.funds-15000)>=0){
                    player.funds=player.funds-15000;
                    printf("\nCurrent Funds Balance:$%d",player.funds);
                    finalchoices[i]=4;
                    i++;
                }
                else printf("\nInsufficient Balance");
                break;
            }

            case 5:{
                if((player.funds-20000)>=0){
                    player.funds=player.funds-20000;
                    printf("\nCurrent Funds Balance:$%d",player.funds);
                    finalchoices[i]=5;
                    i++;
                }
                else printf("\nInsufficient Balance");
                break;
            }

            case 0:{
                player.funds=0;
                break;
            }

            default:{
                printf("\nThat's not even an option bro. Retry");
                break;
            }

        }
    }
    while(!player.funds<=0);

    //Producing the resultant ROI from finalchoices[] and giving players assessment on how good their decisions were
    printf("\n\n1 year passes by.............");

            //running a for loop to go thru each choice selected and update the ROI
    for(int j=0;j<5;j++){
        switch(finalchoices[j]){
            case 1:{
                roi=(rand()%10)+1;
                if(roi>5){
                    printf("\n>You had invested in a social media team. You made a great decision. The social media team bled money but were successfully able to bring hype around the brand and brought in much needed sponsorships which resulted in a net profit.\nROI: %d0 percent",roi);
                }
                else{
                    printf("\n>Investing in a social media team was a terrible decision! We were unable to capture any significant audience and had to lose money that could otherwise have been used on improving production.\nROI: %d0 percent",roi);
                }
                cumulativeroi+=roi;
                break;
            }

            case 2:{
                roi=(rand()%10)+1;
                if(roi>5){
                    printf("\n>Your decision of rennovating existing manufacturing units was an excellent one. Despite the hefty capital invested, we were able to quickly compensate and even profit from the improved quantity of production.\nROI: %d0 percent",roi);
                }
                else{
                printf("\n>Your decision of renovating existing manufacturing units was a costly one. A lot of costs were incurred but the production barely increased and only a slight improvement in quality was seen. This led to the company losing even more money.\nROI: %d0 percent",roi);
                }
                cumulativeroi+=roi;
                break;
            }

            case 3:{
                roi=(rand()%10)+1;
                if(roi>5){
                    printf("\n>Opening a new manufacturing unit helped the company a ton. We were able to massively increase the product quality. This was met with a positive response from the consumers.\nROI: %d0 percent",roi);
                }
                else{
                    printf("\n>A new manufacturing plant was not a wise risk. Significant funds were invested but we were not able to get the desired output from the plant to compensate the costs.\nROI: %d0 percent",roi);
                }
                cumulativeroi+=roi;
                break;
            }

            case 4:{
                roi=(rand()%10)+1;
                if(roi>5){
                    printf("\n>Laying employees off was a necessary evil. We got rid of unnecessary manpower and were able to sustain and even improve production through automated systems.\nROI: %d0 percent",roi);
                }
                else{
                    printf("\n>Laying employees off was a poor decision. We were met with negative criticism from the public for laying so many people off. This led to us losing consumer public popularity.\nROI: %d0 percent",roi);
                }
                cumulativeroi+=roi;
                break;
            }

            case 5:{
                roi=(rand()%10)+1;
                if(roi>5){
                    printf("\n>Charity might actually be the greatest virtue. The public greatly supported our efforts and we gained a lot of popularity. Well played on that one!\nROI: %d0 percent",roi);
                }
                else{
                printf("\n>As was anticipated, donating our already scarce funds was a poor decision. This act was swept under the public eye and we were unable to garner the popularity we were expecting from the public\nROI: %d0 percent",roi);
                }
                cumulativeroi+=roi;
                break;
            }

            case 0:{
                break;
            }
        }
    }

    //calculating final ROI to determine if player won or not
    if(cumulativeroi>20&&cumulativeroi<35) printf("\n\n\nGood job. You made rational decisions and we were able to save the company from going under. The board has agreed to let you keep your current position.");
    
    else if(cumulativeroi>35) printf("\n\n\nYou did a fantastic job! You saved the company from divesting and turned it around into a huge profit making asset. The board is considering promoting you. Congratulations!");
    
    else printf("\n\n\nYou were overall inefficient in your decisions unfortunately which costed the company money. I am sorry to say but our association is at an end as the board looks to find a new chairman! Farewell.");

    fflush(stdin);

    //asking if the player wants to play again
    printf("\n\nWould you like to try your luck again?(Y/N)\n>");
    scanf("%c",&choice);
    if(choice=='Y'){
        //reinitialize the variables
        player.funds=100000;
        i=0;roi=0;
        finalchoices[0]=0; finalchoices[1]=0; finalchoices[2]=0; finalchoices[3]=0; finalchoices[4]=0;
        cumulativeroi=0;
        system("cls");
        goto start;
    }
    printf("\n\nThank you for playing!!");
}