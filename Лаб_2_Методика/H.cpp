// Максимальна цифра числа

using namespace std;
int Max (int n)
{
    int max=0;
        int temp;
        while(n>0)
                {
                temp=n%10;
                if(temp>=max)
                        max=temp;
                n=n/10;
                }
        return max;
}
 
int main ()
{
    int number;
    cin>>number;
    cout<<Max(number);
    return 0;
}