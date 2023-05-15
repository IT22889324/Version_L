#pragma once
class Doctor
{
private:
	int doctorID;
	char doctorName[20];
	char specialization[20];
	char hospital[20];
public:
	void setDoctorDetails(int dID, char dName[],char spec[]);
	void displayDoctorDetails();
	char* getSpecialization();
	void setHospital();
};

