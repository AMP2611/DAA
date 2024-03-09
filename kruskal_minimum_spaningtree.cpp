#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
int source;
int dest;
int weight;
};

bool compare(Edge e1,Edge e2)
{
     return e1.weight<e2.weight;
}

int findparent(int v, int *parent){
    if(parent[v]==v){
        return v;
    }
    return findparent(parent[v],parent);
}

void kruskals(Edge *input, int n, int E)
{
    sort(input,input+n,compare);

    Edge *output=new Edge[n-1];
    int *parent=new int[n];

    for(int i=0; i<E;i++)
    {
        parent[i]=i;
    }
    int count=0;
    int i=0;

    while(count != (n-1))
    {
        Edge currentedge=input[i];
        int sourceparent=findparent(currentedge.source,parent);
        int destparent=findparent(currentedge.dest,parent);
        if(sourceparent!=destparent)
        {
            output[count]=currentedge;
            count++;
            parent[sourceparent]=destparent;
        }
        i++;
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++)

    {

        if(output[i].source<output[i].dest)
        {
            cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;

        }else{
        cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }

    }
    delete[] output;
    delete[] parent;
}
int main()
{
    int n,E;
    cout<<"enter number of input : ";
    cin>>n;
    cout<<"enter number of edge : ";
    cin>>E;
    Edge *input=new Edge[E];

    for(int i=0; i<E;i++)
    {
        cin>>input[i].source;
        cin>>input[i].dest;
        cin>>input[i].weight;

    }

    kruskals(input,n,E);

}
