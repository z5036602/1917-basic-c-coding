#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FALSE 1
#define TRUE 0 
#define NEUTRAL 3

int evaluation(int a[100],int posi,int numofopitions );
int errorchecking( int input[],int pos);
int errorchecking2(int input2[],int pos2); 
int numberofelements(int input[],int pos);
void print_array(int input[]);
void goddamnit(int input[]);




int main (int argc, char *argv[]){
    int input[100] = {0};
    int input2[100]={0};
    int input3[100]={0};
    int choice[100]= {0};
    int choice2[100]= {0};
    int pos = 0;
    int pos2=0;
    int pos3=0;
    int posi= 0;
    int posi2=0;
    int c=0;
    int c2=0;
    int c3=0;
    int invalidchoice=0;
    int invalidchoice2=0;
    int flag=0;
    int flag2=0;
    int flag3=0;
    int NOERROR2=TRUE; 
    int NOERROR=TRUE;
    int NOERROR3=TRUE; 

    
    printf("Please enter dice values:\n");
    printf("> ");
    

    while(c!= '\n'){                                               
        
        c=getchar();
        
        if(c== ' '){
            
            flag = 0;
        }
        if(c!=' '&& c!='\n'){
            if (flag == 1) {
                printf("Incorrect Input Format\n");
                
                NOERROR=FALSE;
                
                exit(0);
            }
        
       input[pos]=c;
        
       pos++;
        
       flag = 1;
                                       
        }  
    }      

    int error=FALSE; 
    
    if(NOERROR==TRUE){
        error= errorchecking (input,pos);
    }
    if(error==0){
        exit(0);
    }
    



    print_array(input);

    
    printf("Please choose:\n");
    
    printf(" 1 -> Reroll some dice\n");
    
    printf(" 2 -> Reroll all dice\n");
    
    printf(" 3 -> Keep dice\n");
    printf(">");
     
    
    int numofoperation=3;
	
    while(invalidchoice!='\n'){                                                 
        invalidchoice=getchar();
        
        if(invalidchoice>='0'&&invalidchoice<='9'){	 
            choice[posi]=invalidchoice - '0';
            posi++;
       }  
    }
    
    int operation=0;
    operation=evaluation(choice, posi,numofoperation);
    






    if(operation==3){
        goddamnit(input);
    }






    else if(operation==2){
        printf("Please enter dice values:\n");
        printf("> ");

        while(c2!= '\n'){                                               
        
            c2=getchar();
        
            if(c2== ' '){
            
                flag2 = 0;
            }
            if(c2!=' '&& c2!='\n'){
                if (flag2 == 1) {
                    printf("Incorrect Input Format\n");
                
                    NOERROR2=FALSE;
                
                    exit(0);
                }
        
             input2[pos2]=c2;
        
             pos2++;
        
             flag2 = 1;
                                       
            }  
        }      
        int error2=FALSE; 
    
        if(NOERROR2==TRUE){
            error2= errorchecking (input2,pos2);
        }
        if(error2==0){
            return EXIT_SUCCESS;
        }
    
    
        print_array(input2);

    
        printf("Please choose:\n");
    
        printf(" 1 -> Reroll some dice\n");
    
        printf(" 2 -> Reroll all dice\n");
    
        printf(" 3 -> Keep dice\n");
    
        printf(">");
     
    
        int numofoperation2=3;
	
        while(invalidchoice2!='\n'){                                                 
            invalidchoice2=getchar();
        
            if(invalidchoice2>='0'&&invalidchoice2<='9'){	 
                choice2[posi2]=invalidchoice2 - '0';
                posi2++;
            }  
        }
    
        int operation2=0;
        operation2=evaluation(choice2, posi2,numofoperation2);
    
        if(operation2==3){
        
             goddamnit(input2);
        }
        
        else if (operation2==2){ 
            printf("Please enter dice values:\n");
            printf("> ");

        //getchar();
            while(c3!= '\n'){                                               
        
                c3=getchar();
        
                if(c3== ' '){
            
                flag3 = 0;
            }
                if(c3!=' '&& c3!='\n'){
                    if (flag3 == 1) {
                        printf("Incorrect Input Format\n");
                
                        NOERROR3=FALSE;
                
                        exit(0);
                    }
        
                input3[pos3]=c3;
        
                pos3++;
        
                flag3 = 1;
                                       
                }  
            }  
        
        int error3=FALSE; 
    
        if(NOERROR3==TRUE){
            error3= errorchecking (input3,pos3);
        }
        if(error3==0){
            exit(0);
        }
    
    
        print_array(input3);
     
        goddamnit(input3);
  
        }
    }




    else if(operation==1){
        printf("Please enter dice to reroll (1 - 5):\n");
        printf("> ");
        printf("dsfafafd");
        //getchar();
        while(c2!= '\n'){                                               
        
            c2=getchar();
        
            if(c2== ' '){
            
                flag2 = 0;
            }
            if(c2!=' '&& c2!='\n'){
                if (flag2 == 1) {
                    printf("Incorrect Input Format\n");
                
                    NOERROR2=FALSE;
                
                    exit(0);
                }
        
             input2[pos2]=c2;
        
             pos2++;
             
        
             flag2 = 1;
                                       
            }  
        }      
        





        int error2=FALSE; 
    
        if(NOERROR2==TRUE){
            error2= errorchecking2 (input2,pos2);
        }
        if(error2==0){
            exit(0);
        }

        int number=numberofelements(input2,pos2);
        printf("%d\n",number);
        

    }



     return EXIT_SUCCESS;
}

















