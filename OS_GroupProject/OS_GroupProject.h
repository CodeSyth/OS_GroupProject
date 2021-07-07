#pragma once

#include "resource.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm> 
#include <iomanip>

//std::ostream& operator<<(std::ostream&, const Process&);
//void print(std::vector<Process>);
//void print(Process);
//int getIndex(std::vector<Process>, Process);

class Process {
private:
    std::string name;
    int priority;
    int burstTime;
    int arrivalTime;
    int remainingTime;
    int waitingTime;

public:
    Process(std::string _name, int _priority, int _burstTime, int _arrivalTime) :
        name(_name),
        priority(_priority),
        burstTime(_burstTime),
        arrivalTime(_arrivalTime),
        remainingTime(_burstTime),
        waitingTime(0)
    {}

    //Getters
    std::string getName() const { return this->name; }
    int getArrivalTime() const { return this->arrivalTime; }
    int getPriority() const { return this->priority; }
    int getBurstTime() const { return this->burstTime; }
    int getRemainingTime() const { return this->remainingTime; }
    int getWaitingTime() const { return this->waitingTime; }

    //Setters 
    void setRemainingTime(int executeTime) { remainingTime -= executeTime; }
    void setWaitingTime(int waitTime) { waitingTime += waitTime; }
};



//Operator overloading to print info of a process 
std::ostream& operator<<(std::ostream& os, const Process& p)
{
    os << std::setw(10) << p.getName() << "" << std::setw(15) << p.getArrivalTime() << "" << std::setw(15) << p.getPriority() << "" << std::setw(15) << p.getBurstTime() << std::setw(15) << p.getWaitingTime() << std::setw(20) << p.getRemainingTime() << "\n";
    //os << p.getName() << " arrivalTime: " << p.getArrivalTime() << " priority: " << p.getPriority() << " total burstTime: " << p.getBurstTime() << " remainingTime: " << p.getRemainingTime() << "\n";    
    return os;
}

void print(std::vector<Process> processVector) {
    std::cout << std::setw(10) << "PID" << std::setw(15) << "Arrival Time" << std::setw(15) << "Priority" << std::setw(15) << "Burst Time" << std::setw(15) << "Waiting Time" << std::setw(20) << "Remaining Time" << "\n";
    for (int i = 0; i < processVector.size(); i++) {
        std::cout << processVector.at(i);
    }
}

void print(Process p) {
    std::cout << p.getName() << ":  arrivalTime: " << p.getArrivalTime() << "\tpriority: " << p.getPriority() << "\ttotal burstTime: " << p.getBurstTime() << "\twaitingTime: " << p.getWaitingTime() << "\tremainingTime: " << p.getRemainingTime() << "\n";
}

int getIndex(std::vector<Process> processVector, Process p) {

    //std::vector<Process>::iterator it;
    //
    //it = std::find(processVector.begin(), processVector.end(), p);
    //if (it != processVector.end())
    //    std::cout << *it;
    //   
    //else
    return -1;
    //    
    //return -11;


}
