#pragma once

namespace SolutonofSLAR {
    class Math {
    public:
        double* Method(double x, double y, double b1, double b2, double precision, double a1, double a2, int method, int SLAR_Num);
        bool Has_Solution(double x, double y, double a1, double a2, int SLAR_Num);
        bool True_Log();
        int IterationAmount();
        bool Iscountable();

    private:
        void Newton_Method_SLAR1(double* Arr, double a1, double a2, double x, double y);
        void Newton_Method_SLAR2(double* Arr, double a1, double a2, double x, double y);
        void Newton_Method_SLAR3(double* Arr, double a1, double a2, double x, double y);
        void Secant_Method(double* Arr, double a1, double a2, double x, double y, double deltaXx, double deltaXy, double b1, double b2, double deltaX, int SLAR_Num);
        void Count_F(double* F, double a1, double a2, double x, double y, double b1, double b2, int SLAR_Num);
        void Choose_SLAR_for_Newton(double* J, int SLAR_Num, double x, double y, double a1, double a2);
        void J_for_Secant(double* tmp_J, double* J);

        bool true_log = true;
        bool too_much_iterations = true;
        int iteration = 0;
    };
}
