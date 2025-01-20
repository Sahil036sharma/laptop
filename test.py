# # import speech_recognition as sr # type: ignore
# # AUDIO_FILE=("harvard,")

# # r= sr.Recognizer()

# # with sr.AudioFile(AUDIO_FILE)as source:
# #     audio=r.record(source)
    
# # try:
# #     print("audio file contains"+ r.recognize_google(audio))

# # except sr.UnknownalueError:
# #     print("Google speech reco could not understand audio")
    
# # except sr.RequestError:
# #     print("couldn't")

# import random

# # Initialize doors
# doors = ["goat", "goat", "goat"]
# goatdoor = []
# swap = 0
# dont_swap = 0

# # Place BMW behind one random door
# x = random.randint(0, 2)
# doors[x] = "BMW"

# # Identify doors with goats
# for i in range(3):
#     if i != x:
#         goatdoor.append(i)

# # Player makes a choice
# choice = int(input("Enter your choice (0, 1, or 2): "))

# # Host opens a door with a goat
# door_open = random.choice(goatdoor)
# while door_open == choice:
#     door_open = random.choice(goatdoor)

# print(f"The host opens door {door_open}, revealing a goat.")

# # Player decides to swap or not
# ch = input("Do you want to swap? (Y/N): ")

# if ch == 'Y':
#     # Swap to the other unopened door
#     remaining_door = 3 - choice - door_open
#     if doors[remaining_door] == "BMW":
#         print("Player wins by swapping!")
#         swap += 1
#     else:
#         print("Player loses by swapping.")
# else:
#     # Stick with the original choice
#     if doors[choice] == "BMW":
#         print("Player wins by staying!")
#         dont_swap += 1
#     else:
#         print("Player loses by staying.")

# print(f"Swap wins: {swap}")
# print(f"Don't swap wins: {dont_swap}")


import turtle
from random import randint

# Set up turtle environment
turtle.bgcolor("black")
seurat = turtle.Turtle()
dot_distance = 25  # Fixed variable name
width = 5
height = 7

# Pen up so that turtle does not draw lines between dots
seurat.penup()

# List of colors
list_color = ["gold", "red", "green", "yellow", "blue", "pink", "orange"]

# Starting position  the turtle
seurat.setpos(-250, 250)

def spiralPrint(m, n):
    k = 0  # Starting row index
    l = 0  # Starting column index
    f = 0  # Direction flag to determine whether to turn the turtle

    while (k < m and l < n):
        if f == 1:
            seurat.right(90)  
        for i in range(l, n):
            col = randint(0, len(list_color) - 1)  # Choose a random color
            seurat.color(list_color[col])
            seurat.dot()
            seurat.forward(dot_distance)

        k += 1
        f = 1

        seurat.right(90)
        for i in range(k, m):
            col = randint(0, len(list_color) - 1)
            seurat.color(list_color[col])
            seurat.dot()
            seurat.forward(dot_distance)

        n -= 1

        seurat.right(90)
        if k < m:
            for i in range(n - 1, l - 1, -1):
                col = randint(0, len(list_color) - 1)
                seurat.color(list_color[col])
                seurat.dot()
                seurat.forward(dot_distance)

            m -= 1

        seurat.right(90)
        if l < n:
            for i in range(m - 1, k - 1, -1):
                col = randint(0, len(list_color) - 1)
                seurat.color(list_color[col])
                seurat.dot()
                seurat.forward(dot_distance)

            l += 1

spiralPrint(width, height)

turtle.done()
