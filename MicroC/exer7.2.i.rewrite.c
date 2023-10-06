// run (fromFile "exer7.2.i.rewrite.c") [0];;
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
    int sum;
    sum = 0;

    for(i=0; i<n; i = i+1){
        sum = sum + arr[i];
    }
    *sump = sum;
}
