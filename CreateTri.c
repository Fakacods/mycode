#include <stdio.h>
int main(){
int w, x, y, z;
printf("Create tri ");
scanf("%d",&z); fflush(stdin);

for( w=z ; w>=0 ; w-- ){
    for( x=w ; x>=0 ; x-- ){
        printf(" ");
    }
    for( y=1 ; y<=z-w ; y++ ){
        printf("*");
    }
    for( y=1 ; y<z-w ; y++ ){
        printf("*");
    }
    printf("\n");
}
getchar();
return 0;
}
