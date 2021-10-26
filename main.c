#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void first(){

    // ÇÀÂÄÀÍÍß 1

    float x;

    float d;

    scanf("%f", &d);


    for(x=4.0; x<=6.0; x+=d ){

        if(x<4.5){printf("%f\n", 1.0/sin(x*x));}

        else if(x>=4.5 && x<5){printf("%f\n", x+log(pow(x, 3.5)));}

        else if(x>=5){printf("%f\n", log10(exp(x)+4));}

    }

}

void second(){

    // ÇÀÂÄÀÍÍß 2

    float x, k, y, sum;

    for(x=3; x<=4; x+=0.1){
            sum = 0;
            k = 1;

        do{
                y = tan(x/pow(2, k)/k);
                sum += y;
                k++;
        }while(y>=0.001);
        printf("%f\n", sum);

    }

    //printf("%f", sum);


}

int main(){
    first();
    //second();
}


