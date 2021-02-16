vector<int> rotLeft(vector<int> a, int d) {
    
    for (int i = 0; i < d; i++)
    {
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    
    return a;


}

//https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays