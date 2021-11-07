void main()
{
char c, *cptr;
void v, *vptr;
c=65; v=0;
cptr=&c; vptr=&v;
printf(“%d %d”,*cptr,*vptr);
}