int evaluation(int a[100],int posi,int numofopitions){
	int finalchoice;
	if((a[0] <= numofopitions) && (a[0] >=1)) {
		finalchoice=a[0];
                //printf("the choice is %d\n", a[0]);
	        return finalchoice;
         }
	else {  printf("\n");
		printf("Invalid Choice\n");
		exit(0);
	}
}
int errorchecking2(int input2[],int pos2){  
    int error=3;
    int i=0;

    while(i<pos2){
         if(input2[i]<'0'||input2[i]>'9'){
            printf("Incorrect Input Format\n");
            error=TRUE;
            
         } 
         else if(input2[i]<'1'||input2[i]>'5'){
            printf("Dice Number Out of Range\n");
            error=TRUE;
              
         }
          i++;
    }
    
    return error;
}
int numberofelements(int input[],int pos){
    int i=0;
    int i2=0;
    int dicearray[100]={0};
    int counter=0;
    while (i<pos){
        if(input[i]==1){
            
            dicearray[0]++;
        }
    
        if(input[i]==2){
            
            dicearray[1]++;
        }  

        if(input[i]==3){
            
            dicearray[2]++;
        }



        if(input[i]==4){
            
            dicearray[3]++;
        }


        if(input[i]==5){
            
            dicearray[4]++;
        }
        i++;

    }
    while(i2<5){
        if(dicearray[i2]>0){
        counter++;
        }
        i2++;
    }
    return counter;
}

int errorchecking( int input[],int pos){
    int numOfNumber = 0;
    int error=3;
    int i=0;
     
    while(i<pos){                                                  //evaluation of input
        if(input[i]<'0'||input[i]>'9'){
            printf("Incorrect Input Format\n");
            error=TRUE;
            //return error;
         }
         else if(input[i]<='0'||input[i]>'6'){
            printf("Value Out of Range\n");
            error=TRUE;
            //return error;  
         } 
         else {
            numOfNumber++;
         }
          i++; 
     }
         
     if (numOfNumber != 5 && error==3) {
             
        printf("Incorrect Number of Values\n");
        error=TRUE;     
    }
    return error;
}   
void print_array(int input[]){
    int i;
    printf("\n");
    printf("Your dice values are: "); 
    for(i=0;i<5;i++){
       printf("%d ",input[i]-48);
    }
    printf("\n");
}

