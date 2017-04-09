import PyPDF2
def getDataUsingPyPdf2(filename):
    pdf = PyPDF2.PdfFileReader(open(filename, "rb"))
    content = ""
    for i in range(0, pdf.getNumPages()):
        extractedText = pdf.getPage(i).extractText()
        content += extractedText + "\n"
        # return content.encode("ascii", "ignore")
    return content

def main():
    filename="fs_abba.pdf"
    s = getDataUsingPyPdf2(filename)
    outfile = open("b.txt","w",encoding='utf-8')
    print(s)
    outfile.write(s)

main()

# file = open("fs_abba.pdf","rb")
# pdf1 = PyPDF2.PdfFileReader(file)
# print(pdf1.numPages)
#
#
# s = pdf1.readNextEndLine()
# print(s)
