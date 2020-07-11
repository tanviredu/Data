from django.shortcuts import render
from .forms import PizzaForm, MultiplePizzaForm
from django.forms import formset_factory

def home(request):
    return render(request,'form_app/home.html')

def order(request):
    multiple_form = MultiplePizzaForm()
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
        return render(request,'form_app/order.html',{'pizzaform':new_form,'note':note,'multiple_form':multiple_form})
    else:
        new_form = PizzaForm()
        return render(request,'form_app/order.html',{'pizzaform':new_form,'multiple_form': multiple_form})

## make a controller
# def pizzas(request):
#     ## we take theinput how manu forms we need
#     ## from the get request
#     ## this is not a very important data
#     ## then based on the number we multiply the number
#     ## setting  a default value
#     number_of_pizzas = 2
#     filled_multiple_pizza_form = MultiplePizzaForm(request.GET)
#     if filled_multiple_pizza_form.is_valid():
#         number_of_pizzas = filled_multiple_pizza_form.cleaned_data['number']  
#     ### take the number now make multiple form with
#     ### form factory
#     ### we multipy with existing model
#     PizzaFormSet = formset_factory(PizzaForm, extra=number_of_pizzas)
#     # make an instance
#     formset = PizzaFormSet()
#     ## now take the multiple form with the post request
#     if request.method == "POST":
#         filled_formset = PizzaFormSet(request.POST)
#         if filled_formset.is_valid():
#             ## take all the formwith a loop
#             for form in filled_formset:
#                 ## print the data for topping 1
#                 print(form.cleaned_data['topping1'])

#             note = "Pizzas has been ordered"
#         else:
#             ## if not valid
#             note = "Order is not created ! Please try again"

#         ## again return the form
#         ## send the form again
#         return render(request,'form_app/pizzas.html',{'note':note,'formset':formset})            
#     else:
#         ## when the page load
#         return render(request,'form_app/pizzas.html',{'formset':formset})


def pizzas(request):

    number_of_pizzas = 2
    
    filled_multiple_pizza_form = MultiplePizzaForm(request.GET)
    if filled_multiple_pizza_form.is_valid():

        number_of_pizzas = filled_multiple_pizza_form.cleaned_data['number']
    
    PizzaFormSet = formset_factory(PizzaForm, extra=number_of_pizzas)
    
    formset = PizzaFormSet()
    
    if request.method == "POST":
        filled_formset = PizzaFormSet(request.POST)
        print(request.POST)
        if filled_formset.is_valid():
            for form in filled_formset:
                print(form.cleaned_data['topping1'])
            note = 'Pizzas have been ordered!'
        else:
            note = 'Order was not created, please try again'


        return render(request, 'form_app/pizzas.html', {'note':note, 'formset':formset})
    else:
        return render(request, 'form_app/pizzas.html', {'formset':formset})        