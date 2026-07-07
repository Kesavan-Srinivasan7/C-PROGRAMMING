// The switch statement is used to reduce the many if...else statement
/*The syntax
 switch (expression) {
   case 1 :
   //block of code;
   break;
   
   case 2 :
   // block of code;
   break;

   default:
    // block of code;
   }
   
   */
  // Now see the example
  #include<stdio.h>
  int main(){
    int day = 4;
    switch (day){
        case 1:
        printf("Its monday");
        break;
        case 2:
        printf("Its tuesday");    //In this example there is no case 4 so it automatical send to "default"
        break;
        case 3:
        printf("Its wednesday");
        break;
        default:
        printf("Its thursday");

    }
    return 0;
  }