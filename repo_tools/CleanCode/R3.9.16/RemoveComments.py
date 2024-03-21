import re
import sys

def remove_comments(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

if __name__ == '__main__':
   in_filename  = sys.argv[1]
   out_filename = sys.argv[2]
   code_w_comments = open(in_filename).read()
   code_wo_comments = remove_comments(code_w_comments)
   fh = open(out_filename, "w")
   fh.write(code_wo_comments)
   fh.close()