void goddamnit(int input[]){
    printf("\n");
    
    printf("Your score options are:\n");
    
    int countercheck=0;
    int dicearray[100]={0};
    
    while(countercheck<5){
        if(input[countercheck]=='1'){
            dicearray[0]++;
    
        }
        if(input[countercheck]=='2'){
            dicearray[1]++; 
        
        }
        if(input[countercheck]=='3'){
            dicearray[2]++;
    
        }

        if(input[countercheck]=='4'){
            dicearray[3]++;
    
        }

        if(input[countercheck]=='5'){
        dicearray[4]++;
    
        }
        if(input[countercheck]=='6'){
            dicearray[5]++;
        
        }
      
        countercheck++;
        
    }
      
    
    
    int small_straight=0;
    int dicearraycounter=0;
    int straightcounter=0;
    int straight=0;
      
    for(dicearraycounter=0;dicearraycounter<6;dicearraycounter++){
          if(dicearray[dicearraycounter]==0){
          	straightcounter++;
          }
    }
    
    if(straightcounter==1){
          small_straight=1;
          straight=1;
    }
      
    if(straightcounter==2&&
     ((dicearray[0]!=0&&dicearray[1]!=0)||
      (dicearray[1]!=0&&dicearray[4]!=0)||
      (dicearray[4]!=0&&dicearray[5]!=0))){
      
          small_straight=1;
    }
      
    if(straightcounter!=1&&straightcounter!=2){   
           small_straight=0;
    }
          
     
   
   
   int P=0;
   int W=0;
   int Q=0;
   int E=0;
   int R=0;
   int T=0;
   int check=0;
   int sum=(input[0]-'0')+(input[1]-'0')+(input[2]-'0')+(input[3]-'0')+(input[4]-'0');
   

   while(check<6){
       if(dicearray[check]>=3){
            
            printf("1 -> Three of a Kind (%d points)\n",sum);
            E=E+1;         

       }
       if(dicearray[check]>=4){
        	
            printf("2 -> Four of a Kind (%d points)\n",sum);
            R=R+1;

       }
       if(dicearray[check]==3 && 
         (dicearray[0]==2||dicearray[1]==2||
          dicearray[2]==2||dicearray[3]==2||
          dicearray[4]==2||dicearray[5]==2)){
            
            printf("2 -> Full House (25 points)\n");
            T=T+1;
            
       }
   check++;
        
   }

   
   if(dicearray[2]!=0 && dicearray[3]!=0 && small_straight==1){    
           
           printf("1 -> Small Straight (30 points)\n");
           Q=Q+1;
   
   }
   if(dicearray[2]!=0 && dicearray[3]!=0 && 
          straight==1&& (dicearray[1]!=0 && 
                          dicearray[4]!=0)){
       
       printf("2 -> Straight (40 points)\n"); 
       W=W+1;
   }
   
   if(input[0]==input[1] && input[1]==input[2]&& 
      input[2]==input[3] && input[3]==input[4]){
       
       P=P+1;
       printf("3 -> Yahtzee (50 points)\n");
   }
    
   
   int numofscoreopitions=E+R+T+Q+W+P+1;
  
   printf("%d -> Chance (%d points)\n",numofscoreopitions=E+R+T+Q+W+P+1,sum);
   printf("> ");	   
   


   int posin = 0;
   int invalidchoice2=0;
   int scorechoice[100]={0};	
   
   while(invalidchoice2!='\n'){
       invalidchoice2=getchar();
       if(invalidchoice2>='0'&&invalidchoice2<='9'){
			 
           scorechoice[posin]=invalidchoice2-'0';
       
           posin++;
         } 
   }
   

   int finalchoice2=evaluation(scorechoice,posin, numofscoreopitions); 
    

  
   printf("\n");
   printf("Your score is: ");
   
   if(finalchoice2==2&&T==1){
       
       printf("25 points\n");
   }
   else if((finalchoice2==1||finalchoice2==2) && (E==1||R==1)){
       
       printf("%d points",sum);
   }
   else if(finalchoice2==1&& Q==1){
   
       printf("30 points\n");
   }
   else if(finalchoice2==2&& W==1){
       
       printf("40 points\n");
   }
   else if(finalchoice2==3&& P==1){
       
       printf("50 points\n");
   }
   else  {
       
       printf("%d points\n",sum);
   }
   printf("\n");

}
















