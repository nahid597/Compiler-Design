#include<bits/stdc++.h>

using namespace std;

#define final_state 1
#define unknown_symbol_error 0
#define reched_final 1
#define not_reached_final 2

enum set_data{q0,q1};
//enum inpu{0,1};

int trans_table [100][100];
char alphabet[2] = {'0','1'};
int accept_state[1] = {q1};
int current_state = q0;


 void transitation_Table()
 {
     trans_table[q0][0] = q1;
     trans_table[q0][1] = q0;
     trans_table[q1][0] = q1;
     trans_table[q1][1] = q0;


 }

int dfa(char current_symbol)
{
    int pos,i;

    for(pos = 0; pos < 2 ; pos++)
        if(current_symbol == alphabet[pos])
            break;


    if(pos == 2)
        return unknown_symbol_error;



    for(int i = 0; i < final_state; i++){

           // cout<<"nahid"<<endl;

        current_state = trans_table[current_state][pos];

         if( current_state == accept_state[i])
            return reched_final;
    }

    return not_reached_final;


}


int main()
{

    char current_symbol;
    int result;

    transitation_Table();

    while((current_symbol = getchar()) != '\n')

      if((result = dfa(current_symbol)) == unknown_symbol_error )
        break;

         //cout<<result<<endl;


      switch(result)
      {
          case unknown_symbol_error : cout<< "unknow error "<<current_symbol<<endl;
            break;

          case reched_final : cout<<"Accepted"<<endl;
            break;

          case not_reached_final: cout<< "not Accepted"<<endl;
          break;

      }




    return 0;
}
