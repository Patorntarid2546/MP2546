#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    return deg*(M_PI/180);
}

double rad2deg(double rad){
    return rad*(180/M_PI);
}

double findXComponent(double Lx1,double Lx2,double rx1,double rx2){
    return Lx1*cos(rx1) + Lx2*cos(rx2);
}

double findYComponent(double Ly1,double Ly2,double ry1,double ry2){
    return Ly1*sin(ry1) + Ly2*sin(ry2);
}

double  pythagoras(double x,double y){
    return sqrt(pow(x,2)+pow(y,2));
}

void showResult(double la,double da){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << la <<endl;
    cout << "Direction of the resultant vector (deg) = "<< da <<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}