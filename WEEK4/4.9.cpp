
void swap(double& a, double& b){
    double temp=b;
    b=a;
    a=temp;
    
}
void sortAscending(float array[], int size){
    for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(array[i]>array[j]){
            swap(array[i],array[j]);
        }
    }}
}
void reverseArray(float array[], int size){
    for(int i=0;i<(size/2);i++){
        swap(array[i],array[size-1-i]);
    }
}
void sort(float array[], int size, bool isAscending){
    
        sortAscending( array, size);
        
    if(isAscending==false){
        reverseArray( array,  size);
    }
}

