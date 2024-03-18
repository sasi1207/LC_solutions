class Solution {
public:
    void merge(vector<vector<int>>& arr, int p, int q, int r) {
        int n1 = q - p + 1;
        int n2 = r - q;
        int L[n1][2], M[n2][2];
        for (int i = 0; i < n1; i++){
            L[i][0] = arr[p + i][0];
            L[i][1] = arr[p+i][1];
        }
        for (int j = 0; j < n2; j++){
            M[j][1] = arr[q + 1 + j][1];
            M[j][0]=arr[q+1+j][0];
        }
        int i, j, k;
        i = 0;
        j = 0;
        k = p;
        while (i < n1 && j < n2) {
            if (L[i][1] <= M[j][1]) {
                arr[k][1] = L[i][1];
                arr[k][0]=L[i][0];
                i++;
            } else {
                arr[k][0] = M[j][0];
                arr[k][1]=M[j][1];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k][0] = L[i][0];
            arr[k][1]=L[i][1];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k][0] = M[j][0];
            arr[k][1]=M[j][1];
            j++;
            k++;
        }
    }
    void mergeSort(vector<vector<int>>& arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int c=1;
        int n=points.size();
        mergeSort(points,0,n-1);
        int k=points[0][1];
        for(int i=1;i<points.size();i++){
            if(k<points[i][0]){
                c++;
                k=points[i][1];
            }
        }
        return c;
    }
};