#include <stdio.h>

void main()
{
    int counter=0;
    int noOfSubjects;
    double grade=0,sum=0,average=0;
    
    printf("This program calculates the average of as many grades you wish to enter.\n");
    
    printf("\nFirst, enter the number of grades to process: ");
    scanf("%d",&noOfSubjects);
    
    printf("\nNow enter the %d grades to be averaged.\n",noOfSubjects);
    
    while(counter < noOfSubjects)
    {   
        counter++;
        
        do
        {
            printf("Enter Grade #%d: ",counter);
            scanf("%lf",&grade);
            
            if(grade < 1.0 || grade > 5)
            printf("*** Invalid entry. Grade must be from 1.0 to 5.0 ***\n");
        }
        while (grade < 1 || grade > 5);
        
        sum = sum + grade;
    }
    
    average=sum/noOfSubjects;
    
    printf("\nThe average of the %d grades entered is %.1lf\n",noOfSubjects,average);
    
    average=average*10;
        
    switch((int)average)
    {
        case 10 ... 15:
            printf("\nYou have a letter grade of: A");break;
        case 16 ... 20:
            printf("\nYou have a letter grade of: B");break;
        case 21 ... 25:
            printf("\nYou have a letter grade of: C");break;
        case 26 ... 30:
            printf("\nYou have a letter grade of: D");break;
        case 31 ... 50:
            printf("\nYou have a letter grade of: F");break;
        default:
            printf("\n*** Invalid entry. Grade must be from 1.0 to 5.0 ***");break;
    }
}



