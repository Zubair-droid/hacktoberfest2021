// Cost of painting a property. Interior walls and exterior walls
// Cost of interior wall painting: 18/sq.feet, exterior wall: 12/sq.feet (15 min qn.)

#include<stdio.h>

int main(){
    int n, m, i=0;
    float p=18, q=12, cost = 0, temp;
    scanf("%d %d", &n, &m);
    if(n<0 || m<0){
        printf("INVALID INPUT\n");
    }
    else if(n==0 || m==0){
        printf("The estimated cost : 0.0\n");
    }
    else{
        for(i=0; i<m; i++){
            scanf("%f", &temp);
            cost += p*temp;
        }

        for(i=0; i<n; i++){
            scanf("%f", &temp);
            cost += q*temp;
        }
        printf("Total estimated cost: %.1f \n", cost);
    }
    return 0;
}
