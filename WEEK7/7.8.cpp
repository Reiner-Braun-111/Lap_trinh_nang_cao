int** transpose(int** matrix, int nRows, int nCols){
    int** afMatrix = new int*[nCols];
    for(int i=0;i<nCols;i++){
        afMatrix[i]= new int [nRows];
    }
    for(int i=0;i<nCols;i++){
        for(int j=0;j<nRows;j++){
        afMatrix[i][j]=matrix[j][i];
        }
    }
    return afMatrix;
}
