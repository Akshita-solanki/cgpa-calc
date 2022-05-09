# cgpa-calc
cgpa calculator using c++

steps to calculate cgpa


Sample Marks:SCP- 95/100
BEEE- 86/100MATH- 89/100ENG- 83/100EGD- 85/100

1) Covert marks into points as follows:(90,100] = 10. O(80,90] = 9. A+(70,80] = 8. A...So, in our example, points are:SCP- 10BEEE- 9MATH- 9ENG- 9EGD- 9

2) Now, multiply your points of each subjects with that subject's credits to get net points of each subject.
So, in our example, net points are:SCP- 10×5=50BEEE- 9×5=45MATH- 9×4=36ENG- 9×3=27EGD- 9×3=27

3) Now add net points of all subjects.
So, in our example, total net points are:50+45+36+27+27=185

4) Now divide these total net points by 20 (Because sum of all credits is 20)
So, in our example, it's:185/20 = 9.25
That's your CGPA (out of 10)
