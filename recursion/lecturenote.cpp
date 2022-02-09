//recursion works backwards does else first 
//calculates factorial without for loop
int fact(int N)
{
    //Answer to the simplest instance of the problem 
    //THe base case or anchor value
    if (N==1)
    return 1;
    //reducing the oridinal instance towards the base case
    //exploiting a pattern that is inherent in the problem 
    else{
        reuturn N*fact(N-1)
    }
}


int main() 
{
    int N;
    cout << "Give me a number: "<< endl;
    cin >> N;

    cout << "The factorial is: " << factorial(N) <<endl;
    return 0;
}
