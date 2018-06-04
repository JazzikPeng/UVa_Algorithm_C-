//Zhejian Peng
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int stick_length;
    int num_cuts;
    while (cin>>stick_length>>num_cuts)
    {
        if (stick_length == 0)
        {
            break;
        }
        vector<int> cut;
        cut.resize(num_cuts + 2);
        cut[0] = 0;
        // input the cut matrix
        for (int i = 1; i <= num_cuts; i++)
        {
            int n;
            cin >> n;
            cut[i] = n;
        }
        cut[num_cuts + 1] = stick_length;
        
        //initialize min_cut matrix
        vector<vector<int> > min;
        min.resize(cut.size());
        for (int i = 0; i < min.size(); i++)
        {
            min[i].resize(min.size());
        }
        
        // Initialization - minimal cost of cutting a segment with no cutting point in it is 0
        for (unsigned int i = 0; i < cut.size() - 1; i++)
        {
            min[i][i + 1] = 0;
        }
        
        //min[i][j] matrix says is the starting point j is the end point
        for (unsigned int gap = 2; gap <= cut.size() - 1; gap++)
        {
            for (unsigned int i = 0; i + gap < cut.size(); i++)
            {
                int j = i + gap;
                int segment_length = cut[j] - cut[i];
                bool flag = true;
                int minCut = -1;
                for (int k = i + 1; k < j; k++)
                {
                    int cost = min[i][k] + min[k][j];;
                    if (flag)
                    {
                        minCut = cost;
                        flag = false;
                    }
                    else
                    {
                        if (cost < minCut)
                        {
                            minCut = cost;
                        }
                    }
                }
                min[i][j] = segment_length + minCut;
            }
        }
        
        cout << "The minimum cutting is " << min[0][cut.size() - 1] << "." << endl;
    }
    return 0;
}