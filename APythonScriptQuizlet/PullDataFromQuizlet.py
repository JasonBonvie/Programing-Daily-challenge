from lxml import html
import requests
from collections import OrderedDict

page = requests.get('https://quizlet.com/248903613/wis2040-exam-2-flash-cards/')
# wis 2552 exam 2 ('https://quizlet.com/193338384/wis-2552-exam-2-material-flash-cards/')
tree = html.fromstring(page.content)
#---------------------IGNORE-------------------
# <span class="TermText notranslate lang-en">About ____ of all mammal species are in the Order Rodentia.</span>
# <span class="TermText notranslate lang-en">1/2</span>
#This will create a list of buyers:
#buyers = tree.xpath('//div[@title="buyer-name"]/text()')
#This will create a list of prices
#---------------------IGNORE-------------------
QandA = tree.xpath('//span[@class="TermText notranslate lang-en"]/text()')
#---------------------IGNORE-------------------
# print(questions)
# i = 0
# for quest in questions:
# 	print(questions[i],'\n')
# 	i +=1
#---------------------IGNORE-------------------
question = []
answers = []
i = 0 
question = QandA[::2]
answers = QandA[1::2]
#---------------------IGNORE-------------------
# while i < len(QandA): 
# 	question[i] = QandA[i]
# 	i += 2
# i = 0
# for quest in question:
# 	print(question[i],'\n')
# 	i +=1
# i = 0 	
# for ans in answers:
# 	print(answers[i],'\n')
# 	i +=1
#---------------------IGNORE-------------------
mydict = dict(zip(question,answers))
x = OrderedDict(sorted(mydict.items(), key=lambda t: t[0]))
for k, v in x.items():
	print(k,'\n',v ,'\n')
#---------------------IGNORE-------------------
# print(len(answers))
#OrderedDict(sorted(mydict.items(), key=lambda t: t[0])
# keylist = mydict.keys()
# keylist.sort()
# for key in keylist:
#     print ("%s: %s" % (key, mydict[key]))
# i = 0 
# QandA = {}
# print(questions[0])
# while i < len(questions): 
# 	QandA = dict(zip(questions[i],questions[i+1]))
# 	i += 2 
# print(QandA))
#---------------------IGNORE-------------------