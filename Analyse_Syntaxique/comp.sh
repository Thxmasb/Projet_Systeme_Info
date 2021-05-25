bison -d -v syntaxe.y && \
flex reglesv2.l && \
gcc lex.yy.c syntaxe.tab.c TDS.c -o comp -ly && \
echo ========= && \
echo ========= && \
echo ========= && \
echo ========= && \
./comp < test.c
