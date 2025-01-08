#include <stdio.h>
#include <stdlib.h>

// int compare(const void *a, const void *b) {
//     return (*(int *)b - *(int *)a);
// }

// int main() {
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int *array = (int *)malloc(n * sizeof(int));
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     qsort(array, n, sizeof(int), compare);
//     printf("Second largest element: %d\n", array[1]);

//     free(array);
//     return 0;
// }

int compare(const void *a,const void *b){
    return (*(int*)b - *(int*)a);
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n * sizeof(int));
    printf("ENter element of array that is %d element: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    printf("Second largest element: %d\n",a[1]);
    free(a);
    return 0;
}