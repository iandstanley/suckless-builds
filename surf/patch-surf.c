--- surf.c.orig	2021-05-09 22:34:33 UTC
+++ surf.c
@@ -228,6 +228,7 @@ static void scrollv(Client *c, const Arg *a);
 static void scrollh(Client *c, const Arg *a);
 static void navigate(Client *c, const Arg *a);
 static void stop(Client *c, const Arg *a);
+static void quit(Client *c, const Arg *a);
 static void toggle(Client *c, const Arg *a);
 static void togglefullscreen(Client *c, const Arg *a);
 static void togglecookiepolicy(Client *c, const Arg *a);
@@ -1898,6 +1899,13 @@ void
 stop(Client *c, const Arg *a)
 {
 	webkit_web_view_stop_loading(c->view);
+}
+
+void
+quit(Client *c, const Arg *a)
+{
+	cleanup();
+	exit(0);
 }
 
 void
