// PASTE CODE FROM STEP #1 HERE


int main(int argc, char *argv[])
{
   // Get the port number from the command-line arguments
   if (argc == 2)
   {
      portnum = atoi(argv[1]);
   }
   else {
      cout << "usage: server-tcp <portnum>" << endl;
      exit(-1);
   }
   
   
   // PASTE CODE FROM STEP #2 HERE

   
   
   
   // PASTE CODE FROM STEP #3 HERE
   
   
   
   
   cout << "Server started" << endl;
   cout << "Listening on port " << portnum << endl;
   
   
   while (1)
   {         // servers never sleep...
      
      // PASTE CODE FROM STEP #4 HERE
      
      
      
      char *bp = bufin;
      int cnt = MAXBUF;
      while ( (n = recv (childs, bp, cnt, 0)) > 0 ) {
         bp += n;
         cnt = MAXBUF - (bp - bufin);
      }
      *bp = '\0';
      
      
      cout << "Received: " << bufin << endl;
      
      
      
      // PASTE CODE FROM STEP #5 HERE
      
   
   }
   
   
   // Close the socket
   close (s);
   
   return 0;
}