import random

def game():

    chance=int(1)
    while chance<5:
        randno=random.randint(1,3)
        marks=int(0)
        print("Choose 1 for Rock")
        print("Choose 2 for Paper")
        print("Choose 3 for Scissors")
        choice=int(input())
        if randno==choice:
            print("Tie")
            print("Computer choose",randno)
            print("You choose",choice)
            print("Score=",marks)
        elif choice==1 and randno==2 or choice==2 and randno==3 or choice==3 and randno==1:
            print("You lose")
            print("Computer choose",randno)
            print("You choose",choice)
            print("Score=",marks)
        elif choice==1 and randno==3 or choice==2 and randno==1 or choice==3 and randno==2:
            print("You win")
            print("Computer choose",randno)
            print("You choose",choice)
            marks=marks+1
            print("Score=",marks)

      
        chance=chance+1
    print("You ran out of chances")
    
                        
   

print("ROCK PAPER SCISSOR GAME")
print("Start game")
game()
 
print("Play again!!")
choi=input()
while choi!="no":
    if choi=="yes":
       
        game()
        print("Play again!!")
        choi=input()

