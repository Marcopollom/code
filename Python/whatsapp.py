from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait


driver = webdriver.Chrome("./chromedriver")
driver.get('https://web.whatsapp.com/')

name = str(input('Enter the name of user or group : '))
msg = str(input('Enter your message : '))
count = int(input('Enter the count : '))
wait = WebDriverWait(driver = driver, timeout = 900)

user = driver.find_element_by_xpath('//span[@title = "{}"]'.format(name))
user.click()

msg_box = driver.find_element_by_class_name('_3u328')
#msg += '\n this is a system generated message'

for i in range(count):
        msg_box.send_keys(msg)
        button = driver.find_element_by_class_name('_3M-N-')
        button.click()

wait = WebDriverWait(driver = driver, timeout = 600)
driver.close()

