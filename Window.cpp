// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

#include <iostream>
#include "Window.h"

using namespace std;

Window::Window(Student s)
{
	student = s;
  Occupied = false;
  free = false;
}

Window::Window(){
  idleT = 0;
  Occupied = false;
  free = false;
}

Window::~Window()
{
}
void Window::setToUnOccupied()
{
	Occupied=false;
  free = true;
}
void Window::setToOccupied()
{
	Occupied=true;
  free = false;
}

bool Window::getOccupiedBool()
{
	return Occupied;
}

void Window::setIdleTime(int idleTime)
{
	idleT=idleTime;
}

int Window::getIdleTime()
{
	return idleT;
}
