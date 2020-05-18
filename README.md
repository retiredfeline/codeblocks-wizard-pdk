# pdk wizard for code::blocks

Copy the directory pdk to the wizard directory of code::blocks.

Add this entry:


```
RegisterWizard(wizProject,     _T("pdk"),         _T("Padauk Project"),         _T("Embedded Systems"));
```

after the entry for mcs51.
