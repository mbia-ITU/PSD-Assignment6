// run (fromFile "exer7.2.ii.c") [0];;
void main(int n) {
    int arr[20];
    arr[0] = 7;
    arr[1] = 13;
    arr[2] = 9;
    arr[3] = 8;

    square(n, arr);

    int sump;
    sump = 0;

    arrsum(n, arr, &sump);

    print sump;
    println;
}

void arrsum(int n, int arr[], int *sump){
    int i;
    i = 0;
    int temp;
    temp = 0;

    while(i<n){
        temp = temp + arr[i];
        i = i+1;
    }
    *sump = temp;
}

void square(int n, int arr[]){
    int i;
    i = 0;

    while(i<n){
        arr[i] = arr[i] * arr[i];
        i = i+1;
    }
}