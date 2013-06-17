#include <iostream>

#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/errno.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main(int argc, char** argv)
{
  cout << "Hello, world" << endl;
  int fd = open ("/dev/fsevents", 0, S_IWOTH);
  if (fd < 0)
    {
      char* szError = strerror (errno);
      cout << "Failure: " << szError << std::endl;
    }
  else
    {
      cout << "Success!?!" << std::endl;
    }

  cout << "uid = " << getuid() << endl;
  cout << "euid = " << geteuid() << endl;
}
