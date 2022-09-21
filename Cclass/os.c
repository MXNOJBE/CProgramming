int rc // rc= reader count
binary Semaphore mutex = 1
binary Semaphore cs = 1 //cs abbreviation critical section
void Reader(void)
{
  while (true)
  {
   down(mutex);                   //down, wait are all same they are synonyms 
   rc = rc + 1;
    if (rc == 1) then down(cs)
    up(mutex);
    //entry code ends here
    //critical section begins here
    //process is already in critical section
    //critical section ends here
    //exit code ends here
    down(mutex);
    rc = rc - 1;
    if (rc == 0) then up(cs)
    up(mutex);
    //exit code ends here
    }

void Writer(void)
{
  while (true)
  {
    down(cs);
    //entry code ends here
    //critical section begins here
    //critical section ends here
    //exit code ends here
    up(cs);
    //exit code ends here
    }
}