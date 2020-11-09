int getObesity(double bmi)
{
    int himan;

    if (bmi < 18.5f) {
        himan = -1;
    }
    else if (bmi < 25.0f) {
        himan = 0;
    }
    else if (bmi < 30.0f) {
        himan = 1;
    }
    else if (bmi < 35.0f) {
        himan = 2;
    }
    else if (bmi < 40.0f) {
        himan = 3;
    }
    else {
        himan = 4;
    }

    return himan;
}