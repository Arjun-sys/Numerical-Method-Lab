#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
    float ax[20], ay[20];
    float sum_x = 0, sum_xy = 0, sum_x2 = 0, sum_y = 0 ;
    float a , b,A;
    printf("Enter no of records: ");
    scanf("%d", &n);
    printf("Enter Data: ");
    printf("\nX       Y\n");
    for(i = 0; i < n; i++){
        scanf("%f%f",&ax[i],&ay[i]);
    }
    for(i = 0; i < n; i++){
        sum_x += ax[i];
        sum_y += log(ay[i]);
        sum_xy += ax[i] * log(ay[i]);
        sum_x2 += pow(ax[i], 2);
    }
    b = (n*sum_xy - sum_x*sum_y)/(n*sum_x2 - pow(sum_x,2));
    A= (sum_y - b*sum_x)/n;
    a=exp(A);
    printf("\na = %.3f    b = %.3f", a, b);
    printf("\nThe Equation Y is %.3f + %.3fX\n\n", a, b);
    return 0;
}

