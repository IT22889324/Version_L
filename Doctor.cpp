#include "Doctor.h"
#include <iostream>
#include <string.h>

using namespace std;

void Doctor::setDoctorDetails(int dID, char dName[], char spec[]) {
	doctorID = dID;
	strcpy_s(doctorName, dName);
	strcpy_s(specialization, spec);
}

void Doctor::displayDoctorDetails() {
	cout << endl;
	cout << "DoctorID = " << doctorID << endl;
	cout << "DoctorName = " << doctorName << endl;
	cout << "Specialization = " << getSpecialization() << endl;
	cout << "Hospital = " << hospital << endl;
}

char* Doctor::getSpecialization() {
	return specialization;
}

void Doctor::setHospital() {
	cout << "Input new hospital of doctor " << doctorID << " : ";
	cin >> hospital;
}
