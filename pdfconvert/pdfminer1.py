#!/usr/bin/python
#-*- coding: utf-8 -*-
from pdfminer.pdfparser import PDFParser
from pdfminer.pdfdocument import PDFDocument

from pdfminer.converter import PDFPageAggregator
from pdfminer.pdfpage import PDFPage
from pdfminer.pdfpage import PDFTextExtractionNotAllowed
from pdfminer.pdfinterp import PDFResourceManager
from pdfminer.pdfinterp import PDFPageInterpreter
from pdfminer.layout import *
import re
import sys



# PDFParser：从一个文件中获取数据
# PDFDocument：保存获取的数据，和PDFParser是相互关联的
# PDFPageInterpreter处理页面内容
# PDFDevice将其翻译成你需要的格式
# PDFResourceManager用于存储共享资源，如字体或图像。

def getBlack(filename):
    fp = open(filename,"rb")
    parser = PDFParser(fp)#获取数据
    document = PDFDocument(parser)#储存数据
    rsrcmgr = PDFResourceManager(caching=False)#字体、图像等共享资源
    laparams = LAParams()# 创建一个PDF设备对象
    device = PDFPageAggregator(rsrcmgr, laparams=laparams)# 创建一个PDF页面聚合对象
    interpreter = PDFPageInterpreter(rsrcmgr, device)#创建一个PDF解析器对象
    replace = re.compile(r'\s+')
    outfile = open("a.txt", "w")
    for page in PDFPage.create_pages(document):
        interpreter.process_page(page)
        # 接受该页面的LTPage对象
        layout = device.get_result()
        # 这里layout是一个LTPage对象 里面存放着 这个page解析出的各种对象
        # 一般包括LTTextBox, LTFigure, LTImage, LTTextBoxHorizontal 等等
        for x in layout:
            # 如果x是水平文本对象的话
            if (isinstance(x, LTTextBoxHorizontal)):
                print(rsrcmgr.get_font())

                print(x.get_text())
                outfile.write(x.get_text()+'\n')
                # text = re.sub(replace, '', x.get_text())
                # if len(text) != 0:
                #     print text
                #     outfile.write(text + '\n\n\n')
                #     print(text[0])


def main():
    reload(sys)
    sys.setdefaultencoding('utf-8')
    filename = "fs_abba.pdf"
    getBlack(filename)
#    print()
main()