# Generated by Django 3.0.7 on 2020-07-11 17:07

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('form_app', '0002_pizzas_image'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='pizzas',
            name='image',
        ),
    ]