
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define N 10
int i;
class Linearprobing
{
    private:
        int a[N];
    public:
        Linearprobing()
        {
            for(i=0;i<N;i++)
            {
                a[i]=NULL;
            }
        }
        void Insert(int);
        void Display();
        void Delete(int);
        void Search(int);


};
void Linearprobing::Insert(int v)
{
    int hkey,k;
    hkey=v%N;
    if(a[hkey]==NULL)
    {
        a[hkey]=v;
    }
    else
    {
        for(i=1;i<=N;i++)
        {
            k=(hkey+i)%N;
            if(a[k]==NULL)
            {
                a[k]=v;
                break;
            }
        }
        if(i>N)
            cout<<"hash table is full\n";
    }
}
void Linearprobing:: Display()
{
    cout<<"  HASH TABLE        \n";
    cout<<"KEY       VALUE\n";
    for(i=0;i<N;i++)
    cout<<i<<"      "<<a[i]<<endl;
}
void Linearprobing::Delete(int v)
{
    int hkey,k;
    hkey=v%N;
    if(a[hkey]==v)
        a[hkey]=NULL;
    else
    {
        for(i=1;i<=N;i++)
        {
            k=(hkey+i)%N;
            if(a[k]==v)
               {
                    a[k]=NULL;
                    break;
               }
        }
        if(i>N)
            cout<<"element is not found in the hash table\n";
    }

}
void Linearprobing::Search(int k)
{
    int hkey,t;
    hkey=k%N;
    if(a[hkey]==k)
        cout<<"element found\n";
    else
    {
        for(i=1;i<=N;i++)
        {
            t=(hkey+i)%N;
            if(a[t]==k)
            {
                cout<<"element found\n";
                break;
            }
        }
    if(i==N)
        cout<<"element is not found\n";
    }

}
int main()
{
    int c,x,k,v;
    Linearprobing s;
    while(1)
    {
        cout<<"menu\n1.Insert()\n2.Delete()\n3.Display()\n4.Search()\n5.exit()\n";
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"enter some value to probe\n";
                cin>>v;
                s.Insert(v);
                break;
            case 2:
                cout<<"enter some value to delete\n";
                cin>>v;
                s.Delete(v);
                break;
            case 3:
                s.Display();
                break;
            case 4:
                cout<<"enter some element to search\n";
                cin>>v;
                s.Search(v);
            case 5:
                exit(12);

        }
    }
}
