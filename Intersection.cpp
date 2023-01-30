#include<iostream>
using namespace std;
void intersection(int num1[],int num2[],int size1,int size2)
{
    int intersection =0;
    for(int i=0;i<size1;i++)
    {
        for(int j =0; j<size2;j++)
        {
            if(num1[i]==num2[j])
            {
            intersection = num2[j];
            num2[j] = num2[j]^num1[i];
            cout<<intersection<<" ";
            break;
            }
        }
    }
    if(intersection==0)
    cout<<"-1";
}
int main()
{
    int size1,size2;
    cout<<"enter the size of arrays"<<endl;
    cin>>size1>>size2;
    int num1[20];
    cout<<"enter the element in first array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>num1[i];
    }
    cout<<"enter the element in second array"<<endl;
    int num2[20];
    for(int i=0;i<size2;i++)
    {
        cin>>num2[i];
    }
    intersection(num1,num2,size1,size2);
    return 0;

}