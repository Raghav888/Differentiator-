#include<stdio.h>
#include<math.h>
#include<string.h>

char diff(char a1[10],char a2[10])
{
  char j;

	{
	for(j=0;j<(strlen(a1));j++)
	 {
	 if(a1[j]=='l' && a1[j+1]=='o' && a1[j+2]=='g')
	 	{
		printf("1/%s",a2);}
	 if(a1[j]=='s' && a1[j+1]=='i' && a1[j+2]=='n')
		{
		printf("cos %s",a2);}
	 if(a1[j]=='c' && a1[j+1]=='o' && a1[j+2]=='s')
	 	{
		printf("-sin %s",a2);}
	 if(a1[j]=='t' && a1[j+1]=='a' && a1[j+2]=='n')
	 	{
		printf("sec^2 %s",a2);}
	 if(a1[j]=='s' && a1[j+1]=='e' && a1[j+2]=='c')
	 	{
		printf("sec %s.tan %s",a2,a2);}
	 if(a1[j]=='c' && a1[j+1]=='s' && a1[j+2]=='c')
	 	{
		printf("-csc %s cot %s",a2,a2);}
	 if(a1[j]=='c' && a1[j+1]=='o' && a1[j+2]=='t')
	 	{
		printf("-csc^2 %s",a2);}
	 }
        }
return 0;
}

char rulen(char b1[10])
 {
   int c1=1,p1;
   int n,k;
   char v1;
   {
    for (n=0;n<strlen(b1);n++)
	{
	if(b1[n]=='^')
	k=n;
	}
   }
   {
    n=strlen(b1);
     {
     switch (n)
	{
		 case 3:
    			  c1=1;
      			  p1=b1[k+1]-'0';
            		break;
		 case 4:
    			  c1=b1[k-2]-'0';
      			  p1=b1[k+1]-'0';
            		break;
       	}
     }
   }
     v1=b1[k-1];
     if (n==1 || n==2)
	{printf(" 0 ");}
     else
     {printf(" %d%c^%d ",c1*p1,v1,p1-1);}
 return 0;
 }

int main() 
{
    int i=0,j=0,k,l,m,n;
    char a1[10],a2[10],a3,a4[10],a5[10];
    char b1[10],b2[1],v1;
    int c1=0,p1=0;

  printf("Enter an operation:\n");
  Repeat:
  scanf("%s",a1);
  {
   for (k=0;k<strlen(a1);k++)
	{
	if(a1[k]=='^')
	goto Diffn;
	}
  }
  scanf("%s %c",a2,&a3);
  if(a3=='*')
  {
   goto Diffuv;
  }
  if(a3=='/')
  {
   goto Diffuv1;
  }
  a1[10]=diff(a1,a2);

		{ 
		switch(a3)
      		{
      		 case '+':
      		      printf(" + ");
			goto Repeat;
      		      break;
       		 case '-':
		      printf(" - ");
			goto Repeat;
			break;
		 case '=':
			goto Exit;
            		break;
        	 default:
        	      printf("Error! operator is not correct");
       		}
     		}
  
  Diffuv:
  {
  scanf("%s %s",a4,a5);
  diff(a1,a2);
  printf(". %s %s + ",a4,a5);
  printf("%s %s .",a1,a2);
  diff(a4,a5);
  goto Exit;
  }
  
  Diffuv1:
  {
  scanf("%s %s",a4,a5);
  diff(a1,a2);
  printf(". %s %s + ",a4,a5);
  printf("%s %s .",a1,a2);
  diff(a4,a5);
  printf("/%s %s^2",a4,a5);
  goto Exit;
  }

  Diffn:
  {
     
   sscanf(a1,"%s",b1);
   goto Temp;
     

   Repeatn:
   scanf("%s",b1);

   Temp:
   scanf("%s",b2);

b1[10]=rulen(b1);      

		{ 
      		 if(b2[0]=='+')
      		    {  printf(" + ");
			goto Repeatn;
      		    }
      		 if(b2[0]=='-')
      		    {  printf(" - ");
			goto Repeatn;
      		    }
      		 if(b2[0]=='=')
      		    {  
			goto Exit;
      		    }
     		}


  } 

  Exit:
  printf("\n");
  
 return 0;  
}
