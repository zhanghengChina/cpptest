#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sstream"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("message",1000);
    ros::Rate loop_rate = 10;
    while (ros::ok)
    {
        std_msgs::String msg;
        msg.data = "i am a publisher";
        pub.publish(msg);
        ROS_INFO("i am ok");
        ros::spinOnce();
        loop_rate.sleep();
        /* code for loop body */
    }
    
    return 0;
}



