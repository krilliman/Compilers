program Quadratic;

{http://progopedia.com/version/turbo-pascal-3.0/}

var
   A,B,C,D: integer;

begin
   write('A = ');
   readln(A);
   if (A=0) then
     begin
       writeln('Not a quadratic equation.');
       halt;
     end;
   write('B = ');
   readln(B);
   write('C = ');
   readln(C);
   D := B*B-4*A*C;
   if (D=0) then
     begin
       writeln('x = ',-B/2.0/A);
       halt;
     end;
   if (D>0) then
     begin
       writeln('x1 = ',(-B+Sqrt(D))/2.0/A);
       writeln('x2 = ',(-B-Sqrt(D))/2.0/A);
     end
   else
     begin
       writeln('x1 = (',-B/2.0/A,',',Sqrt(-D)/2.0/A,')');
       writeln('x2 = (',-B/2.0/A,',',-Sqrt(-D)/2.0/A,')');
     end;
end.


1       {int}                                   {int}                               {Done}
1.      {unknown}                               {int, period}                       {Done}
0.      {unknown}                               {int, period}                       {Done}
0.1     {real}                                  {real}                              {Done}
.1      {period, int}                           {period, int}                       {Done}
1E-2    {real}                                  {real}                              {Done}
1.0E-2  {real}                                  {real}                              {Done}
1.E-2   {unknown, identifier, minus, int}       {int, period, identifier, minus, int}   {Done}
1.0E1.0 {real, period, int}                     {real, period, int}                     {Done}
1E      {unknown}                               {int, identifier}                       {Done}
2E.1    {unknown, period, int}                  {int, identifier, period, int}          {Need to fix that after E you need at least one digit}
1..2    {int, subrange, int}                    {int, subrange, int}                    {Need to fix this : integer, integer, dot ,integer}

(*this is a the (* type of a comment
	as
	a
	multi
	liner
*)

var { declare variables of the program }

   FallSpeed:   Integer;   {# of frames to refresh falling piece / scene}
   Frame:       Integer;   {frames counter}
   { remove variable below in final version - it will be a constant }
   ScCol:       Integer;   {scene X coordinate}
   Key:         Char;      {code of the key pressed by player}
   ValidKey:    Boolean;   {flag to validate the pressed key}
   sh:          Shape;
   sh2:         Shape;
   bl:          Block;
   bl2:         Block;
   Pieces:      All;
   CurrBlk:     PtrBlkInfo; {pointer to current block}
   NewBlk:      PtrBlkInfo; {pointer to new block - temporary}
   Bucket:      Scene;
   Freeze:      Boolean;    {pause / restore flag}
   Score:       Integer;
   {HiScore:     Integer;}
   HiScoreRec:  HiScore;
   HiScTbl:     HiScoreTbl;
   GameOver:    Boolean;
   {HiScoreFile: file of Integer;}
   HiScoreFile: file of HiScore;
   Pretty:      Boolean;
   SolidBlocks: Boolean;
   PlayerName:  PlName;
   i:           Integer;

{$I mktet01.pas}

{
this
is
a
test
}


'1.0' (*sould be a real_literal*)

