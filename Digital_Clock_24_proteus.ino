int a=2;
int b=3;
int c=4;
int d=5;

int e=6;
int f=7;
int g=8;
int h=9;

int i=10;
int j=11;
int k=12;
int l=13;

int p=A0;
int q=A1;
int r=A2;
int s=A3;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
}
void disp1() 
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  delay(100);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  delay(100);
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(100);
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  delay(100);
  exit;
}
void disp2()
{
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(h,0);
  //delay(7000);
  disp1();
  //delay(1000);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(h,1);
  //delay(7000);
  disp1();
  //delay(1000);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(h,0);
  //delay(7000);
  disp1();
  //delay(1000);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(h,1);
  //delay(7000);
  disp1();
  //delay(1000);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(h,0);
  //delay(7000);
  disp1();
  //delay(1000);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(h,1);
  disp1();
  //delay(7000); 
}
void disp3() {
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,1);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,1);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,1);
  digitalWrite(l,1);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,1);
  digitalWrite(k,0);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,1);
  digitalWrite(k,0);
  digitalWrite(l,1);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,1);
  digitalWrite(k,1);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,1);
  digitalWrite(k,1);
  digitalWrite(l,1);
  disp2();
  digitalWrite(i,1);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,1);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,1);
  disp2();
}
void loop()
{
  digitalWrite(p,0);
  digitalWrite(q,0);
  digitalWrite(r,0);
  digitalWrite(s,0);
  disp3();
  digitalWrite(p,0);
  digitalWrite(q,0);
  digitalWrite(r,0);
  digitalWrite(s,1);
  disp3();
  digitalWrite(p,0);
  digitalWrite(q,0);
  digitalWrite(r,1);
  digitalWrite(s,0);
  
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,0);
  
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,0);
  digitalWrite(l,1);
  disp2();

  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,1);
  digitalWrite(l,0);
  disp2();
  digitalWrite(i,0);
  digitalWrite(j,0);
  digitalWrite(k,1);
  digitalWrite(l,1); 
  disp2(); 
}
