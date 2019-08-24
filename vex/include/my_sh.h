#include "complex.h"

float[] my_sh
(const vector p;
 const int n)
{
  float Y[];
  resize(Y, (n+1)*(n+1));
  ////
  float x = p.x;
  float y = p.y;
  float z = p.z;
  float pi = 3.1415926535;
  float invpi = 1.0/pi;
  ////
  complex ep1 = complex(x, y);
  {
    Y[0] = 0.5*sqrt(invpi);
  }
  if( n == 0 ) return Y;
  ////
  { // 1
    float v1=-0.5*sqrt(1.5*invpi);
    Y[ 1] =v1*ep1.imag;
    Y[ 2] =+0.5*sqrt(3.0*invpi)*z;
    Y[ 3] =v1*ep1.real;
  }
  if( n == 1 ) return Y;
  ////
  complex ep2 = cmult(ep1,ep1);
  float z2 = z*z;
  {
    float v1=-0.50*sqrt(7.5*invpi)*z;
    float v2=+0.25*sqrt(7.5*invpi);
    Y[ 4] =v2*ep2.imag;
    Y[ 5] =v1*ep1.imag;
    Y[ 6] =+0.25*sqrt(5.0*invpi)*(2*z*z-x*x-y*y);
    Y[ 7] =v1*ep1.real;
    Y[ 8] =v2*ep2.real;
  }
  if( n == 2 ) return Y;
  ////
  complex ep3 = cmult(ep2,ep1);
  { // 3
    float v1=-0.125*sqrt(21*invpi)*(4*z*z-x*x-y*y);
    float v2=+0.250*sqrt(52.5*invpi)*z;
    float v3=-0.125*sqrt(35*invpi);
    Y[ 9] = v3*ep3.imag;
    Y[10] = v2*ep2.imag;
    Y[11] = v1*ep1.imag;
    Y[12] =+0.250*sqrt(7*invpi)*z*(-3*x*x-3*y*y+2*z*z);
    Y[13] = v1*ep1.real;
    Y[14] = v2*ep2.real;
    Y[15] = v3*ep3.real;
  }
  if( n == 3 ) return Y;
  ////
  complex ep4 = cmult(ep2,ep2);
  float z4 = z2*z2;
  { // 4
    float v1=-3.0/8.00*sqrt(5.0*invpi)*z*(7.0*z2-3);
    float v2=+3.0/8.00*sqrt(5*0.5*invpi)*(7.0*z2-1);
    float v3=-3.0/8.00*sqrt(35*invpi)*z;
    float v4=+3.0/16.0*sqrt(35*0.5*invpi);
    Y[16] = v4*ep4.imag;
    Y[17] = v3*ep3.imag;
    Y[18] = v2*ep2.imag;
    Y[19] = v1*ep1.imag;
    Y[20]=+3.0/16.0*sqrt(invpi)*(35*z4-30*z2+3);
    Y[21] = v1*ep1.real;
    Y[22] = v2*ep2.real;
    Y[23] = v3*ep3.real;
    Y[24] = v4*ep4.real;
  }
  if( n == 4 ) return Y;
  ////
  complex ep5 = cmult(ep4,ep1);
  { // 5
    float v1=-1.0/16.0*sqrt(82.5*invpi)*(21*z4-14*z2+1);
    float v2=+1.0/8.00*sqrt(577.5*invpi)*z*(3*z2-1);
    float v3=-1.0/32.0*sqrt(385*invpi)*(9*z2-1);
    float v4=+3.0/16.0*sqrt(192.5*invpi)*z;
    float v5=-3.0/32.0*sqrt(77*invpi);
    Y[25] = v5*ep5.imag;
    Y[26] = v4*ep4.imag;
    Y[27] = v3*ep3.imag;
    Y[28] = v2*ep2.imag;
    Y[29] = v1*ep1.imag;
    Y[30]=+1.0/16.0*sqrt(11*invpi)*z*(63*z4-70*z2+15);
    Y[31] = v1*ep1.real;
    Y[32] = v2*ep2.real;
    Y[33] = v3*ep3.real;
    Y[34] = v4*ep4.real;
    Y[35] = v5*ep5.real;
  }
  if( n == 5 ) return Y;
  ////
  complex ep6 = cmult(ep4,ep2);
  { // 6
    float v1=-1.0/16.0*sqrt(273*0.5*invpi)*z*(33*z4-30*z2+5);
    float v2=+1.0/64.0*sqrt(1365*invpi)*(33*z4-18*z2+1);
    float v3=-1.0/32.0*sqrt(1365*invpi)*z*(11*z2-3);
    float v4=+3.0/32.0*sqrt(91*0.5*invpi)*(11*z2-1);
    float v5=-3.0/32.0*sqrt(1001*invpi)*z;
    float v6=+1.0/64.0*sqrt(3003*invpi);
    Y[36] = v6*ep6.imag;
    Y[37] = v5*ep5.imag;
    Y[38] = v4*ep4.imag;
    Y[39] = v3*ep3.imag;
    Y[40] = v2*ep2.imag;
    Y[41] = v1*ep1.imag;
    Y[42]=+1.0/32.0*sqrt(13*invpi)*(231*z4*z2-315*z4+105*z2-5);
    Y[43] = v1*ep1.real;
    Y[44] = v2*ep2.real;
    Y[45] = v3*ep3.real;
    Y[46] = v4*ep4.real;
    Y[47] = v5*ep5.real;
    Y[48] = v6*ep6.real;
  }
  if( n == 6 ) return Y;
  ////
  complex ep7 = cmult(ep4,ep3);
  { // 7
    float v1=-1.0/64.0*sqrt(105*0.5*invpi)*(429*z4*z2-495*z4+135*z2-5);
    float v2=+3.0/64.0*sqrt(35*invpi)*(143*z4*z-110*z2*z+15*z);
    float v3=-3.0/64.0*sqrt(35*0.5*invpi)*(143*z4-66*z2+3);
    float v4=+3.0/32.0*sqrt(385*0.5*invpi)*(13*z2*z-3*z);
    float v5=-3.0/64.0*sqrt(385*0.5*invpi)*(13*z2-1);
    float v6=+3.0/64.0*sqrt(5005*invpi)*z;
    float v7=-3.0/128.0*sqrt(1430*invpi);
    Y[49] = v7*ep7.imag;
    Y[50] = v6*ep6.imag;
    Y[51] = v5*ep5.imag;
    Y[52] = v4*ep4.imag;
    Y[53] = v3*ep3.imag;
    Y[54] = v2*ep2.imag;
    Y[55] = v1*ep1.imag;
    Y[56]=+1.0/32.0*sqrt(15*invpi)*(429*z4*z2*z-693*z4*z+315*z2*z-35*z);
    Y[57] = v1*ep1.real;
    Y[58] = v2*ep2.real;
    Y[59] = v3*ep3.real;
    Y[60] = v4*ep4.real;
    Y[61] = v5*ep5.real;
    Y[62] = v6*ep6.real;
    Y[63] = v7*ep7.real;
  }
  if( n == 7 ) return Y;
  ////
  complex ep8 = cmult(ep4,ep4);
  float z8 = z4*z4;
  {  // 8
    float v1=-3.0/64.00*sqrt(17*0.5*invpi)*(715*z4*z2*z-1001*z4*z+385*z2*z-35*z);
    float v2=+3.0/128.0*sqrt(595*invpi)*(143*z4*z2-143*z4+33*z2-1);
    float v3=-1.0/64.00*sqrt(19635*0.5*invpi)*(39*z4*z-26*z2*z+3*z);
    float v4=+3.0/128.0*sqrt(1309*0.5*invpi)*(65*z4-26*z2+1);
    float v5=-3.0/64.00*sqrt(17017*0.5*invpi)*(5*z2*z-z);
    float v6=+1.0/128.0*sqrt(7293*invpi)*(15*z2-1);
    float v7=-3.0/64.00*sqrt(12155*0.5*invpi)*z;
    float v8=+3.0/256.0*sqrt(12155*0.5*invpi);
    Y[64] = v8*ep8.imag;
    Y[65] = v7*ep7.imag;
    Y[66] = v6*ep6.imag;
    Y[67] = v5*ep5.imag;
    Y[68] = v4*ep4.imag;
    Y[69] = v3*ep3.imag;
    Y[70] = v2*ep2.imag;
    Y[71] = v1*ep1.imag;
    Y[72]=+1.0/256.0*sqrt(17*invpi)*(6435*z8-12012*z4*z2+6930*z4-1260*z2+35);
    Y[73] = v1*ep1.real;
    Y[74] = v2*ep2.real;
    Y[75] = v3*ep3.real;
    Y[76] = v4*ep4.real;
    Y[77] = v5*ep5.real;
    Y[78] = v6*ep6.real;
    Y[79] = v7*ep7.real;
    Y[80] = v8*ep8.real;
  }
  if( n == 8 ) return Y;
  ////
  complex ep9 = cmult(ep4,ep5);
  { // 9
    float v1=-3.0/256*sqrt(95*0.5*invpi)*(2431*z8-4004*z4*z2+2002*z4-308*z2+7); //1
    float v2=+3.0/128*sqrt(1045*invpi)*z*(221*z4*z2-273*z4+91*z2-7); //2
    float v3=-1.0/256*sqrt(21945*invpi)*(221*z4*z2-195*z4+39*z2-1); //3
    float v4=+3.0/256*sqrt(95095*2*invpi)*z*(17*z4-10*z2+1); //4 *
    float v5=-3.0/256*sqrt(2717*invpi)*(85*z4-30*z2+1); //5
    float v6=+1.0/128*sqrt(40755*invpi)*z*(17*z2-3); //6
    float v7=-3.0/512*sqrt(13585*invpi)*(17*z2-1); //7
    float v8=-3.0/512*sqrt(230945*2*invpi)*z; //7
    float v9=-1.0/512*sqrt(230945*invpi); //7
    Y[81] = v9*ep9.imag;
    Y[82] = v8*ep8.imag;
    Y[83] = v7*ep7.imag;
    Y[84] = v6*ep6.imag;
    Y[85] = v5*ep5.imag;
    Y[86] = v4*ep4.imag;
    Y[87] = v3*ep3.imag;
    Y[88] = v2*ep2.imag;
    Y[89] = v1*ep1.imag;
    Y[90]=+1.0/256*sqrt(19*invpi)*z*(12155*z8-25740*z4*z2+18018*z4-4620*z2+315); // 0
    Y[91] = v1*ep1.real;
    Y[92] = v2*ep2.real;
    Y[93] = v3*ep3.real;
    Y[94] = v4*ep4.real;
    Y[95] = v5*ep5.real;
    Y[96] = v6*ep6.real;
    Y[97] = v7*ep7.real;
    Y[98] = v8*ep8.real;
    Y[99] = v9*ep9.real;
  }
  return Y;
}
