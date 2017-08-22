#include<stdio.h>









double powe(int base,int power);

void inttobin(int intvalue);

void hexvalue(int hvalue);//function for hexa

long int bintoint(int binno,int place,int sign);

void binarytohexa(int a,int b,int c,int d);

void bintoexponent(int intexponent);

void Hexatobinary(int hexa);

double argvtoint(int value,double power2);

void significant(int n,int intvalue);

void inttofloat(double intvalue);

void inttobin8bit(int intvalue);





int main(int argc,char**argv){   // getting inputs from user
int input,output;

if(argc==4){
if((argv[1][1]==66)||((argv[1][1]==73)||((argv[1][1]==70)||(argv[1][1]==72||argv[1][1]==68)))){input=1;}
if((argv[2][1]==66)||((argv[2][1]==73)||((argv[2][1]==70)||(argv[2][1]==72||argv[2][1]==68)))){output=1;}
	





if(input==1&&output==1){

	 
	if(argv[1][0]=='-'&& argv[1][1]=='I'&&argv[2][0]=='-'&&argv[2][1]=='I'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;       //n1,a for while loop,sign for(+),(-), roun for get 8 round 
	
			

				if(argv[3][0]==45){sign=1;round=11;}//cheking sign of interger 
				else{sign=0;round=10;}
			



				   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
				  		if(argv[3][n1]==0){a=1;break;} //cheking space in argument

						else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
						a=-1;break;}					

						else if(argv[3][n1]>=58&&argv[3][n1]<=126){
						a=-1;break;}

						else if(argv[3][n1]>=48 && argv[3][n1]<=57){ //checking number and count arguments
						n2++;a++;} 	 				
				}
		              	
			


		if(n2<=10){ //argumet larger than 8. error produce  
			if(a!=-1){fprintf(stdout,"%s\n",argv[3]);}

		 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);}}
		
			else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
	} 



 



	else if(argv[1][0]=='-'&& argv[1][1]=='I'&&argv[2][0]=='-'&&argv[2][1]=='B'){ //checking argument
		
		int n1=0,a=1,n2=0,interger=0,round,sign,n3; 

		                if(argv[3][0]==45){sign=1;round=9;n3=1;}//cheking sign of interger 
				else{sign=0;round=8;n3=0;}
			
				   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
						if(argv[3][n1]==0){break;} //cheking space in argument

						else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
						a=-1;break;}					

						else if(argv[3][n1]>=58&&argv[3][n1]<=126){
						a=-1;break;}

						else if(argv[3][n1]>=48 && argv[3][n1]<=57){ //checking number and count arguments
						n2++;a++;
					
		                                argv[3][n1]=argv[3][n1]-48; /*argv is string this will cnvrt it to inerger but not 										true int value*/ 
						interger=interger + argv[3][n1]*powe(10,7-n1+n3);  // n3 for reduce (-) sign effect
				
						} 					
				}
		              	
			


		if(n2<=8){ //argumet larger than 8. error produce  
			if(a!=-1){interger=interger/powe(10,9-a);
			if(n3==1){fprintf(stdout,"-");}
			inttobin(interger);
		        
			}

		
		 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}}
		
		
			else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
		      
	
		

	}






	else if(argv[1][0]=='-'&& argv[1][1]=='I'&&argv[2][0]=='-'&&argv[2][1]=='F'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;  
	
		if(argv[3][0]==45){sign=1;round=11;}//cheking sign of interger 
				else{sign=0;round=10;}
			



				   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
				  		if(argv[3][n1]==0){a=1;break;} //cheking space in argument

						else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
						a=-1;break;}					

						else if(argv[3][n1]>=58&&argv[3][n1]<=126){
						a=-1;break;}

						else if(argv[3][n1]>=48 && argv[3][n1]<=57){ //checking number and count arguments
						n2++;a++;} 	 				
				}
		              	
			


		if(n2<=10){ //argumet larger than 8. error produce  
			if(a!=-1){fprintf(stdout,"%s.00\n",argv[3]);}

		 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);}}
		
			else{fprintf(stderr,"ERROR: The input size is wrong.\n");}



	}






        else if(argv[1][0]=='-'&& argv[1][1]=='I'&&argv[2][0]=='-'&&argv[2][1]=='H'){ //checking argument
		int n1=0,a=1,n2=0,interger=0,round,sign,n3;   //n1,a for while loop  

			if(argv[3][0]==45){sign=1;round=9;n3=1;}//cheking sign of interger 
			else{sign=0;round=8;n3=0;}//n3 for sign '+' or '-'
			
			   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
					if(argv[3][n1]==0){break;} //cheking space in argument

					else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
					a=-1;break;}					

					else if(argv[3][n1]>=58&&argv[3][n1]<=126){
					a=-1;break;}

					else if(argv[3][n1]>=48 && argv[3][n1]<=57){ //checking number and count arguments
					n2++;a++;
					
                                        argv[3][n1]=argv[3][n1]-48; /*argv is string this will cnvrt it to inerger but not 										true int value*/ 
					interger=interger + argv[3][n1]*powe(10,7-n1+n3);  // n3 for reduce (-) sign effect
				
					} 					
			}
                      	
		


	if(n2<=8){ //argumet larger than 8 error produce  
		if(a!=-1){interger=interger/powe(10,9-a);
		if(n3==1){fprintf(stdout,"-");}
		hexvalue(interger);
		}

		
	 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}}
		
		
		else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
	    




	}




	else if(argv[1][0]=='-'&& argv[1][1]=='I'&&argv[2][0]=='-'&&argv[2][1]=='D'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;  
	
		if(argv[3][32]==0 ||argv[3][33]==0){if(argv[3][0]==45){sign=1;round=11;}//cheking sign of interger 
				else{sign=0;round=10;}
			



				   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
				  		if(argv[3][n1]==0){a=1;break;} //cheking space in argument

						else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
						a=-1;break;}					

						else if(argv[3][n1]>=58&&argv[3][n1]<=126){
						a=-1;break;}

						else if(argv[3][n1]>=48 && argv[3][n1]<=57){ //checking number and count arguments
						n2++;a++;} 	 				
				}
		              	
			


		if(n2<=10){ //argumet larger than 8. error produce  
			if(a!=-1){fprintf(stdout,"%s.000000\n",argv[3]);}

		 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);}}
		
			else{fprintf(stderr,"ERROR: The input size is wrong.\n");}



	}








	else if(argv[1][0]=='-'&& argv[1][1]=='B'&&argv[2][0]=='-'&&argv[2][1]=='I'){ //checking argument
	
		int n1,sign,round; 
		long int value=0,a=0;

		 if((argv[3][32]==0&&argv[3][33]!=0)||(argv[3][32]!=0&&argv[3][33]==0)){
			if(argv[3][0]==45){sign=1;round=32;fprintf(stdout,"-");}//cheking sign of interger 
			else{sign=0;round=31;}

			  
				for(n1=sign;n1<=round;n1++){
				
				value=bintoint(argv[3][n1]-48,n1,argv[3][0]);//argv[3][n1]
					
					if(value==-1){round=0;fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);
					}else if(value==-2){round=0;fprintf(stderr,"ERROR: The input size is wrong.\n");
					}else{a=a+value;}
			
				
				}
			
			if(value!=-1){
		
			fprintf(stdout,"%ld\n",a);}}else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
		}else{fprintf(stderr,"ERROR: The input size is wrong.\n");}


	}








        else if(argv[1][0]=='-'&& argv[1][1]=='B'&&argv[2][0]=='-'&&argv[2][1]=='H'){ //checking argument
		int n1=0,a,sign,round;                               

	if(argv[3][0]==45){sign=1;round=32;}//cheking sign of interger 
			else{sign=0;round=31;}
			if(argv[3][32]==0||argv[3][33]==0){
			
				for(n1=sign;n1<=round;n1++){ //loop for 32 rounds
					
					if(argv[3][n1]==48 || argv[3][n1]==49 ){
					a=1;}
					else{fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);a=-1;break;}
					
					 
							 				
				}

			}else{fprintf(stderr,"ERROR: The input size is wrong.\n");}			                     	
		


				if(a==1){
				for(n1=sign;n1<=round;n1=n1+4){
				//sending four values to the functioh hetobin 
				//printf("%d1 %d\n",argv[3][sign],n1);
				binarytohexa(argv[3][n1],argv[3][n1+1],argv[3][n1+2],argv[3][n1+3]);
				}				
				}
		fprintf(stdout,"\n");
		}
		

	
	



	else if(argv[1][0]=='-'&& argv[1][1]=='B'&&argv[2][0]=='-'&&argv[2][1]=='F'){ //checking argument
		int n1=0,a,sign,round; 


		if(argv[3][0]==45){sign=1;round=32;fprintf(stdout,"1");}//cheking sign of bin:No
			else{sign=0;round=31;fprintf(stdout,"0");}
			if(argv[3][32]==0||argv[3][33]==0){
			
				for(n1=sign;n1<=round;n1++){ //loop for 32 rounds
					 
					if(argv[3][n1]==48 || argv[3][n1]==49 ){
					a=1;}
					else{fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);a=-1;break;}
					
					 
							 				
				}

			}else{fprintf(stderr,"ERROR: The input size is wrong.\n");}			                     	
		

			//Above we check is this bin or not,here inside the if we convert bin to float    
				if(a==1){  
					for(n1=sign;n1<=round;n1++){//checking form argv[3][1] to argv[3][32] for first '1'
		                        	if(argv[3][n1]==49){round=n1;}//getting '1' loop stop and get it place n1
					}
			//new if for print expo: and sign:
				if(argv[3][0]==45){bintoexponent(33-n1+127); //using n1 get exponent int val and it cnvrt to bin
					for(n1=0;n1<23;n1++){
		                        	if(argv[3][round+n1+1]==48||argv[3][round+n1+1]==49){
						fprintf(stdout,"%d",argv[3][round+n1+1]-48);
						}else{fprintf(stdout,"0");}

					}
				
				
				}else{bintoexponent(32-n1+127); //using n1 get exponent int val and it cnvrt to bin
					for(n1=0;n1<23;n1++){
		                        	if(argv[3][round+n1+1]==48||argv[3][round+n1+1]==49){
						fprintf(stdout,"%d",argv[3][round+n1+1]-48);
						}else{fprintf(stdout,"0");}

					}
				}

				
                                
				

				}fprintf(stdout,"\n");

				

	}







        else if(argv[1][0]=='-'&& argv[1][1]=='B'&&argv[2][0]=='-'&&argv[2][1]=='B'){ //checking argument
		int n1=0,a,sign,round;

		if(argv[3][0]==45){sign=1;round=32;}//cheking sign of interger 
			else{sign=0;round=31;}
			if(argv[3][32]==0||argv[3][33]==0){
			
				for(n1=sign;n1<=round;n1++){ //loop for 32 rounds
					
					if(argv[3][n1]==48 || argv[3][n1]==49 ){
					a=1;}
					else{fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);a=-1;break;}
					
					 
							 				
				}

			}else{fprintf(stderr,"ERROR: The input size is wrong.\n");}			                     	
		


				if(a==1){fprintf(stdout,"%s\n",argv[3]);}
	

	}







	else if(argv[1][0]=='-'&& argv[1][1]=='H'&&argv[2][0]=='-'&&argv[2][1]=='D'){ //checking argument

		int n1=0,a=1,n2=0,sign,round;
		double value=0;              //n1,a for while loop 'value' for adding the place int value of hexa num;
		//first convert -H to -D
		//giving format

		if(argv[3][0]==45){sign=1;round=9;fprintf(stdout,"-");}//cheking sign of hexa
			else{sign=0;round=8;}
			
			   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
					if(argv[3][n1]==0){a=1;break;} //cheking space in argument

					/*else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
					a=-1;break;}					

					else if((argv[3][n1]>=58&&argv[3][n1]<=64)||(argv[3][n1]>=71&&argv[3][n1]<=126)){
					a=-1;break;}*/

					else if(argv[3][n1]>=48&&argv[3][n1]<=57){ 
					n2++;a++;value = value + (powe(16,round-1-n1)*(argv[3][n1]-48));}
					 	

					else if(argv[3][n1]>=65&&argv[3][n1]<=70){ 
					n2++;a++;value = value + (powe(16,round-1-n1)*(argv[3][n1]-55));}

 					 else{fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);a=-1;break;}
					 	 				 				


			}
                      	
		


		if(n2==8){ //argumet larger than 8. error produce  
			if(a!=-1){fprintf(stdout,"%.6lf\n",value);}

		 	//if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}
			}
		
		 	 else if(a!=-1){fprintf(stderr,"ERROR: The input size is wrong.\n");}

	
	}









        else if(argv[1][0]=='-'&& argv[1][1]=='H'&&argv[2][0]=='-'&&argv[2][1]=='H'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;

		if(argv[3][0]==45){sign=1;round=9;}//cheking sign of hexa
			else{sign=0;round=8;}
			
			   for(n1=sign;n1<=round;++n1){ //loop for 9 rounds
					
					if(argv[3][n1]==0){a=1;break;} //cheking space in argument

					/*else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
					a=-1;break;}					

					else if((argv[3][n1]>=58&&argv[3][n1]<=64)||(argv[3][n1]>=71&&argv[3][n1]<=126)){
					a=-1;break;}*/

					else if((argv[3][n1]>=48&&argv[3][n1]<=57)||(argv[3][n1]>=65&&argv[3][n1]<=70)){ 
					n2++;a++;} 

					 else{fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);a=-1;break;}	 				
			}
                      	
		


		if(n2==8){ //argumet larger than 8. error produce  
			if(a!=-1){fprintf(stdout,"%s\n",argv[3]);}	 	 
			//else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
			 }else if(a!=-1){fprintf(stderr,"ERROR: The input size is wrong.\n");}



	
		}







	 else if(argv[1][0]=='-'&& argv[1][1]=='H'&&argv[2][0]=='-'&&argv[2][1]=='B'){ //checking argument
	 	int n1=0,a=1,n2=0,sign,round;  
		
				if(argv[3][0]==45){sign=1;round=9;}
			else{sign=0;round=8;}
			
			   for(n1=sign;n1<=round;++n1){ //loop for 9 rounds
					
					if(argv[3][n1]==0){a=1;break;} //cheking space in argument

					/*else if(argv[3][n1]>=32&&argv[3][n1]<=47){ //cheking other symbols
					a=-1;break;}					

					else if((argv[3][n1]>=58&&argv[3][n1]<=64)||(argv[3][n1]>=71&&argv[3][n1]<=126)){
					a=-1;break;}*/

					
					else if(argv[3][n1]>=48&&argv[3][n1]<=57){ 
					n2++;a++;argv[3][n1]=argv[3][n1]-48;
					} 	

					else if(argv[3][n1]>=65&&argv[3][n1]<=70){ 
					n2++;a++;argv[3][n1]=argv[3][n1]-55;
					} 

					else{fprintf(stderr,"ERROR:  Input format error at location %d.\n",n1);a=-1;break;}	
			}
                      	
		


	if(n2==8){ //argumet larger than 8. error produce  
		if(a!=-1){if(argv[3][0]==45){fprintf(stdout,"-");}

			for(n1=sign;n1<round;n1++){ 

				Hexatobinary(argv[3][n1]);

				}
			fprintf(stdout,"\n");			

			}
		}else if(a!=-1){fprintf(stderr,"ERROR: The input size is wrong.\n");}




	}





        else if(argv[1][0]=='-'&& argv[1][1]=='F'&&argv[2][0]=='-'&&argv[2][1]=='F'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;

		if(argv[3][0]==45){sign=1;round=9;}//cheking sign of interger 
			else{sign=0;round=8;}
			
			
			   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
					if(argv[3][n1]==0){a=1;break;} //cheking space in argument

					else if( (argv[3][n1]>=32&&argv[3][n1]<=47)&&argv[3][n1]!=46){ //cheking other symbols
					a=-1;break;}					

					else if(argv[3][n1]>=58&&argv[3][n1]<=126){
					a=-1;break;}

					else if((argv[3][n1]>=48 && argv[3][n1]<=57)||argv[3][n1]==46){//checking number and      count 
					n2++;a++;} 	 				
			}
                      	
		


	if(n2<=8){ //argumet larger than 8. error produce  
		if(a!=-1){fprintf(stdout,"%s\n",argv[3]);}

	 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}}
		
		else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
	      



	
	}






	 else if(argv[1][0]=='-'&& argv[1][1]=='F'&&argv[2][0]=='-'&&argv[2][1]=='I'){ //checking argument
		int n1=0,a=1,n2=0,round,sign,fracno;   //n1,a for while loop  
		//first convert -I to -B
		//giving format
		
		if(argv[3][0]==45){sign=1;round=11;}//cheking sign of interger 8->10
			else{sign=0;round=10;} //9->11
			
			   for(n1=sign;n1<=round;++n1){ //loop for 10 rounds
					
					if(argv[3][n1]==0){break;} //cheking space in argument

					else if((argv[3][n1]>=32&&argv[3][n1]<=47)&(argv[3][n1]!=46)){ //cheking other symbols
					a=-1;break;}					
 
					else if(argv[3][n1]>=58&&argv[3][n1]<=126){
					a=-1;break;}

					else if((argv[3][n1]>=48 && argv[3][n1]<=57)){//checking number and count arguments

					n2++;a++;
					
                                      
									} 					

					else{fracno=n1;a=-1;break;} //
			}
                      	
		


	if(n2<=10){ //argumet larger than 10. error produce  
		if(a!=-1){fprintf(stdout,"%s\n",argv[3]);
		    	}
		if(a==-1&&fracno>0){    fprintf(stdout,"WARNING: There is a possibility for a precision loss.\n");
		


					for(n1=0;n1<fracno;n1++){

					fprintf(stdout,"%c",argv[3][n1]);
		
					}
			
				fprintf(stdout,"\n");
			}





	 	else if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}
	}
		
		
		else{fprintf(stderr,"ERROR: The input size is wrong.\n");}

	



	}








         else if(argv[1][0]=='-'&& argv[1][1]=='F'&&argv[2][0]=='-'&&argv[2][1]=='B'){ //checking argument

		int n1=0,a=1,n2=0,round,sign,fracno=0,n3=1,n4=-1;   //n1,a for while loop  
		double intvalue=0,intvalue1=0,intvalue2;
		//first convert -I to -B
		//giving format


			if(argv[3][0]==45){sign=1;round=11;}//cheking sign of interger 8->10
			else{sign=0;round=10;} //9->11
			
			   for(n1=sign;n1<=round;++n1){ //loop for 10 rounds
					
					if(argv[3][n1]==0){break;} //cheking space in argument

					else if((argv[3][n1]>=32&&argv[3][n1]<=47)&(argv[3][n1]!=46)){ //cheking other symbols
					a=-1;break;}					
 
					else if(argv[3][n1]>=58&&argv[3][n1]<=126){
					a=-1;break;}

					else if((argv[3][n1]>=48 && argv[3][n1]<=57)){//checking number and count arguments

					n2++;a++;}					
														

					else{a++;n2++;
					     if(fracno==0){fracno=n2;}  
					     else{a=-1;break;} 	// for two "."give error				


					
					} 







			}
                      	
		


	if(n2<=10){ //argumet larger than 10. error produce  
		if(a!=-1&&fracno==0){ for(n1=sign;n1<n2+sign;n1++){
			   
                           intvalue = intvalue + argvtoint(argv[3][n1]-48,n2-n3);//this will convert argument to int
			   n3++;//to get subtract power sequentially
				//printf("%ld\n",intvalue); 
			 }
			
                     inttofloat(intvalue);  
			
	        }











		    	
		if(a!=-1&&fracno>0){    fprintf(stdout,"WARNING: There is a possibility for a precision loss.\n");
					if(argv[3][0]==45){fprintf(stdout,"1");}//cheking sign of interger 8->10
					else{fprintf(stdout,"0");} //9->11
			
                		

					for(n1=sign;n1<fracno-1+sign;n1++){

			   intvalue1 = intvalue1 + argvtoint(argv[3][n1]-48,fracno-1-n3);//this will convert argument to int
			   n3++;//to get subtract power sequentially
				//printf("%ld\n",intvalue); 
		
					}

					for(n1=fracno+sign;n1<=n2;n1++){
                           intvalue2 = intvalue2 + argvtoint(argv[3][n1]-48,n4);
			   n4--;
				//printf("%lf\n",intvalue1);
					}
				intvalue=intvalue1+intvalue2;
			        inttofloat(intvalue); 

			//printf(" %lf \n",intvalue);
				//fprintf(stdout,"\n");
			}





		 	else if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}
		}
		
		
			else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
		      

			fprintf(stdout,"\n");


	
	}





 	 else if(argv[1][0]=='-'&& argv[1][1]=='D'&&argv[2][0]=='-'&&argv[2][1]=='D'){ //checking argument
		int n1=0,a=1,n2=0,sign,round;

		if(argv[3][0]==45){sign=1;round=21;}//cheking sign of interger 
			else{sign=0;round=20;}
			
			
			   for(n1=sign;n1<=round;++n1){ //loop for 8 rounds
					
					if(argv[3][n1]==0){a=1;break;} //cheking space in argument

					else if( (argv[3][n1]>=32&&argv[3][n1]<=47)&&argv[3][n1]!=46){ //cheking other symbols
					a=-1;break;}					

					else if(argv[3][n1]>=58&&argv[3][n1]<=126){
					a=-1;break;}

					else if((argv[3][n1]>=48 && argv[3][n1]<=57)||argv[3][n1]==46){ 

					n2++;a++;} 
	 				
			}
                      	
		


	if(n2<=20){ //argumet larger than 8. error produce  
		if(a!=-1){fprintf(stdout,"%s\n",argv[3]);}

	 	if(a==-1){fprintf(stderr,"ERROR:  Input format error at location %d\n.",n1);}}
		
		else{fprintf(stderr,"ERROR: The input size is wrong.\n");}
	      



	
	}






	else{ 
 	fprintf(stderr,"ERROR: This conversion is not possible.\n");
	
		}

        



}else if(input !=1){fprintf(stderr,"ERROR: The input argument is wrong.\nPossible input arguments are -B, -H, -I, -F and -D.\n");
}else{fprintf(stderr,"ERROR: The output argument is wrong.\nPossible output arguments are -B, -H, -I, -F and -D.\n");}

}else{fprintf(stderr,"ERROR: The number of arguments is wrong.\nUsage: ./clc -<input format> -<output format> <input>\n");}


