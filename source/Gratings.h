// Gratings.h - defines the diffraction depending on which grating you're at

#ifndef GRATINGS_H
#define GRATINGS_H

double ( * gp0(double z, double Grat3x[], double Grat3I[]));

double ( * gp1(double zloc,double r0,double el0, double w0, double Grat3x[], double Grat3I[]));

double ( * gp2(double zloc, double el1x, double w1x, double r1x, double Grat3x[], double Grat3I[]));


#endif // end Gratings.h
