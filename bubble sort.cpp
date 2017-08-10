#include<iostream> 
using namespace std;
const int NUM = 5;
int Bubble(int [], const int) ; 
void showBubble(int [], const int ); //function represents the sorted order of Bubble Sort
int Selection(int [], const int);
void showSel(int [], const int); //Function represents the sorted order of Selection sort



int main()
{
  int list_1[NUM], list_2[NUM];
  cout << "Enter the list of 20 integer numbers for Bubble Sort please: " << endl;
  	for(int i = 0; i < NUM; i++)
    	{  
             cin >> list_1[i];
        }
             
  	   
                cout << "The number of swaps are: " << Bubble(list_1, NUM) << endl;
 		cout << "The sorted order is " << endl;   
		showBubble(list_1, NUM);
   

  cout << "Enter the list of 20 integer numbers for Selection Sort please: " << endl;
        for(int k = 0; k < NUM; k++)
       {    
            cin >> list_2[k];
       } 
  	    cout << "The number of swaps are: " << Selection(list_2, NUM) << endl;
  	    cout << " The sorted order is " << endl;
  	    showSel(list_2, NUM);


  return 0;
}

int Bubble(int lol_1[], const int num)
{
  int count = 0;
  bool swap; 
  int temp;
  int a;
  do 
   {
      swap = false;
      for(a = 0; a < (num - 1); a++)
         { 
           if(lol_1[a] > lol_1[a+1])
             { 
               temp = lol_1[a];
               lol_1[a] = lol_1[a + 1];
               lol_1[a + 1] = temp;
               swap = true;
          	 count++; 
             }
         } 
     
   }
  while(swap);
  
  return count;
}


void showBubble(int lol_1[], const int num)
{  
     for(int a = 0; a < num ; a++) 
          { 
            cout << lol_1[a] << " " << " \n" ; 
          }
     cout << endl; 
}



int Selection(int lol_2[], const int num)
{ 
  int counter = 0;
  int min_value;
  int min_index;
  int a; 
 
  
      for(a = 0; a < (num - 1); a++)
        
          {    
           min_index = a;
           min_value = lol_2[a];
         
             for(int i = a+1; i < num; i++)
               { 
                 if(lol_2[i] < min_value)
                   { 
                    min_value = lol_2[i];
                    min_index = i;
                     
                   }
                   
               } 
          	if(min_index != a)
                   {
                    lol_2[min_index] = lol_2[a];
                    lol_2[a] = min_value;
                    counter++;
                   }
           
             }
             
    return counter; 
}


void showSel(int lol_2[], const int num)
{
  for(int a = 0; a < NUM; a++)
      { cout << lol_2[a] << " " << endl; }
}