return 0;



}









double powe(int base,int power){
int n=0,pow;
double a=1;
if(power<0){pow = -1*power;}
else{pow=power;}
for(n=0;n<pow;n++){

a=a*base;
}

if(power<0){a=1.0/a;}
else if(power==0){a=a/a;}

return a;
}






void inttobin(int intvalue){
int n;
long int y;

fprintf(stdout,"0"); //long int powe(2,31) not give correct value so first zero always produce 
for(n=30;n>=0;n=n-1){ //use 31 rounds 'for' loop to get binary number with 32 places
  y=powe(2,n);
          // 'y' is long int
  if(intvalue>=y){             //whether y is big than x it will print '0' other wise it will print '1'
    fprintf(stdout,"1");
    intvalue=intvalue-y;}
    else{fprintf(stdout,"0" );}
  }
	fprintf(stdout,"\n");
}





//for print values
void hexvalue(int hvalue){   //hvalue mean interger value that convert into hexa
fprintf(stdout,"0x"); //this is first notation
int n1,n2;  //(n1 for get the powers )(n2 for 'for' loop)
long int y1,y2; //to get powe(16,7) and large num:

	for(n1=7;n1>=0;n1--){

		y1=powe(16,n1);
		
		if(hvalue>=y1){
			for(n2=15;n2>0;n2--){
			y2=y1*n2;
				if(hvalue>=y2){hvalue=hvalue-y2;
			      
			
					switch(n2){
		
					case 0:fprintf(stdout,"0");break;
					case 1:fprintf(stdout,"1");break;
					case 2:fprintf(stdout,"2");break;
					case 3:fprintf(stdout,"3");break;
					case 4:fprintf(stdout,"4");break;
					case 5:fprintf(stdout,"5");break;
					case 6:fprintf(stdout,"6");break;
					case 7:fprintf(stdout,"7");break;
					case 8:fprintf(stdout,"8");break;
					case 9:fprintf(stdout,"9");break;
					case 10:fprintf(stdout,"A");break;
					case 11:fprintf(stdout,"B");break;
					case 12:fprintf(stdout,"C");break;
					case 13:fprintf(stdout,"D");break;
					case 14:fprintf(stdout,"E");break;
					case 15:fprintf(stdout,"F");break;
					}
				}
			}




		}else{fprintf(stdout,"0");}

	}
	fprintf(stdout,"\n");
}




