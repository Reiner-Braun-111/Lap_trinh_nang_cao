#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double temp=1;
    double sum=1,oldSum=0;
    while(sum-oldSum>0.001){
    //	cout<<"temp"<<temp;
        oldSum=sum;
      //  cout<<"sum"<<sum;
        double xi = n;
        for(int i=2;i<=temp;i++){
            xi=xi*n/i;
            //cout<<"xi"<<xi<<endl;
        }
        temp++;
    //    cout<<"temp"<<temp;
        sum+=xi;
        //cout<<"sum"<<sum<<endl;
    }
    cout<<setprecision(4)<<fixed<<sum;
    return 0;
}


