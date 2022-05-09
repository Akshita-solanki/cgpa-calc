//cpga calculator

/*Sample Marks:SCP- 95/100
BEEE- 86/100MATH- 89/100ENG- 83/100EGD- 85/100

1) Covert marks into points as follows:(90,100] = 10. O(80,90] = 9. A+(70,80] = 8. A...So, in our example, points are:SCP- 10BEEE- 9MATH- 9ENG- 9EGD- 9

2) Now, multiply your points of each subjects with that subject's credits to get net points of each subject.
So, in our example, net points are:SCP- 10×5=50BEEE- 9×5=45MATH- 9×4=36ENG- 9×3=27EGD- 9×3=27

3) Now add net points of all subjects.
So, in our example, total net points are:50+45+36+27+27=185

4) Now divide these total net points by 20 (Because sum of all credits is 20)
So, in our example, it's:185/20 = 9.25
That's your CGPA (out of 10)
*/

#include <iostream>
using namespace std;
int main(){
    int no_of_subjects,j,sum_m=0,sum_c=0;
    float cgpa;
    cout<<"Enter the number of subjects: "<<endl;
    cin>>no_of_subjects;
    float marks[no_of_subjects]={0};
    float points[no_of_subjects]={0};
    float credits[no_of_subjects]={0};
    char grade[no_of_subjects]{0};
    float point_credits[no_of_subjects]={0};
    for(int i=0,j=1; i<no_of_subjects;i++,j++){
        cout<<"Enter the marks of subject "<<j<<": "<<endl;
        cin>>marks[i];
        cout<<"Enter the credits of subject "<<j<<": "<<endl;
        cin>>credits[i];
        cout<<"\n";
    }
    //to find points and grade
    for(int i=0; i<no_of_subjects;i++){
        if(marks[i]>90&&marks[i]<=100){
            points[i]=10;
            grade[i]='O';
            point_credits[i]=points[i]*credits[i];
            
        }
        else if(marks[i]>80&&marks[i]<=90){
            points[i]=9;
            grade[i]='A';
            point_credits[i]=points[i]*credits[i];
        }
        else if(marks[i]>70&&marks[i]<=80){
            points[i]=8;
            grade[i]='a';
            point_credits[i]=points[i]*credits[i];
        }
        else if(marks[i]>60&&marks[i]<=70){
            points[i]=7;
            grade[i]='B';
            point_credits[i]=points[i]*credits[i];
        }
        else if(marks[i]>50&&marks[i]<=60){
            points[i]=6;
            grade[i]='b';
            point_credits[i]=points[i]*credits[i];
        }
        else{
            points[i]=0;
            grade[i]='F';
            point_credits[i]=points[i]*credits[i];
        }
        sum_m=sum_m+point_credits[i];
        sum_c=sum_c+credits[i];
    }
    
    
    cgpa=(float(sum_m)/sum_c);
    cout<<"\t\tyour cgpa is: "<<cgpa<<endl;
    cout<<"\t\tMarks\tcredit\tgrade\tpoints"<<endl;
    for(int i=0,j=1; i<no_of_subjects;i++,j++){
        cout<<"Subject "<<j<<": "<<"\t"<<marks[i]<<"\t"<<credits[i]<<"\t"<<grade[i]<<"\t"<<points[i];
        cout<<"\n";
    }
    return 0;
}