long int bintoint(int binno,int place,int sign){
long int val;
	if((sign==45)&&(binno==1||binno==0)){
	
	val = powe(2,31-(place-1))*binno;

	}else if((sign==48||sign==49)&&(binno==1||binno==0)){

	val = powe(2,31-place)*binno;
	}else if(binno==-48){val=-2;
	}else{val=-1;}

	
return val;
}



void binarytohexa(int a,int b,int c,int d){
//printf("%d %d %d %d\n",a,b,c,d);
int value;
a=a-48;
b=b-48;
c=c-48;
d=d-48;
//printf("%d %d %d %d\n",a,b,c,d);
value = (a*8)+(b*4)+(c*2)+(d*1);
	switch (value){
                        case 0:fprintf(stdout,"0");break;
			case 1:fprintf(stdout,"1");break;
			case 2:fprintf(stdout,"2");break;
			case 3:fprintf(stdout,"3");break;
			case 4:fprintf(stdout,"4");break;
			case 5:fprintf(stdout,"5");break;
			case 6:fprintf(stdout,"6");break;
			case 7:fprintf(stdout,"7");break;
			case 8:fprintf(stdout,"8");break;
			case 9:fprintf(stdout,"9");break;
			case 10:fprintf(stdout,"A");break;
			case 11:fprintf(stdout,"B");break;
			case 12:fprintf(stdout,"C");break;
			case 13:fprintf(stdout,"D");break;
			case 14:fprintf(stdout,"E");break;
			case 15:fprintf(stdout,"F");break;
	}


}




