#include<stdio.h>
#include<ctype.h> //for isaplha() function

typedef struct balanced   
{
	char a[30];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);

int ismatchingpair(char left,char right)
{
	switch(left)
	{
		case '(':
     if(right==')')
       return 1;
       else
         return 0;
             
         
		case '{':
     if(right=='}')
       return 1;
       else
         return 0;
		
		
		case '[':
     if(right==']')
       return 1;
       else
         return 0;
          
          default:
          return  0;
          
	 }
 }
      void checkbalanced(char exp[])
      {
		  int i;
		  char c;
		  stack s;
		  s.top=-1;
		for(i=0;exp[i]!='\0';i++)
		{
			if (exp[i]=='('|| exp[i]== '{' || exp[i]=='[')
		  push(&s ,exp[i]);
		else
		{
			 if  (s.top !=-1)
			   c=pop(&s);
			 else{
			   printf("exprsesion is invalid");
			   return;
		   }
			 if(ismatchingpair(c,exp[i]))
			   continue;
			  else
				printf("expression is invalid");
				return;
			  }
		  }
	if(s.top==-1)
	printf("expession is valid");
	else
	printf("expression is inbvalid");
	return;
}

		  
 
int main()
{
	char exp[30];
	printf("\nENTER  EXPRESSION CONTAINING PARENTHIESES\n ");
	scanf("%s",exp);
	checkbalanced(exp);
	return 0;
}

void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}



    



