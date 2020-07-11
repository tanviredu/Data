from django.shortcuts import render

def home(request):
    return render(request,'form_app/home.html')

def order(request):
    return render(request,'form_app/order.html')



    