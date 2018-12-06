#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

class student
{
  private:
  std::string m_first;
  std::string m_last;
  std::vector<double> m_grades; 
  
  public:
  void setName(std::string firstName, std::string lastName);
  std::string fullName();
  student();
  void addGrade(double score);
  double getScore();
};



#endif
