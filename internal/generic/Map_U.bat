@echo off
SETLOCAL

SET CURRENT_DIR=%CD%
SUBST U: %CURRENT_DIR%
echo Current virtual drive map is
SUBST
pause

ENDLOCAL
@echo on