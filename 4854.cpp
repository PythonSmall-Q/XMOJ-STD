#include<bits/stdc++.h>
using namespace std;
short n[1024][10]={{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,0,0,0,1,0,0,0},{0,0,1,0,1,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0},{1,0,1,0,0,0,0,1,0,0},{2,0,0,0,1,1,0,0,0,0},{2,0,1,1,1,0,0,0,0,0},{1,0,1,1,0,0,1,0,2,0},{2,0,1,1,0,0,1,0,2,0},{2,1,0,1,0,0,1,0,1,2},{4,1,0,0,1,0,1,1,0,1},{4,0,3,0,0,0,1,1,1,0},{2,2,2,0,0,0,0,2,2,1},{4,1,0,2,1,0,2,2,1,0},{4,0,3,0,0,0,0,1,4,2},{4,0,1,1,1,2,2,1,2,1},{5,0,2,2,1,1,1,3,1,0},{6,3,2,1,2,1,1,0,2,0},{7,1,3,1,2,0,2,1,1,1},{7,3,1,0,3,1,0,2,0,3},{8,2,2,0,1,0,2,6,1,0},{5,1,2,1,2,2,3,2,4,1},{6,1,2,5,4,0,2,1,1,2},{9,4,1,3,2,3,0,0,2,2},{8,3,2,2,3,3,4,0,1,1},{9,3,1,1,2,2,3,1,6,1},{10,4,0,3,4,2,2,1,4,0},{7,4,0,3,3,2,3,3,2,4},{9,3,4,2,1,4,3,0,5,2},{7,2,7,1,1,3,2,4,6,1},{10,5,3,7,0,1,5,1,2,2},{8,7,1,2,3,2,3,1,8,2},{11,2,4,3,4,2,4,2,2,5},{9,4,3,7,3,2,7,2,1,3},{10,4,3,4,3,2,2,4,3,7},{12,4,3,5,3,5,3,3,2,4},{16,7,7,1,3,1,5,4,0,1},{12,3,4,5,3,2,2,4,7,5},{9,6,5,3,4,5,3,4,4,5},{15,6,4,5,3,6,6,3,2,0},{13,6,3,3,6,5,5,3,4,4},{13,4,4,9,2,7,6,4,2,2},{12,6,4,3,5,5,5,4,9,2},{13,7,4,5,4,5,8,4,3,4},{16,4,8,1,3,8,4,1,7,6},{11,10,6,5,3,5,7,2,4,7},{14,4,6,7,4,6,6,8,4,3},{14,5,10,6,3,5,6,5,7,2},{19,7,3,6,7,2,9,5,5,2},{18,10,10,6,3,4,5,3,5,3},{18,3,3,4,5,7,8,8,9,3},{17,2,6,9,7,3,7,5,8,6},{18,5,9,8,6,3,3,7,9,4},{18,5,6,5,6,11,9,4,4,6},{17,4,1,3,13,5,6,9,11,6},{20,7,9,4,8,6,7,4,7,5},{17,10,10,5,8,5,4,4,10,6},{19,6,6,8,7,5,6,7,9,8},{19,8,9,8,10,3,8,7,4,6},{26,3,10,4,4,7,6,6,11,7},{20,8,13,8,4,6,6,8,7,6},{21,9,8,5,8,4,11,8,7,7},{20,12,6,9,10,7,6,3,12,5},{20,5,11,7,8,10,8,9,7,6},{23,5,8,7,16,3,8,8,9,6},{22,8,8,6,10,7,11,6,9,8},{25,11,8,9,7,8,6,8,7,8},{21,9,14,10,13,5,4,8,8,7},{20,7,7,5,6,10,11,9,14,12},{25,6,8,7,5,7,11,10,18,5},{23,6,10,8,10,3,10,12,15,7},{35,16,8,6,7,7,6,7,9,5},{23,13,14,10,7,13,5,7,9,7},{25,9,9,7,13,9,9,9,10,10},{24,7,12,11,11,10,8,9,8,12},{32,7,10,7,11,6,9,7,18,7},{25,11,16,9,10,9,8,10,12,6},{29,15,8,10,4,7,11,10,14,9},{27,8,12,8,13,14,10,9,13,5},{27,9,9,8,13,13,8,14,8,12},{28,13,5,15,16,1,11,11,10,13},{30,10,9,10,10,12,12,12,8,12},{27,15,12,13,8,8,13,9,12,10},{36,13,14,8,15,13,9,7,5,9},{28,8,17,10,14,13,11,13,8,9},{27,14,16,13,10,11,7,17,8,10},{28,14,12,8,18,10,12,2,18,13},{34,12,9,12,6,10,15,11,10,18},{28,11,10,10,13,12,15,12,14,14},{29,12,8,6,12,17,17,19,9,12},{29,13,8,18,17,17,8,15,11,7},{32,16,17,12,12,14,11,12,12,7},{37,11,11,12,12,15,16,10,16,7},{32,8,19,15,12,12,11,15,10,15},{36,9,7,9,16,11,11,15,16,20},{26,17,13,12,11,11,13,16,17,16},{35,6,16,10,16,9,14,19,16,13},{28,15,19,10,10,14,19,7,14,20},{30,15,19,10,10,14,19,7,14,20},{35,10,14,18,14,13,14,12,12,18},{37,12,9,12,17,27,16,6,11,15},{36,16,17,11,18,15,11,9,17,14},{33,13,13,12,16,14,11,25,18,12},{45,11,14,16,11,11,15,15,12,19},{36,11,19,20,22,8,15,15,18,7},{42,19,15,22,11,17,14,10,11,12},{41,17,12,16,17,15,12,12,19,14},{39,13,21,23,17,10,8,15,17,14},{38,18,23,13,18,13,12,19,13,12},{39,17,12,15,18,20,19,19,10,12},{38,10,17,17,15,15,14,22,18,17},{35,26,24,14,15,14,17,15,12,13},{47,19,16,19,19,18,11,8,18,12},{51,19,18,18,12,21,9,12,13,16},{44,23,14,18,8,16,19,13,17,19},{47,15,14,14,25,11,21,14,14,18},{40,13,24,21,17,14,17,13,23,13},{42,16,11,18,29,17,12,20,19,13},{45,19,15,16,15,21,16,11,21,20},{47,15,20,17,18,11,18,23,16,16},{52,14,19,15,24,18,15,18,13,15},{42,25,24,16,15,16,21,14,17,16},{53,25,12,11,22,20,21,17,11,16},{47,16,11,20,16,24,16,19,25,16},{52,19,15,22,16,15,13,25,21,14},{54,14,17,13,11,14,25,29,14,23},{50,11,21,21,18,25,21,18,16,15},{48,22,23,17,20,14,23,14,19,18},{51,14,21,14,23,24,16,20,15,22},{46,16,15,17,21,19,26,21,21,20},{54,20,19,14,19,15,27,18,17,22},{61,22,17,15,12,21,17,21,26,15},{56,21,19,22,27,12,15,14,22,21},{57,20,18,23,25,21,19,19,19,10},{53,24,24,16,19,22,18,19,25,13},{49,19,28,23,13,16,18,25,28,16},{54,19,20,15,21,16,23,22,29,18},{57,24,14,15,14,19,27,16,18,35},{60,24,11,17,20,20,21,24,22,23},{53,26,24,15,18,18,16,29,22,23},{56,20,20,12,22,14,20,29,28,25},{53,28,13,26,23,26,25,17,20,17},{58,16,18,26,20,19,16,27,23,27},{57,27,21,16,25,21,19,20,18,28},{57,22,27,16,18,22,20,20,26,27},{57,27,28,20,20,23,19,21,23,19},{50,25,23,26,23,26,21,24,26,15},{52,10,25,28,23,25,21,22,29,26},{51,20,25,19,30,32,21,22,21,22},{60,27,26,24,21,21,19,20,27,20},{61,24,20,30,21,29,23,26,19,15},{62,31,20,28,21,19,29,15,19,26},{68,22,18,18,24,22,28,22,28,22},{57,24,24,30,27,20,27,24,16,25},{62,22,24,24,18,24,28,24,22,28},{54,22,28,21,26,30,23,30,23,22},{60,25,19,31,22,20,23,24,29,28},{59,28,30,26,20,22,29,16,30,23},{63,29,24,27,24,19,22,23,21,33},{66,23,26,19,30,25,15,26,28,29},{70,26,29,19,25,20,17,25,24,35},{68,24,27,23,22,23,30,26,19,30},{63,28,37,24,22,21,26,27,28,18},{68,25,22,26,32,33,23,22,21,24},{66,26,24,25,20,23,35,27,23,29},{70,42,23,19,29,24,22,25,22,25},{63,28,25,21,29,29,35,27,27,19},{70,28,24,20,29,28,25,26,31,24},{68,29,31,20,22,32,31,26,20,28},{66,32,25,21,22,30,27,26,34,27},{73,27,20,32,22,30,23,31,27,27},{66,22,40,30,26,24,29,28,21,28},{67,23,34,30,22,30,40,22,30,18},{72,27,23,32,28,18,48,19,27,25},{75,34,22,33,24,28,21,22,36,26},{70,19,30,38,27,29,20,30,38,22},{60,32,31,24,21,25,34,29,35,34},{74,26,28,32,34,18,32,34,24,26},{75,30,16,39,27,26,32,20,29,36},{66,27,31,36,31,22,35,20,34,30},{79,31,23,26,36,22,30,29,27,31},{69,25,37,37,32,21,25,37,24,30},{75,18,40,27,36,29,28,27,33,26},{81,33,31,21,33,34,29,29,27,23},{83,27,31,32,26,25,34,27,33,25},{67,28,37,33,27,32,31,36,25,30},{73,32,22,24,39,33,27,34,23,41},{72,34,28,32,31,26,36,30,29,32},{74,27,35,29,40,36,33,24,26,28},{82,23,32,29,27,30,35,27,39,31},{80,27,26,35,32,39,29,27,24,38},{70,30,32,42,24,35,18,41,31,36},{87,24,40,28,31,34,21,24,38,35},{81,29,33,31,30,39,36,24,23,38},{80,37,36,28,26,23,36,36,34,30},{76,21,29,39,34,31,40,37,32,30},{80,33,41,29,35,38,30,25,32,28},{71,53,36,30,25,29,42,24,34,29},{76,26,54,41,35,25,29,35,23,31},{80,46,43,36,33,24,31,32,29,24},{82,34,39,40,39,27,32,35,24,28},{91,27,36,30,29,42,31,31,27,38},{78,32,43,37,33,33,31,36,28,34},{71,33,46,38,27,45,36,21,35,35},{78,32,36,30,33,37,39,30,37,37},{74,38,34,35,25,26,43,32,41,44},{82,31,37,30,32,33,41,32,40,36},{85,36,38,36,31,33,38,32,34,33},{83,38,40,28,34,37,39,38,33,29},{89,41,35,32,39,25,44,38,28,30},{85,33,37,30,39,36,35,44,34,30},{95,41,31,23,33,36,53,45,28,21},{82,26,35,40,35,40,45,32,33,40},{81,38,35,36,32,30,48,30,38,42},{102,37,27,38,32,33,41,30,36,37},{78,37,41,41,40,33,37,42,39,27},{85,42,39,38,26,32,42,34,34,45},{96,46,34,36,23,45,42,31,36,31},{85,29,39,36,37,48,38,45,30,35},{90,40,28,33,37,45,40,40,35,36},{93,38,35,26,43,54,38,25,41,34},{85,34,40,46,43,36,36,25,50,34},{81,35,24,46,47,45,41,42,31,39},{95,30,37,38,47,32,41,36,38,40},{87,40,43,43,29,44,34,38,35,43},{102,35,32,48,48,35,33,33,31,41},{99,40,43,39,38,39,37,50,28,28},{96,39,37,43,45,35,33,41,47,27},{89,38,43,39,45,51,30,31,38,41},{89,50,45,46,44,35,40,28,39,32},{98,39,41,33,33,39,41,37,44,45},{93,42,48,41,46,31,41,32,44,34},{88,46,30,48,32,37,52,32,37,53},{93,47,41,40,42,45,36,46,37,30},{94,43,48,43,43,41,35,39,39,35},{91,37,45,37,38,42,42,44,44,42},{100,43,35,44,38,40,40,47,41,36},{96,40,40,44,48,50,36,32,45,36},{99,40,43,28,32,48,49,37,42,51},{104,33,34,38,51,44,41,44,41,41},{100,33,33,45,36,43,38,54,56,36},{94,46,35,30,42,45,42,50,49,43},{102,40,52,33,39,56,40,35,39,43},{103,40,38,39,38,44,46,46,42,45},{97,51,49,48,45,32,44,39,45,33},{101,57,41,37,44,40,44,39,38,45},{100,42,42,44,47,50,36,38,44,45},{105,49,54,41,33,42,43,42,31,51},{103,43,56,40,34,39,32,53,53,40},{105,51,33,47,43,47,43,42,47,37},{104,44,49,43,45,47,44,44,43,35},{99,41,43,46,54,34,48,47,35,53},{114,44,40,45,53,40,41,38,49,39},{110,42,54,46,42,47,50,39,40,35},{104,44,50,39,42,46,53,51,47,31},{120,44,43,45,42,42,40,42,52,40},{120,62,42,37,47,48,39,35,39,43},{103,65,45,45,43,37,44,46,45,42},{112,45,48,64,36,45,42,36,45,44},{116,39,33,50,41,52,50,52,38,48},{104,59,44,38,51,33,43,50,50,50},{106,53,47,40,53,37,47,57,40,44},{121,49,49,46,43,55,43,45,36,40},{110,45,41,53,44,50,45,49,47,45},{115,49,46,38,40,45,56,47,45,51},{109,56,44,51,56,41,50,45,36,46},{108,44,49,45,56,46,52,47,40,49},{115,45,58,45,47,50,40,38,43,58},{103,50,51,51,47,49,59,37,46,48},{117,37,55,37,48,66,46,41,47,50},{105,57,50,53,51,51,44,37,47,51},{133,54,43,53,62,38,43,40,42,41},{128,48,39,50,59,51,50,33,47,46},{113,46,51,45,59,56,41,50,45,48},{125,60,48,51,58,52,33,39,39,51},{108,47,56,44,44,37,63,45,58,56},{102,47,54,44,42,54,57,49,51,61},{122,44,56,51,52,33,53,43,59,50},{115,46,54,48,59,50,47,53,42,52},{109,53,28,59,46,63,53,51,47,59},{111,51,48,48,52,47,52,52,60,50},{109,44,45,59,58,48,60,41,62,47},{120,52,58,47,64,46,37,49,46,57},{135,43,42,56,47,42,46,55,58,54},{126,43,60,40,43,53,55,64,49,47},{116,52,53,45,47,55,43,64,49,59},{116,54,50,56,49,51,59,51,53,46},{117,44,51,59,49,55,57,48,59,49},{124,59,51,49,54,48,49,49,51,56},{116,64,41,56,57,53,65,43,49,49},{127,51,48,52,52,42,53,53,51,66},{120,57,63,49,44,56,47,49,43,70},{125,55,46,58,53,52,56,51,64,40},{105,55,59,55,53,53,51,44,70,58},{122,57,47,46,54,50,54,52,66,57},{132,55,53,60,49,46,45,54,47,67},{125,70,43,53,59,57,48,47,49,59},{123,59,56,51,51,56,45,57,64,51},{121,42,66,54,53,59,66,54,51,49},{128,57,57,57,54,59,57,53,45,50},{124,55,51,63,54,46,47,55,73,52},{115,62,60,50,59,62,44,62,55,53},{142,51,59,48,58,52,64,54,46,51},{131,44,60,59,54,48,54,66,53,58},{130,70,59,50,44,53,57,57,53,57},{123,52,66,67,56,59,52,56,51,50},{133,60,57,72,60,50,43,50,48,62},{142,64,55,55,56,62,44,50,56,53},{117,60,58,54,42,51,81,67,60,50},{136,59,51,59,54,52,60,50,57,64},{136,64,59,50,40,47,70,71,51,57},{129,58,60,65,70,53,52,58,52,50},{134,57,60,57,48,54,62,63,57,58},{125,64,71,59,56,50,60,56,52,59},{134,46,57,54,80,57,55,54,60,58},{129,59,67,59,63,53,56,62,64,45},{136,58,54,58,55,60,54,67,60,58},{128,59,75,60,47,67,73,48,48,57},{133,48,59,62,63,63,63,51,61,62},{138,63,49,57,64,65,66,57,52,56},{128,55,54,58,60,53,66,60,74,62},{141,57,66,54,62,61,54,66,52,59},{142,80,61,62,44,52,51,56,55,72},{139,46,67,65,63,49,68,71,58,51},{140,58,56,55,59,64,75,52,67,54},{155,50,56,74,53,46,60,59,78,51},{140,55,67,66,49,72,62,53,57,64},{145,55,65,61,48,70,55,59,60,69},{154,58,53,54,71,76,55,64,58,47},{133,53,64,70,69,62,64,65,52,60},{144,61,48,62,62,54,62,66,66,70},{137,53,63,56,71,70,61,51,66,70},{135,70,53,59,59,67,71,62,65,59},{150,63,54,62,57,73,53,62,73,56},{137,69,48,59,65,58,71,60,73,65},{159,52,59,61,63,63,58,63,62,68},{142,63,66,54,57,50,67,72,67,72},{155,69,54,58,54,65,71,63,58,66},{147,75,65,74,59,53,57,49,83,53},{137,62,55,66,58,71,74,67,61,67},{155,56,61,72,59,68,63,59,69,58},{144,63,70,59,75,64,60,75,58,55},{150,66,66,77,56,56,69,50,68,67},{160,53,60,62,57,80,55,66,78,57},{144,77,65,68,67,72,57,70,53,57},{159,59,65,68,73,60,67,61,59,62},{149,60,62,61,67,68,74,66,72,57},{147,80,62,61,64,61,62,56,83,62},{143,73,59,67,76,71,61,62,60,69},{158,65,65,71,74,65,60,62,68,55},{147,58,61,56,65,69,85,59,67,79},{166,72,69,64,59,74,67,49,61,67},{163,60,63,67,81,70,66,52,57,72},{153,54,74,65,71,55,70,65,76,70},{158,60,63,67,89,71,66,60,60,62},{172,57,65,58,70,68,65,78,63,62},{162,66,64,76,61,74,71,50,66,71},{150,73,72,58,71,52,77,68,73,70},{166,55,62,75,73,73,65,65,70,62},{157,62,71,80,69,72,66,71,65,56},{161,67,72,57,72,69,66,77,60,70},{155,65,83,77,58,57,73,75,61,70},{158,69,61,74,74,74,59,70,69,68},{166,76,54,64,72,69,69,60,70,79},{160,93,58,60,74,81,58,64,59,74},{168,76,61,72,76,59,76,66,68,62},{156,63,72,70,94,67,58,72,63,72},{157,67,65,69,72,73,62,83,75,66},{163,55,70,81,73,70,72,66,66,76},{157,63,65,78,82,64,63,87,64,71},{152,83,71,82,50,73,59,78,82,67},{162,69,70,52,78,78,69,66,80,75},{151,79,67,81,66,82,80,61,66,69},{164,82,68,70,68,67,81,69,69,67},{162,71,72,62,78,68,73,76,79,66},{166,59,78,85,82,61,75,65,73,66},{166,78,78,61,83,67,93,57,70,59},{165,59,75,73,68,78,82,64,77,74},{166,74,68,76,70,81,80,58,65,79},{167,72,66,76,91,75,75,70,68,60},{165,75,79,70,74,78,82,75,67,58},{172,71,71,69,51,74,81,80,87,69},{154,78,72,80,68,78,76,83,73,66},{172,64,79,61,67,73,73,95,80,66},{172,64,75,65,70,88,80,69,76,74},{172,77,78,82,77,84,72,58,65,71},{171,74,68,81,64,91,67,73,70,79},{163,78,78,65,75,77,89,77,72,67},{172,70,84,69,82,76,78,73,62,77},{161,75,74,88,94,63,54,91,69,77},{161,71,59,76,97,91,70,72,78,74},{170,74,91,89,67,78,60,77,73,72},{174,80,77,71,79,76,80,79,70,68},{191,80,71,66,77,79,66,76,89,61},{169,59,79,76,69,79,81,75,93,79},{171,89,63,82,76,76,81,76,66,82},{175,74,65,75,79,78,77,78,82,81},{179,68,58,62,74,91,85,83,88,79},{178,73,86,83,74,82,77,66,72,78},{182,93,81,81,75,63,76,77,65,79},{193,80,59,96,78,79,71,78,68,73},{181,82,80,68,72,70,91,76,92,65},{171,91,89,78,56,81,78,82,86,68},{167,80,78,81,76,72,82,81,87,78},{183,80,78,84,75,69,70,75,89,82},{161,78,76,90,73,91,88,82,81,68},{180,92,82,77,88,79,68,54,85,85},{180,83,82,77,82,96,73,74,73,73},{192,87,67,83,81,89,73,85,67,71},{185,92,74,66,83,76,76,85,77,84},{171,76,83,84,84,73,82,89,69,90},{185,66,88,67,105,77,82,73,91,69},{178,75,83,82,77,88,80,79,90,74},{165,89,85,76,74,82,88,87,80,82},{186,71,82,90,82,84,73,98,64,81},{177,67,71,93,91,91,75,94,84,71},{179,83,69,60,96,96,93,100,75,65},{171,86,87,117,85,65,82,79,80,67},{194,79,88,80,84,59,88,74,84,92},{179,64,87,86,99,79,69,77,89,95},{189,87,77,79,87,68,93,86,85,76},{178,82,102,85,88,86,79,77,77,75},{189,101,77,79,89,76,77,86,78,80},{197,73,74,98,75,79,81,76,86,96},{198,91,88,77,94,69,88,71,75,86},{184,80,81,90,97,83,80,86,75,84},{193,109,80,79,91,66,83,83,74,85},{186,92,81,82,91,66,97,91,82,77},{197,78,89,71,93,80,78,92,76,94},{188,86,78,94,80,90,87,80,81,86},{176,79,78,93,93,88,94,94,73,85},{202,78,83,84,102,76,75,92,83,81},{201,82,83,74,93,81,82,82,99,81},{184,94,76,89,79,94,94,80,83,88},{199,86,95,77,84,92,87,79,83,82},{190,86,100,82,91,105,74,69,89,80},{177,69,85,91,92,87,96,100,80,92},{205,81,93,86,89,85,83,79,89,82},{198,82,107,95,75,95,95,86,71,70},{201,77,89,101,79,90,93,89,75,83},{215,95,65,81,91,92,86,78,86,91},{204,107,77,98,87,93,72,85,73,86},{185,96,81,90,96,71,77,96,97,96},{200,94,76,70,100,95,96,76,90,90},{211,95,87,99,90,61,93,81,88,85},{203,83,92,82,88,91,89,88,85,92},{204,91,94,75,80,90,80,85,90,106},{186,83,78,88,95,88,80,101,116,83},{216,97,80,102,92,76,98,75,84,81},{215,83,88,98,109,77,75,83,92,83},{200,74,118,91,75,81,85,91,95,96},{178,93,104,66,78,108,105,87,97,93},{195,79,86,90,88,103,93,96,107,74},{196,112,76,85,100,84,81,91,104,85},{189,86,91,85,106,94,87,101,72,106},{190,85,101,92,84,92,104,80,86,105},{193,97,98,81,92,86,99,90,83,103},{212,86,103,111,87,74,92,85,96,79},{199,100,88,97,95,88,96,81,100,83},{189,94,104,96,96,92,99,71,95,94},{202,95,86,96,84,91,104,96,95,84},{210,87,90,97,81,72,106,92,101,99},{207,106,84,87,102,101,100,91,84,76},{199,93,79,101,86,103,115,103,88,74},{213,75,84,92,81,114,102,92,104,86},{203,91,92,103,113,97,85,77,95,90},{191,104,89,115,83,91,88,97,83,108},{227,98,83,86,89,106,86,87,94,95},{201,91,90,102,101,83,108,85,101,92},{215,81,95,77,95,102,86,118,88,100},{213,94,78,91,113,81,101,95,104,89},{200,99,98,87,112,90,106,83,88,99},{199,88,93,85,109,91,107,89,102,102},{207,82,99,93,82,99,105,87,110,103},{207,95,94,85,100,97,93,94,101,104},{225,98,88,112,86,105,80,90,96,93},{208,92,87,107,85,117,82,114,93,90},{196,99,108,101,88,94,103,93,108,88},{198,107,103,99,86,104,99,84,109,92},{235,98,117,85,108,98,90,83,92,77},{223,104,83,100,88,91,117,92,95,93},{229,103,90,96,100,89,99,100,91,92},{225,100,93,105,101,97,85,93,86,107},{209,100,104,105,99,95,96,88,85,113},{206,107,106,114,96,91,94,93,96,94},{202,87,101,101,113,104,88,94,104,106},{223,92,86,98,97,88,107,110,98,103},{200,108,98,95,115,106,112,95,81,95},{244,103,92,100,109,81,80,105,105,89},{209,111,123,90,82,102,87,115,101,90},{217,91,90,95,103,101,100,102,105,109},{233,105,93,119,105,81,99,100,94,87},{206,101,117,97,103,102,113,96,90,93},{224,98,98,114,97,100,86,106,100,98},{227,98,108,111,96,113,91,97,94,89},{224,93,91,106,81,97,115,105,109,105},{229,85,113,95,111,89,108,98,101,100},{223,96,99,86,105,112,97,117,98,99},{218,90,106,104,107,104,95,111,110,90},{221,107,114,105,112,106,79,93,107,93},{236,109,92,97,93,112,106,98,93,104},{222,112,105,99,99,105,109,95,96,101},{222,82,107,110,111,103,97,107,99,107},{216,106,97,98,116,105,119,94,84,113},{223,103,113,115,106,93,100,99,120,79},{221,91,116,111,125,94,93,115,100,88},{225,104,107,89,109,115,98,95,104,110},{231,106,110,98,93,89,102,96,120,114},{233,103,102,102,114,90,108,98,117,95},{237,109,114,102,87,120,105,93,91,106},{227,101,112,120,106,103,81,110,108,99},{220,105,101,102,104,115,116,96,110,101},{242,106,109,115,108,96,95,98,101,102},{243,101,106,98,99,102,96,110,123,97},{217,114,115,108,104,101,114,114,92,99},{234,99,96,109,113,109,110,95,105,111},{221,93,112,110,96,106,117,124,107,97},{236,107,90,110,107,117,105,118,98,98},{235,112,113,84,110,95,119,115,117,89},{241,114,114,97,102,113,104,106,92,108},{244,105,108,101,103,128,105,109,90,101},{228,95,123,106,109,113,105,109,92,117},{243,110,111,111,88,102,103,100,118,114},{245,103,113,91,101,106,122,86,125,110},{238,107,118,112,102,104,117,106,99,102},{245,94,108,87,97,132,111,107,109,118},{221,106,117,99,108,121,105,109,106,119},{227,109,114,105,110,109,107,103,120,109},{231,105,110,118,95,108,103,120,114,112},{240,101,104,94,131,96,125,118,111,99},{221,111,127,113,116,108,98,98,120,109},{231,105,106,122,128,97,118,113,119,85},{243,111,110,106,109,107,115,112,88,126},{234,125,117,112,105,98,129,108,102,100},{245,102,103,119,110,122,99,103,114,115},{262,106,114,121,103,98,112,126,93,100},{248,100,104,117,107,123,118,107,99,115},{253,117,110,118,106,120,106,85,111,115},{226,100,107,112,120,111,104,128,118,117},{250,100,101,112,112,124,103,116,121,107},{244,96,132,119,86,99,129,107,127,110},{247,126,98,109,117,134,111,98,97,114},{232,109,124,131,110,109,132,114,94,99},{237,109,131,99,113,119,116,115,102,116},{240,108,105,112,117,117,126,131,104,100},{244,110,123,95,91,115,106,119,106,153},{233,108,110,113,138,116,124,104,121,98},{260,114,130,110,112,118,98,119,103,104},{243,129,109,93,117,114,122,127,99,118},{270,134,109,104,111,127,120,93,99,106},{232,111,110,111,109,108,128,128,118,121},{281,115,117,100,115,117,109,116,91,118},{264,111,101,136,113,112,109,112,120,104},{247,138,101,114,89,109,133,125,115,113},{228,115,114,110,112,116,127,107,125,133},{248,116,128,108,109,118,131,109,112,111},{252,118,117,112,102,109,108,150,117,108},{241,98,123,116,132,112,108,120,127,118},{264,111,111,130,115,111,114,118,125,99},{255,100,128,108,134,96,127,128,105,120},{262,100,136,117,103,128,110,125,115,108},{259,100,118,110,121,115,109,121,130,123},{255,133,114,101,120,105,119,132,112,118},{245,122,128,99,107,123,116,118,135,119},{264,118,101,124,115,112,121,116,145,99},{259,124,96,128,120,114,111,118,128,119},{232,120,125,114,110,126,126,123,123,121},{262,102,128,118,130,119,114,115,112,123},{271,129,116,109,117,113,109,119,130,113},{245,117,119,128,119,121,121,113,115,130},{254,107,120,130,132,113,115,121,118,121},{252,120,129,113,115,117,131,101,132,124},{258,116,135,125,97,119,136,132,91,128},{261,113,134,124,133,103,118,112,115,126},{266,121,126,116,121,124,124,107,114,123},{256,121,112,138,117,122,119,101,135,124},{273,132,116,135,112,108,127,128,103,114},{273,136,93,129,121,107,138,105,123,125},{275,121,118,130,124,117,107,121,104,136},{261,133,114,104,131,129,121,109,118,136},{254,116,124,121,140,107,122,123,121,131},{270,118,140,133,115,110,122,113,108,132},{268,120,136,100,148,136,99,105,134,118},{269,144,121,133,128,113,124,111,107,117},{255,115,123,97,136,144,122,105,134,139},{262,123,109,122,134,152,109,117,119,126},{255,116,125,140,144,136,101,127,117,114},{273,119,130,138,123,103,117,120,111,144},{259,139,118,128,130,114,118,124,122,129},{267,125,122,122,100,134,132,118,147,117},{286,120,105,124,140,111,128,123,125,124},{247,126,143,109,131,121,142,117,137,116},{286,140,140,134,122,106,116,110,120,118},{268,140,120,116,117,116,132,139,148,99},{263,112,128,139,120,126,124,134,112,139},{253,118,138,122,121,128,122,129,153,116},{249,166,129,116,112,118,117,123,133,140},{267,129,136,130,130,114,118,139,115,128},{272,125,131,107,128,124,147,121,140,114},{278,139,112,126,134,112,134,136,119,121},{268,132,122,121,122,129,137,129,123,131},{269,121,128,110,142,134,126,125,147,115},{270,132,140,130,134,131,121,133,122,107},{279,127,118,136,112,148,117,137,119,130},{283,124,142,126,129,136,97,137,121,130},{298,132,124,135,140,131,127,107,118,116},{278,134,119,124,108,132,149,128,134,125},{264,128,117,130,123,124,144,143,147,114},{266,141,127,119,144,116,137,119,143,124},{267,128,136,118,131,143,124,120,148,124},{263,121,134,137,135,143,139,135,126,109},{265,147,138,133,144,105,128,128,113,144},{265,137,130,153,124,133,127,119,120,140},{282,129,130,120,138,143,114,137,131,126},{268,143,107,140,147,139,128,132,143,106},{280,147,125,136,114,125,122,131,133,143},{293,143,125,133,132,113,132,139,113,136},{293,129,131,123,141,135,115,138,127,130},{294,126,134,127,135,123,116,124,137,148},{269,139,133,119,127,126,143,141,136,134},{302,119,132,137,131,130,132,122,140,125},{294,121,124,143,115,144,127,125,132,148},{280,135,138,141,114,142,126,140,136,123},{300,132,116,127,128,143,135,134,129,134},{295,115,123,132,125,139,131,141,125,155},{284,134,116,143,161,149,131,117,135,114},{284,148,134,138,118,135,136,161,113,120},{304,137,139,122,131,131,132,123,139,131},{282,139,141,135,126,129,130,132,124,154},{300,130,145,118,117,129,151,140,146,119},{292,138,133,148,127,141,134,143,113,129},{289,138,148,156,115,126,121,137,149,122},{274,143,135,135,138,114,152,132,149,131},{303,150,143,144,131,121,128,128,124,134},{320,141,129,130,149,117,144,129,128,122},{291,118,144,116,146,142,137,134,127,157},{286,133,134,132,140,124,139,148,148,131},{285,140,128,117,137,130,134,138,160,149},{293,150,136,130,137,148,131,121,142,132},{288,128,146,134,133,118,145,130,142,159},{296,150,145,127,129,160,138,123,127,131},{296,120,122,147,153,133,140,134,125,159},{309,138,135,145,140,140,129,142,136,118},{288,155,137,135,133,126,128,148,137,147},{294,130,135,164,139,132,140,135,149,119},{282,153,158,117,125,145,136,120,155,149},{319,160,131,143,140,127,124,115,139,145},{295,122,126,149,142,151,136,144,125,156},{294,132,139,147,135,145,128,152,132,144},{294,146,123,141,133,126,150,146,128,164},{293,135,144,138,129,138,138,155,140,144},{301,138,139,132,160,131,136,129,163,128},{304,149,148,139,119,146,138,133,137,147},{284,150,141,128,157,161,130,147,143,121},{299,149,150,119,145,137,146,128,153,139},{299,151,147,134,161,136,141,126,137,136},{304,144,125,140,141,132,132,142,170,141},{311,138,154,137,151,143,142,144,130,124},{300,151,112,141,149,135,140,140,154,155},{311,147,119,131,157,139,147,137,153,138},{301,145,139,149,126,150,135,141,141,155},{322,158,142,141,160,133,127,128,147,127},{297,131,151,163,148,134,140,140,143,141},{298,165,127,152,135,150,147,141,137,139},{312,147,146,137,160,129,159,134,130,140},{322,135,143,135,127,127,174,134,144,155},{310,139,141,141,165,141,133,136,134,159},{301,162,140,154,140,134,116,172,128,155},{330,136,138,151,141,146,149,133,150,131},{309,135,144,149,157,157,132,135,141,149},{307,153,131,157,161,143,151,133,131,143},{334,143,141,113,157,142,151,138,140,154},{301,137,153,149,148,135,144,152,143,154},{317,143,151,153,153,137,147,126,140,152},{314,152,142,147,133,146,149,139,145,155},{276,157,118,150,165,151,153,133,174,148},{327,144,150,152,135,150,140,164,119,146},{338,140,144,150,161,121,142,154,133,147},{312,145,156,165,158,134,158,140,123,142},{327,157,156,149,136,155,137,146,119,154},{302,152,161,150,173,142,140,129,145,145},{336,123,153,133,160,123,150,165,142,157},{316,132,146,140,147,150,153,157,140,163},{304,157,161,142,151,143,158,120,160,151},{307,153,150,139,145,166,158,144,141,147},{331,140,139,171,150,142,139,130,169,142},{313,139,157,120,168,147,144,197,125,146},{308,151,148,140,158,136,158,162,148,150},{296,137,158,138,153,164,162,165,142,146},{291,129,149,155,148,176,161,154,151,150},{294,149,151,135,147,162,165,155,153,156},{321,163,161,149,142,126,147,169,154,138},{309,148,156,149,163,140,143,172,136,157},{317,160,132,150,147,147,178,150,139,156},{318,149,164,149,158,173,143,127,154,144},{331,142,160,139,140,169,169,148,140,143},{304,148,149,146,158,157,156,159,156,151},{337,136,147,144,155,150,139,163,166,150},{334,156,167,147,144,138,149,163,137,155},{327,148,152,161,161,158,140,153,140,153},{332,154,151,146,172,161,150,135,146,149},{326,160,150,149,157,151,144,150,154,157},{313,158,164,176,150,136,141,154,159,150},{320,181,160,166,161,124,166,131,153,142},{315,173,154,149,150,172,143,160,136,155},{338,129,152,171,179,156,148,137,158,142},{319,151,149,151,176,159,153,154,149,152},{325,146,153,155,143,157,159,150,165,163},{314,151,173,156,138,159,142,161,151,173},{332,161,154,147,121,157,159,136,179,175},{316,148,164,152,183,156,173,130,144,158},{331,162,155,163,144,177,147,159,142,147},{322,152,152,146,173,155,168,145,154,163},{352,151,160,167,130,149,159,165,134,166},{315,143,164,146,162,166,161,155,154,169},{336,143,143,163,173,155,149,153,156,167},{337,157,157,142,170,153,157,157,162,149},{333,152,149,153,152,157,159,151,164,174},{332,142,148,164,152,172,169,161,138,169},{340,148,173,153,160,167,166,152,150,141},{363,151,149,140,154,152,137,161,198,148},{321,173,156,159,172,163,153,144,170,144},{364,150,151,151,153,149,152,156,162,170},{338,183,178,149,147,138,167,159,140,162},{348,147,153,171,158,159,167,155,151,155},{329,175,163,152,133,166,157,171,165,156},{338,138,151,142,152,180,157,181,155,176},{347,161,167,159,158,154,159,165,145,158},{337,152,149,168,174,144,163,174,147,168},{336,152,165,153,168,177,173,161,163,130},{341,160,170,145,167,134,162,163,183,156},{348,166,155,167,158,154,149,168,165,154},{343,159,154,180,157,169,171,138,161,155},{368,158,159,150,157,151,183,154,147,163},{335,151,141,147,150,188,178,153,188,162},{335,159,165,141,165,192,156,173,152,158},{370,179,175,148,145,169,141,150,154,167},{345,138,172,145,164,154,164,179,179,161},{343,178,153,158,144,164,185,175,162,142},{350,174,160,162,161,153,162,175,158,152},{319,170,170,154,179,172,150,160,167,169},{336,175,171,161,178,139,150,177,163,163},{355,150,175,150,172,172,154,170,148,170},{347,155,155,159,191,176,156,160,160,160},{348,151,145,163,162,151,160,179,163,199},{354,175,127,182,154,162,162,157,179,172},{346,179,162,174,160,172,161,162,161,150},{330,172,188,170,149,173,168,164,139,177},{335,177,167,177,169,144,174,158,160,172},{336,193,156,175,177,171,172,157,152,147},{351,160,161,158,194,178,167,148,160,162},{354,161,142,176,177,165,167,152,180,168},{366,151,160,164,157,163,173,165,171,174},{374,162,160,181,165,173,150,161,158,163},{356,172,164,152,161,155,174,175,189,152},{363,173,174,152,167,162,143,171,190,158},{366,156,177,161,165,167,149,177,175,163},{349,170,185,188,149,157,175,162,151,173},{348,175,188,195,152,148,142,167,167,180},{366,166,179,157,165,164,170,151,187,160},{340,191,180,195,167,154,173,154,154,159},{345,153,173,162,159,181,171,194,167,165},{346,180,184,160,163,189,167,180,153,151},{370,143,162,166,190,176,163,161,174,171},{370,172,194,161,157,160,163,176,154,172},{366,190,183,174,167,181,180,145,138,158},{353,171,178,178,185,157,168,180,147,168},{369,198,157,181,139,153,173,163,181,174},{363,160,171,174,168,167,163,176,169,180},{355,176,170,171,171,172,151,172,174,181},{369,142,154,170,200,185,167,157,187,165},{368,194,165,164,171,161,173,170,179,154},{355,157,178,173,177,176,174,163,170,179},{384,172,175,166,164,160,177,165,175,167},{352,177,164,169,179,175,189,187,168,148},{368,163,161,168,161,166,184,189,174,177},{343,191,191,169,172,171,173,175,188,141},{379,163,189,156,179,159,174,177,186,155},{363,172,185,186,179,161,161,195,146,171},{371,162,168,185,189,179,173,180,160,155},{365,190,147,182,182,162,175,185,170,167},{368,172,178,168,180,185,195,168,163,151},{367,166,176,173,144,158,191,191,188,177},{367,168,173,169,186,178,170,181,163,179},{382,178,162,148,173,175,165,188,175,191},{353,173,164,161,188,189,191,167,181,173},{350,187,176,176,196,180,163,175,175,165},{378,175,164,150,176,196,170,175,166,195},{369,172,168,184,171,175,192,167,161,189},{370,174,162,133,195,179,188,189,163,198},{370,162,197,198,174,188,153,163,174,175},{375,173,172,172,171,188,189,164,178,175},{368,171,172,171,198,170,176,178,175,181},{361,162,175,195,181,186,187,175,166,175},{362,172,166,184,179,168,191,188,187,169},{374,173,172,172,165,164,195,192,185,177},{388,183,180,177,169,171,178,180,163,183},{362,188,191,174,156,194,179,168,193,169},{397,163,182,174,187,167,159,199,191,158},{365,180,186,174,203,172,198,163,161,178},{375,193,183,189,172,163,176,179,168,185},{369,160,186,198,200,166,145,186,185,191},{385,197,183,175,164,191,157,180,167,190},{397,186,189,163,159,178,194,166,180,180},{387,195,192,189,181,180,163,178,152,178},{385,176,179,182,198,162,181,192,171,172},{375,183,158,176,194,192,182,168,171,202},{371,168,179,198,189,184,163,176,182,194},{383,172,162,174,203,177,183,204,192,156},{357,177,179,191,172,184,192,207,187,163},{403,177,191,173,173,196,160,173,187,179},{379,180,196,206,183,177,180,158,160,196},{365,191,176,185,173,177,177,206,193,175},{376,189,197,194,170,176,164,175,182,198},{383,173,170,175,178,180,193,179,174,219},{382,177,195,180,209,174,176,180,188,166},{394,179,168,169,207,179,192,184,172,186},{406,187,194,168,199,176,195,159,178,171},{390,194,191,163,180,188,192,185,186,167},{384,186,165,169,188,210,191,203,163,179},{374,174,179,180,170,183,198,210,186,187},{393,193,176,172,191,198,204,168,175,174},{400,176,189,190,203,165,177,202,170,175},{393,163,188,190,170,180,197,199,179,191},{382,184,198,177,163,198,217,169,180,185},{385,174,189,169,210,190,176,187,174,202},{383,189,203,167,217,192,191,167,172,178},{391,179,187,184,185,199,160,213,206,158},{402,172,197,172,192,172,189,185,198,186},{372,189,204,191,193,168,185,191,171,204},{386,220,180,188,190,168,180,181,186,192},{382,175,172,183,195,181,200,198,173,214},{385,192,196,204,188,169,199,171,180,192},{389,192,166,217,199,191,183,170,192,180},{382,175,203,185,195,186,192,182,196,186},{388,179,184,188,190,188,192,234,165,177},{419,230,194,166,195,182,162,192,172,176},{383,192,178,193,188,190,197,203,167,200},{407,176,203,186,209,176,218,176,167,176},{391,211,191,172,205,200,183,183,187,174},{400,188,199,188,187,188,186,177,198,189},{397,161,204,194,186,194,177,195,198,197},{395,188,177,204,185,175,186,190,211,195},{396,184,189,195,209,179,195,184,197,181},{383,203,198,196,203,183,159,199,203,185},{401,213,184,204,194,181,180,199,181,177},{390,192,193,194,206,184,175,196,187,200},{400,205,204,174,178,182,201,181,199,196},{406,207,183,186,182,185,203,185,185,201},{402,218,178,191,177,188,186,202,186,198},{411,192,194,195,179,181,190,191,178,218},{390,197,203,210,178,209,189,186,206,164},{410,181,179,191,199,204,200,200,173,198},{380,208,199,172,191,208,229,191,192,168},{396,206,192,187,194,176,210,195,203,182},{383,216,199,201,186,189,195,194,187,194},{411,185,205,162,220,193,203,187,197,184},{423,166,220,173,184,194,174,208,210,198},{403,198,202,197,195,194,197,190,181,196},{392,211,165,194,213,185,219,200,196,180},{413,188,194,194,200,203,177,189,201,199},{398,195,194,199,182,183,209,195,195,211},{378,207,207,177,190,221,179,191,217,197},{436,197,185,190,191,168,224,194,187,195},{414,192,186,175,209,179,198,205,205,207},{417,201,177,197,214,174,184,215,207,187},{407,201,199,221,169,189,216,167,182,225},{411,187,181,187,206,208,194,191,201,213},{415,187,178,190,173,219,222,203,199,196},{393,194,203,191,200,197,200,211,190,206},{415,212,198,173,180,182,200,218,218,192},{421,185,197,210,202,195,203,213,175,190},{394,195,220,208,196,213,178,215,173,202},{411,214,189,193,203,183,202,193,214,195},{419,201,182,201,186,218,205,199,198,191},{429,208,203,178,177,186,192,211,204,215},{434,199,202,211,193,179,199,213,206,169},{431,180,211,196,196,208,196,205,189,196},{415,197,183,203,180,206,216,208,211,192},{411,184,206,198,223,219,196,178,217,182},{421,186,202,188,217,173,223,191,189,227},{407,208,210,210,179,227,201,192,187,199},{423,189,212,227,207,195,206,191,189,184},{420,198,201,191,200,202,198,204,208,204},{410,162,225,225,185,202,213,189,211,207},{428,185,190,190,224,217,199,202,198,199},{401,204,205,214,211,217,184,196,216,187},{450,204,213,200,191,206,189,208,196,181},{413,228,214,198,185,201,172,214,215,201},{412,218,193,202,211,220,199,197,201,191},{439,214,203,210,221,178,191,223,178,190},{430,184,202,223,202,206,224,184,219,176},{435,211,180,207,200,200,212,198,214,196},{431,213,182,198,172,222,220,239,184,195},{448,193,203,210,190,185,195,228,208,199},{433,199,218,210,192,215,207,192,204,191},{415,232,202,180,203,211,197,195,235,194},{416,200,206,234,213,213,202,201,198,184},{422,193,215,204,205,186,209,213,213,210},{443,203,203,194,200,215,200,212,215,188},{432,203,186,213,219,194,184,210,225,210},{434,218,208,231,195,196,194,192,213,198},{442,216,232,190,210,195,198,196,207,196},{419,214,189,206,216,201,197,210,214,219},{475,202,192,207,170,212,209,198,241,182},{405,208,204,225,220,211,216,175,221,206},{439,191,182,233,226,191,215,204,215,198},{440,190,192,203,211,208,207,195,247,204},{442,210,212,225,214,187,219,213,181,197},{435,234,194,236,209,213,206,192,186,198},{423,211,197,213,202,205,216,215,217,207},{418,229,213,216,240,202,205,187,205,194},{412,224,207,210,210,207,210,204,215,213},{409,209,217,222,204,205,200,233,221,195},{431,197,215,214,174,211,214,224,211,227},{437,211,220,193,231,200,210,218,189,212},{443,208,218,207,204,206,211,216,192,219},{436,215,211,212,215,190,201,196,243,208},{439,215,215,219,206,221,181,195,210,229},{426,208,213,225,209,204,199,226,217,205},{462,198,217,196,199,220,210,212,199,222},{421,205,192,226,210,229,200,202,241,212},{456,192,229,215,210,184,226,216,208,205},{409,208,247,213,204,212,225,204,199,223},{440,226,195,200,212,222,221,212,197,222},{444,211,195,208,218,220,194,226,219,215},{435,225,221,205,223,182,213,221,212,216},{441,229,208,237,188,226,181,221,219,206},{441,198,208,241,208,197,205,214,230,217},{445,224,212,215,205,202,215,227,206,211},{424,216,208,218,206,235,220,216,213,209},{454,218,211,223,213,198,216,205,212,218},{435,208,219,236,201,190,213,227,215,227},{455,177,199,232,259,204,216,220,205,207},{424,231,224,209,211,212,213,196,244,213},{446,203,204,216,221,205,230,219,204,232},{454,223,203,213,211,202,238,221,202,216},{448,212,222,200,204,218,222,203,218,239},{445,243,209,204,206,218,213,197,201,253},{453,230,216,210,236,230,211,194,205,207},{446,221,237,224,212,202,210,231,198,214},{453,205,197,225,224,220,238,214,220,202},{448,233,232,222,197,195,201,243,219,211},{437,228,213,241,207,213,233,215,224,193},{445,244,215,196,220,217,219,249,227,175},{474,213,233,226,226,207,231,190,198,212},{445,220,221,238,216,215,196,216,225,221},{472,233,206,211,226,208,223,195,219,223},{458,232,230,207,222,227,219,199,229,196},{445,211,209,213,223,240,191,236,209,245},{448,214,217,230,238,213,223,213,190,239},{462,197,239,222,235,212,217,230,205,209},{450,237,222,217,228,203,224,227,216,207},{443,211,218,231,231,201,224,234,230,211},{463,206,214,212,221,224,235,208,227,227},{468,224,203,208,198,233,230,256,209,211},{456,218,241,193,217,233,228,198,243,215},{447,225,225,213,226,217,231,222,213,226},{460,228,194,226,233,219,218,250,205,215},{464,239,199,240,198,208,218,212,239,234},{453,238,211,223,222,242,226,215,204,220},{451,212,224,253,205,221,213,205,243,230},{481,212,204,190,235,210,231,237,240,220},{456,240,202,204,227,227,227,249,203,228},{462,234,259,230,200,204,227,213,220,217},{467,222,221,209,190,239,234,241,235,211},{459,196,225,247,211,245,229,184,259,217},{471,246,212,205,206,229,222,216,221,247},{461,200,233,225,226,232,235,226,223,217},{463,263,224,244,233,213,227,213,191,210},{469,240,215,221,229,215,227,211,223,234},{451,230,200,227,219,235,240,205,243,237},{469,227,229,240,225,224,200,226,222,228},{440,201,233,229,265,230,224,221,227,223},{460,231,230,246,226,259,207,209,195,233},{469,230,229,228,249,215,214,221,217,227},{481,221,219,224,228,230,232,198,213,256},{456,208,220,238,229,224,221,231,230,248},{464,235,238,235,219,222,215,223,232,225},{446,213,225,247,233,264,208,209,220,246},{451,205,229,227,243,234,224,225,231,245},{473,253,232,246,222,206,227,233,201,224},{483,221,222,231,228,222,209,222,230,252},{488,235,244,227,198,240,230,226,220,215},{492,234,216,232,210,203,224,244,212,259},{478,239,215,240,239,233,211,197,242,235},{490,225,217,211,229,227,255,236,216,226},{457,220,233,258,241,216,240,210,222,238},{474,205,251,230,222,214,229,221,237,255},{486,241,228,240,217,220,196,231,229,253},{467,239,220,248,237,231,232,213,226,231},{498,218,246,210,259,201,220,229,247,219},{459,239,245,194,230,229,229,223,245,257},{496,224,210,239,230,218,230,232,246,228},{483,242,245,219,216,236,248,227,237,203},{478,239,225,237,235,232,236,214,213,250},{466,243,247,252,236,221,209,229,243,216},{469,239,248,216,229,213,231,217,257,246},{472,239,248,216,229,213,231,217,257,246}};
int main()
{
	int m,a,b;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		cout<<n[--a][b]<<endl;
	}
}