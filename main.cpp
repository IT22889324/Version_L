#include <iostream>
#include <string.h>
using namespace std;
#include "Doctor.h"

int main()
{
    //Static
    Doctor d1, d2;

    d1.setDoctorDetails(1, (char*)"Dr. Sunil", (char*)"Neurologist");
    d2.setDoctorDetails(2, (char*)"Dr. Yasantha", (char*)"Oncologist");

    d1.setHospital();
    d2.setHospital();

    d1.displayDoctorDetails();
    d2.displayDoctorDetails();

    
    //Dyenemic
    /*
    Doctor *d1, *d2;

    d1 = new Doctor();
    d2 = new Doctor();

    d1->setDoctorDetails(1, (char*)"Dr. Sunil", (char*)"Neurologist");
    d2->setDoctorDetails(2, (char*)"Dr. Yasantha", (char*)"Oncologist");

    d1->setHospital();
    d2->setHospital();

    d1->displayDoctorDetails();
    d2->displayDoctorDetails();

    delete d1;
    delete d2;
    */

    return 0;
}

