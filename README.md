# My C Learning Journey  

Welcome to my C learning repository! 🖥️  

This repository contains all the C exercises I’ve solved so far as part of my learning journey. The problems range from basic concepts to more complex algorithms, and I continue to update it as I progress.

### 🔹 What You’ll Find Here:  
- Solutions to C programming exercises  
- Step-by-step problem-solving  
- Experimentation with different C concepts and techniques  

### 🚀 Purpose:  
This repository serves as a personal archive of my C programming progress. It also aims to be a reference for anyone learning C programming. Feel free to explore the code, use it for reference, or improve upon it!

---

#### Some exercises have some limitations on what i can use to code (variables, functions, loops, structs etc.). 

### 📝 Exercise List

##### \[1 - 20] I can only use printf, scanf, variabels and math operators (+, -, /, %)

1. **Rectangle Area and Perimeter**  
   Given the base and height of a rectangle, calculate its area and perimeter.  

2. **Square Area and Perimeter**  
   Given the side length of a square, calculate its area and perimeter.  

3. **Circle Area and Perimeter**  
   Given the radius of a circle, calculate its area and perimeter.  

4. **Triangle Perimeter**  
   Given the lengths of the three sides of a triangle, calculate its perimeter.  

5. **Successor of an Integer**  
   Read an integer and display its successor.  

6. **Quotient and Remainder**  
   Read two integers and display the quotient and remainder of their division.  

7. **Age in Days to Years, Months, and Days**  
   Given a person’s age in days, convert and display it in years, months, and days.  

8. **Fahrenheit to Celsius Conversion**  
   Convert a given temperature in Fahrenheit to Celsius using the formula: C = 5/9 * (F – 32).  

9. **Volume of a Oil Can**  
   Calculate the volume of an oil can given its radius and height.  

10. **Convert Integer to Binary**  
    Convert a given integer (less than 32) to its binary representation.  

11. **Student’s Semester Grade**  
    Calculate the semester grade of a student, which is the arithmetic mean of two bimester grades. Each bimester grade is the average of two exam grades.  

12. **Speed Conversion from m/s to km/h**  
    Convert a given speed from meters per second (m/s) to kilometers per hour (km/h) by multiplying the value by 3.6.  

13. **Equivalent Resistance in a Circuit**  
    Calculate the equivalent resistance of a circuit with two resistors (R1 and R2) in parallel, followed by another resistor (R3) in series.  

14. **Traffic Light Synchronization**  
    In a city, traffic lights are synchronized so that vehicles encounter open lights as they drive. Given the distance to the next traffic light, the speed limit, and the car's acceleration, calculate when the next light should open (it should open 3s before the car reach it's point)

15. **Building Height Using Shadows**
On a sunny day, you want to measure the height of a building, but your tape measure is not long enough. Assuming you can measure your shadow and the building’s shadow on the ground, and you know your height, write a program to read the necessary data and calculate the building’s height.

16. **Reverse a Three-Digit Number**
Write a program to generate the reverse of a three-digit number (e.g., the reverse of 498 is 894).

17. **ATM Withdrawal - Optimal Bill Distribution**
An ATM withdrawal program must determine the number of each bill denomination to dispense to the user. A possible strategy is the "optimal distribution," where the number of lower-value bills is minimized. For example, for a requested amount of R$ 87.00, the program should return one R$ 50.00 bill, three R$ 10.00 bills, one R$ 5.00 bill, and two R$ 1.00 bills. Write a program that receives the requested amount and returns the bill distribution according to the optimal distribution strategy. (Assume the existence of R$1.00, R$2.00, R$5.00, R$10.00, R$20.00, R$50.00, and R$100.00 bills.)

18. **Swap Two Integer Variables**
Write a program that swaps the values of two integer variables.

19. **First-Degree Equation Root**
Write a program that calculates the root of a first-degree equation in the form ax + b = 0.

20. **Product Payment Plan (Down Payment + 2 Installments)**
A store sells its products using a payment plan: a down payment plus two installments. The down payment must be greater than or equal to both installments, which must be equal, whole numbers, and as large as possible.
For example, if the product value is R$ 270.00, the down payment and each installment would be R$ 90.00. If the product value is R$ 302.75, the down payment would be R$ 102.75, and the two installments would be R$ 100.00 each.
Write a program that receives the total product value and calculates the down payment and the two installments according to these rules. This method helps simplify the creation and payment of the installment invoices.

##### \[21 - 25] I can only use printf, scanf, variabels, math operators (+, -, /, %) and if statements

21. **Positive or Negative Number**:
     Read a number and display whether it is positive or negative.

22. **Absolute Value**:
    Read a number and display its absolute value.

23. **Even or Odd Number**:
    Read a number and print whether it is even or not.

24. **Greatest of Three Numbers**:
    Read three numbers and display the greatest among them.

25. **Days in a Month**:
    Read the number corresponding to a month and display the number of days in that month.

26. **Sum of the Two Largest Among Three Values**  
    Read three values and calculate the sum of the two largest ones.  

27. **Weighted Average (Greatest Gets Weight 5)**  
    Read three numbers and calculate their weighted average.  
    The greatest number receives weight 5, and the other two receive weight 2.5.  

28. **Vowel or Consonant Checker**  
    Read a letter and display whether it is a vowel or a consonant.  

29. **Social Security Deduction (Max R$ 334.29 or 11%)**  
    Read an employee’s salary and calculate the social security deduction.  
    The deduction is 11% of the salary, but it must not exceed R$ 334.29.  

30. **Fuel Discount Calculation**  
    A gas station applies discounts depending on the type and quantity of fuel:  
    - Alcohol:  
      - Up to 25 liters: 2% per liter  
      - Over 25 liters: 4% per liter  
    - Gasoline:  
      - Up to 25 liters: 3% per liter  
      - Over 25 liters: 5% per liter  
    Read the fuel type (`A` for alcohol, `G` for gasoline) and the number of liters, then calculate the final price.  
    Prices: Alcohol = R$ 1.90/liter, Gasoline = R$ 2.70/liter.

31. **QB Rating Calculation**  
    In American football, the Quarterback Rating is an index used to measure the performance of a quarterback — the higher the rating, the better the performance. It is calculated as follows:
   First, calculate the percentage of completed passes relative to the number of attempted passes. Subtract 0.3 from this value and divide the result by 0.2. This component must not exceed 2.375 or fall below 0 — if it does, adjust it to 2.375 or 0, respectively.
   Next, calculate the number of passing yards divided by the number of attempted passes. Subtract 3 from this value and divide the result by 4. Again, clamp the result to be no greater than 2.375 and no less than 0.
   Then, calculate the number of touchdown passes divided by the number of attempted passes. Divide the result by 0.05. As before, ensure the result stays within the range of 0 to 2.375.
   Now, calculate the number of intercepted passes divided by the number of attempted passes. Subtract 0.095 from this value and divide the result by 0.04. This component must also be between 0 and 2.375, with adjustments made if necessary.
   Finally, add the four components calculated above, multiply the total by 100, and divide the result by 6. This gives the Quarterback Rating.

   Write a program that reads the number of attempted passes, completed passes, passing yards, touchdown passes, and intercepted passes, and outputs the quarterback's QB Rating.
---

Feel free to explore each exercise and see how I solved them. 

