import Algorithmia
import docx
from os import listdir, mkdir, path, rename
import re

client = Algorithmia.client('simYaM69JBgFlBcbUM8MuotdLMW1') #ini api orang weh 

def detect_language(text):
    """ngecek filenya dan return nilai ke ISO 639 language code"""
    algo = client.algo('nlp/LanguageIdentification/1.0.0')
    result = algo.pipe({'sentence':text}).result
    result_sorted = sorted(result, key=lambda r: r['confidence'], reverse=True)
    return result_sorted[0]['language']

def extract_text(filename):
    if filename.endswith('.docx'):
        document = docx.Document(filename)
        text = '\n'.join([
        paragraph.text for paragraph in document.paragraphs
        ])
        return text
    else:
        with open(filename) as f:
            return f.read()

def organize_files_by_language(dirname):
    """doc dan txt files diatur kedalam folder , ciee ganteng """
    counts = {}
    for filename in listdir(dirname):
        if re.match('.*\.txt|.*\.docx', filename):
            filepath = path.join(dirname, filename)
            language = detect_language(extract_text(filepath))
            targetpath = path.join(dirname, language)
        if not path.exists(targetpath):
         mkdir(targetpath)
        rename(filepath, path.join(targetpath, filename))
        counts[language] = counts[language]+1 if language in counts else 1
    
    print (counts)
    print("Data Berhasil , Cek Folder Anda.")

organize_files_by_language(r'C:\Users\NEP\Documents\BINUS\NLP\NLP-Project\test folder')#Lokasi file yang mo diatur