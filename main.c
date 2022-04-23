#include<stdio.h>
#define CANDIDATE1 "KALPANA KATTA"
#define CANDIDATE2 "KAMALESH YADAV"
#define CANDIDATE3 "VIJAYENDRASIMHA"
#define CANDIDATE4 "ROCKY BHAI"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;    
printf("\n\n **** \tPlease choose your Candidate\t ****\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; 
    break;
    case 2: votesCount2++; 
    break;
    case 3: votesCount3++; 
    break;
    case 4: votesCount4++; 
    break;
    case 5: spoiledtvotes++; 
    break;
    default: printf("\n Error: Wrong Choice !! Please try again");
             //hold the screen
             getchar();
}
printf("\n YOUR VOTE IS SUCCESSFULLY CASTED !!");
printf("\n THANK YOU\n");
}

void votesCount(){
printf("\n\n ***** \tVoting Statics\t *****");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE1, votesCount2);
printf("\n %s - %d ", CANDIDATE1, votesCount3);
printf("\n %s - %d ", CANDIDATE1, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  ***** \tLeading Candiate\t *****\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("THE LEADING CANDIDATE IS [%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("THE LEADING CANDIDATE IS [%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("THE LEADING CANDIDATE IS [%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("THE LEADING CANDIDATE IS [%s]",CANDIDATE4);
    else
    printf("-----\t Warning !!! No-win situation \t----");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n\n *******\t\t WELCOME TO ELECTIONS 2022 \t\t*******");
printf("\n\n Please Select an option");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find the leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();
break;
case 2: votesCount();
break;
case 3: getLeadingCandidate();
break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}
