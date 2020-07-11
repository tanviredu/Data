from django.shortcuts import render
from .forms import PizzaForm

def home(request):
    return render(request,'form_app/home.html')

def order(request):
    if request.method == "POST":
        filled_form = PizzaForm(request.POST,request.FILES)
        if filled_form.is_valid():
            size     = filled_form.cleaned_data['size']
            topping1 = filled_form.cleaned_data['topping1']
            topping2 = filled_form.cleaned_data['topping2']
            print([size,topping1,topping2])

            note = "Thanks for ordering! your pizza with size {} and {} with {} are on its way !".format(size, topping1, topping2)
        else:
            note = "Order is not Created"

        ## after the posting
        new_form = PizzaForm()
        return render(request,'form_app/order.html',{'pizzaform':new_form,'note':note})
    else:
        new_form = PizzaForm()
        return render(request,'form_app/order.html',{'pizzaform':new_form})

    

    