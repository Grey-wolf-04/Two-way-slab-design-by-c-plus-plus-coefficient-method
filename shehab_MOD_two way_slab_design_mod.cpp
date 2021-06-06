#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
main()
{

float M,mm,t,floorfinish,ts,Ts,Tl,tl,condition,cementplaster,liveload,w,shortspan,longspan,m,c1,c2,c3,C1,C2,C3,Ms1,Ms2,Ms3,Ml1,Ml2,Ml3,Msmax,Vs,Vl,R,Mlmax,TT,TTT,As1,As2,As3,Al1,Al2,Al3,spacings1,spacings2,spacings3,spacingl1,spacingl2,spacingl3;
printf("\t\t\tminimum slab thickness,t=?\n\n\n\t\t\t\t\t\t");
scanf("%f",&t);
printf("\n\n\n\t\tfloor finish=?\t\t\n\n\t\t\t");
scanf("%f",&floorfinish);
printf("\n\n\t\tceiling plaster=?\n\n\t\t");
scanf("%f",&cementplaster);
printf("\n\n\t\tLive load=?\n\n\t\t");
scanf("%f",&liveload);
printf("\n\n\t\tshort span =?\n\n\t\t");
scanf("%f",&shortspan);
printf("\n\n\t\tlong span=?\n\n\t\t");
scanf("%f",&longspan);
w=(t/100)*2400+floorfinish+cementplaster+liveload;
printf("\n\n\n\t\t\tvalue of design load is%f\n\n\t\t",w);
Vs=(w*shortspan)/3;
printf("\n\n\n\t\tshear force at short span=%f\n\n\t\t",Vs);
m=shortspan/longspan;
Vl=((w*shortspan)/3)*((3-m*m)/2);
printf("\n\n\t\tshear force at long span=%f\n\n\n\n\t\tBENDING MOMENT CALCULATION:\n\n\t\t",Vl);
m=shortspan/longspan;
printf("\n\n\t\tvalue of m is %f\n\n\t\tif value of m is between.9to.8 like\n\n\n\n\n\t\t\t\t\t.88 or .87 or .89.........\n\n\n\t\t\\t\t\tttake an approximate value\n\n\n\t\t",m);
scanf("%f",&mm);
printf("\n\n\t\tcondition=?\n\n\t\t");
scanf("%f",&condition);

if(condition==1&&mm==1)




    {
        c1=0.033;
    c2=0;
    c3=0.025;
    }
    else if(condition==1&&mm==0.9)



            {
                c1=0.04;
        c2=0;
        c3=0.03;
            }


else if(condition==1&&mm==0.8)


{


        c1=0.048;
        c2=0;
        c3=0.036;
}
 else if(condition==1&&mm==0.7)

{

         c1=0.055;
        c2=0;
        c3=0.041;
}
 else if(condition==1&&mm==0.6)

            {
                c1=0.063;
        c2=0;
        c3=0.047;
            }
 else if(condition==1&&mm==0.5)
        {
            c1=0.083;
        c2=0;
        c3=0.062;
        }
 else if(condition==2&&mm==1)

            {
                c1=0.041;
        c2=0.02;
        c3=0.031;
            }
 else if(condition==2&&mm==0.9)

            {
                c1=0.048;
        c2=0.024;
        c3=0.036;
            }
 else if(condition==2&&mm==0.8)

            {
                c1=0.055;
        c2=0.027;
        c3=0.041;
            }
 else if(condition==2&&mm==0.7)

            {
                c1=0.062;
        c2=0.031;
        c3=0.047;
            }
 else if(condition==2&&mm==0.6)

            {
                c1=0.069;
        c2=0.035;
        c3=0.052;
            }
 else if(condition==2&&mm==0.5)

            {
                c1=0.085;
        c2=0.042;
        c3=0.064;
            }
 else if(condition==3&&mm==1)

            {
                c1=0.049;
        c2=0.025;
        c3=0.037;
            }
 else if(condition==3&&mm==0.9)

            {
                c1=0.075;
        c2=0.028;
        c3=0.013;
            }
 else if(condition==3&&mm==0.8)

            {
                c1=0.064;
        c2=0.032;
        c3=0.018;
            }
 else if(condition==3&&mm==0.7)

            {
                c1=0.071;
        c2=0.036;
        c3=0.054;
            }
 else if(condition==3&&mm==0.6)

            {
                c1=0.078;
        c2=0.039;
        c3=0.059;
            }
 else if(condition==3&&mm==0.5)

            {
                c1=0.09;
        c2=0.045;
        c3=0.068;
            }
 else if(condition==4&&mm==1)

            {
                c1=0.058;
        c2=0.029;
        c3=0.044;
            }
 else if(condition==4&&mm==0.9)

            {
                c1=0.066;
        c2=0.033;
        c3=0.05;
            }
 else if(condition==4&&mm==0.8)

            {
                c1=0.074;
        c2=0.037;
        c3=0.056;
            }
 else if(condition==4&&mm==0.7)

            {
                c1=0.082;
        c2=0.041;
        c3=0.062;
            }
 else if(condition==4&&mm==0.6)

            {
                c1=0.09;
        c2=0.045;
        c3=0.068;
            }
 else if(condition==4&&mm==0.5)

            {
                c1=0.098;
        c2=0.059;
        c3=0.074;
            }
 else if(condition==5,mm==1)

            {
                c1=0;
        c2=0.033;
        c3=0.05;
            }
 else if(condition==5&&mm==0.9)

            {
                c1=0;
        c2=0.033;
        c3=0.057;
            }
else if(condition==5&&mm==0.8)


                {
                    c1=0;
        c2=0.043;
        c3=0.064;
                }
else if (condition==5&&mm==0.7)

            {
                c1=0;
        c2=0.047;
        c3=0.072;
            }
 else if(condition==5&&mm==0.6)
            {


                c1=0;
        c2=0.053;
        c3=0.08;
            }
 else(condition==5&&mm==0.5);




                    {
                        c1=0;
        c2=0.055;
        c3=0.083;

                    }






printf("MOMENT AT SHORT SPAN:\n\n\t\t");

Ms1=c1*w*shortspan*shortspan*100;
Ms2=c2*w*shortspan*shortspan*100;
Ms3=c3*w*shortspan*shortspan*100;


printf("\n\n\n\n\t\t\t\t-ve moment at contineous end is %f",Ms1);
printf("\n\n\n\t\t\t-ve moment at discontineous end is %f",Ms2);
printf("\n\n\n\n\t\t\t\t+ve moment at mid span is %f",Ms3);






if(Ms1>Ms2&&Ms2>Ms3)
    Msmax=Ms1;
    else if(Ms2>Ms3&&Ms3>Ms1)
        Msmax=Ms2;
    else
        Msmax=Ms3;
    printf("\n\n\n\t\tmaximum moment at short span is %f",Msmax);

printf("\n\n\t\tCALCULATION OF BENDING MOMENT AT LONG SPAN:\n\n\t\t");
if(condition==1)

        C1=0.033;
C2=0;
C3=0.025;

if(condition==2)

    C1=0.041;
    C2=0.021;
    C3=0.031;

 if(condition==3)

    C1=0.04;
    C2=0.025;
    C3=0.032;

 if(condition==4)

    C1=0.058;
    C2=0.029;
    C3=0.044;


    if(condition==5);


            C1=0;
        C2=0.033;
        C3=0.05;



   Ml1=C1*w*shortspan*shortspan*100;
Ml2=C2*w*shortspan*shortspan*100;
Ml3=C3*w*shortspan*shortspan*100;




    printf("\n\n\n\n\t\t\t\t-ve moment at contineous end is %f",Ml1);
printf("\n\n\n\t\t\t-ve moment at discontineous end is %f",Ml2);
printf("\n\n\n\n\t\t\t\t+ve moment at mid span is %f",Ml3);



if(Ml1>Ml2&&Ml2>Ml3)
    Mlmax=Ml1;
    else if(Ml2>Ml3&&Ml3>Ml1)
        Mlmax=Ml2;
    else
        Mlmax=Ml3;
    printf("\n\n\n\t\tmaximum moment at short span is %f\n\n\t\t\t",Mlmax);








printf("\n\n\t\tTHICKNESS CALCULATION OF SLAB:\n\n\t\t\tFor short span:\n\n\t\t\t");


ts=sqrt(Msmax/(16.38*100));

  printf("\n\n\t\tthickness at short span is %f\n\n\t\t",ts);
Ts=ts+2+1.2+(1.2/2);
TT=9.4;
if(Ts<12)
    printf("\n\n\t\tthickness at short span is okay\n\n\t\tand effective thickness at short span is %fcm\n\n\t\t",TT);
else
    printf("\n\n\ndue to t>12,thickness should be %f and effective thickness is %f\n\n\t\t",Ts,ts);








printf("\n\n\t\tTHICKNESS CALCULATION OF SLAB:\n\n\t\t\tFor long span:\n\n\t\t\t");


tl=sqrt(Mlmax/(16.38*100));

  printf("\n\n\t\tthickness at long span is %f\n\n\t\t",tl);
Tl=tl+2+1.2+(1.2/2);
TTT=8.2;
if(Tl<12)
    printf("\n\n\t\tthickness at long span is okay\n\n\t\tand effective thickness at long span is %fcm\n\n\t\t",TTT);
else
    printf("\n\n\ndue to t>12,thickness should be %f and effective thickness is %f\n\n\t\t",Tl,tl);


    printf("\n\n\t\t\n\tCALCULATION OF REINFORCEMENT\n\n\n\t\tSHORT SPAN:\n\n\t\t");


    As1=Ms1/(1400*.87*9.4);
    spacings1=113/As1;
    As2=Ms2/(1400*.87*9.4);
        spacings2=113/As2;

    As3=Ms3/(1400*.87*9.4);
    spacings3=113/As3;




    Al1=Ml1/(1400*.87*9.4);
    spacingl1=113/Al1;
    Al2=Ml2/(1400*.87*9.4);
        spacingl2=113/Al2;

    Al3=Ml3/(1400*.87*9.4);
    spacingl3=113/Al3;


    printf("\n\n\t\t-ve reinforcement at contineous end is %f\n\n\t\t",As1);
    printf("\n\n\t\tand spacing is %fcm c/c \n\n\t\t",spacings1);



        printf("\n\n\t\t-ve reinforcement at discontineous end is %f\n\n\t\tand spacing is %fcm c/c\n\n\t\t",As2,spacings2);





    printf("\n\n\t\t-ve reinforcement at mid span is %f\n\n\t\tand spacing is %fcm c/c\n\n\t\t",As3,spacings3);



    printf("\n\n\t\tLONG SPAN:\n\n\t\t");


    printf("\n\n\t\t-ve reinforcement at contineous end is %f\n\n\t\tand spacing is %fcm c/c\n\n\t\t",Al1,spacingl1);





    printf("\n\n\t\t-ve reinforcement at discontineous end is %f\n\n\t\tand spacing is %fcm c/c\n\n\t\t",Al2,spacingl2);






    printf("\n\n\t\t-ve reinforcement at mid span is %f\n\n\t\tand spacing is %fcm c/c\n\n\t\t",Al3,spacingl3);






    printf("\n\n\n\t\t\tTHANK U.......\n\n\t\t\t\tFOR RUN");


}





















































































































