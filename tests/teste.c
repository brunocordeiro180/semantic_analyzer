// #include <stdio.h>
// #include <stdlib.h>
// {0}
int teste(){
    return 1; 
    // {0, 1}
}

int main()
{ 
    // {0, 2}
    int a = 0;
    int i;

    for (i = 0; i < 10; i = i + 1)
    {   
        // {0, 2, 3}
        int x;
        a = a + teste; 
    }

    // {0, 2}

    x = 3 + 1;
    int a;

}