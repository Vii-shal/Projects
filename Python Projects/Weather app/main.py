import requests
import json
import win32com.client as wincom

speak = wincom.Dispatch("SAPI.SpVoice")

city = input("Enter your city : \n")

# url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid=ee0ee0ee0e0ee0e0e0e"
url = f"http://api.weatherapi.com/v1/current.json?key=b13989793f184149a91141538230103&q={city}"

r = requests.get(url)
# print(r.text)
wdic = json.loads(r.text)
t = (wdic["current"]["temp_c"])



print(f"The current temperature in {city} is {t} degrees")
speak.Speak(f"The current temperature in {city} is {t} degrees")

count=0
while True:
    print("Do you Want more Details")
    speak.speak("Do you Want more Details")
    print("If yes ,then click 'y'")
    speak.speak("If yes ,then click 'y'")
    print("If no ,then click 'n'")
    speak.speak("If no ,then click 'n'")
    c = input("Enter your choice \n")
    if c=='y' or c=='Y':
        w = (wdic["current"]["condition"]["text"])
        print(f"In {city} there is {w} ")
        speak.Speak(f"In {city} there is {w} ")

        h = (wdic["current"]["humidity"])
        print(f"In {city} humidity is {h} ")
        speak.Speak(f"In {city} humidity is {h} ")

        ws = (wdic["current"]["wind_kph"])
        print(f"In {city} wind speed is {ws} kph ")
        speak.Speak(f"In {city} wind speed is {ws} kph")
        break
    elif c=='n' or c=='N':
        print("Thank you ")
        speak.speak("Thank you ")
        break
    else:
        count = count + 1
        if (count >= 2):
            print("bhootni kee sahii choice daal")
            speak.speak("bhootni kea sahii choice daal")
        print("Please enter y or n ")
        speak.speak("Please enter y or n ")

