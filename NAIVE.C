#include<stdio.h>
#include<string.h>
 char *str;
 char *sub;
 char *p;
 char *p1;
 int count=0,j,count1=0,i,pos=0,pos1,a[10];

 int search(char *p, char *p1,int len)   //definition of search function
 {
   p=str;                       //p pointer points to the base address of str
   while(*p!='\0')
   {
     p1=sub;                 //p1 points to the base address of sub
     count=0;
     pos1=pos;
     while(*p==*p1)
     {
       count++;
       pos++;
       p++;
       p1++;

     }
     if(count==len)
     {
	     a[i++]=pos1;
       count1++;
       count=0;
     }
     else
     {
       p++;
       pos++;
     }
   }
    if(count1==0)
    {
      printf("word not found\n");
    }
    else
    {
      display(a,i,count1);
    }
  return 0;
 }
 int display(int a[],int i,int count1)
 {
      j=0;
      printf("word found at position");
      while(j<i)
      {
      printf("\t%d\t",a[j]);
      j++;
      }
      printf("\noccurence of the word is %d times\n",count1);

 }
int main()
{
  int len,i;
  str=(char* )malloc(sizeof(char)*100);
				       //memory alloction to the pointers
  sub=(char *)malloc(sizeof(char)*100);

  clrscr();
  printf("\nenter the paragraph,,,for exit press !tab!\n");
  scanf("%[^\t]s",str);   //it wil accept string till not press tab
  printf("\n");
  p=str;
  while(*p!='\0')
  {
    printf("%c",*p);
    p++;
  }
  printf("\n");
  fflush(stdin);
  printf("enter the string to be search\n");
  scanf("%[^\n]",sub);    //it will accept string till not press enter
  len=strlen(sub);
  p1=sub;
  /*for(i=0;i<len;i++)
  {
    if(*p1 >=65 && *p1<=92)
    {
      *p1=*p1+32;                  //conversion from uppercase to lowercase
      p1++;
    }
  }*/

		 search(str,sub,len);     //calling search function
     free(str);
     free(sub);            //free the memory which were previously allocated

getch();
return 0;
}