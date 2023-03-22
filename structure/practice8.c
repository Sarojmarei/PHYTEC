#include<stdio.h>
struct TeamScore
{
    int wickets;
    int score;

}ts={2,325};
struct country
{
    char *name;
}coun={"india"};
int main()
{
    struct TeamScore tcon=ts;
    printf("%d %s %d",tcon.score,ts.wickets,coun.name);

}