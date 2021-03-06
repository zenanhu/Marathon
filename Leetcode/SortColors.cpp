class Solution {
public:
    void sortColors(int A[], int n) {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] == 0) ++a;
            else if (A[i] == 1) ++b;
            else if (A[i] == 2) ++c;
        }
        for (int i = 0; i < n; ++i) {
            if (a > 0) { A[i] = 0; --a; continue; }
            if (b > 0) { A[i] = 1; --b; continue; }
            if (c > 0) { A[i] = 2; --c; continue; }
        }
    }
};