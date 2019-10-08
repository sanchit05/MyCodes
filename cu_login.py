from selenium import webdriver

driver=webdriver.Chrome()
driver.get('https://uims.cuchd.in/uims/')

username_box = driver.find_element_by_id('txtUserId')
username_box.send_keys('17BCS3842')

next_button = driver.find_element_by_id('btnNext')
next_button.click()
                     
password_box = driver.find_element_by_id('txtLoginPassword')
password_box.send_keys('Shinchan08@')

login_button = driver.find_element_by_id('btnLogin')
login_button.click()
