#include <stdio.h>

 int main (void)
{
   int x,y,i,j;
   char shape,type;

      
      scanf(" %c" , &shape);
   
   while(shape!='E')
   {
   if (shape=='S') {
	  scanf("%d", &x);
	     for(i=1 ; i<=x ; i++)
	     { 	 for(j=1 ; j<=x ; j++)
		 printf("*");
		 printf("\n");
	     }		
   } else if(shape=='R') { 
 	  scanf("%d" , &x);
	  scanf("%d" , &y);
	     for(i=1 ; i<=x ; i++)
	     {  for(j=1 ; j<=y ; j++)
		printf("*");
		printf("\n");
	     }
   } else if(shape=='T') {
	  scanf(" %c" , &type);
	  scanf("%d" , &x);
	  if (type=='U')
	   { for(i=1 ; i<=x ; i++)
	      {	for(j=1 ; j<=x-i ; j++)
		{ printf(" ");
	 	} for (j=x-i+1 ; j<=x ; j++)
		    printf("*");
		    printf("\n");
              }	
           } else if (type=='D')
	     { for (i=1 ; i<=x ; i++)
   	       { for (j=x-i+1 ; j<x ; j++)
	   	 { printf(" ");
		 } for (j=1 ; j<=x-i+1 ; j++) 
		    printf("*");
		    printf("\n");
               }
 	     }

    } 
     scanf(" %c" , &shape);
   }
     
   
       
       
	 	
 return 0;
}
