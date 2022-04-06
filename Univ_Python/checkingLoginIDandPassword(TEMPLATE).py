##
##
#
#    
# (YOUR HEADER MUST BE HERE)
#
#
#


import sys # This module provides access to some variables used or maintained by the interpreter
           # and to functions that interact strongly with the interpreter.
           # sys 모듈은 파이썬 인터프리터가 제공하는 변수와 함수를 직접 제어할 수 있게 해주는 모듈

id_list = []
id_list.append('abc')                                              # Create an user ID list
PASSWORD = '12345678'                            # The password is a global variable as a constant
    
id = input("Type in your user ID or 'quit': ")       	# Get user ID

if id == 'quit' :                                       # If "quit" is entered, print a goodbye message
    print("This program is ended.")
    sys.exit()                                          # Exit the program using sys.exit()
elif (id in id_list):                                                 # If the user ID is in the user ID list
    while True :                                        # Get into an endless while loop
        password = input("Type in your password  or 'quit': ")      # Get password
    

        
else :                                                  # If user ID is not in the user ID list
    print("You are a new user. Your ID is entered as a new user")
                                                        # Add the new user ID to the user ID list