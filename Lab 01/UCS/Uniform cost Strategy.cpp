//Single Source Shortest Path

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define MP make_pair
#define INF INT_MAX

vector<vector<pair<int,int>>>AdjList(1000);
vector<int>dist,parent;
int source,destination,totalnode=0;
map<char,int>mp;
map<int,char>mp2;

void Traverse(){
    for(int i=0;i<totalnode;i++)
    {
        cout<<mp2[i]<<": "<<endl;
        for(int j=0;j<AdjList[i].size();j++)
        {
            cout<<mp2[AdjList[i][j].first]<<" "<<AdjList[i][j].second<<endl;
        }
        cout<<endl;
    }
}

void bfs(int node){
//    for(int i=0;i<AdjList[node].size()){
//        if(!visited[AdjList[node][i]){
//            continue;
//        }
//    }
}

void ucs(){
    int visited[totalnode]={0};
    bfs(mp[source]);
}

int main()
{

    ifstream input("input.txt");
    // ofstream output("output.txt");

    int number;
    string word;
    vector<pair<int,string>>v;
    while(input>>number>>word){
        v.pb({number,word});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i].second<<endl;
    }


    return 0;
}
