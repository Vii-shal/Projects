import PyPDF2

merger = PyPDF2.PdfMerger()

pdfs = ["f1.pdf","f2.pdf"]
for filename in pdfs:
    pdf = open(filename,'rb')
    pdfRead  = PyPDF2.PdfReader(pdf)
    merger.append(pdfRead)

pdf.close()
merger.write('merged.pdf')
print("DONE")