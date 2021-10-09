import java.util.*;
class volume
{
    public double vol(int s)
    {
        double VC=s*s*s;
        return VC;
    }
    public double vol(double r)
    {
        double VS=4/3.0*Math.PI*r*r*r;
        return VS;
    }
    public double vol(double l,double b,double h)
    {
        double Vcd=l*b*h;
        return Vcd;
    }
}
