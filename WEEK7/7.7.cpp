int** inputMatrix(int nRows, int nCols){
    //d?c ma tr?n s? nguy�n, luu v�o m?t m?ng d?ng hai chi?u
    //v� tr? v? con tr? tr? d?n m?ng d?ng n�y.
    int** matrix= new int*[nRows];
    for(int i=0;i<nRows;i++){
        matrix[i]= new int [nCols];
    }
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
        cin>>matrix[i][j];
        }
    }
    return matrix;
}
void printMatrix(int** matrix, int nRows, int nCols){
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
//nh?n tham s? l� con tr? d?n m?ng d?ng hai chi?u matrix, H�m n�y in
