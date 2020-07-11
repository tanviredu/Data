from django.contrib import admin
from .models import Size,Pizzas
admin.site.register(Size)

@admin.register(Pizzas)
class PizzasAdmin(admin.ModelAdmin):
    list_display = ('topping1','topping2','size')
    list_filter = ('topping1','topping2','size')
    search_fields = ('topping1','topping2','size')
