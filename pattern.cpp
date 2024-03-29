#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)



// *fullpyramid has 2 approch->with only star("*") and with star along with space("* ")

void squarePattern(){
    // outer loop for rows
    for (int i=0;i<4;i=i+1){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void rectangelPattern(){
    // outer loop for rows
    for (int i=0;i<3;i=i+1){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void hollowPattern(){
    for (int i=0;i<5;i++){
        if(i==0 || i==4){
            for(int j=0;j<5;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            cout<<"*"<<"   "<<"*"<<endl;
        }
            
    }
}


void hollowPatternApproch2(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++) {
            if(row==0 || row==4)
                cout<<"*";
            else{
                if(col==0||col==4){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void halfPyramid(){
    for (int row=0;row<5;row++){
        for(int col = 0; col<row+1;col++){
            cout << "*";
        }
        cout << endl;
    }
}


void invertedHalfPyramid(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void numericHalfPyramid(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
}
 

void invertedNumericHalfPyramid(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
}


void hollowInvertedHalfPyramid(){
    for(int row=0;row<5;row++){
        for(int col=0;col<=5-(row+1);col++){
            if(row==0)
                cout<<"*";
            else{
                if(col==0||col==5-(row+1)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void hollowIvertedNumericHalfPyramid(){
    for (int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            if(row==0)
                cout<<col+1;
            else{
                if(col==0||col==5-(row+1)){
                    cout<<col+row+1;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void fullPyramid_withoutspaceinstar(){
    for(int row=0;row<4;row++){
        int k=0;
        for(int col=0;col<(2*4)-1;col++){
            if(col<4-(row+1))
                cout<<" ";
            else{
                if((k<(2*row+1))){ //col<=2*row+1 print*
                    cout<<"*";
                    k++;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void holllowFullPyramid_withoutspaceinstar(){
    for(int row=0;row<4;row++){
        int k=0;
        for(int col=0;col<(2*4)-1;col++){
            if(col<4-(row+1))
                cout<<" ";
            else{
                if((k<(2*row+1))){
                   if(k==0||k==(2*row)||row==(4-1))
                        cout<<"*";
                    else{
                        cout<<" ";
                    }
                    k++;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void fullPyramid_withspaceinstar(){
    for(int row=0;row<5;row++){
        for(int space=0;space<5-row-1;space++)
            cout<<" ";
        for(int star=0;star<row+1;star++)
            cout<<"* ";
        cout<<endl;
    }
}


void invertedfullPyramid_withspaceinstar(){
    for(int row=0;row<4;row++){
        for(int space=0;space<=row;space++)
            cout<<" ";
        for(int star=0;star<4-row;star++)
            cout<<"* ";
        cout<<endl;
    }
}



void diamondPattern(){
    int ROWS=8;
    int k=0;
    for(int row=0;row<ROWS;row++){
        if(row<ROWS/2){
            for(int space=0;space<ROWS/2-row-1;space++)
                cout<<" ";
            for(int star=0;star<row+1;star++)
                cout<<"* ";
            cout<<endl;
        }
        else{
            for(int space=0;space<row-ROWS/2;space++)
                cout<<" ";
            for(int star=0;star<row-k;star++)
                cout<<"* ";
            cout<<endl;
            k+=2;

        }

    }  
}



void hollowFullPyramid(){
    //* method 1->star with space
    for(int row=0;row<6;row++){
        for(int space=0;space<6-row-1;space++)
            cout<<" ";
        for(int star=0;star<row+1;star++){
            if(star==0 || star==row+1-1){
                cout<<"*"<<" ";
             }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


// *method 2 ->star without space

    for (int row=0;row<4;row++){
        int k=0;
        for(int col=0;col<((2*4)-1);col++){
            if(col<4-row-1)
                cout<<" ";
            else{
                if(k<((2*row)+1)){
                    if(k==0||k==2*row)
                        cout<<"*";
                    else
                        cout<<" ";
                    k++;
                }
                else{
                    cout<<" ";
                }
            }   
        }
        cout<<endl;
    }
}



void hollowInvertedFullPyramid(){
    // *method 1->star with space("* ")
    for (int row=0;row<4;row++){
        // for space
        for(int col=0;col<row;col++)
            cout<<" ";
        for(int col=0;col<4-row;col++){
            if(col==0||col==4-row-1)
                cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    //* method 2->star without space
    for(int row=0;row<4;row++){
        int k=0; 
        for(int col=0;col<(2*4)-1;col++){
            if(col<row)
                cout<<" ";
            else{
                if(k<(2*4-1)-2*row){
                    if(k==0 || k==(((2*4-1)-2*row)-1))
                        cout<<"*";
                    else
                        cout<<" ";
                    k++;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    
}


void hollowDiamond(){

    // for 4 rows

        for(int row=0;row<4;row++){
        for(int space=0;space<4-row-1;space++)
            cout<<" ";
        for(int star=0;star<row+1;star++){
            if(star==0 || star==row+1-1){
                cout<<"*"<<" ";
             }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    for (int row=0;row<4;row++){
        // for space
        for(int col=0;col<row;col++)
            cout<<" ";
        for(int col=0;col<4-row;col++){
            if(col==0||col==4-row-1)
                cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}



void flippedSolidDiamond(){

    int totalrow=4;

    // first part
    for (int row=0;row<totalrow;row++){
        int k=0;
        for(int col=0;col<2*totalrow+1;col++){
            if(col<totalrow-row)
                cout<<"*";
            else{
                if(k<2*row+1){
                    cout<<" ";
                    k++;
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }

    // 2nd inverted part
    for(int row=0;row<totalrow;row++){
        int k=0;
        for(int col=0;col<2*totalrow+1;col++){
            if(col<row+1)
                cout<<"*";
            else{
                if(k<2*totalrow-2*row-1){
                    cout<<" ";
                    k++;
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}



void pattern1(){
    for (int row=0;row<4;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2!=0)
                cout<<"*";
            else
                cout<<row+1;
        }
        cout<<endl;
    }
}



void pattern2(){

    // method-1
    for(int i=0;i<5;i++){
        char ch;
        for(int j=0;j<i+1;j++){
            ch=((j+1)+'A'-1);
            cout<<ch;
        }

        ch--;
        for(char c=ch;c>='A';c--){
            cout<<c;
        }
        cout<<endl;
    }


    // Method 2
    for(int i=0;i<5;i++){
        char ch;
        for(int j=0;j<2*i+1;j++){
            if(j<=i){
                ch=j+1+'A'-1;
                cout<<ch;
            }else{
                ch--;
                cout<<ch;
            }
        }
        cout<<endl;
    }
}



void pattern3(){
    for (int row=0;row<5;row++){

        // for space
        for(int space=0;space<5-row-1;space++){
            cout << " ";
        }
        int k;
        for(int star=0;star<2*row+1;star++){
            if(star==0 || star==2*row)
                cout<<"1";
            else
                if(star<=row){
                    k=star+1;
                    cout<<k;
                }
                else{
                    cout<< --k;
                }
        }
        cout<<endl;
    }



    // method-2
    for(int row=0;row<5;row++){
        int k=1;
        for(int col=0;col<2*5-1;col++){
            if(col<5-row-1)
                cout<<" ";
            else{
                if(col==5-row-1||col==5+row-1)
                    cout<<"1";
                else{
                    if(col<=4){
                        k++;
                        cout<<k;
                    }
                    else if(col>4 && col<=5+row-1){
                        cout<< --k;
                    }
                    else
                        cout<<" ";   
                }
            }
        }
        cout<<endl;
    }
}


void solidHalfDiamond(){
    int inputRow=4;
    for(int row=0;row<inputRow+(inputRow-1);row++){
        
        if(row<inputRow){
            for(int col=0;col<row+1;col++)
                cout<<"*";
            cout<<endl;
        }else{
            for(int col=0;col<(inputRow+(inputRow-1))-row;col++)
                cout<<"*";
            cout<<endl;
        }
    }
}




void floydsTriangle(){
    int k=0;
    for(int row=0;row<6;row++){
        for(int col=0;col<row+1;col++){
            cout<<++k<<" ";
        }
        cout<<endl;
    }
}


void butterflyPattern(){
    int inputRow=7;
    // upper-part
    for(int row=0;row<inputRow;row++){
        for(int col=0;col<2*inputRow+1;col++){
            if(col<=row)
                cout<<"*";
            else{
                 if(col<=2*inputRow-row-1)
                    cout<<" ";
                else
                    cout<<"*";
            }
        }
        cout<<endl;
    }


    // lower-part
    for(int row=0;row<inputRow;row++){
        for(int col=0;col<2*inputRow+1;col++){
            if(col<=inputRow-row-1)
                cout<<"*";
            else{
                if(col<=inputRow+row){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}


void fancyPattern1(){
    cout<<"enter rows(must be less than 10)";
    int totalrow;
    cin>>totalrow;
    for (int row=0;row<totalrow;row++){
        bool flag=true;
        for(int col=0;col<17;col++){
            // print star
            if(col<8-row)
                cout<<"*";
            else{
                if(col<=8+row){
                    flag?cout<<row+1 : cout<<"*";
                    flag=!flag;
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}



void fancyPattern2(){
    int totalrow=55;

    for(int row=0;row<totalrow+(totalrow-1);row++){
        // for upper part
        if(row<totalrow){
            int k=0;
            for(int col=0;col<2*row+1;col++){
                if(col==0||col==2*row)
                    cout<<"*";
                else{
                    if(col<=row){
                        cout<<col;
                        k=col;
                    }else{
                        cout<< --k;
                    }
                }
            }
                cout<<endl;
        }
        else{
            static int  k=2; //value remember rakhda
            int j=0;
            for(int col=0;col<(((row-(k))*2)+1);col++){
                if(col==0||col==(((row-(k))*2)+1)-1)
                    cout<<"*";
                else{
                    if(col<=(totalrow+(row-1)-row)-1){
                        j=col;
                        cout<<col;
                    }
                    else{
                        cout<< --j;
                    }
                }
            }
            k+=2;
            cout<<endl;
        }
    }
}

int main()
{
    // squarePattern();
    // rectangelPattern();
    // hollowPattern();
    // hollowPatternApproch2();
    // halfPyramid();
    // invertedHalfPyramid();
    // numericHalfPyramid();
    // invertedNumericHalfPyramid();
    // hollowInvertedHalfPyramid();
    // hollowIvertedNumericHalfPyramid();
    // fullPyramid_withoutspaceinstar();
    // holllowFullPyramid_withoutspaceinstar();
    // fullPyramid_withspaceinstar();
    // invertedfullPyramid_withspaceinstar();
    // diamondPattern();
    // hollowFullPyramid();
    // hollowInvertedFullPyramid();
    // hollowDiamond();
    // flippedSolidDiamond();
    // pattern1();
    // pattern2();
    // pattern3();
    // solidHalfDiamond();
    // floydsTriangle();
    // butterflyPattern();
    // fancyPattern1();
    fancyPattern2();

return 0;
}