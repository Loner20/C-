#include<iostream.h> 
#include<conio.h> 
#include<fstream.h>
void main()
{
clrscr();
ifstream fread("WordLineCount.txt"); 
int wc=1,lc=1;
char c; 
while(fread)
{
fread.get(c); 
if(c==' '|| c=='\n') 
wc++;
if(c=='\n')
         lc++;
}
fread.close();
cout<<"\n Total no. of words in the file: "<<wc; 
cout<<"\n Total no. of lines in the file: "<<lc; 
getch();
}