#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "intal_functions.h"

int main(void){
    while(1)
    {
        printf("\n-------------------------------------------------------\n");
        printf("INTAL operations are described below:-\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Modulo\n5.Compare\n6.Power\n7.GCD\n8.Factorial\n9.Fibonacci\n10.Binomial Co-efficient\n11.Maximum Value\n12.Minimum Value\n13.Linear Search\n14.Binary search\n15.Sort\n16.EXIT\n");
        printf("Enter the corresponding number of the operation:");
        int key;
        scanf("%d",&key);
        printf("\n");
        switch (key)
        {
            case 1:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf(intal_addition(s1,s2));
                break;
            }
            case 2:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf(intal_subtraction(s1,s2));
                break;
            }
            case 3:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf(intal_multiplication(s1,s2));
                break;
            }
            case 4:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf(intal_modulo(s1,s2));
                break;
            }
            case 5:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf("%d" ,intal_compare(s1,s2));
                break;
            }
            case 6:
            {
                printf("Enter any two numbers:");
                char s[1001];unsigned int n;
                scanf("%s%d",&s,&n);
                printf("\nFinal Result:-\n");
                printf(intal_power(s,n));
                break;
            }
            case 7:
            {
                printf("Enter any two numbers:");
                char s1[1001],s2[1001];
                scanf("%s%s",&s1,&s2);
                printf("\nFinal Result:-\n");
                printf(intal_GCD(s1,s2));
                break;
            }
            case 8:
            {
                printf("Enter a number:");
                unsigned int n;
                scanf("%d",&n);
                printf("\nFinal Result:-\n");
                printf(intal_factorial(n));
                break;
            }
            case 9:
            {
                printf("Enter a number:");
                unsigned int n;
                scanf("%d",&n);
                printf("\nFinal Result:-\n");
                printf(intal_fibonacci(n));
                break;
            }
            case 10:
            {
                printf("Enter any two numbers:");
                unsigned int n,k;
                scanf("%d%d",&n,&k);
                printf("\nFinal Result:-\n");
                printf(intal_binomial_coefficient(n,k));
                break;
            }
            case 11:
            {
                unsigned int n;
                printf("Enter array size:");
                scanf("%d",&n);
                printf("Enter array elements:-\n");
                char **arr = (char**) malloc(n * sizeof(char*));
                for(int i=0;i<n;i++) {
                    arr[i] = (char*) malloc(1001 * sizeof(char));
                    scanf("%s",arr[i]);
                }
                printf("\nFinal Result:-\n");
                printf("%d" ,intal_max(arr,n));
                break;
            }
            case 12:
            {
                unsigned int n;
                printf("Enter array size:");
                scanf("%d",&n);
                printf("Enter array elements:-\n");
                char **arr = (char**) malloc(n * sizeof(char*));
                for(int i=0;i<n;i++) {
                    arr[i] = (char*) malloc(1001 * sizeof(char));
                    scanf("%s",arr[i]);
                }
                printf("\nFinal Result:-\n");
                printf("%d" ,intal_min(arr,n));
                break;
            }
            case 13:
            {
                unsigned int n;
                printf("Enter array size:");
                scanf("%d",&n);
                printf("Enter array elements:-\n");
                char **arr = (char**) malloc(n * sizeof(char*));
                for(int i=0;i<n;i++) {
                    arr[i] = (char*) malloc(1001 * sizeof(char));
                    scanf("%s",arr[i]);
                }
                char key[1001];
                printf("Enter the element to be searched:");
                scanf("%s",&key);
                printf("\nFinal Result:-\n");
                printf("%d" ,intal_linsearch(arr,n,key));
                break;
            }
            case 14:
            {
                unsigned int n;
                printf("Enter array size:");
                scanf("%d",&n);
                printf("Enter array elements:-\n");
                char **arr = (char**) malloc(n * sizeof(char*));
                for(int i=0;i<n;i++) {
                    arr[i] = (char*) malloc(1001 * sizeof(char));
                    scanf("%s",arr[i]);
                }
                char key[1001];
                printf("Enter the element to be searched:");
                scanf("%s",&key);
                printf("\nFinal Result:-\n");
                printf("%d" ,intal_binsearch(arr,n,key));
                break;
            }
            case 15:
            {
                unsigned int n;
                printf("Enter array size:");
                scanf("%d",&n);
                printf("Enter array elements:-\n");
                char **arr = (char**) malloc(n * sizeof(char*));
                for(int i=0;i<n;i++) {
                    arr[i] = (char*) malloc(1001 * sizeof(char));
                    scanf("%s",arr[i]);
                }
                printf("\nFinal Result:-\n");
                intal_sort(arr,n);
                for(int i=0;i<n;i++){
                    printf("%s ",arr[i]);
                }
                break;
            }
            case 16:
            {
                exit(1);
            }
            default:
                printf("Invalid selection!");
        }
    }
    return 0;
}