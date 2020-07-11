from django.db import models

# we make two model one for the size
# and another for the Pizzas
## why make 2 because we dont give permission 
## to give the user to make their own size
# this thing you want to set manualy
class Size(models.Model):
    title = models.CharField(max_length=100)

    def __str__(self):
        return self.title

## user will be interacting with this table
class Pizzas(models.Model):
    topping1 = models.CharField(max_length=100)
    topping2 = models.CharField(max_length=100)
    size     = models.ForeignKey(Size, on_delete=models.CASCADE)
    image    = models.ImageField(upload_to='profile_pics')

    def __str__(self):
        return "Topping1 :   {}   , Topping2:    {} ,    Size:   {} ".format(self.topping1,self.topping2,self.size)       
