#include<stdio.h>

int main(){
    
    int choice;
    
    int num , max = 0, min = 0, count = 0, sum = 0;
    
    int i = 0;
    
    float average;
    
    while(1){
        
        printf("\nSelect an option\n");
        
        printf("1.Enter a number\n");
        
        printf("2.Calculate sum, average, max, min : \n");
        
        printf("3.Exit...\n");
        
        printf("Enter your choice : ");
        
        scanf("%d", &choice);
        
        switch(choice) {
             case 1: 
             
             printf("Enter a number : ");
             
             scanf("%d",&num);
             
             sum = sum + num;
             
             count++;
             
             if(count==1){
                 
                 max = num;
                 
                 min = num;
                 
                 break;
             }else{
                 
                 if(num > max){
                     
                     max = num;
                     
                     printf("Max = %d\n",max);
                     
                 }
                 if(num < min){
                     
                     min = num;
                     
                     printf("Min = %d\n", min);
                 }
             }
            
            case 2:
            
            if(count==0){
                printf("You have entered no numbers \n");
                
            }else{
                
                average = (float) sum / count;
                
                printf("Sum = %d\n",sum);
                
                printf("Average = %.2f\n", average);
                
                printf("Max = %d\n", max);
                
                printf("Min = %d\n", min);
                
                break;
            }
            
            
            case 3:
                printf("You have successfully exited the program...\n");
                
                return 0;
                
            default:
                printf("Invalid choice. Please try again.. \n");
        } 
    }
}
