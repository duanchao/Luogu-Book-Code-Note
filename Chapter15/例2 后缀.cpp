#include<bits/stdc++.h>
using namespace std;
int stack[101];
char s[256];
int comp(char s[256])
{
   int  i=0,top=0,x,y;
   while (i<=strlen(s)-2) 
   {
      switch (s[i])
      {
         case '+':stack[--top]+=stack[top+1]; break;
         case '-':stack[--top]-=stack[top+1]; break;
         case '*':stack[--top]*=stack[top+1]; break;
         case '/':stack[--top]/=stack[top+1]; break;
         default:x=0; while (s[i]!=' ') x=x*10+s[i++]-'0'; stack[++top]=x; break;
      }
      i++;
    }                //while
    return stack[top];
}
main()
{            
  printf("input a string(@_over):");
  gets(s);
  printf("result=%d",comp(s));
  return 0;
}


