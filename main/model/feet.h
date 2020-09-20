class feet
{
    double value;

public:
    feet(double);

    bool operator==(feet) const;

    bool operator==(feet *other) const;
};