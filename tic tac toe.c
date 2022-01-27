#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
int drawboard();
int checkwin_for_player1();
int checkwin_for_player2();
int  square[10]={0,0};
int main()
{
    int i,j,k;
    i=0;
    int player1,player2;
    player1=1;
    player2=1;
    while(i<9)
    {
        int flag=1;

            if(i%2==0)
        {
            while(flag==1)
        {
            system("cls");
            drawboard();
            printf("\nPLAYER 1 :: %d move \n",player1);
            scanf("%d",&k);
            if(k<0 || k>9)
            {
                printf("wrong choice please make a legal move \n");
                continue;
            }
            if(square[k-1]==0)
            {
                player1++;
               square[k-1]=1;
               system("cls");
               drawboard();
               checkwin_for_player1();
               flag=0;
            }
        else
        {
            printf("\n already taken please make a legal move \n");
            printf("\n\n\n");
            printf("\n press any key to continue\n");
            getc(stdin);
        }
        }
        }
        if(i%2==1)
        {
        while(flag==1)
        {
            system("cls");
            drawboard();
            printf("\n PLAYER 2 :: %d move \n",player2);
            scanf("%d",&k);
            if(k<0 || k>9)
            {
                printf("wrong choice please make a legal move \n");
                getc(stdin);
                continue;
            }
            if(square[k-1]==0)
            {
               player2++;
               flag=0;
               square[k-1]=2;
               system("cls");
               drawboard();
               checkwin_for_player2();
            }
            else
                {
                    printf("\n Already taken please make a legal move\n");
                    printf("\n\n\n");
                    printf("\n press any key to continue\n");
                    getc(stdin);
                }
        }
    }
    i++;
    }
    return 0;
}
int drawboard()
{
    int size=sizeof(square)/sizeof(int);
 //   printf("%d\n\n\n",size);
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    for(int i=0;i<size-1;i++)
    {
        printf("\t\t\t\t\t\t %d \t||",square[i]);
        if((i+1)%3==0)
        {
            if(i==size-2)
            {
                printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                continue;
            }
            printf("\n--------------------------------------------------------||------------------------------------------------------||------------------------------------------------------||------------------");
        }
    }
    return 0;

}
int checkwin_for_player1()
{
    system("cls");
    int start,stop;
    int money;
/*


[ 1  2  3  ]
[ 4  5   6 ]
[ 7  8   9 ]
[ 1  4   7 ]
[ 2  5   8 ]
[ 3  6   9 ]
[ 1  5   9 ]
[ 3  5   8 ]


*/
if(square[0]==1 && square[1]==1 && square[2]==1 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}
if(square[3]==1 && square[4]==1 && square[5]==1 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[6]==1 && square[7]==1 && square[8]==1 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[0]==1 && square[3]==1 && square[6]==1 )
{
    printf("player 1 wins \n");
    money=10000;
    printf("you win %d",money);
}

if(square[1]==1 && square[4]==1 && square[7]==1 )
{
    printf("player 1 wins \n");
    money=10000;
    printf("you win %d",money);
}

if(square[2]==1 && square[5]==1 && square[8]==1 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[3]==1 && square[6]==1 && square[9]==1 )
{
    printf("player 1 wins \n");
    money=10000;
 //   printf("you win %d",money);
}

if(square[1]==1 && square[5]==1 && square[9]==1 )
{
    printf("player 1 wins \n");
    money=10000;
 //   printf("you win %d",money);
}

if(square[3]==1 && square[5]==1 && square[7]==1 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}
if(money!=10000)
    return 0;
int temp=money;
money=90;
while(money%49!=0)
{
printf("\t\t\t\t\t\t\tplayer 1 won $$ \t%d\t $$ dollars\n",temp);
money--;
}
if(temp==10000)
{
    getch();
    exit(0);
}
return 0;
}

int checkwin_for_player2()
{
    system("cls");
    int start,stop;
    int money;
/*


[ 1  2  3  ]
[ 4  5   6 ]
[ 7  8   9 ]
[ 1  4   7 ]
[ 2  5   8 ]
[ 3  6   9 ]
[ 1  5   9 ]
[ 3  5   8 ]


*/
if(square[0]==2 && square[1]==2 && square[2]==2 )
{
    printf("player 2 wins \n");
    money=10000;
  //  printf("you win %d",money);
}
if(square[3]==2 && square[4]==2  && square[5]==2 )
{
    printf("player 2 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[6]==2 && square[7]==2 && square[8]==2 )
{
    printf("player 2 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[1]==2 && square[4]==2 && square[7]==2 )
{
    printf("player 2 wins \n");
    money=10000;
    printf("you win %d",money);
}

if(square[2]==2 && square[5]==2 && square[8]==2 )
{
    printf("player 2 wins \n");
    money=10000;
  //  printf("you win %d",money);
}

if(square[3]==2 && square[6]==2 && square[9]==2 )
{
    printf("player 2 wins \n");
    money=10000;
 //   printf("you win %d",money);
}

if(square[1]==2 && square[5]==2 && square[9]==2 )
{
    printf("player 2 wins \n");
    money=10000;
 //   printf("you win %d",money);
}

if(square[3]==2 && square[5]==2 && square[7]== 2 )
{
    printf("player 1 wins \n");
    money=10000;
  //  printf("you win %d",money);
}
if(money!=10000)
    return 0;
int temp=money;
money=90;
while(money%49!=0)
{
printf("\t\t\t\t\t\t\tplayer 2 won $$ \t%d\t $$ dollars\n",temp);
money--;
}
if(temp==10000)
{
    getch();
    exit(0);
}
return 0;
}

