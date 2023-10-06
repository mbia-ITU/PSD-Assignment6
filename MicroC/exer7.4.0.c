// run (fromFile "exer7.4.0.c") [0];;
void main(int n){
    int x;
    x = 0;
    int y;
    y = 0;
    y = ++x;            // result: x=1, y=1
    print x;
    print y;
}