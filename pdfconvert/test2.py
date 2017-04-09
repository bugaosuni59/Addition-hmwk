from PyPDF2 import PdfFileMerger
pdf_file1 = "PDF文件1路径"
pdf_file2 = "PDF文件2路径"
pdf_output = "PDF文件输出的路径"  # 指新生成的文件
merger_file = PdfFileMerger()  # 定义一个空文件
 # PdfFileMerger提供两种合并PDF的方法，其中包含merger和append这两种方法从字面上理解就是合并和追加。
file_obj = open(pdf_file1, "rb")
merger_file.append(pdf_file1)
file_obj.close()
file_obj = open(pdf_file2, "rb")
merger_file.append(pdf_file2)
file_obj.close()
out_obj = open(pdf_output, "wb")
merger_file.write(out_path)
merger_file.close()
out_obj.close()
  # 到此就生成了以追加方式合并的PDF