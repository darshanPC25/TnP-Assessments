#Write a C program that accepts an employee&#39;s ID, total worked hours of a month and the amount he received per hour. Print the employee&#39;s ID and salary (with two decimal places) of a particular month.
emp_id=input("Enter Employees ID: ")
whrs=int(input("Enter The Working Hrs: "))
salphrs=float(input("Enter The salary per hrs: "))
print("Employees ID: ",emp_id,"\nSalary: $",whrs*salphrs)