echo -e "\n\nSmbLnk2_ApplSwcFoc:"
cd source/SmbLnk2_ApplSwcFoc
git add .
git status
git commit -m "Update: Application software component for field oriented motor control"
git push

echo -e "\n\nSmbLnk2_common:"
cd ../SmbLnk2_common
git add .
git status
git commit -m "Update: AUTOSAR basic software common integration files"
git push

echo -e "\n\nSmbLnk2_ServiceWdgM:"
cd ../SmbLnk2_ServiceWdgM
git add .
git status
git commit -m "Update: AUTOSAR basic software service module for watchdog stack"
git push

echo -e "\n\nSmbLnk2_ServiceStartUp:"
cd ../SmbLnk2_ServiceStartUp
git add .
git status
git commit -m "Update: AUTOSAR basic software service module StartUp"
git push

echo -e "\n\nSmbLnk2_ServiceNvM:"
cd ../SmbLnk2_ServiceNvM
git add .
git status
git commit -m "Update: AUTOSAR basic software service module for non-volatyle memory stack"
git push

echo -e "\n\nSmbLnk2_McalWdg:"
cd ../SmbLnk2_McalWdg
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module  for watchdog stack"
git push

echo -e "\n\nSmbLnk2_McalPort:"
cd ../SmbLnk2_McalPort
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module for port"
git push

echo -e "\n\nSmbLnk2_McalMcu:"
cd ../SmbLnk2_McalMcu
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module Mcu"
git push

echo -e "\n\nSmbLnk2_McalLin:"
cd ../SmbLnk2_McalLin
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module for LIN communication protocol stack"
git push

echo -e "\n\nSmbLnk2_McalGpt:"
cd ../SmbLnk2_McalGpt
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module for general purpose timers"
git push

echo -e "\n\nSmbLnk2_McalAdc:"
cd ../SmbLnk2_McalAdc
git add .
git status
git commit -m "Update: AUTOSAR basic software micro-controller abstraction driver module for analog to digital converter"
git push

echo -e "\n\nProject:"
cd ../..
git add .
git status
git commit -m "Delivery: ECU production/development software integration release package for delivery"
git push

echo -e "\n\nWorkspace:"
cd ../../..
git add .
git status
git commit -m "Update: Workspace"
git push

git status

