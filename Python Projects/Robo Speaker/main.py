import win32com.client as wincom

speak = wincom.Dispatch("SAPI.SpVoice")

txt = input("What you want to speak :")
while txt !='q' :
    speak.Speak(txt)
    txt = input("What you want to speak :")
if txt == 'q':
    speak.Speak("bye bye jaanu")

