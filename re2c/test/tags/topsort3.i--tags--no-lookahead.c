/* Generated by re2c */

{
	YYCTYPE yych;
	yyt1 = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR++);
	yyt2 = NULL;
	switch (yych) {
	case 'a':	goto yy4;
	case 'b':	goto yy6;
	default:	goto yy3;
	}
yy2:
	{}
yy3:
	yych = *YYCURSOR++;
	switch (yych) {
	case 'a':	goto yy9;
	case 'b':	goto yy10;
	default:	goto yy8;
	}
yy4:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:
		++YYCURSOR;
		goto yy10;
	}
yy5:
	YYCURSOR = YYMARKER;
	goto yy2;
yy6:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy7;
	default:
		++YYCURSOR;
		goto yy9;
	}
yy7:
	c = yyt2;
	{}
yy8:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		yyt2 = yyt1;
		goto yy7;
	default:
		++YYCURSOR;
		yyt1 = yyt2;
		goto yy9;
	}
yy9:
	yyt2 = yyt1;
	goto yy7;
yy10:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:
		++YYCURSOR;
		yyt1 = yyt2;
		goto yy9;
	}
}

re2c: warning: line 4: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'c' is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
