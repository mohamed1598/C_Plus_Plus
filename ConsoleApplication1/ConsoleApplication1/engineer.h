
#include "employee.h"
class engineer : public employee
{
private:
    string speciality;
    int experience;
    int overtimeHours;
    float overtimeHoursRate;
public:
    engineer(string n, int id, float s, string sp, int e, int o, float otr );
    float getTotalSalary();
    void print();
    
};

