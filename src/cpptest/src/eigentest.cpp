#include "ros/ros.h"
#include "Eigen/Dense"
#include "iostream"


using namespace std;
using namespace Eigen;
using namespace Eigen::internal;
using namespace Eigen::Architecture;


int main(int argc, char **argv)
{
    ros::init(argc, argv, "eigentest");

    Matrix2f v1,v2;
    v1<<1,2,3,4;
    v2<<2,3,4,5;
    ROS_INFO("you are wrong");
    cout<<"v1 = \n"<<v1<<endl;
    cout<<"v2 = \n"<<v2<<endl;
    Matrix2f v3 = v1*v2;
    cout<<"v3 = \n"<<v3<<endl;
    return 0;
}