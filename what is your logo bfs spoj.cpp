#include<bits/stdc++.h>
using namespace std;
int cnt;
int visit(bool visited[][1100],int posx, int posy)
{
    if(visited[posx][posy])
    {
        cnt++;
    }
}


int main()
{
    char s[1100];
    bool visited[1100][1100];
    int x,y,i,j;

    while(1)
    {

        cin>>s;
        if(s[0]=='Q')
        {
            break;
        }
        for(i=0;i<1100;i++)
        {
            for( j=0;j<1100;j++)
            {
                visited[i][j]=false;
            }
        }
         cnt=0;
        x=550;
        y=550;
        for(i=0;s[i]!='Q';i++)
        {
            visited[x][y]=true;

            if(s[i]=='U')
            {
                visit(visited,x,y+1);
                y++;
            }
            if(s[i]=='D')
            {
                visit(visited,x,y-1);
                y--;
            }
            if(s[i]=='R')
            {
                visit(visited,x+1,y);
                x++;
            }
            if(s[i]=='L')
            {
                visit(visited,x-1,y);
                x--;
            }
        }


     cout<<cnt<<endl;
    }



    return 0;
}
