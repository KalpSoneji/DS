#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, arr[7] = {1, 2, 3, 4, 5, 6, 7};

    for (i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        for(j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
                if(arr[i] + arr[j] == 9){
                printf("%d\t%d\n", arr[i], arr[j]);
            }   
        }
    }

}

// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Pairs with sum 9:\n");

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == 9) {
//                 printf("(%d, %d)\n", arr[i], arr[j]);
//             }
//         }
//     }

//     return 0;
// }