void bintoexponent(int intexponent){

int n;
long int y;


for(n=7;n>=0;n--){ //use 31 rounds 'for' loop to get binary number with 32 places
  y=powe(2,n);
          // 'y' is long int
  if(intexponent>=y){             //whether y is big than x it will print '0' other wise it will print '1'
    fprintf(stdout,"1");
    intexponent=intexponent-y;}
    else{fprintf(stdout,"0" );}
  }
	
}





//defining hexatobinary function
void Hexatobinary(int hexa){

switch(hexa){
		        case 0:fprintf(stdout,"0000");break;
			case 1:fprintf(stdout,"0001");break;
			case 2:fprintf(stdout,"0010");break;
			case 3:fprintf(stdout,"0011");break;
			case 4:fprintf(stdout,"0100");break;
			case 5:fprintf(stdout,"0101");break;
			case 6:fprintf(stdout,"0110");break;
			case 7:fprintf(stdout,"0111");break;
			case 8:fprintf(stdout,"1000");break;
			case 9:fprintf(stdout,"1001");break;
			case 10:fprintf(stdout,"1010");break;
			case 11:fprintf(stdout,"1011");break;
			case 12:fprintf(stdout,"1100");break;
			case 13:fprintf(stdout,"1101");break;
			case 14:fprintf(stdout,"1110");break;
			case 15:fprintf(stdout,"1111");break;


	}



}



