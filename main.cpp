#include <iostream>

using namespace std;

void funkcja()
{

}


int main()
{string dzialanie, stos, wynik;
int z,i,zs,j;
cin >>dzialanie;
z=dzialanie.length();
stos="";
for (i=0;i<z;i++)
{
        if (dzialanie[i]=='('){
                stos="("+stos;
        }

      else if (dzialanie[i]=='^'){        zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='^')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="^"+stos; }

       else if (dzialanie[i]==')'){      zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
            wynik=wynik+stos[j];
            stos[j]=' ';

        j++;

    }if (stos[j]=='(') stos[j]=' '; }

       else if (dzialanie[i]=='+'){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^'||stos[j]=='-')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="+"+stos;  }

       else if (dzialanie[i]=='-'){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^'||stos[j]=='+')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="-"+stos;  }
       else if (dzialanie[i]=='/'){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="/"+stos;  }
       else if (dzialanie[i]=='*'){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="*"+stos;  }
       else if (dzialanie[i]=='%'){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="%"+stos; }
          else if (dzialanie[i]=='='){  zs=stos.length();
      j=0;
      while (j<zs && stos[j]!='(')
    {
        if (stos[j]=='*'||stos[j]=='/'||stos[j]=='%'||stos[j]=='^'||stos[j]=='+'||stos[j]=='-'||stos[j]=='=')
        {
            wynik=wynik+stos[j];
            stos[j]=' ';

        }
        j++;

    }stos="="+stos;  }
        else wynik=wynik+dzialanie[i];
        cout <<dzialanie[i]<< " | "<< stos<<" | "<< wynik<< endl;

}

cout << wynik <<stos;

    return 0;
}
