#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

#define ever (;;)


using namespace std;

int main(int argc, char *argv[])
{
    string in, arq="", n="", res1="",cmd="";
    char cstr[127];
    int num;

    in += (argv[1]);

    num = atoi(argv[2]);

    system(cmd.c_str());
    cmd.erase();
    n.erase();

    for(int i=1; i<=num; i++)
    {
        n += (i < 10)?( "0" ):("1");
        n += (i%10)+48;

        arq += "arq";
        arq += n;
        arq += ".in";

        res1 += "arq";
        res1 += n;
        res1 += ".res";

        cmd = "wget https://susy.ic.unicamp.br:9999/mc202ab/" + in;
      	cmd += "/dados/" + arq;
      	cmd += " --no-check-certificate";

        strcpy (cstr, cmd.c_str());

        //cout << cmd << endl;
        system(cstr);

        cmd.erase();

      	cmd = "wget https://susy.ic.unicamp.br:9999/mc202ab/" + in;
      	cmd += "/dados/" + res1;
      	cmd += " --no-check-certificate";
      
      	strcpy (cstr, cmd.c_str());

        //cout << cmd << endl;
        system(cstr);

        arq.erase();
        res1.erase();

        cmd.erase();
        n.erase();
    }

    return 0;
}
