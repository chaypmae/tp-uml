#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() 
{ 
  
    int* T; 
    int n, i, sum = 0; 
  
    // Get the number of elements for the array 
    n = 5; 
    printf("Le nombere  d''elements est: %d\n", n); 
  
    // allocation dynamiqye avec malloc() 
   T= (int*)malloc(n * sizeof(int)); 
   T=(int*)calloc(n ,sizeof(int));
  printf("Memoir allouee avec malloc.\n"); 
  printf("Memoir allouee avec calloc.\n"); 
    
        for (i = 0; i < n; ++i) { 
             printf(" T[%d]=",i); 
             scanf("%d",&T[i]);
             
        } 
  
    
        printf("Les elements du tableau sont: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", T[i]); 
        } 
     free(T);
     printf("Memoire a ete liberee "); 
     int k=3;

     T=(int*)realloc(T,sizeof(k));
     printf("Memoire allouee a nouveau avc realloc "); 
     for (i = 0; i < n; ++i) { 
             printf(" T[%d]=",i); 
             scanf("%d",&T[i]);
        } 
    return 0; 
    } 
 


