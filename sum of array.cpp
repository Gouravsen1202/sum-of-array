#include<iostream>
using namespace std; 
int main(){
//	int i;
//	int arr1[5],arr2[5],arr3[5];
//	for(i=0;i<5;i++){
//		cout<<"enter arr1 no.";
//		cin>>arr1[i];
//	}
//		
//			for(i=0;i<5;i++){
//				cout<<"enter arr2 no.";
//				cin>>arr2[i];
//			}
//		
//		
//			for(i=0;i<5;i++){
//				arr3[i]=arr1[i]+arr2[i];
//				cout<<"your answer is ";
//				cout<<arr3[i]<<endl;
//		
//		
//	}
//}
//sum of array by leetcode question:
int arr1[5]={1,2,3,4,5};
int target=4;
int i=0;
for(i=0;i<5;i++)
{
	for(int j=i+1;j<5;j++)
	{
		if(target==(arr1[i]+arr1[j]))
		{
		cout<<i<<" "<<j<<endl;
}
}
}
return 0;
}
