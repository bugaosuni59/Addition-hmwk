第一步：
把所有pdf、doc下载下来
然后把原始页面的信息搞下来了
建表，
读取symbol，生成INSERT语句一千条
读取原始页面的common_name和另一个name
生成UPDATE语句一千条

第二步：
把symbol转向的网页全扒下来
转txt
信息提取，生成UPDATE语句

第三步：
pdf转html
信息提取，生成ALTER加列，生成UPDATE加数据