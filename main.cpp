// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    
    int position = 1;
    int bribes = 0;
    bool chaotic = false;
    
    for (int i = 0; i < q.size(); i++)
    {
        if (q[i] > position + 2)
        {
            std::cout<<"Too chaotic\n";
            chaotic = true;
            break;
        }

        for(int j = q[i]-2; j < position - 1; j++)
        {
            if (q[j] > q[i])
            {
                bribes++;
            }
        }

        
        position ++;

    }

    if (chaotic == false)
    {
    std::cout<<bribes <<"\n";
    }

}


//https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays