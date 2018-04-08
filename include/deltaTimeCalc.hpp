#ifndef DELTATIMECALC_HPP
#define DELTATIMECALC_HPP

class DeltaTimeCalculator
{
    private:
        float deltaTime;

    public:
        DeltaTimeCalculator()
        {}

        float calcDeltaTime()
        {
            deltaTime = 500.0f;
            return deltaTime;
        }
};
#endif //DELTATIMECALC_HPP
