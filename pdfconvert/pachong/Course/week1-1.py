import requests

def getHTMLText(url):
    try:
        r = requests.get(url,timeout=30)
        r.raise_for_status()
        r.encoding = r.apparent_encoding
        return r.text
    except:
        return "产生异常"

def main():
    url = "http://cc.bjtu.edu.cn:81/meol/jpk/course/layout/newpage/index.jsp?courseId=12029"
    print(getHTMLText(url))

# r = requests.get("http://www.baidu.com")
# # 如果是200则访问成功
# print(r.status_code)
# type(r)
# r.encoding = 'utf-8'
# print(r.text)

# requests.request()
# requests.get()
# requests.head()
# requests.post()
# requests.put()
# requests.patch()
# requests.delete()



main()