/*void dice_array (int input[]){                                                           
        int countercheck=0;
        int dicearray[100]={0};
        while(countercheck<5){
            if(input[countercheck]=='1'){
                dicearray[0]++;
	    }
            if(input[countercheck]=='2'){
                  dicearray[1]++; 
            }
            if(input[countercheck]=='3'){
                  dicearray[2]++;
	    }

            if(input[countercheck]=='4'){
                  dicearray[3]++;
	    }

            if(input[countercheck]=='5'){
	   						
                  dicearray[4]++;
	    }
            if(input[countercheck]=='6'){
                  
                  dicearray[5]++;
            }
          
               countercheck++;
            
         }
          int small_straight=0;
          int dicearraycounter=0;
          int straightcounter=0;
          int straight=0;
          for(dicearraycounter=0;dicearraycounter<6;dicearraycounter++){
              if(dicearray[dicearraycounter]==0){
              straightcounter++;
               }
          }
          if(straightcounter==1){
              small_straight=1;
              straight=1;
          }
          if(straightcounter==2&&((dicearray[0]!=0&&dicearray[1]!=0)||
                          (dicearray[1]!=0&&dicearray[4]!=0)||
                          (dicearray[4]!=0&&dicearray[5]!=0))){
               small_straight=1;
          }
          if(straightcounter!=1&&straightcounter!=2){   
               small_straight=0;
          }
              
         
       int E=0;
       int R=0;
       int T=0;
       int check=0;
       int sum=(input[0]-'0')+(input[1]-'0')+(input[2]-'0')+(input[3]-'0')+(input[4]-'0');
       while(check<6){
	    if(dicearray[check]>=3){
                printf("1 -> Three of a Kind (%d)\n",sum);
                E=E+1;         

            }
            if(dicearray[check]>=4){
            	printf("2 -> Four of a Kind (%d)\n",sum);
                R=R+1;

            }
            if(dicearray[check]==3 && (dicearray[0]==2||dicearray[1]==2||dicearray[2]==2||dicearray[3]==2
                                      ||dicearray[4]==2||dicearray[5]==2)){
                printf("2 -> Full House (%d)\n",sum);
                T=T+1;
                
            }
            check++;
            
       }
       int P=0;
       int W=0;
       int Q=0;
       
       if(dicearray[2]!=0 && dicearray[3]!=0 && small_straight==1){     //&& ((input[1]==input[2]-1 && input[2]== input[3]-1)||(input[1]==input[2]+1 && input[2]==input[3]+1))){
           printf("1 -> Small Straight (30)\n");
              Q=Q+1;
       
       }
       if(dicearray[2]!=0 && dicearray[3]!=0 && straight==1){
           printf("2 -> Straight (40)\n"); 
           W=W+1;
       }
       
    if(input[0]==input[1] && input[1]==input[2] && input[2]==input[3] && input[3]==input[4] &&input[4]==input[5]){
           P=P+1;
           printf("3 -> Yahtzee (50)\n");
       }
        int numofscoreopitions=E+R+T+Q+W+P;
      printf("%d -> Chance (15)\n",numofscoreopitions=E+R+T+Q+W+P+1);
}       
      
     
      while(invalidchoice!='\n'){                                                 
        invalidchoice=getchar();
        if(invalidchoice==' ' || invalidchoice=='\n' || isdigit(invalidchoice)){
				 
				 if(invalidchoice=='\n')
					 break;
				 
                 choice[posi]=invalidchoice;
				 posi++;
             } 
             else {
                 printf("\n");
	         printf("Invalid Choice\n");
	         return 0;				 
             }
       }
    int operation=evaluation(choice, posi,numofoperation);
    if(operation==3){
    printf("\n");
    printf("Your score opitions are:\n");
    dice_array(input);
    

    printf("> ");	
     
       
       int posin = 0;
       int invalidchoice2=0;
       char scorechoice[100]={0};	
       while(invalidchoice2!='\n'){
             invalidchoice2=getchar();fgetc(stdin);
             if(invalidchoice2==' ' || invalidchoice2=='\n' || isdigit(invalidchoice2)){
				 
				 if(invalidchoice2=='\n')
					 break;
				 
                 scorechoice[posin]=invalidchoice2;
				 posin++;
             } 
             else {
				
                 printf("Invalid choice\n");
	         return 0;				 
             }
        }
       
       int finalchoice2=evaluation(scorechoice,posin, numofscoreopitions); 
        


       printf("\n");
       printf("Your score is:  ");
       
       if((finalchoice2==1||finalchoice2==2) && (E==1||R==1||T==1)){
       printf("%d points",sum);
       
       }
       else if(finalchoice2==1&& Q==1){
       printf("30 points\n");
       }
       else if(finalchoice2==2&& W==1){
       printf("40 points\n");
       }
       else if(finalchoice2==3&& P==1){
       printf("50 points\n");
       }
       else  {
       printf("15 ponts\n");
       }
       printf("\n");
}


int l=0;
    for(l=0;l<=q;l++){printf("%d",a[l]);}
int rerlldice;
    int reroll[100];
    int rerollpos;
    if(){
    printf("Please enter dice to reroll (1 - 5):\n");
    printf(">");
    
    while(rerolldice!= '\n'){
        rerolldice=getchar();
        if(rerolldice!=' '&& rerolldice!='\n'){
            reroll[rerollpos]=rerolldice;
            rerollpos++;
        }                               
    }
     for(counter=0;counter<4;counter++){
           if(input[counter]==input[counter+1]+1){
               numofconplus++;
           }
           if(input[counter]==input[counter+1]-1){
               numofconminu++;
           }    
    int numofconplus=0;
       int numofconminu=0;*/
