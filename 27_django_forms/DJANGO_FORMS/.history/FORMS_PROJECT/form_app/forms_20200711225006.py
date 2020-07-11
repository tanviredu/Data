from django import forms
from .models import Pizzas,Size

# class PizzaForm(forms.Form):
#     topping1   =  forms.CharField(label="Topping 1", max_length=100)
#     topping2   =  forms.CharField(label="Topping 2", max_length=100)
#     # choice field is for multiple option
#     size = forms.ChoiceField(label="Size", choices=[("Small", "Small"), ("Medium", "Medium"), ("Large", "Large")])
    


# making the form with the model

class PizzaForm(forms.ModelForm):
    # size will come as a list we make it a radio button
    # how to make the dropdown option as a Radio Button 
    size  = forms.ModelChoiceField(queryset = Size.objects,empty_label=None,widget=forms.RadioSelect) 
    image = forms.ImageField();
    # we can add an additional model as a Image Field
    # you need to install the Pillow package first to make this work
    

    class Meta:
        
        model = Pizzas
        fields = ['topping1', 'topping2', 'size']
        labels = {
            'topping1' : "Topping 1",
            'topping2' : "Topping 2"
        }