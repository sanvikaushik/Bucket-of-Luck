#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int rollDie() {
    int x = rand() % (6) + 1;
    return x;
}
void delay(int time1, int time2, int time3, int time4) {
    for (int c = time1; c < time3; c++) {
       for (int d = time2; d < time4; d++) {
           c+d;
       }
    }
}

void printL() {
        int i, j, k, l;
        printf("\n\n");

    for (i=0; i<=11;i++) {
        printf("    ");
        for (j=0; j<=3; j++) {
            printf("*");
        }
        
        for (k=1; k<=4; k++) {
            if(i>9 && i<=11)
                printf("**");
            else {
                printf(" ");
            }
        }
        
    printf("\n");
   }
}

void printU() {
        int i, j, k, l;
        printf("\n\n");

    for (i=0; i<=11;i++) {
        printf("                      ");
        for (j=0; j<=2; j++) {
            printf("*");
        }
        
        for (k=1; k<=2; k++) {
            if(i>9 && i<=11)
                printf("**");
            else {
                printf("   ");
            }
        }
        for (int l=0; l<=2; l++) {
            printf("*");
        } 

    printf("\n");
   }
}

void printC() {
    int i, j, k; 
    printf("\n\n");
    for(i=0; i<=11; i++)
    {
        printf("                                      ");                                           

        for (j=0; j<2; j++) {
            printf("*");
        }
        
        for (k=1; k<=5; k++) {
            if (i>=0 && i<2 || i>9 && i<=11) {
                printf("**");
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }   
}

void printK() {
    int i, j, k, count=6; 
    printf("\n\n");
    for (i=0;i<=11;i++) 
    {
        printf("                                                            "); 
        for(j=0;j<2;j++) {
            printf("*");
        }
        for(k=0;k<=6;k++) 
        {
            if(k==count)
            {
                printf("***");
            }
            else {
                printf("  ");
            }
        }
        if (i<=5) 
        {
            count--;
        }
        else if (i<=11) {
            count++;
        }
    printf("\n");
    }
}

void homescreen () {
    printf("\t\t\tWelcome to the Bucket O'\n\n");
    delay(0, 4, 2500, 190000); 
    //printf("\nLuck");
    
    system("clear"); 
    printL();
    delay(0, 4, 2500, 190000); 
    
    system("clear"); 
    printU();
    delay(0, 4, 2500, 190000); 
    
    system("clear"); 
    printC();
    delay(0, 4, 2500, 190000); 
    
    system("clear"); 
    printK();
    delay(0, 5, 2500, 190000); 
    
    system("clear");
    
    printf("\n\n Press\nRules: Press enter to skip/continue\nHere are the rules"); //show dots
    delay(0, 5, 2500, 190000); 
    printf("\n__________________\n");
    //printf("\nPress enter to skip/continue");
    getchar();
}

void roll(int x) {
    if (x==1) {
        printf("\n|      |  ");
        printf("\n|  \U000029BF   |    ");
        printf("\n|      |  ");
    }
    else if (x==2 || x==3) {
       printf("\n|    \U000029BF | ");
        if (x==2) {
            printf("\n|      |  ");
        }
        else {
            printf("\n|  \U000029BF   |  ");
        }
        printf("\n|\U000029BF     |  ");
    }
    
    else {
        printf("\n|\U000029BF   \U000029BF |  ");
        if (x==5) {
           printf("\n|  \U000029BF   |  ");
        }
        else if (x==6) {
           printf("\n|\U000029BF   \U000029BF |   ");
        }
        else {
            printf("\n|      |   ");
        }
        printf("\n|\U000029BF   \U000029BF |  ");
    }
    printf("\n|______|  ");
}

int valid (int optionNum) {
    do {
    scanf("%d", &optionNum);
        if (optionNum!=0 && optionNum!=1 && optionNum!=2) {
            printf("Sorry that's invalid. Please try again!\n");
            delay(0, 5, 2500, 190000); 

            system("clear");
            homescreen();
        }
    } while (optionNum!=0 && optionNum!=1 && optionNum!=2); 
    system("clear");
    return optionNum;
}

void rules () {
    printf("1. You must play in cents. "); 
    delay(0, 5, 2500, 190000); 
}

void payoutBettingOpt() {
    printf("\nBets");
}   

void betQuestions(int someBetNumOrMon, int iHighestRange, int iLowestRange, int iWallet, int iRollsLeft, int iBetNum) {
            //scanf("%d", &someBetNumOrMon);
            if (someBetNumOrMon>iHighestRange || someBetNumOrMon<=iLowestRange) {
                printf("INVALID! Sorry, please try again.\n");
                getchar(); 
                delay(0, 5, 2500, 190000); 
                printf("\n\t\t\t\tRolls left ==> %d", iRollsLeft);
                system("clear");
                printf("\n_______________________________________________________________________________");
                printf("\nYou currently have $%d.00 in your wallet.", iWallet);
                if (iHighestRange == iWallet) {
                    printf("\n\nI choose bet #%d", iBetNum);
                }
                //reprint everything
            } //while (someBetNumOrMon>iHighestRange || someBetNumOrMon<=iLowestRange); 
}


void printWonOrLost (int payout, int iMoneyBet) {
        if (payout<1) {
         printf("\n\n( ͡❛ ⏥ ͡❛)_/¯ $%d", iMoneyBet);
         }
         else if (payout==10) {
         printf("\n\nToday is your lucky day! You rolled 3 correct dice! +$%d", iMoneyBet); 
         }
         else {
            printf("\n\nNice ( ͡❛ ͜ʖ ͡❛) +$%d", iMoneyBet);
         }
   // delay(0, 100, 19000, 190000); 
}

int walletUpdate(int iMoneyBet, int iWallet, int payout) {
        iMoneyBet = payout * iMoneyBet; 
        printWonOrLost(payout, iMoneyBet); 
        //delay(0, 180, 19000, 190000);
        return iWallet+iMoneyBet;
}



int main() {
    
    int rollsSum; 
    int iRollsLeft=5;
    int iPlayOrRulesOrPayout;
    int iRollWinOrLose[15];
    int iWallet = 100; 
                int iRollsLimit = 0;
    int randRoll;
                int iBetNum;
                int iMoneyBet; 
    int iTries = 0; //?
    
    int rolls[15]; 
        int iStartElement = 0; 
                    int iEndElement = 3; 
    char ch;
    int iHomeScreenreturn = 3;
    int iMoneyWonOrLost;
    
    srand((unsigned) time(NULL)); 
    
    homescreen(); 
    
        printf("\n\nHow much can you make in 5 bets? Press the enter key if you dare...");
        delay(0, 4, 2500, 190000); 
        system("clear"); //fix later

do {    
        getchar();
        printf("\n\t\t\t\tRolls left ==> %d", iRollsLeft);
        //delay(0, 100, 19000, 190000); 

        system("clear");
        printf("\n_______________________________________________________________________________");
        printf("\nYou currently have $%d.00 in your wallet.", iWallet); //make pretty and add delay after
        printf("\nBets");
        //payoutBettingOpt();
        printf("\nPress enter once you're done...");

        do {
            printf("\n\nI choose bet #");
        delay(0, 4, 2500, 190000); 
            scanf("%d", &iBetNum);
            betQuestions(iBetNum, 9, 0, iWallet, iRollsLeft, iBetNum); 
    
        } while (iBetNum>9 || iBetNum<=0); 
        
        do {
            printf("\n\nI will bet $");
            scanf("%d", &iMoneyBet);
            betQuestions(iMoneyBet, iWallet, 0, iWallet, iRollsLeft, iBetNum); 
    
        } while (iMoneyBet>iWallet || iMoneyBet<=0); 
        
    
    //iPlayOrRules = homescreen(iPlayOrRules); 
    
    printf("\nRolls: ");
    system("clear");
    delay(0, 10, 190, 19000); 

    getchar(); 

    int rollFrequency = 0; 
    
    for (int i=iStartElement; i<iEndElement; i++) {
        randRoll = rollDie();
        rolls[i] = randRoll;
        printf("%d ", rolls[i]);
        printf("\n ______");
        delay(0, 4, 2500, 190000); 
        roll(randRoll);
      
        rollsSum += randRoll; 
        if (randRoll==iBetNum) { //for single rolls iBetNum is same as number
            rollFrequency++;
    	} 
    }
    
        iStartElement = iEndElement; 
        iEndElement+=3;
        

        if (iBetNum<7) {
            if (rollFrequency==0) {
                iWallet = walletUpdate(iMoneyBet, iWallet, -1);
            }
            else if (rollFrequency==1) {
                iWallet = walletUpdate(iMoneyBet, iWallet, 1);
            }
            else if (rollFrequency==2) {
                iWallet = walletUpdate(iMoneyBet, iWallet, 2);
            }
            else {
                iWallet = walletUpdate(iMoneyBet, iWallet, 10);
            }
        }
        else {
            int iBetNumSum = iBetNum + 3;
                if (iBetNum!=9) {
                    
                    if (iBetNumSum==10) {
                        if (rollsSum>iBetNumSum) {
                            iWallet = walletUpdate(iMoneyBet, iWallet, 1);

                        }
                        else {
                            iWallet = walletUpdate(iMoneyBet, iWallet, -1);
                        }
                    }
                    
                    else {
                        if (rollsSum<iBetNumSum) {
                            iWallet = walletUpdate(iMoneyBet, iWallet, 1);
                        }
                        else {
                            iWallet = walletUpdate(iMoneyBet, iWallet, -1);
                        }
                    }
                }
                
                else {
                    if (rollsSum<8 || rollsSum>12) {
                        iWallet = walletUpdate(iMoneyBet, iWallet, 1);
                    }
                    else {
                        iWallet = walletUpdate(iMoneyBet, iWallet, -1);
                    }
                //8 or 12 one
                }
        }
            printf("\nPress enter to proceed...");

        
        
        /*if (iRollsLimit<5) {
            if (iWallet == 0) {
            break;
            } 
        }*/
        
        iRollsLimit++;
        iRollsLeft--;
        
    } while (iRollsLimit!=5 && iWallet > 0);
    
    getchar();
    system("clear");

   
    if (iRollsLimit == 0 && iWallet == 0) {
        printf(" Aw. Better luck next time! Ran out of money just in time..");
    }
    else if (iWallet == 0) {
        printf(" No more money left. Better luck next time...😔");
    }
    else {
    printf(" Congrats, you made it out! You have ended with $%d.00 in your wallet...", iWallet);
    }
    printf("\n\n\tResults:\nRolls survived: %d\nRoll frequencies:\n", iRollsLimit); 
    
    
    for (int x = 0; x<=15; x++) {
      int Rollcounter = 1;
      if (rolls[x] == 0) {
        x++;
      }
      for (int d = x+1; d<15; d++) { 
            if (rolls[x] == rolls[d]) {
              Rollcounter++;
              rolls[d] = 20;
            }
      }
      if (rolls[x] != 20 && rolls[x] != 0 && rolls[x] < 7 && rolls[x] > 0) { 
        printf("\n%d ", rolls[x]); 
        for (int g = 0; g < Rollcounter; g++) {
            printf(" [*]");
        }
       } 
    }
    getchar();
     for (1;1;1) {
    printf("\n GAME OVER\n GAME OVER\n GAME OVER\n\n"); // a little suprise
    }
   
    
    } 


