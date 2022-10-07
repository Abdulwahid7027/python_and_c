import random

name = input("Please enter your name... ")
question = input("Please enter your question... ")
answer = ""

#generates random number
random_number = random.randint(1, 11)

#setting random numbers generated to strings
if random_number == 1:
  answer = "Yes - definitely"
elif random_number == 2:
  answer = "It is decidedly so."
elif random_number == 3:
  answer = "Without a doubt."
elif random_number == 4:
  answer = "Reply hazy, try again."
elif random_number == 5:
  answer = "Ask again later."
elif random_number == 6:
  answer = "Better not tell you now."
elif random_number == 7:
  answer = "My sources say no."
elif random_number == 8:
  answer = "Outlook not so good."
elif random_number == 9:
  answer = "Very doubtful."
elif random_number == 10:
  answer = "Charlie says no."
elif random_number == 11:
  answer = "Charlie says yes."
else:
  answer = "Error"

#output which factors in multiple different scenarios
if question == "":
  print("Please input a proper question...")
elif name == "":
  print("Question: " + question)
  print("Magic 8-Ball's answer: " + answer)
else:
  print(name + " asks: " + question)
  print("Magic 8-Ball's answer: " + answer)
