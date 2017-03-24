const double t_final_RS1_to_RP1 =       2.74;
const int i_final_RS1_to_RP1 =        275;
const double t_auto_end_RS1_to_RP1 =       1.68;
const int i_auto_end_RS1_to_RP1 =        169;
const ProfileData AutoMove_RS1_to_RP1_R = {{
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
{     -4.840347 ,   -457.659161 ,     10.000000 },
{     -4.916624 ,   -539.858706 ,     10.000000 },
{     -5.006600 ,   -539.858706 ,     10.000000 },
{     -5.096577 ,   -539.858706 ,     10.000000 },
{     -5.186553 ,   -539.858706 ,     10.000000 },
{     -5.276530 ,   -539.858706 ,     10.000000 },
{     -5.366506 ,   -539.858706 ,     10.000000 },
{     -5.456483 ,   -539.858706 ,     10.000000 },
{     -5.546459 ,   -539.858706 ,     10.000000 },
{     -5.636436 ,   -539.858706 ,     10.000000 },
{     -5.726412 ,   -539.858706 ,     10.000000 },
{     -5.816388 ,   -539.858706 ,     10.000000 },
{     -5.906365 ,   -539.858706 ,     10.000000 },
{     -5.996341 ,   -539.858706 ,     10.000000 },
{     -6.086318 ,   -539.858706 ,     10.000000 },
{     -6.176294 ,   -539.858706 ,     10.000000 },
{     -6.266271 ,   -539.858706 ,     10.000000 },
{     -6.356247 ,   -539.858706 ,     10.000000 },
{     -6.446224 ,   -539.858706 ,     10.000000 },
{     -6.536200 ,   -539.858706 ,     10.000000 },
{     -6.626177 ,   -539.858706 ,     10.000000 },
{     -6.716153 ,   -539.858706 ,     10.000000 },
{     -6.806129 ,   -539.858706 ,     10.000000 },
{     -6.896106 ,   -539.858706 ,     10.000000 },
{     -6.986082 ,   -539.858706 ,     10.000000 },
{     -7.076059 ,   -539.858706 ,     10.000000 },
{     -7.166035 ,   -539.858706 ,     10.000000 },
{     -7.256012 ,   -539.858706 ,     10.000000 },
{     -7.345988 ,   -539.858706 ,     10.000000 },
{     -7.435965 ,   -539.858706 ,     10.000000 },
{     -7.525941 ,   -539.858706 ,     10.000000 },
{     -7.615918 ,   -539.858706 ,     10.000000 },
{     -7.705894 ,   -539.858706 ,     10.000000 },
{     -7.795870 ,   -539.858706 ,     10.000000 },
{     -7.885847 ,   -539.858706 ,     10.000000 },
{     -7.975823 ,   -539.858706 ,     10.000000 },
{     -8.065800 ,   -539.858706 ,     10.000000 },
{     -8.155776 ,   -539.858706 ,     10.000000 },
{     -8.245753 ,   -539.858706 ,     10.000000 },
{     -8.335729 ,   -539.858706 ,     10.000000 },
{     -8.425706 ,   -539.858706 ,     10.000000 },
{     -8.515682 ,   -539.858706 ,     10.000000 },
{     -8.605658 ,   -539.858706 ,     10.000000 },
{     -8.695635 ,   -539.858706 ,     10.000000 },
{     -8.785611 ,   -539.858706 ,     10.000000 },
{     -8.875588 ,   -539.858706 ,     10.000000 },
{     -8.965564 ,   -539.858706 ,     10.000000 },
{     -9.055541 ,   -539.858706 ,     10.000000 },
{     -9.145517 ,   -539.858706 ,     10.000000 },
{     -9.235494 ,   -539.858706 ,     10.000000 },
{     -9.325470 ,   -539.858706 ,     10.000000 },
{     -9.415447 ,   -539.858706 ,     10.000000 },
{     -9.505423 ,   -539.858706 ,     10.000000 },
{     -9.595399 ,   -539.858706 ,     10.000000 },
{     -9.685376 ,   -539.858706 ,     10.000000 },
{     -9.775352 ,   -539.858706 ,     10.000000 },
{     -9.865329 ,   -539.858706 ,     10.000000 },
{     -9.955305 ,   -539.858706 ,     10.000000 },
{    -10.045282 ,   -539.858706 ,     10.000000 },
{    -10.135258 ,   -539.858706 ,     10.000000 },
{    -10.225235 ,   -539.858706 ,     10.000000 },
{    -10.315211 ,   -539.858706 ,     10.000000 },
{    -10.405187 ,   -539.858706 ,     10.000000 },
{    -10.495164 ,   -539.858706 ,     10.000000 },
{    -10.585140 ,   -766.128199 ,     10.000000 },
{    -10.712828 ,   -456.196241 ,     10.000000 },
{    -10.788861 ,   -451.856252 ,     10.000000 },
{    -10.864171 ,   -447.516262 ,     10.000000 },
{    -10.938757 ,   -443.176273 ,     10.000000 },
{    -11.012619 ,   -438.836284 ,     10.000000 },
{    -11.085759 ,   -434.496294 ,     10.000000 },
{    -11.158175 ,   -430.156305 ,     10.000000 },
{    -11.229867 ,   -425.816315 ,     10.000000 },
{    -11.300837 ,   -421.476326 ,     10.000000 },
{    -11.371083 ,   -417.136336 ,     10.000000 },
{    -11.440606 ,   -412.796347 ,     10.000000 },
{    -11.509405 ,   -408.456357 ,     10.000000 },
{    -11.577481 ,   -404.116368 ,     10.000000 },
{    -11.644834 ,   -399.776379 ,     10.000000 },
{    -11.711463 ,   -395.436389 ,     10.000000 },
{    -11.777369 ,   -391.096400 ,     10.000000 },
{    -11.842552 ,   -386.756410 ,     10.000000 },
{    -11.907011 ,   -382.416421 ,     10.000000 },
{    -11.970747 ,   -378.076431 ,     10.000000 },
{    -12.033760 ,   -373.736442 ,     10.000000 },
{    -12.096050 ,   -369.396452 ,     10.000000 },
{    -12.157616 ,   -365.056463 ,     10.000000 },
{    -12.218458 ,   -360.716473 ,     10.000000 },
{    -12.278578 ,   -356.376484 ,     10.000000 },
{    -12.337974 ,   -352.036495 ,     10.000000 },
{    -12.396647 ,   -347.696505 ,     10.000000 },
{    -12.454596 ,   -343.356516 ,     10.000000 },
{    -12.511822 ,   -339.016526 ,     10.000000 },
{    -12.568325 ,   -334.676537 ,     10.000000 },
{    -12.624104 ,   -330.336547 ,     10.000000 },
{    -12.679160 ,   -325.996558 ,     10.000000 },
{    -12.733493 ,   -321.656568 ,     10.000000 },
{    -12.787103 ,   -317.316579 ,     10.000000 },
{    -12.839989 ,   -312.976590 ,     10.000000 },
{    -12.892151 ,   -308.636600 ,     10.000000 },
{    -12.943591 ,   -304.296611 ,     10.000000 },
{    -12.994307 ,   -299.956621 ,     10.000000 },
{    -13.044300 ,   -295.616632 ,     10.000000 },
{    -13.093569 ,   -291.276642 ,     10.000000 },
{    -13.142115 ,   -286.936653 ,     10.000000 },
{    -13.189938 ,   -282.596663 ,     10.000000 },
{    -13.237038 ,   -278.256674 ,     10.000000 },
{    -13.283414 ,   -273.916685 ,     10.000000 },
{    -13.329066 ,   -269.576695 ,     10.000000 },
{    -13.373996 ,   -265.236706 ,     10.000000 },
{    -13.418202 ,   -260.896716 ,     10.000000 },
{    -13.461685 ,   -256.556727 ,     10.000000 },
{    -13.504444 ,   -252.216737 ,     10.000000 },
{    -13.546480 ,   -247.876748 ,     10.000000 },
{    -13.587793 ,   -243.536758 ,     10.000000 },
{    -13.628383 ,   -239.196769 ,     10.000000 },
{    -13.668249 ,   -234.856779 ,     10.000000 },
{    -13.707392 ,   -230.516790 ,     10.000000 },
{    -13.745811 ,   -226.176801 ,     10.000000 },
{    -13.783507 ,   -221.836811 ,     10.000000 },
{    -13.820480 ,   -217.496822 ,     10.000000 },
{    -13.856729 ,   -213.156832 ,     10.000000 },
{    -13.892256 ,   -208.816843 ,     10.000000 },
{    -13.927058 ,   -204.476853 ,     10.000000 },
{    -13.961138 ,   -200.136864 ,     10.000000 },
{    -13.994494 ,   -195.796874 ,     10.000000 },
{    -14.027127 ,   -191.456885 ,     10.000000 },
{    -14.059036 ,   -187.116896 ,     10.000000 },
{    -14.090222 ,   -182.776906 ,     10.000000 },
{    -14.120685 ,   -178.436917 ,     10.000000 },
{    -14.150425 ,   -174.096927 ,     10.000000 },
{    -14.179441 ,   -169.756938 ,     10.000000 },
{    -14.207734 ,   -165.416948 ,     10.000000 },
{    -14.235303 ,   -161.076959 ,     10.000000 },
{    -14.262149 ,   -156.736969 ,     10.000000 },
{    -14.288272 ,   -152.396980 ,     10.000000 },
{    -14.313672 ,   -148.056990 ,     10.000000 },
{    -14.338348 ,   -143.717001 ,     10.000000 },
{    -14.362301 ,   -139.377012 ,     10.000000 },
{    -14.385530 ,   -135.037022 ,     10.000000 },
{    -14.408036 ,   -130.697033 ,     10.000000 },
{    -14.429819 ,   -126.357043 ,     10.000000 },
{    -14.450879 ,   -122.017054 ,     10.000000 },
{    -14.471215 ,   -117.677064 ,     10.000000 },
{    -14.490828 ,   -113.337075 ,     10.000000 },
{    -14.509717 ,   -108.997085 ,     10.000000 },
{    -14.527883 ,   -104.657096 ,     10.000000 },
{    -14.545326 ,   -100.317107 ,     10.000000 },
{    -14.562046 ,    -95.977117 ,     10.000000 },
{    -14.578042 ,    -91.637128 ,     10.000000 },
{    -14.593315 ,    -87.297138 ,     10.000000 },
{    -14.607864 ,    -82.957149 ,     10.000000 },
{    -14.621691 ,    -78.617159 ,     10.000000 },
{    -14.634793 ,    -74.277170 ,     10.000000 },
{    -14.647173 ,    -69.937180 ,     10.000000 },
{    -14.658829 ,    -65.597191 ,     10.000000 },
{    -14.669762 ,    -61.257201 ,     10.000000 },
{    -14.679971 ,    -56.917212 ,     10.000000 },
{    -14.689458 ,    -52.577223 ,     10.000000 },
{    -14.698221 ,    -48.237233 ,     10.000000 },
{    -14.706260 ,    -43.897244 ,     10.000000 },
{    -14.713576 ,    -39.557254 ,     10.000000 },
{    -14.720169 ,    -35.217265 ,     10.000000 },
{    -14.726039 ,    -30.877275 ,     10.000000 },
{    -14.731185 ,    -26.537286 ,     10.000000 },
{    -14.735608 ,    -22.197296 ,     10.000000 },
{    -14.739307 ,    -17.857307 ,     10.000000 },
{    -14.742284 ,    -13.517318 ,     10.000000 },
{    -14.744536 ,     -9.177328 ,     10.000000 },
{    -14.746066 ,     -4.837339 ,     10.000000 }
}};
const ProfileData AutoMove_RS1_to_RP1_L = {{
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
{     -4.840347 ,   -457.659161 ,     10.000000 },
{     -4.916624 ,   -376.863672 ,     10.000000 },
{     -4.979435 ,   -376.863672 ,     10.000000 },
{     -5.042245 ,   -376.863672 ,     10.000000 },
{     -5.105056 ,   -376.863672 ,     10.000000 },
{     -5.167866 ,   -376.863672 ,     10.000000 },
{     -5.230677 ,   -376.863672 ,     10.000000 },
{     -5.293488 ,   -376.863672 ,     10.000000 },
{     -5.356298 ,   -376.863672 ,     10.000000 },
{     -5.419109 ,   -376.863672 ,     10.000000 },
{     -5.481919 ,   -376.863672 ,     10.000000 },
{     -5.544730 ,   -376.863672 ,     10.000000 },
{     -5.607541 ,   -376.863672 ,     10.000000 },
{     -5.670351 ,   -376.863672 ,     10.000000 },
{     -5.733162 ,   -376.863672 ,     10.000000 },
{     -5.795973 ,   -376.863672 ,     10.000000 },
{     -5.858783 ,   -376.863672 ,     10.000000 },
{     -5.921594 ,   -376.863672 ,     10.000000 },
{     -5.984404 ,   -376.863672 ,     10.000000 },
{     -6.047215 ,   -376.863672 ,     10.000000 },
{     -6.110026 ,   -376.863672 ,     10.000000 },
{     -6.172836 ,   -376.863672 ,     10.000000 },
{     -6.235647 ,   -376.863672 ,     10.000000 },
{     -6.298457 ,   -376.863672 ,     10.000000 },
{     -6.361268 ,   -376.863672 ,     10.000000 },
{     -6.424079 ,   -376.863672 ,     10.000000 },
{     -6.486889 ,   -376.863672 ,     10.000000 },
{     -6.549700 ,   -376.863672 ,     10.000000 },
{     -6.612511 ,   -376.863672 ,     10.000000 },
{     -6.675321 ,   -376.863672 ,     10.000000 },
{     -6.738132 ,   -376.863672 ,     10.000000 },
{     -6.800942 ,   -376.863672 ,     10.000000 },
{     -6.863753 ,   -376.863672 ,     10.000000 },
{     -6.926564 ,   -376.863672 ,     10.000000 },
{     -6.989374 ,   -376.863672 ,     10.000000 },
{     -7.052185 ,   -376.863672 ,     10.000000 },
{     -7.114995 ,   -376.863672 ,     10.000000 },
{     -7.177806 ,   -376.863672 ,     10.000000 },
{     -7.240617 ,   -376.863672 ,     10.000000 },
{     -7.303427 ,   -376.863672 ,     10.000000 },
{     -7.366238 ,   -376.863672 ,     10.000000 },
{     -7.429048 ,   -376.863672 ,     10.000000 },
{     -7.491859 ,   -376.863672 ,     10.000000 },
{     -7.554670 ,   -376.863672 ,     10.000000 },
{     -7.617480 ,   -376.863672 ,     10.000000 },
{     -7.680291 ,   -376.863672 ,     10.000000 },
{     -7.743102 ,   -376.863672 ,     10.000000 },
{     -7.805912 ,   -376.863672 ,     10.000000 },
{     -7.868723 ,   -376.863672 ,     10.000000 },
{     -7.931533 ,   -376.863672 ,     10.000000 },
{     -7.994344 ,   -376.863672 ,     10.000000 },
{     -8.057155 ,   -376.863672 ,     10.000000 },
{     -8.119965 ,   -376.863672 ,     10.000000 },
{     -8.182776 ,   -376.863672 ,     10.000000 },
{     -8.245586 ,   -376.863672 ,     10.000000 },
{     -8.308397 ,   -376.863672 ,     10.000000 },
{     -8.371208 ,   -376.863672 ,     10.000000 },
{     -8.434018 ,   -376.863672 ,     10.000000 },
{     -8.496829 ,   -376.863672 ,     10.000000 },
{     -8.559639 ,   -376.863672 ,     10.000000 },
{     -8.622450 ,   -376.863672 ,     10.000000 },
{     -8.685261 ,   -376.863672 ,     10.000000 },
{     -8.748071 ,   -376.863672 ,     10.000000 },
{     -8.810882 ,   -376.863672 ,     10.000000 },
{     -8.873693 ,   -534.815313 ,     10.000000 },
{     -8.962828 ,   -456.196241 ,     10.000000 },
{     -9.038861 ,   -451.856252 ,     10.000000 },
{     -9.114171 ,   -447.516262 ,     10.000000 },
{     -9.188757 ,   -443.176273 ,     10.000000 },
{     -9.262619 ,   -438.836284 ,     10.000000 },
{     -9.335759 ,   -434.496294 ,     10.000000 },
{     -9.408175 ,   -430.156305 ,     10.000000 },
{     -9.479867 ,   -425.816315 ,     10.000000 },
{     -9.550837 ,   -421.476326 ,     10.000000 },
{     -9.621083 ,   -417.136336 ,     10.000000 },
{     -9.690606 ,   -412.796347 ,     10.000000 },
{     -9.759405 ,   -408.456357 ,     10.000000 },
{     -9.827481 ,   -404.116368 ,     10.000000 },
{     -9.894834 ,   -399.776379 ,     10.000000 },
{     -9.961463 ,   -395.436389 ,     10.000000 },
{    -10.027369 ,   -391.096400 ,     10.000000 },
{    -10.092552 ,   -386.756410 ,     10.000000 },
{    -10.157011 ,   -382.416421 ,     10.000000 },
{    -10.220747 ,   -378.076431 ,     10.000000 },
{    -10.283760 ,   -373.736442 ,     10.000000 },
{    -10.346050 ,   -369.396452 ,     10.000000 },
{    -10.407616 ,   -365.056463 ,     10.000000 },
{    -10.468458 ,   -360.716473 ,     10.000000 },
{    -10.528578 ,   -356.376484 ,     10.000000 },
{    -10.587974 ,   -352.036495 ,     10.000000 },
{    -10.646647 ,   -347.696505 ,     10.000000 },
{    -10.704596 ,   -343.356516 ,     10.000000 },
{    -10.761822 ,   -339.016526 ,     10.000000 },
{    -10.818325 ,   -334.676537 ,     10.000000 },
{    -10.874104 ,   -330.336547 ,     10.000000 },
{    -10.929160 ,   -325.996558 ,     10.000000 },
{    -10.983493 ,   -321.656568 ,     10.000000 },
{    -11.037103 ,   -317.316579 ,     10.000000 },
{    -11.089989 ,   -312.976590 ,     10.000000 },
{    -11.142151 ,   -308.636600 ,     10.000000 },
{    -11.193591 ,   -304.296611 ,     10.000000 },
{    -11.244307 ,   -299.956621 ,     10.000000 },
{    -11.294300 ,   -295.616632 ,     10.000000 },
{    -11.343569 ,   -291.276642 ,     10.000000 },
{    -11.392115 ,   -286.936653 ,     10.000000 },
{    -11.439938 ,   -282.596663 ,     10.000000 },
{    -11.487038 ,   -278.256674 ,     10.000000 },
{    -11.533414 ,   -273.916685 ,     10.000000 },
{    -11.579066 ,   -269.576695 ,     10.000000 },
{    -11.623996 ,   -265.236706 ,     10.000000 },
{    -11.668202 ,   -260.896716 ,     10.000000 },
{    -11.711685 ,   -256.556727 ,     10.000000 },
{    -11.754444 ,   -252.216737 ,     10.000000 },
{    -11.796480 ,   -247.876748 ,     10.000000 },
{    -11.837793 ,   -243.536758 ,     10.000000 },
{    -11.878383 ,   -239.196769 ,     10.000000 },
{    -11.918249 ,   -234.856779 ,     10.000000 },
{    -11.957392 ,   -230.516790 ,     10.000000 },
{    -11.995811 ,   -226.176801 ,     10.000000 },
{    -12.033507 ,   -221.836811 ,     10.000000 },
{    -12.070480 ,   -217.496822 ,     10.000000 },
{    -12.106729 ,   -213.156832 ,     10.000000 },
{    -12.142256 ,   -208.816843 ,     10.000000 },
{    -12.177058 ,   -204.476853 ,     10.000000 },
{    -12.211138 ,   -200.136864 ,     10.000000 },
{    -12.244494 ,   -195.796874 ,     10.000000 },
{    -12.277127 ,   -191.456885 ,     10.000000 },
{    -12.309036 ,   -187.116896 ,     10.000000 },
{    -12.340222 ,   -182.776906 ,     10.000000 },
{    -12.370685 ,   -178.436917 ,     10.000000 },
{    -12.400425 ,   -174.096927 ,     10.000000 },
{    -12.429441 ,   -169.756938 ,     10.000000 },
{    -12.457734 ,   -165.416948 ,     10.000000 },
{    -12.485303 ,   -161.076959 ,     10.000000 },
{    -12.512149 ,   -156.736969 ,     10.000000 },
{    -12.538272 ,   -152.396980 ,     10.000000 },
{    -12.563672 ,   -148.056990 ,     10.000000 },
{    -12.588348 ,   -143.717001 ,     10.000000 },
{    -12.612301 ,   -139.377012 ,     10.000000 },
{    -12.635530 ,   -135.037022 ,     10.000000 },
{    -12.658036 ,   -130.697033 ,     10.000000 },
{    -12.679819 ,   -126.357043 ,     10.000000 },
{    -12.700879 ,   -122.017054 ,     10.000000 },
{    -12.721215 ,   -117.677064 ,     10.000000 },
{    -12.740828 ,   -113.337075 ,     10.000000 },
{    -12.759717 ,   -108.997085 ,     10.000000 },
{    -12.777883 ,   -104.657096 ,     10.000000 },
{    -12.795326 ,   -100.317107 ,     10.000000 },
{    -12.812046 ,    -95.977117 ,     10.000000 },
{    -12.828042 ,    -91.637128 ,     10.000000 },
{    -12.843315 ,    -87.297138 ,     10.000000 },
{    -12.857864 ,    -82.957149 ,     10.000000 },
{    -12.871691 ,    -78.617159 ,     10.000000 },
{    -12.884793 ,    -74.277170 ,     10.000000 },
{    -12.897173 ,    -69.937180 ,     10.000000 },
{    -12.908829 ,    -65.597191 ,     10.000000 },
{    -12.919762 ,    -61.257201 ,     10.000000 },
{    -12.929971 ,    -56.917212 ,     10.000000 },
{    -12.939458 ,    -52.577223 ,     10.000000 },
{    -12.948221 ,    -48.237233 ,     10.000000 },
{    -12.956260 ,    -43.897244 ,     10.000000 },
{    -12.963576 ,    -39.557254 ,     10.000000 },
{    -12.970169 ,    -35.217265 ,     10.000000 },
{    -12.976039 ,    -30.877275 ,     10.000000 },
{    -12.981185 ,    -26.537286 ,     10.000000 },
{    -12.985608 ,    -22.197296 ,     10.000000 },
{    -12.989307 ,    -17.857307 ,     10.000000 },
{    -12.992284 ,    -13.517318 ,     10.000000 },
{    -12.994536 ,     -9.177328 ,     10.000000 },
{    -12.996066 ,     -4.837339 ,     10.000000 }
}};