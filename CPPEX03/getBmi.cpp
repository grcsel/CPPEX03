double getBmi(double height, double weight)
{
	double bmi;

	//cm�P�ʂ�m�P�ʂɂ���
	height /= 100;

	//BMI���v�Z����
	bmi = weight / height / height;

	//�߂�l�Ƃ���BMI��Ԃ�
	return bmi;
}