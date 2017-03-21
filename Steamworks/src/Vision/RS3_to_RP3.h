const double t_final_RS3_to_RP3 =       2.55;
const int i_final_RS3_to_RP3 =        256;
const double t_auto_end_RS3_to_RP3 =       1.74;
const int i_auto_end_RS3_to_RP3 =        175;
const ProfileData AutoMove_RS3_to_RP3_R = {{
{      0.000000 ,      0.000000 ,     10.000000 },
{      0.000000 ,     -0.046995 ,     10.000000 },
{     -0.000470 ,     -0.140984 ,     10.000000 },
{     -0.001880 ,     -0.234973 ,     10.000000 },
{     -0.004230 ,     -0.328962 ,     10.000000 },
{     -0.007519 ,     -0.422951 ,     10.000000 },
{     -0.011749 ,     -0.516940 ,     10.000000 },
{     -0.016918 ,     -0.610929 ,     10.000000 },
{     -0.023027 ,     -0.704919 ,     10.000000 },
{     -0.030077 ,     -0.798908 ,     10.000000 },
{     -0.038066 ,     -0.892897 ,     10.000000 },
{     -0.046995 ,     -0.986886 ,     10.000000 },
{     -0.056863 ,     -1.080875 ,     10.000000 },
{     -0.067672 ,     -1.174864 ,     10.000000 },
{     -0.079421 ,     -1.268853 ,     10.000000 },
{     -0.092109 ,     -1.362843 ,     10.000000 },
{     -0.105738 ,     -1.456832 ,     10.000000 },
{     -0.120306 ,     -1.550821 ,     10.000000 },
{     -0.135814 ,     -1.644810 ,     10.000000 },
{     -0.152262 ,     -1.738799 ,     10.000000 },
{     -0.169650 ,     -1.832788 ,     10.000000 },
{     -0.187978 ,     -1.926777 ,     10.000000 },
{     -0.207246 ,     -2.020767 ,     10.000000 },
{     -0.227454 ,     -2.114756 ,     10.000000 },
{     -0.248601 ,     -2.208745 ,     10.000000 },
{     -0.270689 ,     -2.302734 ,     10.000000 },
{     -0.293716 ,     -2.396723 ,     10.000000 },
{     -0.317683 ,     -2.490712 ,     10.000000 },
{     -0.342590 ,     -2.584701 ,     10.000000 },
{     -0.368437 ,     -2.678690 ,     10.000000 },
{     -0.395224 ,     -2.772680 ,     10.000000 },
{     -0.422951 ,     -2.866669 ,     10.000000 },
{     -0.451618 ,     -2.960658 ,     10.000000 },
{     -0.481224 ,     -3.054647 ,     10.000000 },
{     -0.511771 ,     -3.148636 ,     10.000000 },
{     -0.543257 ,     -3.242625 ,     10.000000 },
{     -0.575683 ,     -3.336614 ,     10.000000 },
{     -0.609050 ,     -3.430604 ,     10.000000 },
{     -0.643356 ,     -3.524593 ,     10.000000 },
{     -0.678602 ,     -3.618582 ,     10.000000 },
{     -0.714787 ,     -3.712571 ,     10.000000 },
{     -0.751913 ,     -3.806560 ,     10.000000 },
{     -0.789979 ,     -3.900549 ,     10.000000 },
{     -0.828984 ,     -3.994538 ,     10.000000 },
{     -0.868930 ,     -4.088528 ,     10.000000 },
{     -0.909815 ,     -4.182517 ,     10.000000 },
{     -0.951640 ,     -4.276506 ,     10.000000 },
{     -0.994405 ,     -4.370495 ,     10.000000 },
{     -1.038110 ,     -4.464484 ,     10.000000 },
{     -1.082755 ,     -4.558473 ,     10.000000 },
{     -1.128340 ,     -4.652462 ,     10.000000 },
{     -1.174864 ,     -4.746452 ,     10.000000 },
{     -1.222329 ,     -4.840441 ,     10.000000 },
{     -1.270733 ,     -4.934430 ,     10.000000 },
{     -1.320077 ,     -5.028419 ,     10.000000 },
{     -1.370362 ,     -5.122408 ,     10.000000 },
{     -1.421586 ,     -5.216397 ,     10.000000 },
{     -1.473750 ,     -5.310386 ,     10.000000 },
{     -1.526854 ,     -5.404376 ,     10.000000 },
{     -1.580897 ,     -5.498365 ,     10.000000 },
{     -1.635881 ,     -5.592354 ,     10.000000 },
{     -1.691805 ,     -5.686343 ,     10.000000 },
{     -1.748668 ,     -5.780332 ,     10.000000 },
{     -1.806471 ,     -5.874321 ,     10.000000 },
{     -1.865214 ,     -5.968310 ,     10.000000 },
{     -1.924898 ,     -6.062300 ,     10.000000 },
{     -1.985521 ,     -6.156289 ,     10.000000 },
{     -2.047083 ,     -6.250278 ,     10.000000 },
{     -2.109586 ,     -6.344267 ,     10.000000 },
{     -2.173029 ,     -6.438256 ,     10.000000 },
{     -2.237411 ,     -6.532245 ,     10.000000 },
{     -2.302734 ,     -6.626234 ,     10.000000 },
{     -2.368996 ,     -6.720223 ,     10.000000 },
{     -2.436198 ,     -6.814213 ,     10.000000 },
{     -2.504341 ,     -6.908202 ,     10.000000 },
{     -2.573423 ,     -7.002191 ,     10.000000 },
{     -2.643445 ,     -7.096180 ,     10.000000 },
{     -2.714406 ,     -7.190169 ,     10.000000 },
{     -2.786308 ,     -7.284158 ,     10.000000 },
{     -2.859150 ,     -7.378147 ,     10.000000 },
{     -2.932931 ,     -7.472137 ,     10.000000 },
{     -3.007652 ,     -7.566126 ,     10.000000 },
{     -3.083314 ,     -7.635753 ,     10.000000 },
{     -3.159671 ,     -7.639437 ,     10.000000 },
{     -3.236066 ,     -7.639437 ,     10.000000 },
{     -3.312460 ,     -7.639437 ,     10.000000 },
{     -3.388854 ,     -7.639437 ,     10.000000 },
{     -3.465249 ,     -7.639437 ,     10.000000 },
{     -3.541643 ,     -7.639437 ,     10.000000 },
{     -3.618037 ,     -7.639437 ,     10.000000 },
{     -3.694432 ,     -7.639437 ,     10.000000 },
{     -3.770826 ,     -7.639437 ,     10.000000 },
{     -3.847221 ,     -7.639437 ,     10.000000 },
{     -3.923615 ,     -7.639437 ,     10.000000 },
{     -4.000009 ,     -7.639437 ,     10.000000 },
{     -4.076404 ,     -7.639437 ,     10.000000 },
{     -4.152798 ,     -7.639437 ,     10.000000 },
{     -4.229192 ,     -7.639437 ,     10.000000 },
{     -4.305587 ,     -7.639437 ,     10.000000 },
{     -4.381981 ,     -7.639437 ,     10.000000 },
{     -4.458376 ,     -7.639437 ,     10.000000 },
{     -4.534770 ,     -7.639437 ,     10.000000 },
{     -4.611164 ,     -7.639437 ,     10.000000 },
{     -4.687559 ,     -7.639437 ,     10.000000 },
{     -4.763953 ,     -7.639437 ,     10.000000 },
{     -4.840347 ,     -7.639437 ,     10.000000 },
{     -4.916742 ,     -7.639437 ,     10.000000 },
{     -4.993136 ,     -7.639437 ,     10.000000 },
{     -5.069531 ,     -7.639437 ,     10.000000 },
{     -5.145925 ,     -7.639437 ,     10.000000 },
{     -5.222319 ,     -7.639437 ,     10.000000 },
{     -5.298714 ,     -9.724808 ,     10.000000 },
{     -5.395962 ,     -6.281061 ,     10.000000 },
{     -5.458772 ,     -6.281061 ,     10.000000 },
{     -5.521583 ,     -6.281061 ,     10.000000 },
{     -5.584394 ,     -6.281061 ,     10.000000 },
{     -5.647204 ,     -6.281061 ,     10.000000 },
{     -5.710015 ,     -6.281061 ,     10.000000 },
{     -5.772825 ,     -6.281061 ,     10.000000 },
{     -5.835636 ,     -6.281061 ,     10.000000 },
{     -5.898447 ,     -6.281061 ,     10.000000 },
{     -5.961257 ,     -6.281061 ,     10.000000 },
{     -6.024068 ,     -6.281061 ,     10.000000 },
{     -6.086878 ,     -6.281061 ,     10.000000 },
{     -6.149689 ,     -6.281061 ,     10.000000 },
{     -6.212500 ,     -6.281061 ,     10.000000 },
{     -6.275310 ,     -6.281061 ,     10.000000 },
{     -6.338121 ,     -6.281061 ,     10.000000 },
{     -6.400932 ,     -6.281061 ,     10.000000 },
{     -6.463742 ,     -6.281061 ,     10.000000 },
{     -6.526553 ,     -6.281061 ,     10.000000 },
{     -6.589363 ,     -6.281061 ,     10.000000 },
{     -6.652174 ,     -6.281061 ,     10.000000 },
{     -6.714985 ,     -6.281061 ,     10.000000 },
{     -6.777795 ,     -6.281061 ,     10.000000 },
{     -6.840606 ,     -6.281061 ,     10.000000 },
{     -6.903416 ,     -6.281061 ,     10.000000 },
{     -6.966227 ,     -6.281061 ,     10.000000 },
{     -7.029038 ,     -6.281061 ,     10.000000 },
{     -7.091848 ,     -6.281061 ,     10.000000 },
{     -7.154659 ,     -6.281061 ,     10.000000 },
{     -7.217470 ,     -6.281061 ,     10.000000 },
{     -7.280280 ,     -6.281061 ,     10.000000 },
{     -7.343091 ,     -6.281061 ,     10.000000 },
{     -7.405901 ,     -6.281061 ,     10.000000 },
{     -7.468712 ,     -6.281061 ,     10.000000 },
{     -7.531523 ,     -6.281061 ,     10.000000 },
{     -7.594333 ,     -6.281061 ,     10.000000 },
{     -7.657144 ,     -6.281061 ,     10.000000 },
{     -7.719954 ,     -6.281061 ,     10.000000 },
{     -7.782765 ,     -6.281061 ,     10.000000 },
{     -7.845576 ,     -6.281061 ,     10.000000 },
{     -7.908386 ,     -6.281061 ,     10.000000 },
{     -7.971197 ,     -6.281061 ,     10.000000 },
{     -8.034007 ,     -6.281061 ,     10.000000 },
{     -8.096818 ,     -6.281061 ,     10.000000 },
{     -8.159629 ,     -6.281061 ,     10.000000 },
{     -8.222439 ,     -6.281061 ,     10.000000 },
{     -8.285250 ,     -6.281061 ,     10.000000 },
{     -8.348061 ,     -6.281061 ,     10.000000 },
{     -8.410871 ,     -6.281061 ,     10.000000 },
{     -8.473682 ,     -6.281061 ,     10.000000 },
{     -8.536492 ,     -6.281061 ,     10.000000 },
{     -8.599303 ,     -6.281061 ,     10.000000 },
{     -8.662114 ,     -6.281061 ,     10.000000 },
{     -8.724924 ,     -6.281061 ,     10.000000 },
{     -8.787735 ,     -6.281061 ,     10.000000 },
{     -8.850545 ,     -6.281061 ,     10.000000 },
{     -8.913356 ,     -6.281061 ,     10.000000 },
{     -8.976167 ,     -6.281061 ,     10.000000 },
{     -9.038977 ,     -6.281061 ,     10.000000 },
{     -9.101788 ,     -6.281061 ,     10.000000 },
{     -9.164598 ,     -6.281061 ,     10.000000 },
{     -9.227409 ,     -6.281061 ,     10.000000 },
{     -9.290220 ,     -6.281061 ,     10.000000 },
{     -9.353030 ,     -8.913589 ,     10.000000 },
{     -9.442166 ,     -7.591997 ,     10.000000 },
{     -9.518086 ,     -7.497117 ,     10.000000 },
{     -9.593057 ,     -7.402236 ,     10.000000 },
{     -9.667080 ,     -7.307356 ,     10.000000 },
{     -9.740153 ,     -7.212476 ,     10.000000 },
{     -9.812278 ,     -7.117595 ,     10.000000 },
{     -9.883454 ,     -7.022715 ,     10.000000 },
{     -9.953681 ,     -6.927835 ,     10.000000 },
{    -10.022959 ,     -6.832954 ,     10.000000 },
{    -10.091289 ,     -6.738074 ,     10.000000 },
{    -10.158670 ,     -6.643193 ,     10.000000 },
{    -10.225102 ,     -6.548313 ,     10.000000 },
{    -10.290585 ,     -6.453433 ,     10.000000 },
{    -10.355119 ,     -6.358552 ,     10.000000 },
{    -10.418705 ,     -6.263672 ,     10.000000 },
{    -10.481341 ,     -6.168792 ,     10.000000 },
{    -10.543029 ,     -6.073911 ,     10.000000 },
{    -10.603768 ,     -5.979031 ,     10.000000 },
{    -10.663559 ,     -5.884151 ,     10.000000 },
{    -10.722400 ,     -5.789270 ,     10.000000 },
{    -10.780293 ,     -5.694390 ,     10.000000 },
{    -10.837237 ,     -5.599510 ,     10.000000 },
{    -10.893232 ,     -5.504629 ,     10.000000 },
{    -10.948278 ,     -5.409749 ,     10.000000 },
{    -11.002376 ,     -5.314868 ,     10.000000 },
{    -11.055524 ,     -5.219988 ,     10.000000 },
{    -11.107724 ,     -5.125108 ,     10.000000 },
{    -11.158975 ,     -5.030227 ,     10.000000 },
{    -11.209278 ,     -4.935347 ,     10.000000 },
{    -11.258631 ,     -4.840467 ,     10.000000 },
{    -11.307036 ,     -4.745586 ,     10.000000 },
{    -11.354492 ,     -4.650706 ,     10.000000 },
{    -11.400999 ,     -4.555826 ,     10.000000 },
{    -11.446557 ,     -4.460945 ,     10.000000 },
{    -11.491166 ,     -4.366065 ,     10.000000 },
{    -11.534827 ,     -4.271184 ,     10.000000 },
{    -11.577539 ,     -4.176304 ,     10.000000 },
{    -11.619302 ,     -4.081424 ,     10.000000 },
{    -11.660116 ,     -3.986543 ,     10.000000 },
{    -11.699982 ,     -3.891663 ,     10.000000 },
{    -11.738898 ,     -3.796783 ,     10.000000 },
{    -11.776866 ,     -3.701902 ,     10.000000 },
{    -11.813885 ,     -3.607022 ,     10.000000 },
{    -11.849955 ,     -3.512142 ,     10.000000 },
{    -11.885077 ,     -3.417261 ,     10.000000 },
{    -11.919249 ,     -3.322381 ,     10.000000 },
{    -11.952473 ,     -3.227501 ,     10.000000 },
{    -11.984748 ,     -3.132620 ,     10.000000 },
{    -12.016074 ,     -3.037740 ,     10.000000 },
{    -12.046452 ,     -2.942859 ,     10.000000 },
{    -12.075880 ,     -2.847979 ,     10.000000 },
{    -12.104360 ,     -2.753099 ,     10.000000 },
{    -12.131891 ,     -2.658218 ,     10.000000 },
{    -12.158473 ,     -2.563338 ,     10.000000 },
{    -12.184107 ,     -2.468458 ,     10.000000 },
{    -12.208791 ,     -2.373577 ,     10.000000 },
{    -12.232527 ,     -2.278697 ,     10.000000 },
{    -12.255314 ,     -2.183817 ,     10.000000 },
{    -12.277152 ,     -2.088936 ,     10.000000 },
{    -12.298042 ,     -1.994056 ,     10.000000 },
{    -12.317982 ,     -1.899175 ,     10.000000 },
{    -12.336974 ,     -1.804295 ,     10.000000 },
{    -12.355017 ,     -1.709415 ,     10.000000 },
{    -12.372111 ,     -1.614534 ,     10.000000 },
{    -12.388256 ,     -1.519654 ,     10.000000 },
{    -12.403453 ,     -1.424774 ,     10.000000 },
{    -12.417701 ,     -1.329893 ,     10.000000 },
{    -12.431000 ,     -1.235013 ,     10.000000 },
{    -12.443350 ,     -1.140133 ,     10.000000 },
{    -12.454751 ,     -1.045252 ,     10.000000 },
{    -12.465203 ,     -0.950372 ,     10.000000 },
{    -12.474707 ,     -0.855492 ,     10.000000 },
{    -12.483262 ,     -0.760611 ,     10.000000 },
{    -12.490868 ,     -0.665731 ,     10.000000 },
{    -12.497526 ,     -0.570850 ,     10.000000 },
{    -12.503234 ,     -0.475970 ,     10.000000 },
{    -12.507994 ,     -0.381090 ,     10.000000 },
{    -12.511805 ,     -0.286209 ,     10.000000 },
{    -12.514667 ,     -0.191329 ,     10.000000 },
{    -12.516580 ,     -0.096449 ,     10.000000 }
}};
const ProfileData AutoMove_RS3_to_RP3_L = {{
{      0.000000 ,      0.000000 ,     10.000000 },
{      0.000000 ,     -0.046995 ,     10.000000 },
{     -0.000470 ,     -0.140984 ,     10.000000 },
{     -0.001880 ,     -0.234973 ,     10.000000 },
{     -0.004230 ,     -0.328962 ,     10.000000 },
{     -0.007519 ,     -0.422951 ,     10.000000 },
{     -0.011749 ,     -0.516940 ,     10.000000 },
{     -0.016918 ,     -0.610929 ,     10.000000 },
{     -0.023027 ,     -0.704919 ,     10.000000 },
{     -0.030077 ,     -0.798908 ,     10.000000 },
{     -0.038066 ,     -0.892897 ,     10.000000 },
{     -0.046995 ,     -0.986886 ,     10.000000 },
{     -0.056863 ,     -1.080875 ,     10.000000 },
{     -0.067672 ,     -1.174864 ,     10.000000 },
{     -0.079421 ,     -1.268853 ,     10.000000 },
{     -0.092109 ,     -1.362843 ,     10.000000 },
{     -0.105738 ,     -1.456832 ,     10.000000 },
{     -0.120306 ,     -1.550821 ,     10.000000 },
{     -0.135814 ,     -1.644810 ,     10.000000 },
{     -0.152262 ,     -1.738799 ,     10.000000 },
{     -0.169650 ,     -1.832788 ,     10.000000 },
{     -0.187978 ,     -1.926777 ,     10.000000 },
{     -0.207246 ,     -2.020767 ,     10.000000 },
{     -0.227454 ,     -2.114756 ,     10.000000 },
{     -0.248601 ,     -2.208745 ,     10.000000 },
{     -0.270689 ,     -2.302734 ,     10.000000 },
{     -0.293716 ,     -2.396723 ,     10.000000 },
{     -0.317683 ,     -2.490712 ,     10.000000 },
{     -0.342590 ,     -2.584701 ,     10.000000 },
{     -0.368437 ,     -2.678690 ,     10.000000 },
{     -0.395224 ,     -2.772680 ,     10.000000 },
{     -0.422951 ,     -2.866669 ,     10.000000 },
{     -0.451618 ,     -2.960658 ,     10.000000 },
{     -0.481224 ,     -3.054647 ,     10.000000 },
{     -0.511771 ,     -3.148636 ,     10.000000 },
{     -0.543257 ,     -3.242625 ,     10.000000 },
{     -0.575683 ,     -3.336614 ,     10.000000 },
{     -0.609050 ,     -3.430604 ,     10.000000 },
{     -0.643356 ,     -3.524593 ,     10.000000 },
{     -0.678602 ,     -3.618582 ,     10.000000 },
{     -0.714787 ,     -3.712571 ,     10.000000 },
{     -0.751913 ,     -3.806560 ,     10.000000 },
{     -0.789979 ,     -3.900549 ,     10.000000 },
{     -0.828984 ,     -3.994538 ,     10.000000 },
{     -0.868930 ,     -4.088528 ,     10.000000 },
{     -0.909815 ,     -4.182517 ,     10.000000 },
{     -0.951640 ,     -4.276506 ,     10.000000 },
{     -0.994405 ,     -4.370495 ,     10.000000 },
{     -1.038110 ,     -4.464484 ,     10.000000 },
{     -1.082755 ,     -4.558473 ,     10.000000 },
{     -1.128340 ,     -4.652462 ,     10.000000 },
{     -1.174864 ,     -4.746452 ,     10.000000 },
{     -1.222329 ,     -4.840441 ,     10.000000 },
{     -1.270733 ,     -4.934430 ,     10.000000 },
{     -1.320077 ,     -5.028419 ,     10.000000 },
{     -1.370362 ,     -5.122408 ,     10.000000 },
{     -1.421586 ,     -5.216397 ,     10.000000 },
{     -1.473750 ,     -5.310386 ,     10.000000 },
{     -1.526854 ,     -5.404376 ,     10.000000 },
{     -1.580897 ,     -5.498365 ,     10.000000 },
{     -1.635881 ,     -5.592354 ,     10.000000 },
{     -1.691805 ,     -5.686343 ,     10.000000 },
{     -1.748668 ,     -5.780332 ,     10.000000 },
{     -1.806471 ,     -5.874321 ,     10.000000 },
{     -1.865214 ,     -5.968310 ,     10.000000 },
{     -1.924898 ,     -6.062300 ,     10.000000 },
{     -1.985521 ,     -6.156289 ,     10.000000 },
{     -2.047083 ,     -6.250278 ,     10.000000 },
{     -2.109586 ,     -6.344267 ,     10.000000 },
{     -2.173029 ,     -6.438256 ,     10.000000 },
{     -2.237411 ,     -6.532245 ,     10.000000 },
{     -2.302734 ,     -6.626234 ,     10.000000 },
{     -2.368996 ,     -6.720223 ,     10.000000 },
{     -2.436198 ,     -6.814213 ,     10.000000 },
{     -2.504341 ,     -6.908202 ,     10.000000 },
{     -2.573423 ,     -7.002191 ,     10.000000 },
{     -2.643445 ,     -7.096180 ,     10.000000 },
{     -2.714406 ,     -7.190169 ,     10.000000 },
{     -2.786308 ,     -7.284158 ,     10.000000 },
{     -2.859150 ,     -7.378147 ,     10.000000 },
{     -2.932931 ,     -7.472137 ,     10.000000 },
{     -3.007652 ,     -7.566126 ,     10.000000 },
{     -3.083314 ,     -7.635753 ,     10.000000 },
{     -3.159671 ,     -7.639437 ,     10.000000 },
{     -3.236066 ,     -7.639437 ,     10.000000 },
{     -3.312460 ,     -7.639437 ,     10.000000 },
{     -3.388854 ,     -7.639437 ,     10.000000 },
{     -3.465249 ,     -7.639437 ,     10.000000 },
{     -3.541643 ,     -7.639437 ,     10.000000 },
{     -3.618037 ,     -7.639437 ,     10.000000 },
{     -3.694432 ,     -7.639437 ,     10.000000 },
{     -3.770826 ,     -7.639437 ,     10.000000 },
{     -3.847221 ,     -7.639437 ,     10.000000 },
{     -3.923615 ,     -7.639437 ,     10.000000 },
{     -4.000009 ,     -7.639437 ,     10.000000 },
{     -4.076404 ,     -7.639437 ,     10.000000 },
{     -4.152798 ,     -7.639437 ,     10.000000 },
{     -4.229192 ,     -7.639437 ,     10.000000 },
{     -4.305587 ,     -7.639437 ,     10.000000 },
{     -4.381981 ,     -7.639437 ,     10.000000 },
{     -4.458376 ,     -7.639437 ,     10.000000 },
{     -4.534770 ,     -7.639437 ,     10.000000 },
{     -4.611164 ,     -7.639437 ,     10.000000 },
{     -4.687559 ,     -7.639437 ,     10.000000 },
{     -4.763953 ,     -7.639437 ,     10.000000 },
{     -4.840347 ,     -7.639437 ,     10.000000 },
{     -4.916742 ,     -7.639437 ,     10.000000 },
{     -4.993136 ,     -7.639437 ,     10.000000 },
{     -5.069531 ,     -7.639437 ,     10.000000 },
{     -5.145925 ,     -7.639437 ,     10.000000 },
{     -5.222319 ,     -7.639437 ,     10.000000 },
{     -5.298714 ,     -9.724808 ,     10.000000 },
{     -5.395962 ,     -8.997645 ,     10.000000 },
{     -5.485938 ,     -8.997645 ,     10.000000 },
{     -5.575915 ,     -8.997645 ,     10.000000 },
{     -5.665891 ,     -8.997645 ,     10.000000 },
{     -5.755868 ,     -8.997645 ,     10.000000 },
{     -5.845844 ,     -8.997645 ,     10.000000 },
{     -5.935820 ,     -8.997645 ,     10.000000 },
{     -6.025797 ,     -8.997645 ,     10.000000 },
{     -6.115773 ,     -8.997645 ,     10.000000 },
{     -6.205750 ,     -8.997645 ,     10.000000 },
{     -6.295726 ,     -8.997645 ,     10.000000 },
{     -6.385703 ,     -8.997645 ,     10.000000 },
{     -6.475679 ,     -8.997645 ,     10.000000 },
{     -6.565656 ,     -8.997645 ,     10.000000 },
{     -6.655632 ,     -8.997645 ,     10.000000 },
{     -6.745609 ,     -8.997645 ,     10.000000 },
{     -6.835585 ,     -8.997645 ,     10.000000 },
{     -6.925561 ,     -8.997645 ,     10.000000 },
{     -7.015538 ,     -8.997645 ,     10.000000 },
{     -7.105514 ,     -8.997645 ,     10.000000 },
{     -7.195491 ,     -8.997645 ,     10.000000 },
{     -7.285467 ,     -8.997645 ,     10.000000 },
{     -7.375444 ,     -8.997645 ,     10.000000 },
{     -7.465420 ,     -8.997645 ,     10.000000 },
{     -7.555397 ,     -8.997645 ,     10.000000 },
{     -7.645373 ,     -8.997645 ,     10.000000 },
{     -7.735349 ,     -8.997645 ,     10.000000 },
{     -7.825326 ,     -8.997645 ,     10.000000 },
{     -7.915302 ,     -8.997645 ,     10.000000 },
{     -8.005279 ,     -8.997645 ,     10.000000 },
{     -8.095255 ,     -8.997645 ,     10.000000 },
{     -8.185232 ,     -8.997645 ,     10.000000 },
{     -8.275208 ,     -8.997645 ,     10.000000 },
{     -8.365185 ,     -8.997645 ,     10.000000 },
{     -8.455161 ,     -8.997645 ,     10.000000 },
{     -8.545138 ,     -8.997645 ,     10.000000 },
{     -8.635114 ,     -8.997645 ,     10.000000 },
{     -8.725090 ,     -8.997645 ,     10.000000 },
{     -8.815067 ,     -8.997645 ,     10.000000 },
{     -8.905043 ,     -8.997645 ,     10.000000 },
{     -8.995020 ,     -8.997645 ,     10.000000 },
{     -9.084996 ,     -8.997645 ,     10.000000 },
{     -9.174973 ,     -8.997645 ,     10.000000 },
{     -9.264949 ,     -8.997645 ,     10.000000 },
{     -9.354926 ,     -8.997645 ,     10.000000 },
{     -9.444902 ,     -8.997645 ,     10.000000 },
{     -9.534879 ,     -8.997645 ,     10.000000 },
{     -9.624855 ,     -8.997645 ,     10.000000 },
{     -9.714831 ,     -8.997645 ,     10.000000 },
{     -9.804808 ,     -8.997645 ,     10.000000 },
{     -9.894784 ,     -8.997645 ,     10.000000 },
{     -9.984761 ,     -8.997645 ,     10.000000 },
{    -10.074737 ,     -8.997645 ,     10.000000 },
{    -10.164714 ,     -8.997645 ,     10.000000 },
{    -10.254690 ,     -8.997645 ,     10.000000 },
{    -10.344667 ,     -8.997645 ,     10.000000 },
{    -10.434643 ,     -8.997645 ,     10.000000 },
{    -10.524619 ,     -8.997645 ,     10.000000 },
{    -10.614596 ,     -8.997645 ,     10.000000 },
{    -10.704572 ,     -8.997645 ,     10.000000 },
{    -10.794549 ,     -8.997645 ,     10.000000 },
{    -10.884525 ,     -8.997645 ,     10.000000 },
{    -10.974502 ,     -8.997645 ,     10.000000 },
{    -11.064478 ,    -12.768803 ,     10.000000 },
{    -11.192166 ,     -7.591997 ,     10.000000 },
{    -11.268086 ,     -7.497117 ,     10.000000 },
{    -11.343057 ,     -7.402236 ,     10.000000 },
{    -11.417080 ,     -7.307356 ,     10.000000 },
{    -11.490153 ,     -7.212476 ,     10.000000 },
{    -11.562278 ,     -7.117595 ,     10.000000 },
{    -11.633454 ,     -7.022715 ,     10.000000 },
{    -11.703681 ,     -6.927835 ,     10.000000 },
{    -11.772959 ,     -6.832954 ,     10.000000 },
{    -11.841289 ,     -6.738074 ,     10.000000 },
{    -11.908670 ,     -6.643193 ,     10.000000 },
{    -11.975102 ,     -6.548313 ,     10.000000 },
{    -12.040585 ,     -6.453433 ,     10.000000 },
{    -12.105119 ,     -6.358552 ,     10.000000 },
{    -12.168705 ,     -6.263672 ,     10.000000 },
{    -12.231341 ,     -6.168792 ,     10.000000 },
{    -12.293029 ,     -6.073911 ,     10.000000 },
{    -12.353768 ,     -5.979031 ,     10.000000 },
{    -12.413559 ,     -5.884151 ,     10.000000 },
{    -12.472400 ,     -5.789270 ,     10.000000 },
{    -12.530293 ,     -5.694390 ,     10.000000 },
{    -12.587237 ,     -5.599510 ,     10.000000 },
{    -12.643232 ,     -5.504629 ,     10.000000 },
{    -12.698278 ,     -5.409749 ,     10.000000 },
{    -12.752376 ,     -5.314868 ,     10.000000 },
{    -12.805524 ,     -5.219988 ,     10.000000 },
{    -12.857724 ,     -5.125108 ,     10.000000 },
{    -12.908975 ,     -5.030227 ,     10.000000 },
{    -12.959278 ,     -4.935347 ,     10.000000 },
{    -13.008631 ,     -4.840467 ,     10.000000 },
{    -13.057036 ,     -4.745586 ,     10.000000 },
{    -13.104492 ,     -4.650706 ,     10.000000 },
{    -13.150999 ,     -4.555826 ,     10.000000 },
{    -13.196557 ,     -4.460945 ,     10.000000 },
{    -13.241166 ,     -4.366065 ,     10.000000 },
{    -13.284827 ,     -4.271184 ,     10.000000 },
{    -13.327539 ,     -4.176304 ,     10.000000 },
{    -13.369302 ,     -4.081424 ,     10.000000 },
{    -13.410116 ,     -3.986543 ,     10.000000 },
{    -13.449982 ,     -3.891663 ,     10.000000 },
{    -13.488898 ,     -3.796783 ,     10.000000 },
{    -13.526866 ,     -3.701902 ,     10.000000 },
{    -13.563885 ,     -3.607022 ,     10.000000 },
{    -13.599955 ,     -3.512142 ,     10.000000 },
{    -13.635077 ,     -3.417261 ,     10.000000 },
{    -13.669249 ,     -3.322381 ,     10.000000 },
{    -13.702473 ,     -3.227501 ,     10.000000 },
{    -13.734748 ,     -3.132620 ,     10.000000 },
{    -13.766074 ,     -3.037740 ,     10.000000 },
{    -13.796452 ,     -2.942859 ,     10.000000 },
{    -13.825880 ,     -2.847979 ,     10.000000 },
{    -13.854360 ,     -2.753099 ,     10.000000 },
{    -13.881891 ,     -2.658218 ,     10.000000 },
{    -13.908473 ,     -2.563338 ,     10.000000 },
{    -13.934107 ,     -2.468458 ,     10.000000 },
{    -13.958791 ,     -2.373577 ,     10.000000 },
{    -13.982527 ,     -2.278697 ,     10.000000 },
{    -14.005314 ,     -2.183817 ,     10.000000 },
{    -14.027152 ,     -2.088936 ,     10.000000 },
{    -14.048042 ,     -1.994056 ,     10.000000 },
{    -14.067982 ,     -1.899175 ,     10.000000 },
{    -14.086974 ,     -1.804295 ,     10.000000 },
{    -14.105017 ,     -1.709415 ,     10.000000 },
{    -14.122111 ,     -1.614534 ,     10.000000 },
{    -14.138256 ,     -1.519654 ,     10.000000 },
{    -14.153453 ,     -1.424774 ,     10.000000 },
{    -14.167701 ,     -1.329893 ,     10.000000 },
{    -14.181000 ,     -1.235013 ,     10.000000 },
{    -14.193350 ,     -1.140133 ,     10.000000 },
{    -14.204751 ,     -1.045252 ,     10.000000 },
{    -14.215203 ,     -0.950372 ,     10.000000 },
{    -14.224707 ,     -0.855492 ,     10.000000 },
{    -14.233262 ,     -0.760611 ,     10.000000 },
{    -14.240868 ,     -0.665731 ,     10.000000 },
{    -14.247526 ,     -0.570850 ,     10.000000 },
{    -14.253234 ,     -0.475970 ,     10.000000 },
{    -14.257994 ,     -0.381090 ,     10.000000 },
{    -14.261805 ,     -0.286209 ,     10.000000 },
{    -14.264667 ,     -0.191329 ,     10.000000 },
{    -14.266580 ,     -0.096449 ,     10.000000 }
}};
