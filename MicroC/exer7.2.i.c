// run (fromFile "exer7.2.i.c") [0];;
void main(int n) {
    int arr[4];
    arr[0] = 7;
    arr[1] = 13;
    arr[2] = 9;
    arr[3] = 8;

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
