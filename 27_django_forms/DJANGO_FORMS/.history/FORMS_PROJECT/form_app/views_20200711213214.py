from django.shortcuts import render
from .forms import PizzaForm

def home(request):
    return render(request,'form_app/home.html')

def order(request):

    # this is the manual form
    form = PizzaForm()
    return render(request,'form_app/order.html',{'pizzaform':form})



    