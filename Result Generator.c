#include<stdio.h>
#include<stdlib.h> //for clear screen//
//global variable//
int credit = 0,sum_credit=0,choice,choice2,i,pass_sem;
float sgpa = 0,sum_num=0,all_num=0,t_cgpa=0, sem[12];
char subj[20];
void manu()
{
    printf("\n\n\n\t\t\t\t***RESULT Generator***\n\n\n");
    printf("1.Calculate SEMISTER Result:\n\n");
    printf("2.Calculate CGPA Result:\n\n");
    printf("3.About.\n\n");
    printf("Enter The Serial Number which You want to Calculate:\n\n");
    printf("Example:If You want to Calculate Semester Result Press:1\n\n");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)
    {
        semister();
    }
    else if(choice==2)
    {
        cgpa();
    }
    else if(choice==3)
    {
        about();
    }
    else
    {
        printf("Invalid Input!!try again.");
    }
    manu();
    printf("\n");
}
void semister()
{
    printf("Select Semester:\n\n");
    printf("Example:If You want to Calculate 1st Semester Result Press:1\n\n");
    printf("1.1st Semester:\n\n");
    printf("2.2nd Semester:\n\n");
    printf("3.3rd Semester:\n\n");
    for(i=4; i<=12; i++)
    {
        printf("%d.%dth Semester:\n\n",i,i);
    }
    scanf("%d",&choice2);
    system("cls");
    if(choice2==1)
    {
        printf("\n\n\n\t\t\t\t*****1st SEMISTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-112:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-112:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4.00;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit MAT-111:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade MAT-111:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit ENG-113:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade ENG-113:\n");
        scanf("%s",&subj);
        if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit PHY-113:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade PHY-113:\n");
        scanf("%s",&subj);
        if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit PHY-114:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade PHY-114:\n");
        scanf("%s",&subj);
        if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit GED-111:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade GED-111:\n");
        scanf("%s",&subj);
        if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("1st Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice);
        system("cls");
        manu();
    }
    else if(choice2==2)
    {
        printf("\n\n\n\t\t\t\t*****2nd SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter course credit CSE-122:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-122:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-123:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-123:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit MAT-121:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade MAT-121:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit ENG-123:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade ENG-123:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-124:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-124:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit GED-121:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade GED-121:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("2nd Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==3)
    {
        printf("\n\n\n\t\t\t\t*****3rd SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter course credit CSE-131:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-131:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-132:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-132:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-133:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-133:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-134:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-134:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-135:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-135:\n");
        scanf("%s",&subj);
       if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit MAT-131:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade MAT-131:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("3rd Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==4)
    {
        printf("\n\n\n\t\t\t\t*****4th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter course credit CSE-212:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-212:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-213:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-213:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-214:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-214:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-215:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-215:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit GED-201:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade GED-201:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit MAT-211:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade MAT-211:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("4th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==5)
    {
        printf("\n\n\n\t\t\t\t*****5th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter course credit CSE-221:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-221:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-222:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-222:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit STA-133:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade STA-133:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-224:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-224:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-225:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-225:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("5th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==6)
    {
        printf("\n\n\n\t\t\t\t*****6th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter course credit CSE-231:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-231:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-232:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-232:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-233:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-233:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter course credit CSE-234:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-234:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-235:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-235:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("6th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==7)
    {
        printf("\n\n\n\t\t\t\t*****7th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-311:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-311:\n");
        scanf("%s",&subj);
       if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-312:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-312:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-313:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-313:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-314:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-314:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit GED-321:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade GED-321:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("7th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==8)
    {
        printf("\n\n\n\t\t\t\t*****8th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-321:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-321:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-322:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-322:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-323:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-323:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-324:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-324:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit ECO-314:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade ECO-314:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("8th Semester Result=%.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==9)
    {
        printf("\n\n\n\t\t\t\t*****9th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-331:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-331:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-332:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-332:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-333:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-333:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-334:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-334:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit ACT-301:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade ACT-301:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("9th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==10)
    {
        printf("\n\n\n\t\t\t\t*****10th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-412:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-412:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-413:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-413:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-414:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-414:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-415:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-415:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-417:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-417:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-418:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-418:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("10th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==11)
    {
        printf("\n\n\n\t\t\t\t*****11th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-421:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-421:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-422:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-422:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-423:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-423:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-450:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-450:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        printf("Enter credit CSE-499:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-499:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("11th Semester Result= %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Menu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else if(choice2==12)
    {
        printf("\n\n\n\t\t\t\t*****12th SEMESTER INPUT****:\n\n\n");
        printf("\n\nExample Credit: 3 & Sample Grade: A+\n\n");
        printf("Enter credit CSE-433:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-433:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num ;
        printf("Enter credit CSE-498:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-498:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        printf("Enter credit CSE-499:\n");
        scanf("%d",&credit);
        sum_credit += credit;
        printf("Enter grade CSE-499:\n");
        scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        {
            sum_num = credit*4;
        }
        else if(subj[0]== 'A' || subj[0]=='a')
        {
            sum_num = credit*3.75;
        }
        else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        {
            sum_num = credit*3.50;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        {
            sum_num = credit*3.25;
        }
        else if(subj[0] == 'B' || subj[0] =='b')
        {
            sum_num = credit*3.00 ;
        }
        else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        {
            sum_num = credit*2.75;
        }
        else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        {
            sum_num = credit*2.50;
        }
        else if (subj[0] == 'C' || subj[0] == 'c')
        {
            sum_num = credit*2.25;
        }
        else if (subj[0] == 'D' || subj[0] == 'd')
        {
            sum_num = credit*2.00;
        }
        else if (subj[0] == 'F' || subj[0] == 'f')
        {
            sum_num = credit*0.00;
        }
        all_num = all_num + sum_num;
        sgpa = all_num/sum_credit;
        system("cls");
        printf("12th Semester Result = %.2f\n",sgpa);
        printf("Press  Any  key(0-9) if you want Return Main Menu.\n");
        scanf("%d",&choice2);
        system("cls");
        manu();
    }
    else
        printf("Invalid Serial Number!!!Try again.");
}
void cgpa()
{
    printf("\n\n\n\t\t\t\t*****CGPA RESULT:****\n\n\n");
    printf("Enter How much semester you passes: ");
    scanf("%d",&pass_sem);
    //will take only sgpa point//
    for(int i =0; i<pass_sem; i++)
    {
        printf("Enter Result of Semester-%d in SGPA:",i+1);
        scanf("%f",&sem[i]);
        t_cgpa= t_cgpa+sem[i];
    }
    float f_cgpa;
    f_cgpa = t_cgpa/pass_sem;
    system("cls");
    printf("Your CGPA is:%.2f\n",f_cgpa);
    printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
    scanf("%d",&choice2);
    if(choice2==0)
        system("cls");
    manu();
}
void about()
{
    printf("1.About us.\n");
    printf("2.Help.\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\t\t\t\t<<<This Program Created By>>>\n\n\n");
        printf("\t\t\t\t\t<<<Masud Rabbani>>>\n");
        printf("\t\t\t\t\t<<<Atiqur Rahman>>>\n");
        printf("\t\t\t\t\t<<<Md. Hasan Imam Bijoy>>>\n");
        printf("\t\t\t<<<Powered By Daffodil International University>>>\n");
    }
    if(choice==2)
    {
        printf("\t\t\t\tContact us By:hasanimambijoy.cse@gmail.com\n\n\n");
        printf("\t\t\t\t\tContact us By:Facebook\n\n\n");
        printf("\t\t\t\tIf you want to Contact By Facebook Press 0\n\n");
        scanf("%d",&choice2);
        if(choice2==0)
        {
            system("Start http://www.facebook.com/HiBijoy.a2z");
            system("cls");
        }
        else
        {
            system("cls");
        }
        manu();
    }
    if(choice>2)
    {
        system("cls");
        printf("Invalid Input!!Try again.");
    }
}
int main()
{
    manu();
    return 0;
}
