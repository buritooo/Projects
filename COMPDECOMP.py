import tkinter as tk
from tkinter import filedialog
import tarfile
from tkinter import messagebox
import os

def compress_file():
    filepath = filedialog.askopenfilename()
    if not filepath:
        messagebox.showerror("Error", "No file selected")
        return
    ## open the file from filepath, append it with tar extension, set mode for writing
    compressed_file = filepath + '.tar.gz' # changed to .tar.gz for better compression
    if os.path.isfile(compressed_file):
        messagebox.showerror("Error", "File already exists, please choose a different name")
        return
    with tarfile.open(compressed_file, 'w:gz') as tar: # added 'w:gz' for compression
        ## create and write the new tar file
        file_name = os.path.basename(filepath)
        tar.add(filepath, arcname=file_name)
    ## delete the original file
    os.remove(filepath)
    ## display a message
    messagebox.showinfo("File was compressed successfully.")

def decompress_file():
    filepath = filedialog.askopenfilename()
    if not filepath:
        messagebox.showerror("Error", "No file selected")
        return
    ## pass filepath to tarfile in read mode and assign object to tar
    with tarfile.open(filepath, 'r') as tar:
        ## use method extractall from tarfile to decompress file
        path = filedialog.askdirectory()
        tar.extractall(path)
    os.remove(filepath)
    ## display a message
    messagebox.showinfo("File was decompressed successfully.")

root = tk.Tk()
compress_button = tk.Button(root, text="Select file to compress", command=compress_file)
decompress_button = tk.Button(root, text="Select file to decompress", command=decompress_file)
compress_button.grid(row=0, column=0)
decompress_button.grid(row=0, column=1)
root.mainloop()