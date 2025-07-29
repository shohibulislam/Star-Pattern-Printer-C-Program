#include<stdio.h>
int main(){
    int n, z, a;
    int row, col;
    printf("Wellcome to Star shape printer.\n1 for Square.\n2 for Hollow Square.\n3 for Right-angled triangle (left-aligned).\n4 for Right-angled triangle (right-aligned).\n5 for Inverted triangle (left-aligned).\n6 for Inverted triangle (right-aligned).\n7 for Full Pyramid.\n8 for Inverted Full Pyramid.\n9 for Full Hollow Pyramid.\n10 for Inverted Full Hollow Pyramid.\n11 for Diamond.\n12 for Hollow Diamond.\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("Enter the size of the Square:");
            scanf("%d",&a);
            for(row=1; row<=a; row++){
                for(col=1; col<=a; col++){
                    printf("*");
                }
                printf("\n");
            }
        break;

    case 2: printf("Enter the size of the Hollow Square:");
            scanf("%d",&a);
            for(row=1; row<=a; row++){
                for(col=1; col<=a; col++){
                    if(row==1 || row==a || col==1 || col==a){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                    
                }
                printf("\n");
            }
        break;

    case 3: printf("Enter the size of the Right-angled triangle (left-aligned):");
            scanf("%d",&a);
            for(row=1; row<=a; row++){
                for(col=1; col<=row; col++){
                    printf("*");
                }
                printf("\n");
            }
        break;

    case 4: printf("Enter the size of the Right-angled triangle (right-aligned):");
            scanf("%d",&a);
            for(row=1; row<=a; row++){
                for(col=1; col<=a-row; col++){
                    printf(" ");
                }
                for(col=1; col<=row; col++){
                    printf("*");
                }
                printf("\n");
            }
        break;

    case 5: printf("Enter the size of the Inverted triangle (left-aligned):");
            scanf("%d",&a);
            for(row=a; row>=1; row--){
                for(col=row; col>=1; col--){
                    printf("*");
                }
                printf("\n");
            }
        break;

    case 6: printf("Enter the size of the Inverted triangle (right-aligned):");
            scanf("%d",&a);
            for(row=a; row>=1; row--){
                for(col=a-row; col>=1; col--){
                    printf(" ");
                }
                for(col=row; col>=1; col--){
                    printf("*");
                }
                printf("\n");
            }
        break;

    case 7: printf("Enter the size of the Full Pyramid:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Full Pyramid needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size ust be 3 or more.");
            }
            else{
                for(row=1; row<=a; row++){
                    for(col=1; col<=a-row; col++){
                        printf(" ");
                    }
                    for(col=1; col<=row*2-1; col++){
                        printf("*");
                    }
                    printf("\n");
                }
            }
        break;

    case 8: printf("Enter the size of the Inverted Full Pyramid:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Inverted Full Pyramid needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size must be 3 or more.");
            }
            else{
                for(row=a; row>=1; row--){
                    for(col=a-row; col>=1; col--){
                        printf(" ");
                    }
                    for(col=row*2-1; col>=1; col--){
                        printf("*");
                    }
                    printf("\n");
                }             
            }
        break;

    case 9: printf("Enter the size of the Full Hollow Pyramid:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Full Hollow Pyramid needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size must be 3 or more.");
            }
            else{
                for(row=1; row<=a; row++){
                    for(col=1; col<=a-row; col++){
                        printf(" ");
                    }
                    for(col=1; col<=row*2-1; col++){
                        if(col==1 || row==a || col==row*2-1){
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
        break;

    case 10: printf("Enter the size of the Inverted Full Hollow pyramid:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Inverted Full Diamond needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size must be 3 or more.");
            }
            else{
                for(row=a; row>=1; row--){
                    for(col=a-row; col>=1; col--){
                        printf(" ");
                    }
                    for(col=row*2-1; col>=1; col--){
                        if(col==1 || row==a || col==row*2-1){
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
        break;

    case 11: printf("Enter the size of the Diamond:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Diamond needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size must be 3 or more.");
            }
            else{
                for(row=1; row<=a; row++){
                    for(col=1; col<=a-row; col++){
                        printf(" ");
                    }
                    for(col=1; col<=row*2-1; col++){
                        printf("*");
                    }
                    printf("\n");
                }
                for(row=a-1; row>=1; row--){
                    for(col=a-row; col>=1; col--){
                        printf(" ");
                    }
                    for(col=row*2-1; col>=1; col--){
                        printf("*");
                    }
                    printf("\n");
                }                        
            }
        break;

    case 12: printf("Enter the size of the Hollow Diamond:");
            scanf("%d",&a);
            if(a%2==0){
                printf("Invalid input! Hollow Diamond needs an odd number.");
            }
            else if(a<3) {
                printf("Invalid input! Size must be 3 or more.");
            }
            else{
                for(row=1; row<=a; row++){
                    for(col=1; col<=a-row; col++){
                        printf(" ");
                    }
                    for(col=1; col<=row*2-1; col++){
                        if(col==1 || col==row*2-1){
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                for(row=a-1; row>=1; row--){
                    for(col=a-row; col>=1; col--){
                        printf(" ");
                    }
                    for(col=row*2-1; col>=1; col--){
                        if(col==1 || col==row*2-1){
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }   
        break;
    
    default: printf("Invalid input!");
        break;
    }
    return 0;
}