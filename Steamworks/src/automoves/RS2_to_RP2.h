const double t_final_RS2_to_RP2 =       2.00;
const int i_final_RS2_to_RP2 =        201;
const double t_auto_end_RS2_to_RP2 =       1.19;
const int i_auto_end_RS2_to_RP2 =        120;
const ProfileData AutoMove_RS2_to_RP2_R = {{
{      0.000000 ,      0.000000 ,     10.000000 },
{      0.000000 ,     -2.819674 ,     10.000000 },
{     -0.000470 ,     -8.459023 ,     10.000000 },
{     -0.001880 ,    -14.098371 ,     10.000000 },
{     -0.004230 ,    -19.737719 ,     10.000000 },
{     -0.007519 ,    -25.377068 ,     10.000000 },
{     -0.011749 ,    -31.016416 ,     10.000000 },
{     -0.016918 ,    -36.655764 ,     10.000000 },
{     -0.023027 ,    -42.295113 ,     10.000000 },
{     -0.030077 ,    -47.934461 ,     10.000000 },
{     -0.038066 ,    -53.573810 ,     10.000000 },
{     -0.046995 ,    -59.213158 ,     10.000000 },
{     -0.056863 ,    -64.852506 ,     10.000000 },
{     -0.067672 ,    -70.491855 ,     10.000000 },
{     -0.079421 ,    -76.131203 ,     10.000000 },
{     -0.092109 ,    -81.770551 ,     10.000000 },
{     -0.105738 ,    -87.409900 ,     10.000000 },
{     -0.120306 ,    -93.049248 ,     10.000000 },
{     -0.135814 ,    -98.688597 ,     10.000000 },
{     -0.152262 ,   -104.327945 ,     10.000000 },
{     -0.169650 ,   -109.967293 ,     10.000000 },
{     -0.187978 ,   -115.606642 ,     10.000000 },
{     -0.207246 ,   -121.245990 ,     10.000000 },
{     -0.227454 ,   -126.885338 ,     10.000000 },
{     -0.248601 ,   -132.524687 ,     10.000000 },
{     -0.270689 ,   -138.164035 ,     10.000000 },
{     -0.293716 ,   -143.803384 ,     10.000000 },
{     -0.317683 ,   -149.442732 ,     10.000000 },
{     -0.342590 ,   -155.082080 ,     10.000000 },
{     -0.368437 ,   -160.721429 ,     10.000000 },
{     -0.395224 ,   -166.360777 ,     10.000000 },
{     -0.422951 ,   -172.000126 ,     10.000000 },
{     -0.451618 ,   -177.639474 ,     10.000000 },
{     -0.481224 ,   -183.278822 ,     10.000000 },
{     -0.511771 ,   -188.918171 ,     10.000000 },
{     -0.543257 ,   -194.557519 ,     10.000000 },
{     -0.575683 ,   -200.196867 ,     10.000000 },
{     -0.609050 ,   -205.836216 ,     10.000000 },
{     -0.643356 ,   -211.475564 ,     10.000000 },
{     -0.678602 ,   -217.114913 ,     10.000000 },
{     -0.714787 ,   -222.754261 ,     10.000000 },
{     -0.751913 ,   -228.393609 ,     10.000000 },
{     -0.789979 ,   -234.032958 ,     10.000000 },
{     -0.828984 ,   -239.672306 ,     10.000000 },
{     -0.868930 ,   -245.311654 ,     10.000000 },
{     -0.909815 ,   -250.951003 ,     10.000000 },
{     -0.951640 ,   -256.590351 ,     10.000000 },
{     -0.994405 ,   -262.229700 ,     10.000000 },
{     -1.038110 ,   -267.869048 ,     10.000000 },
{     -1.082755 ,   -273.508396 ,     10.000000 },
{     -1.128340 ,   -279.147745 ,     10.000000 },
{     -1.174864 ,   -284.787093 ,     10.000000 },
{     -1.222329 ,   -290.426441 ,     10.000000 },
{     -1.270733 ,   -296.065790 ,     10.000000 },
{     -1.320077 ,   -301.705138 ,     10.000000 },
{     -1.370362 ,   -307.344487 ,     10.000000 },
{     -1.421586 ,   -312.983835 ,     10.000000 },
{     -1.473750 ,   -318.623183 ,     10.000000 },
{     -1.526854 ,   -324.262532 ,     10.000000 },
{     -1.580897 ,   -329.901880 ,     10.000000 },
{     -1.635881 ,   -335.541228 ,     10.000000 },
{     -1.691805 ,   -341.180577 ,     10.000000 },
{     -1.748668 ,   -346.819925 ,     10.000000 },
{     -1.806471 ,   -352.459274 ,     10.000000 },
{     -1.865214 ,   -358.098622 ,     10.000000 },
{     -1.924898 ,   -363.737970 ,     10.000000 },
{     -1.985521 ,   -369.377319 ,     10.000000 },
{     -2.047083 ,   -375.016667 ,     10.000000 },
{     -2.109586 ,   -380.656015 ,     10.000000 },
{     -2.173029 ,   -386.295364 ,     10.000000 },
{     -2.237411 ,   -391.934712 ,     10.000000 },
{     -2.302734 ,   -397.574061 ,     10.000000 },
{     -2.368996 ,   -403.213409 ,     10.000000 },
{     -2.436198 ,   -408.852757 ,     10.000000 },
{     -2.504341 ,   -414.492106 ,     10.000000 },
{     -2.573423 ,   -420.131454 ,     10.000000 },
{     -2.643445 ,   -425.770802 ,     10.000000 },
{     -2.714406 ,   -431.410151 ,     10.000000 },
{     -2.786308 ,   -437.049499 ,     10.000000 },
{     -2.859150 ,   -442.688848 ,     10.000000 },
{     -2.932931 ,   -448.328196 ,     10.000000 },
{     -3.007652 ,   -453.967544 ,     10.000000 },
{     -3.083314 ,   -458.145174 ,     10.000000 },
{     -3.159671 ,   -458.366236 ,     10.000000 },
{     -3.236066 ,   -458.366236 ,     10.000000 },
{     -3.312460 ,   -458.366236 ,     10.000000 },
{     -3.388854 ,   -458.366236 ,     10.000000 },
{     -3.465249 ,   -458.366236 ,     10.000000 },
{     -3.541643 ,   -458.366236 ,     10.000000 },
{     -3.618037 ,   -458.366236 ,     10.000000 },
{     -3.694432 ,   -458.366236 ,     10.000000 },
{     -3.770826 ,   -458.366236 ,     10.000000 },
{     -3.847221 ,   -458.366236 ,     10.000000 },
{     -3.923615 ,   -458.366236 ,     10.000000 },
{     -4.000009 ,   -458.366236 ,     10.000000 },
{     -4.076404 ,   -458.366236 ,     10.000000 },
{     -4.152798 ,   -458.366236 ,     10.000000 },
{     -4.229192 ,   -458.366236 ,     10.000000 },
{     -4.305587 ,   -458.366236 ,     10.000000 },
{     -4.381981 ,   -458.366236 ,     10.000000 },
{     -4.458376 ,   -458.366236 ,     10.000000 },
{     -4.534770 ,   -458.366236 ,     10.000000 },
{     -4.611164 ,   -458.366236 ,     10.000000 },
{     -4.687559 ,   -458.366236 ,     10.000000 },
{     -4.763953 ,   -458.366236 ,     10.000000 },
{     -4.840347 ,   -458.366236 ,     10.000000 },
{     -4.916742 ,   -458.366236 ,     10.000000 },
{     -4.993136 ,   -458.366236 ,     10.000000 },
{     -5.069531 ,   -458.366236 ,     10.000000 },
{     -5.145925 ,   -458.366236 ,     10.000000 },
{     -5.222319 ,   -458.366236 ,     10.000000 },
{     -5.298714 ,   -458.366236 ,     10.000000 },
{     -5.375108 ,   -458.366236 ,     10.000000 },
{     -5.451502 ,   -458.366236 ,     10.000000 },
{     -5.527897 ,   -458.366236 ,     10.000000 },
{     -5.604291 ,   -458.366236 ,     10.000000 },
{     -5.680686 ,   -458.366236 ,     10.000000 },
{     -5.757080 ,   -458.366236 ,     10.000000 },
{     -5.833474 ,   -458.366236 ,     10.000000 },
{     -5.909869 ,   -458.366236 ,     10.000000 },
{     -5.986263 ,   -608.639963 ,     10.000000 },
{     -6.087703 ,   -455.519948 ,     10.000000 },
{     -6.163623 ,   -449.827373 ,     10.000000 },
{     -6.238594 ,   -444.134798 ,     10.000000 },
{     -6.312617 ,   -438.442223 ,     10.000000 },
{     -6.385690 ,   -432.749647 ,     10.000000 },
{     -6.457815 ,   -427.057072 ,     10.000000 },
{     -6.528992 ,   -421.364497 ,     10.000000 },
{     -6.599219 ,   -415.671922 ,     10.000000 },
{     -6.668498 ,   -409.979346 ,     10.000000 },
{     -6.736828 ,   -404.286771 ,     10.000000 },
{     -6.804209 ,   -398.594196 ,     10.000000 },
{     -6.870641 ,   -392.901620 ,     10.000000 },
{     -6.936125 ,   -387.209045 ,     10.000000 },
{     -7.000659 ,   -381.516470 ,     10.000000 },
{     -7.064246 ,   -375.823895 ,     10.000000 },
{     -7.126883 ,   -370.131319 ,     10.000000 },
{     -7.188571 ,   -364.438744 ,     10.000000 },
{     -7.249311 ,   -358.746169 ,     10.000000 },
{     -7.309102 ,   -353.053593 ,     10.000000 },
{     -7.367944 ,   -347.361018 ,     10.000000 },
{     -7.425838 ,   -341.668443 ,     10.000000 },
{     -7.482783 ,   -335.975868 ,     10.000000 },
{     -7.538779 ,   -330.283292 ,     10.000000 },
{     -7.593826 ,   -324.590717 ,     10.000000 },
{     -7.647924 ,   -318.898142 ,     10.000000 },
{     -7.701074 ,   -313.205567 ,     10.000000 },
{     -7.753275 ,   -307.512991 ,     10.000000 },
{     -7.804527 ,   -301.820416 ,     10.000000 },
{     -7.854831 ,   -296.127841 ,     10.000000 },
{     -7.904185 ,   -290.435265 ,     10.000000 },
{     -7.952591 ,   -284.742690 ,     10.000000 },
{     -8.000048 ,   -279.050115 ,     10.000000 },
{     -8.046557 ,   -273.357540 ,     10.000000 },
{     -8.092116 ,   -267.664964 ,     10.000000 },
{     -8.136727 ,   -261.972389 ,     10.000000 },
{     -8.180389 ,   -256.279814 ,     10.000000 },
{     -8.223102 ,   -250.587238 ,     10.000000 },
{     -8.264867 ,   -244.894663 ,     10.000000 },
{     -8.305683 ,   -239.202088 ,     10.000000 },
{     -8.345550 ,   -233.509513 ,     10.000000 },
{     -8.384468 ,   -227.816937 ,     10.000000 },
{     -8.422437 ,   -222.124362 ,     10.000000 },
{     -8.459458 ,   -216.431787 ,     10.000000 },
{     -8.495530 ,   -210.739212 ,     10.000000 },
{     -8.530653 ,   -205.046636 ,     10.000000 },
{     -8.564828 ,   -199.354061 ,     10.000000 },
{     -8.598053 ,   -193.661486 ,     10.000000 },
{     -8.630330 ,   -187.968910 ,     10.000000 },
{     -8.661658 ,   -182.276335 ,     10.000000 },
{     -8.692038 ,   -176.583760 ,     10.000000 },
{     -8.721468 ,   -170.891185 ,     10.000000 },
{     -8.749950 ,   -165.198609 ,     10.000000 },
{     -8.777483 ,   -159.506034 ,     10.000000 },
{     -8.804068 ,   -153.813459 ,     10.000000 },
{     -8.829703 ,   -148.120883 ,     10.000000 },
{     -8.854390 ,   -142.428308 ,     10.000000 },
{     -8.878128 ,   -136.735733 ,     10.000000 },
{     -8.900918 ,   -131.043158 ,     10.000000 },
{     -8.922758 ,   -125.350582 ,     10.000000 },
{     -8.943650 ,   -119.658007 ,     10.000000 },
{     -8.963593 ,   -113.965432 ,     10.000000 },
{     -8.982587 ,   -108.272856 ,     10.000000 },
{     -9.000633 ,   -102.580281 ,     10.000000 },
{     -9.017729 ,    -96.887706 ,     10.000000 },
{     -9.033877 ,    -91.195131 ,     10.000000 },
{     -9.049076 ,    -85.502555 ,     10.000000 },
{     -9.063327 ,    -79.809980 ,     10.000000 },
{     -9.076628 ,    -74.117405 ,     10.000000 },
{     -9.088981 ,    -68.424830 ,     10.000000 },
{     -9.100386 ,    -62.732254 ,     10.000000 },
{     -9.110841 ,    -57.039679 ,     10.000000 },
{     -9.120347 ,    -51.347104 ,     10.000000 },
{     -9.128905 ,    -45.654528 ,     10.000000 },
{     -9.136514 ,    -39.961953 ,     10.000000 },
{     -9.143175 ,    -34.269378 ,     10.000000 },
{     -9.148886 ,    -28.576803 ,     10.000000 },
{     -9.153649 ,    -22.884227 ,     10.000000 },
{     -9.157463 ,    -17.191652 ,     10.000000 },
{     -9.160328 ,    -11.499077 ,     10.000000 },
{     -9.162245 ,     -5.806501 ,     10.000000 }
}};
const ProfileData AutoMove_RS2_to_RP2_L = {{
{      0.000000 ,      0.000000 ,     10.000000 },
{      0.000000 ,     -2.819674 ,     10.000000 },
{     -0.000470 ,     -8.459023 ,     10.000000 },
{     -0.001880 ,    -14.098371 ,     10.000000 },
{     -0.004230 ,    -19.737719 ,     10.000000 },
{     -0.007519 ,    -25.377068 ,     10.000000 },
{     -0.011749 ,    -31.016416 ,     10.000000 },
{     -0.016918 ,    -36.655764 ,     10.000000 },
{     -0.023027 ,    -42.295113 ,     10.000000 },
{     -0.030077 ,    -47.934461 ,     10.000000 },
{     -0.038066 ,    -53.573810 ,     10.000000 },
{     -0.046995 ,    -59.213158 ,     10.000000 },
{     -0.056863 ,    -64.852506 ,     10.000000 },
{     -0.067672 ,    -70.491855 ,     10.000000 },
{     -0.079421 ,    -76.131203 ,     10.000000 },
{     -0.092109 ,    -81.770551 ,     10.000000 },
{     -0.105738 ,    -87.409900 ,     10.000000 },
{     -0.120306 ,    -93.049248 ,     10.000000 },
{     -0.135814 ,    -98.688597 ,     10.000000 },
{     -0.152262 ,   -104.327945 ,     10.000000 },
{     -0.169650 ,   -109.967293 ,     10.000000 },
{     -0.187978 ,   -115.606642 ,     10.000000 },
{     -0.207246 ,   -121.245990 ,     10.000000 },
{     -0.227454 ,   -126.885338 ,     10.000000 },
{     -0.248601 ,   -132.524687 ,     10.000000 },
{     -0.270689 ,   -138.164035 ,     10.000000 },
{     -0.293716 ,   -143.803384 ,     10.000000 },
{     -0.317683 ,   -149.442732 ,     10.000000 },
{     -0.342590 ,   -155.082080 ,     10.000000 },
{     -0.368437 ,   -160.721429 ,     10.000000 },
{     -0.395224 ,   -166.360777 ,     10.000000 },
{     -0.422951 ,   -172.000126 ,     10.000000 },
{     -0.451618 ,   -177.639474 ,     10.000000 },
{     -0.481224 ,   -183.278822 ,     10.000000 },
{     -0.511771 ,   -188.918171 ,     10.000000 },
{     -0.543257 ,   -194.557519 ,     10.000000 },
{     -0.575683 ,   -200.196867 ,     10.000000 },
{     -0.609050 ,   -205.836216 ,     10.000000 },
{     -0.643356 ,   -211.475564 ,     10.000000 },
{     -0.678602 ,   -217.114913 ,     10.000000 },
{     -0.714787 ,   -222.754261 ,     10.000000 },
{     -0.751913 ,   -228.393609 ,     10.000000 },
{     -0.789979 ,   -234.032958 ,     10.000000 },
{     -0.828984 ,   -239.672306 ,     10.000000 },
{     -0.868930 ,   -245.311654 ,     10.000000 },
{     -0.909815 ,   -250.951003 ,     10.000000 },
{     -0.951640 ,   -256.590351 ,     10.000000 },
{     -0.994405 ,   -262.229700 ,     10.000000 },
{     -1.038110 ,   -267.869048 ,     10.000000 },
{     -1.082755 ,   -273.508396 ,     10.000000 },
{     -1.128340 ,   -279.147745 ,     10.000000 },
{     -1.174864 ,   -284.787093 ,     10.000000 },
{     -1.222329 ,   -290.426441 ,     10.000000 },
{     -1.270733 ,   -296.065790 ,     10.000000 },
{     -1.320077 ,   -301.705138 ,     10.000000 },
{     -1.370362 ,   -307.344487 ,     10.000000 },
{     -1.421586 ,   -312.983835 ,     10.000000 },
{     -1.473750 ,   -318.623183 ,     10.000000 },
{     -1.526854 ,   -324.262532 ,     10.000000 },
{     -1.580897 ,   -329.901880 ,     10.000000 },
{     -1.635881 ,   -335.541228 ,     10.000000 },
{     -1.691805 ,   -341.180577 ,     10.000000 },
{     -1.748668 ,   -346.819925 ,     10.000000 },
{     -1.806471 ,   -352.459274 ,     10.000000 },
{     -1.865214 ,   -358.098622 ,     10.000000 },
{     -1.924898 ,   -363.737970 ,     10.000000 },
{     -1.985521 ,   -369.377319 ,     10.000000 },
{     -2.047083 ,   -375.016667 ,     10.000000 },
{     -2.109586 ,   -380.656015 ,     10.000000 },
{     -2.173029 ,   -386.295364 ,     10.000000 },
{     -2.237411 ,   -391.934712 ,     10.000000 },
{     -2.302734 ,   -397.574061 ,     10.000000 },
{     -2.368996 ,   -403.213409 ,     10.000000 },
{     -2.436198 ,   -408.852757 ,     10.000000 },
{     -2.504341 ,   -414.492106 ,     10.000000 },
{     -2.573423 ,   -420.131454 ,     10.000000 },
{     -2.643445 ,   -425.770802 ,     10.000000 },
{     -2.714406 ,   -431.410151 ,     10.000000 },
{     -2.786308 ,   -437.049499 ,     10.000000 },
{     -2.859150 ,   -442.688848 ,     10.000000 },
{     -2.932931 ,   -448.328196 ,     10.000000 },
{     -3.007652 ,   -453.967544 ,     10.000000 },
{     -3.083314 ,   -458.145174 ,     10.000000 },
{     -3.159671 ,   -458.366236 ,     10.000000 },
{     -3.236066 ,   -458.366236 ,     10.000000 },
{     -3.312460 ,   -458.366236 ,     10.000000 },
{     -3.388854 ,   -458.366236 ,     10.000000 },
{     -3.465249 ,   -458.366236 ,     10.000000 },
{     -3.541643 ,   -458.366236 ,     10.000000 },
{     -3.618037 ,   -458.366236 ,     10.000000 },
{     -3.694432 ,   -458.366236 ,     10.000000 },
{     -3.770826 ,   -458.366236 ,     10.000000 },
{     -3.847221 ,   -458.366236 ,     10.000000 },
{     -3.923615 ,   -458.366236 ,     10.000000 },
{     -4.000009 ,   -458.366236 ,     10.000000 },
{     -4.076404 ,   -458.366236 ,     10.000000 },
{     -4.152798 ,   -458.366236 ,     10.000000 },
{     -4.229192 ,   -458.366236 ,     10.000000 },
{     -4.305587 ,   -458.366236 ,     10.000000 },
{     -4.381981 ,   -458.366236 ,     10.000000 },
{     -4.458376 ,   -458.366236 ,     10.000000 },
{     -4.534770 ,   -458.366236 ,     10.000000 },
{     -4.611164 ,   -458.366236 ,     10.000000 },
{     -4.687559 ,   -458.366236 ,     10.000000 },
{     -4.763953 ,   -458.366236 ,     10.000000 },
{     -4.840347 ,   -458.366236 ,     10.000000 },
{     -4.916742 ,   -458.366236 ,     10.000000 },
{     -4.993136 ,   -458.366236 ,     10.000000 },
{     -5.069531 ,   -458.366236 ,     10.000000 },
{     -5.145925 ,   -458.366236 ,     10.000000 },
{     -5.222319 ,   -458.366236 ,     10.000000 },
{     -5.298714 ,   -458.366236 ,     10.000000 },
{     -5.375108 ,   -458.366236 ,     10.000000 },
{     -5.451502 ,   -458.366236 ,     10.000000 },
{     -5.527897 ,   -458.366236 ,     10.000000 },
{     -5.604291 ,   -458.366236 ,     10.000000 },
{     -5.680686 ,   -458.366236 ,     10.000000 },
{     -5.757080 ,   -458.366236 ,     10.000000 },
{     -5.833474 ,   -458.366236 ,     10.000000 },
{     -5.909869 ,   -458.366236 ,     10.000000 },
{     -5.986263 ,   -608.639963 ,     10.000000 },
{     -6.087703 ,   -455.519948 ,     10.000000 },
{     -6.163623 ,   -449.827373 ,     10.000000 },
{     -6.238594 ,   -444.134798 ,     10.000000 },
{     -6.312617 ,   -438.442223 ,     10.000000 },
{     -6.385690 ,   -432.749647 ,     10.000000 },
{     -6.457815 ,   -427.057072 ,     10.000000 },
{     -6.528992 ,   -421.364497 ,     10.000000 },
{     -6.599219 ,   -415.671922 ,     10.000000 },
{     -6.668498 ,   -409.979346 ,     10.000000 },
{     -6.736828 ,   -404.286771 ,     10.000000 },
{     -6.804209 ,   -398.594196 ,     10.000000 },
{     -6.870641 ,   -392.901620 ,     10.000000 },
{     -6.936125 ,   -387.209045 ,     10.000000 },
{     -7.000659 ,   -381.516470 ,     10.000000 },
{     -7.064246 ,   -375.823895 ,     10.000000 },
{     -7.126883 ,   -370.131319 ,     10.000000 },
{     -7.188571 ,   -364.438744 ,     10.000000 },
{     -7.249311 ,   -358.746169 ,     10.000000 },
{     -7.309102 ,   -353.053593 ,     10.000000 },
{     -7.367944 ,   -347.361018 ,     10.000000 },
{     -7.425838 ,   -341.668443 ,     10.000000 },
{     -7.482783 ,   -335.975868 ,     10.000000 },
{     -7.538779 ,   -330.283292 ,     10.000000 },
{     -7.593826 ,   -324.590717 ,     10.000000 },
{     -7.647924 ,   -318.898142 ,     10.000000 },
{     -7.701074 ,   -313.205567 ,     10.000000 },
{     -7.753275 ,   -307.512991 ,     10.000000 },
{     -7.804527 ,   -301.820416 ,     10.000000 },
{     -7.854831 ,   -296.127841 ,     10.000000 },
{     -7.904185 ,   -290.435265 ,     10.000000 },
{     -7.952591 ,   -284.742690 ,     10.000000 },
{     -8.000048 ,   -279.050115 ,     10.000000 },
{     -8.046557 ,   -273.357540 ,     10.000000 },
{     -8.092116 ,   -267.664964 ,     10.000000 },
{     -8.136727 ,   -261.972389 ,     10.000000 },
{     -8.180389 ,   -256.279814 ,     10.000000 },
{     -8.223102 ,   -250.587238 ,     10.000000 },
{     -8.264867 ,   -244.894663 ,     10.000000 },
{     -8.305683 ,   -239.202088 ,     10.000000 },
{     -8.345550 ,   -233.509513 ,     10.000000 },
{     -8.384468 ,   -227.816937 ,     10.000000 },
{     -8.422437 ,   -222.124362 ,     10.000000 },
{     -8.459458 ,   -216.431787 ,     10.000000 },
{     -8.495530 ,   -210.739212 ,     10.000000 },
{     -8.530653 ,   -205.046636 ,     10.000000 },
{     -8.564828 ,   -199.354061 ,     10.000000 },
{     -8.598053 ,   -193.661486 ,     10.000000 },
{     -8.630330 ,   -187.968910 ,     10.000000 },
{     -8.661658 ,   -182.276335 ,     10.000000 },
{     -8.692038 ,   -176.583760 ,     10.000000 },
{     -8.721468 ,   -170.891185 ,     10.000000 },
{     -8.749950 ,   -165.198609 ,     10.000000 },
{     -8.777483 ,   -159.506034 ,     10.000000 },
{     -8.804068 ,   -153.813459 ,     10.000000 },
{     -8.829703 ,   -148.120883 ,     10.000000 },
{     -8.854390 ,   -142.428308 ,     10.000000 },
{     -8.878128 ,   -136.735733 ,     10.000000 },
{     -8.900918 ,   -131.043158 ,     10.000000 },
{     -8.922758 ,   -125.350582 ,     10.000000 },
{     -8.943650 ,   -119.658007 ,     10.000000 },
{     -8.963593 ,   -113.965432 ,     10.000000 },
{     -8.982587 ,   -108.272856 ,     10.000000 },
{     -9.000633 ,   -102.580281 ,     10.000000 },
{     -9.017729 ,    -96.887706 ,     10.000000 },
{     -9.033877 ,    -91.195131 ,     10.000000 },
{     -9.049076 ,    -85.502555 ,     10.000000 },
{     -9.063327 ,    -79.809980 ,     10.000000 },
{     -9.076628 ,    -74.117405 ,     10.000000 },
{     -9.088981 ,    -68.424830 ,     10.000000 },
{     -9.100386 ,    -62.732254 ,     10.000000 },
{     -9.110841 ,    -57.039679 ,     10.000000 },
{     -9.120347 ,    -51.347104 ,     10.000000 },
{     -9.128905 ,    -45.654528 ,     10.000000 },
{     -9.136514 ,    -39.961953 ,     10.000000 },
{     -9.143175 ,    -34.269378 ,     10.000000 },
{     -9.148886 ,    -28.576803 ,     10.000000 },
{     -9.153649 ,    -22.884227 ,     10.000000 },
{     -9.157463 ,    -17.191652 ,     10.000000 },
{     -9.160328 ,    -11.499077 ,     10.000000 },
{     -9.162245 ,     -5.806501 ,     10.000000 }
}};