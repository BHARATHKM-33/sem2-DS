#include <iostream>
using namespace std;

#define max 10
int main()
{
    int s[10][10], i, j, r, c, rs[max][3];
    int size = 0;
    int k = 1;

    cout << "\nEnter the order of matrix: ";
    cin >> r >> c;

    cout <<"\nEnter the elements of matrix\n";
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            cin >> s[i][j];

    
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(s[i][j] != 0)
                size++;

    if(size < (r * c) / 2)
    {
        for(i = 0; i < r; i++)
            for(j = 0; j < c; j++)
             if(s[i][j] != 0)
             {
                rs[k][0] = i;
                rs[k][1] = j;
                rs[k][2] = s[i][j];
                k++;
             }
        rs[0][0] = r;
        rs[0][1] = c;
        rs[0][2] = size;

        cout << "Sparse representation: " << endl;
        for(i = 0; i <= size; i++)
        {
            for(j = 0; j < 3; j++)
                cout << rs[i][j] << " ";
            cout<<endl;
        }
    }
    else
        cout << "\nThe given matrix is not a sparse matrix\n";
    return 0;

}