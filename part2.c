#include <stdio.h>

int main(void)
{
 int x=1,y=1,i,j,k,l,n;
 char letter;
 long double radian,value2=1,value1=1,pi=3.14159,degree,sin=0,cos=0,factorial1=1,factorial2=(-1),factorial3=1;
  			
  scanf(" %c" , &letter);	
   while(letter!='E')	
 { 
  if(letter=='D')
  { scanf("%Lf" , &degree);
    scanf("%d", &n);	                      
    radian=(pi * degree / 180);  /* Dereceyi radyana çevirme işlemini bu şekilde gösterdim. */
	 for(i=0 ; i<=n-1 ; i++)
        {
	 	for (j=n+i ; j<=n+(3*i) ; j++)
                 {
	           factorial1= factorial1 * x; /* Çarpım olarak 'j' değil de 'x' diye bir değişken tanımladım çünkü 'j' ,  1'den başlamıyor */
   	           x++;
	           value1 = value1 * radian;
	         }
		for (l=n+1 ; l<=n+(2*i) ; l++)
                 {
		   value2 = value2 * radian;
		   factorial3= factorial3 * y;
		   y++;
	         }
       	 	for(k=n ; k<=n+i ; k++)
                 {	
                   factorial2= factorial2 * (-1);
	         }
	  
	   sin = sin + (( factorial2 / factorial1 ) * value1 ) ;
	   cos = cos + (( factorial2 / factorial3 ) * value2 ) ;  		 
 	   factorial2=(-1);
           factorial1=1;
	   factorial3=1;
           x=1;
	   y=1;
 	   value1=1;	
	   value2=1;
	
        }   
    printf("%.6Lf\n" , sin);
    printf("%.6Lf\n" , cos);
    sin=0;
    cos=0;
  }else 
  {
       ; 
  }
   scanf(" %c" , &letter);
 }
     
return 0;
}