double argvtoint(int value,double power2){
//printf("%.2lf\n",value*powe(10,power2));
return value*powe(10,power2);

}



void inttofloat(double intvalue){ //function for get exponentand significant
//printf("%.1lf\n",intvalue);
int n1;
	for(n1=0;n1<30;n1++){
	
		if(powe(2,n1)>=intvalue){//printf("%d\n",n1);
		inttobin8bit(n1-1+127);
		significant(n1-2,intvalue-powe(2,n1-1));break;
		}

	}



}



void inttobin8bit(int intvalue){
//printf("%d\n",intvalue);
int n;
long int y;

	 
	for(n=7;n>=0;n=n-1){ //use 8 rounds 'for' loop to get binary number with 32 places
	  y=powe(2,n);
		  // 'y' is long int
	  if(intvalue>=y){             //whether y is big than x it will print '0' other wise it will print '1'
	    fprintf(stdout,"1");
	    intvalue=intvalue-y;}
	    else{fprintf(stdout,"0" );}
	  }
	
}



void significant(int n,int intvalue){
int n1;
	for(n1=0;n1<23;n1++){
		if(powe(2,n)<=intvalue){fprintf(stdout,"1");intvalue = intvalue-powe(2,n);
		}

		else{fprintf(stdout,"0");}	
		
		--n;
	}

}






