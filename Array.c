/* The arrays are used to store a mulitple value in single variable instead of separate varaiable for the each value
  int array[] = {1,2,3,4,5}; ---> all datatype should be same
  
  // How to access element in a array
 //               [0],[1],[2],[3],[4]
  int numbers[] = {1,  2,  3,  4,  5};   ---> The element in a array in used by its index number
  printf("%d",numbers[0]);       ---> index number always start with 0  ,the output is "1" if we give 2 the output is "3"
  
  
  //How to change the element using index number
  int num[] = {45,25,95,85,65};
  num[2]=35;
  printf("%d",num[2]); -->Now the output for [2] is 35 instead of 95
  
 
  // we also specify the size for array and add the element later
  #include<stdio.h>
  int main(){
    int myNumber[4]; // declare the array for 4 integers
    // adding element
    myNumber[0] = 25;
    myNumber[1] = 30;
    myNumber[2] = 35;
    myNumber[3] = 40;
printf("%d",myNumber[2]);
return 0;
} 
 
// How to get a size of array using "sizeof"operator
#include<stdio.h>
int main(){
    int array[] = {1 , 2 ,3, 4};----> we can you any datatype like float,double,character, etc...
    printf("%zu",sizeof(array)); // output is 16 because size integer is 4 bytes the no.of element is 4 so 4x4=16
    return 0;
}


// How no.of element for many element
#include<stdio.h>
int main(){
    int myValues[] = {1,2,3,4,5};
//                      |--------> total sizeof array
//                      |
    int length = sizeof(myValues)/sizeof(myValues[0]); //formula
//                                      |
//                                      |---------> size of one element in a array
    printf("%d",length);
    return 0;
}


// loops in array : we can use for loop or while for array
# include<stdio.h>
int main(){
    int values[] ={1 ,2, 3, 4,};
    int i;
      for (i=0; i<4; i++){
        printf("%d\n",values[i]);
      }
      return 0;
}

//  For more flexible and sustainable we also use "sizeof" operator
#include<stdio.h>
int main(){
    int Values[] = {1,2,3,4,};
    int length = sizeof(Values)/sizeof(Values[0]);
    int i ;
      for (i=0; i < length; i++){   //This loop will automatically work no matter how many elements the array has!
        printf("%d\n",Values[i]); 
      }
    return 0;
}
*/

/* MultiDimensional Array
we learned about 1D in the previous . now we going to see 2D ---> to store data in tabular form(rows and columns)
A multidimensional array is the array of arrays , 2D is also known as "Matrix"
                  Row
                   |  |-------Columns
Example: int main [2][3] ={ {1,,2,3,4} , {5,6,7,8}};

//How to access the element of 2D array

#include<stdio.h>
 int main(){
                        [0]        [1]
  int matrix[2][4] ={{1,2,3,4,},{5,6,7,8}}; //2R 4C Each R&c start with index 0 (or)  Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
  printf("%d",matrix[0][3]); // first row[0], third column[3]-->4 o/p
  return 0;
 }
  
 // How to change element in the 2d array
 #include<stdio.h>
 int main(){
  int matrix[2][3] = {{1,2,3,4},{5,6,7,8}};
  matrix[0][2] = 33; // this print 33 instead of 3
    printf("%d",matrix[0][2]); // first row[0], second column [2]
     return 0;
 }
     
// how to loop a 2D array

#include<stdio.h>
   int main(){
      int matrix[2][4] = {{1,2,3,4},{5,6,7,8}};
      int i,j;// i-->row , j-->column
       for(i=0; i<2; i++){ // it start with the index number of the row [0]
         for(j=0; j<4; j++){ it start with the index no of column [0]
          printf("%d\n",matrix[i][j]);
         }
       }
       return 0;
   }

   // now the going to see 3D
  #include<stdio.h>
   int main(){
     int matrix[2][4][3] = { // Here [2]->Blocks, [4]->Rows, [3]->Columns
      {
        {1,2,3},{4,5,6},{7,8,9},{10,11,12} -->"1B"
      },
      {
        {13,14,15},{16,17,18},{19,20,21},{22,23,24} -->"2B"
      }
     };
      for(int i=0; i<2; i++){ i-->"B"
        printf("Block:%d\n",i+1);
         for(int j=0; j<4; j++){ j-->"R"
          for(int k=0; k<3; k++){ k-->"C"
            printf("%d ",matrix[i][j][k]);
          }
          printf("\n");
         }
         printf("\n");
      }
      return 0;
   }
      Task:
Instructions: "pls try this without using ai and try it youself if you lag , give comment for the solution "

1. Inside main(), complete the following steps:
2. Declare an int array named numbers with 5 elements
3. Set the first element (numbers[0]) to 10
4. Set the last element (numbers[4]) to 50           
5. Print the first and last element using printf
*/