--- config.h.orig	2021-12-09 15:20:26 UTC
+++ config.h
@@ -135,6 +135,9 @@ static Key keys[] = {
 	{ 0,                     GDK_KEY_Escape, stop,       { 0 } },
 	{ MODKEY,                GDK_KEY_c,      stop,       { 0 } },
 
+	{ MODKEY,                     GDK_KEY_q,      quit,       { 0 } },
+
+
 	{ MODKEY|GDK_SHIFT_MASK, GDK_KEY_r,      reload,     { .i = 1 } },
 	{ MODKEY,                GDK_KEY_r,      reload,     { .i = 0 } },
 
