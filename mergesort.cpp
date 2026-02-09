#include<iostream>
using namespace std;

void MergeSort(int arr[],int left,int right){
	while(left<right){
	int mid=(left+(right-left))/2;
	
	MergeSort(arr,left,mid);
	MergeSort(arr,mid+1,right);
	MergeSort(arr,left,mid,right);
  }
}
void merge(int arr[],int left,int mid,int right){
	int n1 = mid-left+1;
	int n2 = right-mid;
	int leftarr[n1],rightArr[n2];
	
	for(int i=0;i<n1;i++)
	leftArr[i]=arr[left+i];
	for(int j=0;j<n2;j++)
	rightArr[j]=arr[mid+1+j];
	
	int i=0,j=0,k=left;
	while(i<n1 && j<n2){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}else {
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = rightArr[j];
		j++;
		k++;
	while(j<n2){
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}
