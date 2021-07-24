#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you,char comp)      // this function decide the who will win
{
  //draw return =0 win return =1 lose return =-1
  if ( you==comp)
  { return 0;}

  if ( you =='s' && comp=='w')
  {
     return 1;
  }
  else if ( you== 's' && comp=='g')
  { return -1;}

  if ( you =='w' && comp=='g')
  {
     return 1;
  }
  else if ( you =='w' && comp=='s')
  { return -1;}

  if ( you =='g' && comp=='s')
  {
     return 1;
  }
  else if ( you =='g' && comp=='w')
  { return -1;}
}

int main()
{   char comp,you;
    int number;
    
     // letting the computer make random choice
    srand(time(0));
    number=rand()%100+1;
    // since our limits is from 1-100 we devide it into 3 parts
    if(number<33)
    comp='s';
    else if(number>33 && number<66)
    comp='w';
    else
    comp='g';
    
    //basic appreance
    printf(" *********** WELCOME To SnakeWaterGun *********** \n");
    printf("// RULES //\n-->Snake defeats water by drinking it\n-->Water deafeats gun by drowning it\n-->Gun defeats snake by killing it \n");
   
    printf(" S=snake  W=water  G=gun\n Enter your choice: ");
    scanf("%c",&you);
    int result= SnakeWaterGun(you,comp) ;
    printf(" Your choice is %c and computer choose %c. \n", you,comp);
   

    //int result= SnakeWaterGun(you,comp) ;
     if(result ==0)
     {printf(" Its a draw \n"); }
     else if (result == 1)
     {printf(" Hurray !! You won \n ");}
     else
     printf( " You lost,Try again \n ");

    return 0;

}