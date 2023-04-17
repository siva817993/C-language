#include<iostream>
using namespace std;
#define tsize 10
int htable[tsize],h1key,h2key,index,i;
class double_hashing
{
public:

    double_hashing()
    {
        for(i=0;i<tsize;i++)
        {
            htable[i]=0;
        }
    }
    void insertion();
    void deletion();
    void searching();
    void display();
};
void double_hashing::insertion()
{
    int value,index,h2key;
    cout<<"Enter element to insert:"<<endl;
    cin>>value;
    h1key=value%tsize;
    if(htable[h1key]==0)
        htable[h1key]=value;
    else
    {
        index=h1key;
        for(i=1;i<=tsize;i++)
        {
            h2key=8-(value%8);
            index=(index+h2key)%tsize;

            if(htable[index]==0)
            {
                htable[index]=value;
                break;
            }
        }
        if(i>tsize)
            cout<<value<<" cannot be inserted"<<endl;
    }

}

void double_hashing::deletion()
{
    int value;
    cout<<"Enter value to be deleted:"<<endl;
    cin>>value;
    h1key=value%tsize;
    if(htable[h1key]==value)
    {
        htable[h1key]=0;
       //cout<<value<<" is deleted.";
    }
    else
    {
        index=h1key;
        for( i=1;i<=tsize;i++)
        {
            h2key=8-(value%8);
            index=(index+h2key)%tsize;
            if(htable[index]==value)
            {
                htable[index]=0;
                break;
            }
        }
        if(i>tsize)
            cout<<value<<" not found in table "<<endl;
    }


}
void double_hashing::display()
{
    cout<<"KEY\tVALUE"<<endl;
    for(int i=0;i<tsize;i++)
    {

       cout<<i<<"\t"<<htable[i]<<endl;
    }
}

void double_hashing::searching()
{
    int value;
    cout<<"Enter value to be searched:"<<endl;
    cin>>value;
    h1key=value%tsize;
    if(htable[h1key]==value)
        cout<<"Element found at index "<<endl;
    else
    {
        index=h1key;
        for(int i=0;i<=tsize;i++)
        {
            index=(index+h2key)%tsize;
            if(htable[index]==0)
            {
                cout<<"Element not found..."<<endl;
                break;
            }
            else if(htable[index]==value)
            {
                cout<<"Element found at index "<<index<<endl;
                break;
            }

        }
        if(i>tsize)
            cout<<"Element not found"<<endl;
    }

}
int main()
{
    double_hashing obj;
    int op;
    while(1)
    {
        cout<<"1.Insertion."<<endl;
        cout<<"2.Deletion."<<endl;
        cout<<"3.Display."<<endl;
        cout<<"4.Searching."<<endl;
        cout<<"Enter the choice:";
        cin>>op;
        switch(op)
        {
            case 1: obj.insertion();
                    break;
            case 2: obj.deletion();
                    break;
            case 3: obj.display();
                    break;
            case 4: obj.searching();
                    break;
            case 5: exit(0);
        }
    }
}
