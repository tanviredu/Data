from django.contrib import admin
from django.urls import path,include
from django.conf import settings
from form_app import views
from django.contrib.staticfiles.urls import staticfiles_urlpatterns,static

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name="home"),
    path('order/',views.order,name="order")
]
urlpatterns+=staticfiles_urlpatterns()
urlpatterns+=static(settings.MEDIA_URL,document_root = settings.MEDIA_ROOT)