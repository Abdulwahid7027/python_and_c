total = 0

print("""Services Available
1. Ground Shipping
2. Ground Shipping Premium
3. Drone Shipping""")
service = input("Please enter which service you would like... ")
weight = int(input("Please enter how much your package weighs... "))
print("")

#selection for ground shipping
if service == "1":
  print("Ground Shipping Cost...")
  print("")
  if weight <= 0:
    total = ("The input is incorrect for the weight, please re-enter...")
  elif weight <= 2:
    total = ((1.50 * weight) + 20)
  elif weight <= 6:
    total = ((3.00 * weight) + 20)
  elif weight <= 10:
    total = ((4.00 * weight) + 20)
  elif weight > 10:
    total = ((4.75 * weight) + 20)
  else:
    total = ("You haven't entered a valid number for the weight, please re-enter...")

  print("Your total is $" + str(total))

#selection for premium ground shipping
elif service == "2":
  print("Premium Ground Shipping Cost...")
  print("")
  print("Your total is $125.00")

#selection for drone shipping
elif service == "3":
  print("Drone Shipping Cost...")
  print("")
  if weight <= 0:
    total = ("The input is incorrect for the weight, please re-enter...")
  elif weight <= 2:
    total = (4.50 * weight)
  elif weight <= 6:
    total = (9.00 * weight)
  elif weight <= 10:
    total = (12.00 * weight)
  elif weight > 10:
    total = (14.25 * weight)
  else:
    total = ("You haven't entered a valid number for the weight, please re-enter...")
  print("Your total is $" + str(total))

#selection for invalid input
else:
  print("No services have been selected. Please try again...")
