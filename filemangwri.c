#include<stdio.h>
int main()
{
    FILE*fp;
    //fp=fopen("c:/users/sqwo14/desktop/lib/skill.text","+w");
    fp=fopen("skill.text","w+");
    fprintf(fp,"welcome to skill qode-decode your skill here.......\n");
    fputs("you are entering to learning c languge now......\n",fp);
    fclose(fp);
}



/*
   r=open a text file to read mode
   w=open a text file to write mode
   a=open a text file to append mode
*/