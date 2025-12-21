# This is python program which takes user input and tells the user wheter his/ hers number is a prime number or not

#function declaration field

def get_user_input()-> int:
    while True:
        try:
            user_input = int(input("Please enter your number: ")) 
            return user_input
        except ValueError:
            print("Invalid input")
             
def check_prime(number:int) -> bool:
    if number < 2:
        return False
    # the smallest possible prime number is 2
    else:
        for i in range(2,number):
            if number % i == 0:
                    return False
                    #iterating through the non trivial dividors 1 and the number its self
                    # breaking as one match is enough
        return True
            # if there was no match for the condition return prime 

def display_message(prime,number:int):
    if prime:
        print(f"Yes! Your number: {number} is a prime number")
    else:
        print(f"No! Your number: {number} is not a prime number")
    # this function tells the user wheter his / her number is a prime by a text in the terminal

    # main
def main():
    user_input = get_user_input()
    prime = check_prime(user_input)
    display_message(prime,user_input)

if __name__ =="__main__":
    main()