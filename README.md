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

32. **Character Classifier**  
    Write a program that reads a character and determines whether it is a vowel, consonant, digit, or a symbol (any character that is not a letter or a digit).

Sure! Here's the **English version** of exercises **33 to 40**, following the same detailed style:

---

33. **Determine the Quadrant of a Point in the Cartesian Plane**
    Write a program that reads two integer values representing the coordinates $x$ and $y$ of a point on a Cartesian plane. The program must determine and display in which of the four quadrants the point is located, or if it lies on one of the axes or at the origin (when $x = 0$ and $y = 0$).
    Quadrants are defined as:

* **First quadrant**: $x > 0$ and $y > 0$
* **Second quadrant**: $x < 0$ and $y > 0$
* **Third quadrant**: $x < 0$ and $y < 0$
* **Fourth quadrant**: $x > 0$ and $y < 0$

---

34. **Loan Approval Analysis**
    A loan company uses two rules to determine whether a loan can be approved:
 - The total loan amount must be **at most 10 times the applicant’s monthly income**.
 - The installment amount (total divided by number of installments) must be **no more than 30% of the applicant’s monthly income**.

Write a program that reads:

* The applicant’s monthly income
* The desired loan amount
* The number of installments

The program must indicate whether the loan can be granted, based on the rules above.

---

35. **Day of the Week from Number**
    Write a program that reads an integer between 1 and 7 and displays the corresponding day of the week, where:
    1 = Sunday
    2 = Monday
    3 = Tuesday
    4 = Wednesday
    5 = Thursday
    6 = Friday
    7 = Saturday

If the entered number is not in the range from 1 to 7, the program should display an error message.

---

36. **Certification Classification Based on 5 Exams**
    In a certification test, five exams are applied (I, II, III, IV, and V), and the minimum passing grade is **70 points per exam**. Write a program that reads the grades of the five exams and prints the candidate's **classification** according to the rules below:

* **Class A**: Passed all exams (grade ≥ 70 in every exam)
* **Class B**: Passed exams I, II, and IV, but **did not pass** either III or V
* **Class C**: Passed exams I and II and passed **at least one** of exams III or IV, but **did not pass** V
* **Failed**: Any other result

---

37. **Agricultural Spraying Cost Calculation**
    An agricultural aviation company provides crop spraying services and charges different prices depending on the **type of pest** and the **area (in acres)**, according to the table:

* Type 1: Weeds – R\$ 50.00 per acre
* Type 2: Locusts – R\$ 100.00 per acre
* Type 3: Borers – R\$ 150.00 per acre
* Type 4: All pests above – R\$ 250.00 per acre

Discounts:

* If the area is greater than 1000 acres, the customer receives a **5% discount on the total**
* If the total cost exceeds R\$ 750.00, an **additional 10% discount** is applied on the amount **above** R\$ 750.00
  **Note:** If both discounts apply, apply the area discount first.

Write a program that reads:

* The pest type (1 to 4)
* The area in acres
  And prints the final amount to be paid.

---

38. **Leap Year Check**
    A leap year has **366 days** instead of the usual 365, with February having 29 days.

A year is a leap year if:

* It is **divisible by 4**
* It is **not divisible by 100**, unless it is **also divisible by 400**

Examples of leap years: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800
Examples of **non-leap years**: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038

Write a program that reads a year and displays whether it is a leap year or not.

---

39. **Check Digit (DV) Calculation Using Modulo 11**
    A check digit (DV) is used to verify numbers such as bank agency codes. A common method is **Modulo 11**.

### How to calculate the DV:

1. Multiply each digit of the agency number, **from left to right**, by the weights 5, 4, 3, and 2.
2. Add all the products.
3. Divide the sum by 11 and get the **remainder**.
4. Subtract the remainder from 11: $DV = 11 - (sum \mod 11)$
5. If the result is 10, the DV is represented by the letter **‘X’**.

**Examples:**

* Agency `4870` → (4×5) + (8×4) + (7×3) + (0×2) = 73
  $73 \mod 11 = 7 → 11 - 7 = 4$ → DV = 4
* Agency `4881` → (4×5) + (8×4) + (8×3) + (1×2) = 78
  $78 \mod 11 = 1 → 11 - 1 = 10$ → DV = **X**

Write a program that reads the 4 digits of an agency number and prints the full number in the format `XXXX-DV`.

---

40. **Number to Words (from 1 to 100)**
    Write a program that reads an integer between **1 and 100** and prints the number **in words**.
    Examples:

* 1 → “one”
* 15 → “fifteen”
* 42 → “forty-two”
* 100 → “one hundred”
  If the number is outside the range from 1 to 100, the program should display an error message.

---

Feel free to explore each exercise and see how I solved them. 

