#include <iostream>
using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int column,row,choice;

void structureBoard()
{	
	system("cls");
	system("color 70");
	cout<<"\n\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t| Tic Tac Toe Game |\n\t\t\t\t\t\t--------------------\n\n\n\n\n"<<endl;
	

	
cout<<"\t\t\t\t\t\t\t   |       |"<<endl;
		cout<<"\t\t\t\t\t\t\t"<<board[0][0]<<"  |   "<<board[0][1]<<"   |  "<<board[0][2]<<endl;
	cout<<"\t\t\t\t\t\t   ________|_______|________"<<endl;
		cout<<"\t\t\t\t\t\t\t   |       |"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<board[1][0]<<"  |   "<<board[1][1]<<"   |  "<<board[1][2]<<endl;
     	cout<<"\t\t\t\t\t\t   ________|_______|________"<<endl;
		cout<<"\t\t\t\t\t\t\t   |       |"<<endl;	
	cout<<"\t\t\t\t\t\t\t"<<board[2][0]<<"  |   "<<board[2][1]<<"   |  "<<board[2][2]<<endl;
		cout<<"\t\t\t\t\t\t\t   |       |"<<endl;	

}
void player_turn()
{
	
	if(turn == 'X')
	cout<<"\n\t\t\tPlayer 1(X) Turn: ";
	
	if(turn == 'O')
	cout<<"\n\t\t\tPlayer 2(O) Turn: ";
	
	cin>>choice;
	switch(choice){
		case 1: row=0; column=0;break;
		case 2: row=0; column=1;break;
		case 3: row=0; column=2;break;
		case 4: row=1; column=0;break;
		case 5: row=1; column=1;break;
		case 6: row=1; column=2;break;
		case 7: row=2; column=0;break;
		case 8: row=2;column=1;break;
		case 9: row=2; column=2;break;
		default:
			cout<<"invalid";
			break;
	}
	if(turn=='X' && board[row][column] !='X' && board[row][column] !='O'){
		 board[row][column] ='X';
		 turn ='O'; 
	}
	else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O'	){
		 board[row][column] ='O';
		 turn ='X';
	}
	
	else{
		cout<<"Invalid Choise Please select another number"<<endl;
		player_turn();
	}
	


}
char win()
{
//	first Person
if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
return'X';
if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
return'X';
if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
return'X';

if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
return'X';
if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
return'X';
if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
return'X';

if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
return'X';
if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
return'X';


//second person	
if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
return'O';
if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
return'O';
if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
return'O';

if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
return'O';
if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
return'O';
if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
return'O';

if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
return'O';
if(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
return'O';

}

int main()
{

while(1){
	structureBoard();
	player_turn();
	structureBoard();
	if(win() == 'X'){
		cout<<"Person 1 Winner";
		break;
	}
	else if(win() == 'O'){
	cout<<"Person 2 Winner"	;
	break;
	}
	
}
}

	
		
			
	
	

