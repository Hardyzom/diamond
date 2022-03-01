#include <stdio.h>


int main() {
    
    int magassag;
    int x;
    int y;
    printf("Magasság: ");
    scanf("%d", &magassag);
    printf("\n");
    if(magassag%2==0){
      printf("Hiba, adjon megy egy pozitiv páratlan egész számot!");
      return 0;
  }
    
    for (int x=1; x<=magassag; x=x+2){
        for (y=1; y<=(magassag-x)/2; y++){
            printf(" ");
        }
        for (y=1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }
    for (x=magassag/2+magassag/2-1; x>=1; x=x-2){
        for (y=1; y<=(magassag-x)/2; y++){
            printf(" ");
        }
        for (y=1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}