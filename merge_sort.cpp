void Merge(int arr[],int l,int mid,int r)
{
    int i=l,j=mid+1,k=0;
    int tmp[r-l+1];
    while(i<=mid && j<=r)
    {
       if(arr[i]<=arr[j])
       {
          tmp[k]=arr[i];
          i++;k++;
       }
       else{
        tmp[k]=arr[j];
        j++;k++;
       }
    }
    while(i<=mid) tmp[k++]=arr[i++];
    while(j<=r) tmp[k++]=arr[j++];
    for( i=l,k=0;i<=r;i++,k++)
    {
        arr[i]=tmp[k];
    }
}
void merge_sort(int arr[],int l,int r)
{
    if(l==r) return ;
    int mid=(l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    Merge(arr,l,mid,r);

}
int main()
{
  optimize();
  int arr[]={2,3,1,10,4,3,11,8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int l=0,r=8;
  merge_sort(arr,l,r);
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
