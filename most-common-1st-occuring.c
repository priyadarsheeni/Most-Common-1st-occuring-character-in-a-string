#include<stdio.h>

void main()
{
 char str[100],c;
 int cnt[26],idx[26],i,j,f;
 
 printf("\nEnter a String : ");
 gets(str);

 for(i=0;i<26;i++) cnt[i]=0;

 for(i=f=0;str[i];i++)
 {
  j=str[i]-97;
  cnt[j]++;
  
  if(cnt[i]==1) idx[j]=i;

  if(cnt[j]>f || cnt[j]==f && idx[j]<idx[c-97])
  {
   c=str[i];
   f=cnt[j];
  }
 }

 printf("\nMost Occuring Character : %c (%d times)\n\n",c,f);
}

