// //=================================================================================

// //when using pointer as pointer of a fixed array
// #include <stdio.h>
// int arr[10];
// int*data=arr;
// int main(){
//     data[0]=100;
//     data[1]=200;
//     printf("%d %d",data[0],data[1]);
//     printf("%d %d",arr[0],arr[1]);
// }

////================================================================================

// //pointers arrays
// // array pointer when used as an array of pointers..
// #include <stdio.h>
// int a=2,b=23;
// int*data[2];
// int main(){
//     data[0]=&a;
//     data[1]=&b;
//     printf("%d %d",*data[0],*data[1]);
//     return 0;
// }

//--------------------------------------------------------------------------------------=



//---------------------------------------------------------------------------------------
//  int add(int *ptr1, int *ptr2){
//         return(*ptr1+*ptr2);
//     }
// int main(){
//    int a = 2, b=3;
//    int result = add(&a,&b); //call by reference
//    //remember in call by reference we pass the address of arguments and those addresses are received by pointers as arguments
// }


// //-----------------------------------------------------------------------------------------
// int main(){
//     //how to declare a pointer
//     int a ;
//     int *ptr;
//     int *ptr = &a; //declaration with assignment
// }
