#include<iostream>
using namespace std;

int main()
{       char pl1,pl2;

 cout<<"-----------------------------TIC-TAC-TOE------------------------------- \n";

        cout<<"Player 1: X" <<endl;
        cout<<"---------------------------------------------------------------------- \n";
        cout<<"Player 2: O" << endl;
          cout<<"---------------------------------------------------------------------- \n";
        cout<<"To exit game enter 0"<<endl;

          cout<<"---------------------------------------------------------------------- \n \n";


        cout<<" \t|1|2|3|\n";
        //cout<<" -------------------------------------------------------\n";
        cout<<" \t|4|5|6|\n";
        //cout<<" --------------------------------------------------------\n";
        cout<<" \t|7|8|9|\n";

        char arr[3][3];
      int arr2[9];
        arr[0][0]='1'; arr[1][0]='4'; arr[2][0]='7';
        arr[0][1]='2'; arr[1][1]='5'; arr[2][1]='8';
        arr[0][2]='3'; arr[1][2]='6'; arr[2][2]='9';
        int i=0;
      int flag=1;
      int n;
      

        cout<<" \n";
     
     
        while(i<9){
      cout<<"-------------------\n";

        cout<<"player : "<<flag<<endl;
        cout<<"------------------- \n";
        cout<<"Enter number u want to make urs- "<<endl;
        stop:
        cin>>n;

        arr2[i]=n;

        if(i>0){
              for(int o=0;o<i;o++){
                    if(arr2[o]==n){
                          cout<<"-------------- \n";
                          cout<<"invalid input \n";
                          cout<<"Enter again \n";
                          cout<<"-------------- \n";
                          goto stop;
                          
                    }
              }
        }

        if(flag==1){
                if(n==0)
                        break;
                else if(n==1)
                      arr[0][0]='X';
                else if(n==2)
                        arr[0][1]='X';  
                else if(n==3)
                       arr[0][2]='X';  
                 else if(n==4)
                       arr[1][0]='X';  
                 else if(n==5)
                       arr[1][1]='X';  
                 else if(n==6)
                       arr[1][2]='X';  
                 else if(n==7)
                       arr[2][0]='X';  
                else if(n==8)
                       arr[2][1]='X';   
                else if(n==9)
                       arr[2][2]='X';     
                       }

        else if(flag==2)
        {
                if(n==1)
                      arr[0][0]='O';
                else if(n==2)
                        arr[0][1]='O';  
                else if(n==3)
                       arr[0][2]='O';  
                 else if(n==4)
                       arr[1][0]='O';  
                 else if(n==5)
                       arr[1][1]='O';  
                 else if(n==6)
                       arr[1][2]='O';  
                 else if(n==7)
                       arr[2][0]='O';  
                else if(n==8)
                       arr[2][1]='O';   
                else if(n==9)
                       arr[2][2]='O';     

        }

     

        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                        cout<<"|";
                        cout<<arr[i][j]<<"|";
                       
                }
                cout<<"\n";
        }
        cout<<endl;

        if((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')){ break; }
        else if((arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')){ break; }
        else if((arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')){ break; }
        else if((arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')){ break; }
        else if((arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')){ break; }
        else if((arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][2]=='O' && arr[1][0]=='O' && arr[2][0]=='O')){ break; }
        else if((arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')){ break; }
        else if((arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')){ break; }
        i++;

        if(flag==1){
              flag=2;
        }
        else if(flag==2){
              flag=1;
        }
 

}

if(i==9){ 
      cout<<"------ \n";
      cout<<"| DRAW | \n";
      cout<<"------ \n";

}
else if(n==0){
      cout<<"-------------- \n";
      cout<<"| GAME EXITED | \n";
      cout<<"-------------- \n";
}
else{
      cout<<"------------------- \n";
cout<<"| WINNER: PLAYER "<<flag<<" | \n";
cout<<"------------------- \n";
}
        return 0;
        }