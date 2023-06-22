#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
// declare a structure type which will be used to maintain the 
// records of patient
typedef struct PatientDetails
{
    char name[30];
    char gender[8];
    int age;
    char phone[15];
    int diseaseCode;
    char treatmentOptions[50];
    char medicinePrescribed[250];
} Patient;
 
// declarations of global variables
int count;
Patient patientDetails[2000];
 
// Function to get patient details
void getPatientDetails(int count)
{
    int i;
    char temp[10];
    printf("\n\nEnter Patients Details\n");
   
    for(i = 0; i < count ; i++)
    {
        printf("\nEnter Name:\n");
        scanf("%s",&patientDetails[i].name);
        printf("\nEnter Gender: (Male/Female)\n");
        scanf("%s",&patientDetails[i].gender);
        printf("\nEnter Age: \n");
        scanf("%d",&patientDetails[i].age);
        printf("\nEnter Phone Number: \n");
        scanf("%s",&patientDetails[i].phone);
 
        // calculate disease code based on age
        if(patientDetails[i].age<25)
        {
            patientDetails[i].diseaseCode = 1;
        }
        else if(patientDetails[i].age>=25 && patientDetails[i].age<50)
        {
            patientDetails[i].diseaseCode = 2;
        }
        else
        {
            patientDetails[i].diseaseCode = 3;
        }
 
        // get treatment options available based on disease code
        if(patientDetails[i].diseaseCode == 1)
        {
            strcpy(temp,"Exercise");
            strcat(temp,",Yoga");
            strcat(temp,",Ayurveda");
            strcpy (patientDetails[i].treatmentOptions, temp);
        }
        else if(patientDetails[i].diseaseCode == 2)
        {
            strcpy(temp,"Walking");
            strcat(temp,",Jogging");
            strcat(temp,",Gym");
            strcpy (patientDetails[i].treatmentOptions, temp);
        }
        else
        {
            strcpy(temp,"Meditation");
            strcat(temp,",Yoga");
            strcat(temp,",Ayurveda");
            strcpy (patientDetails[i].treatmentOptions, temp);
        }
       
        // get medicines to be prescribed
        strcpy(temp,"");
        printf("\nEnter Medicine Prescribed: \n");
        scanf("%s",&temp);
        strcat(temp,",Ayurvedic");
        strcat(temp,",Homeopathic");
        strcpy (patientDetails[i].medicinePrescribed, temp);
    }
}
 
// Function to display patient details
void displayPatientDetails(int count)
{
    int i;
       
    printf("\n\nDisplaying Patients Details\n");
   
    for(i = 0;i < count; i++)
    {
        printf("\nPatient Name: %s\n", patientDetails[i].name);
        printf("Patient Gender: %s\n", patientDetails[i].gender);
        printf("Patient Age: %d\n", patientDetails[i].age);
        printf("Patient Phone Number: %s\n", patientDetails[i].phone);
        printf("Patient Disease Code: %d\n", patientDetails[i].diseaseCode);
        printf("Available Treatment Options: %s\n", patientDetails[i].treatmentOptions);
        printf("Medicines Prescribed: %s\n", patientDetails[i].medicinePrescribed);
    }
}
 
// main function
int main()
{
    printf("\n\n----------------------------\n\n");
    printf("BETTER HEALTH MANAGEMENT \n");
    printf("\n\n----------------------------\n");
   
    // get number of patient records
    printf("\nHow many patient records do you want to enter? \n");
    scanf("%d", &count);
   
    if(count > 0)
    {
        // get patient records
        getPatientDetails(count);
       
        // display patient details
        displayPatientDetails(count);
    }
    else
    {
        printf("\nERROR: Invalid count\n");
    }
 
    printf("\nThank You!\n\n");
   
    return 0;
}