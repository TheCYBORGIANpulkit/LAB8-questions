#include<iostream>
using namespace std;

//defining the function
//defining array
//return the sum
int fx(int arr[], int n){
	int sum=0,mean;
		for(int i=0; i< n ;i++){
			sum= (sum+ arr[i]);
		}
		return mean= sum/n;
}
int gx(int arr[], int n){
	int mx=arr[0];
	for( int i=0; i< n; i++){
		if(mx< arr[i]){
			mx= arr[i];
		}
	}
	return mx;
	
}
int hx(int arr[], int n){
	int min=arr[0];
	for(int i=0; i< n; i++){
		if(min > arr[i]){
			min= arr[i];
		}
	}
	return 0;
}
		
int main(){
	int n;
	cout<< "How many elements do you want to take in the array?"<<endl;
	cin>>n;
	int arr[n-1];
	cout<<"Enter the elements you want to take in the array"<<endl;
		for(int i=0; i< n; i++){
			cin>> arr[i];
		}
	int r=fx(arr,n), s=gx(arr,n), t=hx(arr,n);
	cout<< "The mean of the elements of the array is "<< r <<endl;
	cout<< "The value of the maximum element among your entries is "<< s <<endl;
	cout<< "The value of teh minimum element among your entries is "<< t <<endl;
	return 0;
}
