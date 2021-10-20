from tkinter import *
from tkinter.messagebox import *
root=Tk()
root.geometry('100x100')
btn=Button(root, text='Click Me to Access Calculator',command=next)
btn1=Button(root, text='Exit',command=root.destroy)
btn1.pack(side='bottom')
btn.pack(side='top')
root.mainloop()
def next():
    a=Tk()
    btn1 = Button(a, text='Addition', bd='5', command=Addition)
    btn1.pack(side='top')
    btn2 = Button(a, text='Subtraction', bd='5', command=Subtraction)
    btn2.pack(side='bottom')
    '''btn3 = Button(root, text='Multiplication', bd='5', command=submit)
    btn3.pack(side='right')
    btn4 = Button(root, text='Division', bd='5', command=submit)
    btn4.pack(side='left')
    btn5= Button(root, text='Exit', bd='5', command=root.destroy)
    btn5.pack(side='center')'''

num1=int()
num2=int()


def Subtraction():
    n1=num1.get()
    n2=num2.get()
    sub=n1-n2
    showinfo("Result", "Subtraction of these two numbers is",sub)
def Addition():
    n1=num1.get()
    n2=num2.get()
    add=n1+n2
    showinfo("Result", "Addition of these two numbers is",add)

root.geometry('500x500')
root.title("Heya")
u=Label(root, text="First Number : ")
p=Label(root, text="Second Number : ")

un = Entry(root,textvariable=num1,bg='black',fg='white')
pw = Entry(root,textvariable=num2,bg='black',fg='white')

btn=Button(root, text='Enter',bd='5',command=next)

u.pack()
un.pack()
p.pack()
pw.pack()
btn.pack()

root.mainloop()
