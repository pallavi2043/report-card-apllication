/*
    report card renerator app
    school :    jawahar navodya vidyalaya
    item:       annual report card
    */

#include<stdio.h>
#include<unistd.h>

int main()
{
    int section,standard,total_marks;
    float english,hindi,maths,social_science,science;
    char name[30];
    printf("\t***********************************\n\n");
    printf("\t================welcome=============\n\n");
     
     printf("\t jawahar navodya vidyalaya\n");
     printf("\t\tannual report card\n");

     printf("\tname:\t");
     while((getchar()) != '\n');
     scanf("%[^\n]%*c", name);
     printf("\n\tstandard:\t");
     while((getchar()) != '\n');
     scanf("%d",&standard);
     printf("\n\tsection:\t");
     while((getchar()) != '\n');
     scanf("%d",&section);
    printf("\n\nmarks secured out of 100 ");
    printf("\n\tenglish:\t");
    while((getchar()) != '\n');
    scanf("%f",&english);
    printf("\n\thindi:\t");
    while((getchar()) != '\n');
    scanf("%f",&hindi);
    printf("\n\tmaths:\t");
    while((getchar()) != '\n');
    scanf("%f",&maths);
    printf("\n\tsocial science:\t");
    while((getchar()) != '\n');
    scanf("%f",&social_science);
    printf("\n\tscience:\t");
    while((getchar()) != '\n');
    scanf("%f",&science);
    total_marks=english+hindi+social_science+science+maths;
    usleep(10000000);
    printf("\n\n total marks secured:\t%d",total_marks);
    printf("\n");
     
    while((getchar()) !='\n');
    if(total_marks<=500 && total_marks>=450)
    puts("\tgrade:A");
    else if(total_marks<450 && total_marks>=400)
    puts("\tgrade:B");
    else if(total_marks<400 && total_marks>=350)
    puts("\tgrade:C");
    else if(total_marks<350 && total_marks>=300)
    puts("\tgrade:D");
    else if(total_marks<300 && total_marks>=250)
    puts("\tgrade:E");
    else if(total_marks<=200 && total_marks>=0)
    puts("\tgrade:F");
    else
    puts("report card information is wrong");


return 0;
}
