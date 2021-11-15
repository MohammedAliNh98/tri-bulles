#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

 int t[20];
 
  int n , i ,ex , fn ;
  
  printf ("donner la demontion de tableaux :");
  
  scanf ("%d",&n);
  
  // remplisage
  for(i=0;i<n;i++){
  	printf("donner le nomber %d :",i+1);
	
  	scanf ("%d",&t[i]);
  	  }
  	do{
  	     ex=0 ;
  		for(i=0;i<n-1;i++){
  			if(t[i]>t[i+1]){
  				//PERMUTATION
  				fn=t[i] ;
  		    	t[i]=t[i+1];
  				t[i+1]= fn ;
  				ex++ ;
  			}
  	   }
  	   }while(ex>0); 
	  
	  printf("/n");
	   
	   printf("**** tri de tableaux****");
	  for (i=0; i < n; i++) {
  printf("%10d",t[i]);
} return 0;

}
