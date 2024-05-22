#include "Math.h"
#include <iostream>
#include <cmath>

#define Newton 0
#define Secant 1
#define system1 1
#define system2 2
#define system3 3

namespace SolutonofSLAR {

    double Df_1_2(double a, double x) { return 2 * a * x; }
    double Df_3(double a, double x, double y) { return 2 * a * cos(2 * x - y) - 12; }
    double Df_4(double a, double x, double y) { return -a * cos(2 * x - y); }
    double Df_5(double a, double x, double y) { return a * cos(x + 1); }
    double Df_6_7(double a) { return a; }
    double Df_8(double a, double y) { return -a * sin(y); }
    double Df_9(double a1, double a2, double x) { return a1 + (a2 / (x * log(10.0f))); }
    double Df_10(double y) { return 2 * y; }
    double Df_11(double a1, double a2, double x, double y) { return a1 * 2 * x - a2 * y; }
    double Df_12(double a, double x) { return a * x; }

    double equaton_1_1(double a1, double a2, double x, double y, double b) { return a1 * x * x + a2 * y * y - b; }
    double equaton_1_2(double a1, double x, double y, double b) { return a1 * sin(2 * x - y) - 12 * x - b; }
    double equaton_2_1(double a1, double a2, double x, double y, double b) { return a1 * sin(x + 1) - a2 * y - b; }
    double equaton_2_2(double a1, double a2, double x, double y, double b) { return a1 * x - a2 * cos(y) - b; }
    double equaton_3_1(double a1, double a2, double x, double y, double b) { return a1 * x - a2 * log10(x) - y * y - b; }
    double equaton_3_2(double a1, double a2, double x, double y, double b) { return a1 * x * x - a2 * x * y - x - b; }


    double* Math::Method(double x, double y, double b1, double b2, double precision, double a1, double a2, int method, int SLAR_Num) {
        double deltaPrecision = 0.0;
        double* X1 = new double[2];
        double* J = new double[4];
        Choose_SLAR_for_Newton(J, SLAR_Num, x, y, a1, a2);
        double* tmp_J = new double[4];
        if (method == Secant) 
        {
            J_for_Secant(tmp_J, J);
        }
        iteration = 0;
        true_log = true;
        do {
            iteration++;
            double det = (J[0] * J[3] - (J[1] * J[2]));
            double temp = J[0];
            J[0] = J[3];
            J[3] = temp;
            J[1] = -J[1];
            J[2] = -J[2];
            for (int i = 0; i < 4; i++) {
                J[i] = J[i] / det;
            }
            double* F = new double[2];
            Count_F(F, a1, a2, x, y, b1, b2, SLAR_Num);
            double deltaX0[2] = { J[0] * F[0] + J[1] * F[1], J[2] * F[0] + J[3] * F[1] };
            X1[0] = x + deltaX0[0];
            X1[1] = y + deltaX0[1];
            x = X1[0];
            y = X1[1];
            double deltaX = deltaX0[0] * deltaX0[0] + deltaX0[1] * deltaX0[1];
            deltaPrecision = sqrt(deltaX) / sqrt(X1[0] * X1[0] + X1[1] * X1[1]);
            switch (method) {
            case Newton:
                Choose_SLAR_for_Newton(J, SLAR_Num, x, y, a1, a2);
                break;
            case Secant:
                Secant_Method(tmp_J, a1, a2, X1[0], X1[1], deltaX0[0], deltaX0[1], b1, b2, deltaX, SLAR_Num);
                J_for_Secant(J, tmp_J);
                break;
            default:
                break;
            }
            if (iteration > 10000) {
                too_much_iterations = false;
                break;
            }
        } while (deltaPrecision >= precision);

        return X1;
    }

    void Math::Newton_Method_SLAR1(double* Arr, double a1, double a2, double x, double y) {
        Arr[0] = Df_1_2(a1, x);
        Arr[1] = Df_1_2(a2, y);
        Arr[2] = Df_3(a1, x, y);
        Arr[3] = Df_4(a1, x, y);
    }

    void Math::Newton_Method_SLAR2(double* Arr, double a1, double a2, double x, double y) {
        Arr[0] = Df_5(a1, x, y);
        Arr[1] = Df_6_7(a2);
        Arr[2] = Df_6_7(a1);
        Arr[3] = Df_8(a1, y);
    }

    void Math::Newton_Method_SLAR3(double* Arr, double a1, double a2, double x, double y) {
        Arr[0] = Df_9(a1, a2, x);
        Arr[1] = Df_10(y);
        Arr[2] = Df_11(a1, a2, x, y);
        Arr[3] = Df_12(a2, x);
    }

    void Math::Secant_Method(double* Arr, double a1, double a2, double x, double y, double deltaXx, double deltaXy, double b1, double b2, double deltaX, int SLAR_Num) {
        double* F = new double[2];
        Count_F(F, a1, a2, x, y, b1, b2, SLAR_Num);
        double top[4] = { (-F[0] * deltaXx) / deltaX ,(-F[0] * deltaXy) / deltaX, (-F[1] * deltaXx) / deltaX ,(-F[1] * deltaXy) / deltaX };
        Arr[0] += top[0];
        Arr[1] += top[1];
        Arr[2] += top[2];
        Arr[3] += top[3];
    }

    void Math::Count_F(double* F, double a1, double a2, double x, double y, double b1, double b2, int SLAR_Num) {
        switch (SLAR_Num) {
        case system1:
            F[0] = -equaton_1_1(a1, a2, x, y, b1);
            F[1] = -equaton_1_2(a1, x, y, b2);
            true_log = true;
            break;
        case system2:
            F[0] = -equaton_2_1(a1, a2, x, y, b1);
            F[1] = -equaton_2_2(a1, a2, x, y, b2);
            true_log = true;
            break;
        case system3:
            if (true_log == false || x <= 0) {
                true_log = false;
            }
            else {
                true_log = true;
            }
            F[0] = -equaton_3_1(a1, a2, x, y, b1);
            F[1] = -equaton_3_2(a1, a2, x, y, b2);
            break;
        default:
            break;
        }
    }

    void Math::Choose_SLAR_for_Newton(double* J, int SLAR_Num, double x, double y, double a1, double a2) {
        switch (SLAR_Num) {
        case system1:
            Newton_Method_SLAR1(J, a1, a2, x, y);
            break;
        case system2:
            Newton_Method_SLAR2(J, a1, a2, x, y);
            break;
        case system3:
            Newton_Method_SLAR3(J, a1, a2, x, y);
            break;
        default:
            break;
        }
    }

    void Math::J_for_Secant(double* tmp_J, double* J) {
        for (int i = 0; i < 4; i++)
        {
            tmp_J[i] = J[i];
        }
    }

    bool Math::Has_Solution(double x, double y, double a1, double a2, int SLAR_Num) {
        double* J = new double[4];
        Choose_SLAR_for_Newton(J, SLAR_Num, x, y, a1, a2);
        double d1 = J[0] * J[3];
        double d2 = J[1] * J[2];
        double det = d1 - d2;
        if (det == 0)
        {
            return false;
        }
        else {
            return true;
        }
    }

    bool Math::True_Log() {
        return true_log;
    }

    int Math::IterationAmount()
    {
        return iteration;
    }

    bool Math::Iscountable() {
        return too_much_iterations;
    }
}