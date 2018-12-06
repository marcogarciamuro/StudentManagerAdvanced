#include "student.h"
#include <string>
#include <vector>

void student::setName(std::string firstName, std::string lastName)
{
  m_first = firstName;
  m_last = lastName;

}

std::string student::fullName()
{
  std::string name;
  name = m_first + " " + m_last;
  return name;
}

student::student()
{
  m_first = "";
  m_last = "";
}

void student::addGrade(double score)
{
  m_grades.push_back(score);
}

double student::getScore()
{
  double sum = 0;

  for(int i = 0; i < m_grades.size(); i++)
  {
    sum = sum + m_grades[i];
  }
  if( m_grades.size() > 0 )
  {
    return sum/m_grades.size();
  }
  else if( m_grades.size() == 0 )
  {
    return 0;
  }
}
