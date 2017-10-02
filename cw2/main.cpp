#include <iostream>
#include <windows.h>

using namespace std;


void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }


int main()
{
    int wiersze;


    cout<<"podaj ilosc wierszy?"<<endl;
    cin>>wiersze;
    wiersze=wiersze*2;
     for(int i=0;i<(wiersze/2)+1;i++)
    {

        for(int j=0; j<wiersze ;j++)
        {
            gotoxy(j+40,i);

            if(j+i<wiersze/2||j-i>wiersze/2)
                cout<<" ";
            else
                cout<<"x";
        }
        if(i==(wiersze/2)-1)
            break;
        cout<<endl;
    }


    return 0;
}
