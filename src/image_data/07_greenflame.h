const uint8_t greenflame[11][16][16][3] = {
 {
  {{66,86,81},{68,87,81},{68,87,81},{66,86,81},{65,85,77},{64,85,69},{65,86,72},{68,84,74},{128,180,120},{60,81,68},{60,81,68},{64,80,69},{57,76,65},{60,74,70},{54,68,64},{59,70,67}},
  {{72,92,88},{67,90,82},{66,86,81},{67,90,82},{66,93,76},{66,93,76},{67,90,82},{66,93,76},{69,106,82},{64,85,69},{60,81,68},{60,81,68},{60,77,65},{58,73,64},{56,70,61},{54,65,61}},
  {{67,90,82},{66,93,76},{66,93,76},{66,93,76},{66,93,76},{66,93,76},{66,93,76},{77,201,82},{70,154,74},{66,93,76},{60,81,68},{58,81,65},{63,79,68},{58,73,64},{58,73,64},{53,68,60}},
  {{75,102,101},{68,99,82},{68,99,82},{68,99,82},{65,99,73},{69,106,82},{63,107,74},{90,229,97},{86,187,90},{65,99,73},{65,93,69},{62,90,68},{62,86,70},{63,79,68},{57,76,65},{57,73,62}},
  {{75,102,101},{68,99,82},{68,99,82},{72,109,85},{67,109,76},{69,114,83},{120,244,118},{114,236,101},{114,236,101},{61,105,67},{65,99,73},{65,99,73},{61,89,66},{65,86,72},{57,76,65},{57,73,62}},
  {{75,102,101},{72,109,85},{75,117,93},{74,118,83},{74,118,83},{101,154,94},{141,246,115},{141,246,115},{115,201,99},{67,109,76},{64,99,69},{65,99,73},{61,89,66},{61,85,65},{60,81,68},{57,73,62}},
  {{74,112,106},{76,117,100},{74,123,83},{74,123,83},{74,123,83},{98,166,93},{157,246,123},{157,246,123},{125,204,109},{66,114,75},{67,109,76},{62,101,68},{65,99,73},{61,89,66},{61,85,65},{58,81,65}},
  {{76,122,100},{75,117,93},{74,123,83},{75,132,83},{83,134,84},{115,201,99},{157,246,123},{163,247,123},{143,222,113},{70,129,77},{66,114,75},{61,105,67},{64,99,69},{65,99,73},{61,85,65},{58,81,65}},
  {{76,117,100},{76,122,100},{77,130,90},{76,137,88},{79,145,85},{109,189,91},{157,246,123},{186,246,141},{234,255,206},{83,140,85},{69,123,75},{64,108,69},{62,101,68},{65,93,69},{61,85,65},{61,85,65}},
  {{76,122,100},{77,129,96},{77,130,90},{79,145,85},{79,162,78},{139,206,122},{244,254,229},{244,254,229},{244,254,229},{98,166,93},{69,137,73},{66,114,75},{61,105,67},{65,99,73},{65,93,69},{65,93,69}},
  {{78,123,105},{77,129,96},{83,140,85},{84,154,84},{90,179,89},{211,250,182},{244,254,229},{246,254,235},{244,254,229},{172,241,145},{76,148,78},{101,199,100},{61,105,67},{64,99,69},{61,92,68},{61,85,65}},
  {{76,122,100},{77,130,90},{76,137,88},{81,163,83},{205,247,167},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{179,246,137},{167,248,125},{59,122,64},{64,99,69},{58,89,64},{61,85,65}},
  {{76,122,100},{74,123,83},{75,132,83},{79,162,78},{179,246,137},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{173,251,131},{59,122,64},{64,99,69},{61,89,66},{61,85,65}},
  {{75,117,93},{74,123,83},{75,138,84},{79,162,78},{86,187,90},{237,255,218},{244,254,229},{244,254,229},{244,254,229},{244,254,229},{167,248,125},{143,222,113},{61,115,67},{64,99,69},{58,89,64},{61,85,65}},
  {{69,114,83},{69,114,83},{75,132,83},{76,148,78},{82,159,74},{155,228,130},{244,254,229},{244,254,229},{244,254,229},{205,247,167},{103,189,85},{73,142,71},{66,114,75},{56,88,62},{58,83,62},{58,81,65}},
  {{69,106,82},{66,114,75},{66,114,75},{69,134,69},{67,146,73},{66,157,66},{194,252,152},{173,251,131},{167,248,125},{58,141,51},{53,123,59},{61,115,67},{61,115,67},{58,83,62},{58,83,62},{58,83,62}}
 },
 {
  {{71,91,85},{70,97,85},{68,94,81},{68,94,81},{65,92,78},{65,92,78},{65,92,78},{62,97,66},{72,168,77},{71,92,78},{64,85,72},{61,82,68},{59,80,68},{62,79,67},{56,73,61},{59,73,64}},
  {{71,92,78},{72,94,84},{69,98,83},{70,97,85},{66,99,74},{66,107,74},{73,108,76},{92,187,92},{83,204,89},{66,99,74},{65,93,72},{65,89,72},{64,85,70},{58,84,64},{58,78,65},{54,72,60}},
  {{67,102,85},{67,99,84},{67,102,83},{68,106,83},{68,106,83},{68,106,83},{78,142,85},{94,228,100},{94,228,100},{76,155,84},{66,99,74},{65,93,72},{65,94,69},{65,89,72},{61,82,68},{62,79,67}},
  {{75,109,99},{68,106,83},{72,110,85},{72,110,85},{66,107,74},{69,115,80},{89,176,84},{112,245,101},{120,244,105},{120,244,105},{66,107,74},{66,99,74},{66,99,74},{61,90,67},{61,82,68},{58,78,65}},
  {{78,107,104},{73,118,83},{69,115,80},{73,118,83},{73,118,83},{78,126,77},{144,244,112},{141,241,109},{141,241,109},{60,102,76},{66,106,70},{66,99,74},{66,99,74},{61,90,67},{58,84,64},{61,82,68}},
  {{75,115,106},{74,119,90},{76,124,85},{73,118,83},{76,124,85},{76,144,78},{155,249,121},{155,249,121},{155,249,121},{69,120,74},{66,115,74},{66,107,74},{65,99,70},{65,99,70},{61,90,67},{58,84,64}},
  {{77,118,98},{76,124,85},{76,124,85},{76,132,85},{76,132,85},{80,164,75},{157,242,130},{164,249,129},{157,242,130},{75,134,78},{66,115,74},{66,107,74},{66,106,70},{65,99,70},{66,99,74},{61,90,67}},
  {{77,124,100},{76,124,85},{76,132,85},{76,132,85},{78,142,85},{114,217,110},{155,249,121},{155,249,121},{190,249,154},{190,249,154},{66,128,75},{66,115,74},{66,115,74},{66,106,70},{62,96,70},{61,90,67}},
  {{78,123,104},{76,132,85},{76,132,85},{78,142,85},{76,155,84},{101,184,91},{224,252,199},{242,254,221},{236,255,219},{248,252,230},{77,153,77},{69,120,74},{66,115,74},{65,99,70},{65,99,70},{61,90,67}},
  {{77,124,100},{78,132,90},{78,142,85},{84,152,84},{89,176,84},{190,249,154},{248,252,230},{248,252,230},{248,252,230},{248,252,230},{157,242,130},{92,187,92},{60,136,64},{66,106,70},{65,99,70},{61,90,67}},
  {{77,124,100},{78,132,90},{78,142,85},{78,162,82},{92,187,92},{236,255,219},{245,253,228},{245,253,228},{248,252,230},{248,252,230},{232,255,212},{141,214,121},{80,149,63},{73,108,76},{65,99,70},{65,99,70}},
  {{77,124,100},{78,132,90},{78,142,85},{83,166,82},{196,250,158},{248,252,230},{248,252,230},{248,252,230},{248,252,230},{248,252,230},{232,255,212},{171,251,130},{171,251,130},{60,118,66},{65,99,70},{61,90,67}},
  {{77,124,100},{78,132,90},{76,144,78},{78,162,82},{169,244,136},{242,254,221},{248,252,230},{248,252,230},{248,252,230},{242,254,221},{245,253,228},{195,248,165},{157,242,130},{54,113,64},{65,99,70},{61,90,67}},
  {{74,119,90},{76,124,85},{78,142,85},{78,162,82},{81,183,88},{224,252,199},{248,252,230},{248,252,230},{245,253,228},{245,253,228},{236,255,219},{155,249,121},{66,145,59},{66,123,69},{66,99,74},{61,90,67}},
  {{69,115,80},{69,115,80},{66,128,75},{69,146,75},{78,162,82},{101,199,89},{220,250,203},{245,253,228},{245,253,228},{248,252,230},{181,250,137},{63,151,66},{60,126,68},{61,110,69},{57,84,61},{54,81,58}},
  {{72,110,85},{69,115,80},{66,115,74},{69,137,73},{69,146,75},{62,157,71},{141,214,121},{171,251,130},{164,249,129},{181,250,137},{49,130,54},{66,123,69},{64,114,68},{51,102,62},{57,84,61},{57,84,61}}
 },
 {
  {{72,95,85},{65,92,78},{70,99,84},{64,92,74},{66,96,81},{62,92,75},{67,100,75},{65,99,69},{60,115,65},{72,162,73},{58,86,68},{60,82,66},{60,77,65},{57,78,65},{58,74,64},{57,73,62}},
  {{68,95,82},{66,96,81},{68,95,82},{75,109,83},{67,100,75},{75,109,83},{67,107,75},{79,163,82},{87,213,90},{87,213,90},{67,100,75},{64,92,69},{61,91,67},{63,79,68},{60,77,65},{60,77,65}},
  {{70,97,83},{62,92,75},{67,100,75},{67,107,81},{72,114,84},{67,107,75},{101,187,107},{92,232,95},{92,232,95},{92,232,95},{67,100,75},{64,92,69},{64,92,69},{61,85,68},{64,83,68},{57,78,65}},
  {{70,105,90},{75,115,92},{67,107,75},{72,114,84},{77,118,79},{72,114,84},{67,123,70},{132,248,117},{109,244,103},{109,244,103},{95,197,103},{67,100,75},{67,100,75},{61,91,67},{58,82,65},{60,81,68}},
  {{72,106,96},{70,115,84},{72,114,84},{95,197,103},{71,118,91},{82,123,88},{75,131,85},{86,181,82},{179,248,166},{161,239,131},{68,116,76},{64,106,67},{65,99,69},{61,91,67},{64,92,69},{61,85,68}},
  {{77,118,101},{78,124,90},{74,122,85},{114,227,107},{80,132,82},{75,131,85},{80,132,82},{106,229,104},{153,245,122},{68,125,80},{68,116,76},{67,107,75},{65,99,69},{65,99,69},{61,91,67},{64,92,69}},
  {{75,115,92},{74,122,85},{75,131,85},{75,131,85},{90,157,81},{90,157,81},{97,159,85},{192,249,145},{174,247,139},{67,123,70},{68,116,76},{63,110,74},{62,101,74},{62,99,67},{67,100,75},{58,86,68}},
  {{76,121,102},{80,129,90},{75,131,85},{78,140,84},{96,171,93},{124,202,101},{192,249,145},{235,255,194},{235,255,194},{130,205,104},{67,123,73},{67,123,73},{67,123,73},{62,99,67},{61,91,67},{61,91,67}},
  {{76,128,100},{75,131,85},{78,140,84},{78,140,84},{81,151,85},{131,196,118},{248,253,212},{237,248,227},{245,254,218},{227,254,210},{96,186,91},{64,141,69},{153,245,122},{65,99,69},{65,99,69},{61,91,67}},
  {{78,129,110},{75,131,85},{78,140,84},{76,147,82},{83,169,82},{146,211,133},{246,253,227},{237,248,227},{246,253,227},{246,253,227},{226,251,197},{180,255,136},{146,251,118},{54,100,59},{65,99,69},{61,91,67}},
  {{76,128,100},{75,131,85},{76,147,82},{79,163,82},{200,251,159},{201,247,166},{245,253,233},{245,253,233},{245,253,233},{237,248,227},{237,248,227},{212,251,176},{155,251,124},{60,115,65},{62,99,67},{61,91,67}},
  {{78,124,90},{74,133,89},{76,147,82},{79,163,82},{200,251,159},{212,251,176},{245,253,233},{245,253,233},{245,253,233},{245,253,233},{237,248,227},{212,251,176},{155,251,124},{64,113,65},{65,99,69},{61,91,67}},
  {{74,122,85},{75,131,85},{81,151,85},{83,169,82},{151,245,131},{248,254,235},{245,253,233},{237,248,227},{245,253,233},{245,253,233},{237,248,227},{186,247,165},{68,133,73},{67,123,70},{62,99,67},{61,91,67}},
  {{74,122,85},{75,131,85},{76,147,82},{79,163,82},{99,210,104},{237,248,227},{245,253,233},{245,253,233},{245,253,233},{245,253,233},{237,248,227},{123,200,119},{67,131,68},{67,123,73},{67,100,75},{61,91,67}},
  {{70,115,84},{68,116,76},{62,128,68},{70,153,73},{96,186,91},{213,244,188},{237,248,227},{237,248,227},{237,248,227},{237,248,227},{188,229,176},{64,141,69},{61,120,63},{64,106,67},{61,91,67},{56,83,61}},
  {{72,114,84},{68,116,76},{61,120,63},{64,141,69},{74,150,71},{71,194,78},{227,254,210},{245,253,233},{245,253,233},{237,248,227},{57,141,64},{61,122,68},{60,115,65},{57,102,62},{61,91,67},{54,82,59}}
 },
 {
  {{68,93,86},{68,93,82},{67,90,83},{65,93,81},{68,92,76},{67,87,81},{72,93,78},{68,133,80},{66,131,75},{61,100,67},{60,84,67},{60,84,67},{61,78,69},{61,78,69},{56,74,62},{56,70,61}},
  {{68,93,86},{68,93,82},{65,93,81},{66,99,82},{66,98,75},{66,98,75},{92,196,85},{77,199,83},{75,183,76},{57,126,62},{66,85,70},{60,84,67},{61,78,69},{59,74,70},{56,74,62},{56,70,64}},
  {{66,99,82},{72,98,84},{66,98,75},{66,99,82},{68,109,75},{72,104,74},{91,227,93},{90,223,95},{90,223,95},{87,223,88},{62,132,73},{68,92,76},{60,84,67},{60,84,67},{60,78,66},{56,74,62}},
  {{67,102,92},{70,108,84},{71,118,82},{71,118,82},{75,123,83},{122,236,107},{122,236,107},{109,240,100},{109,240,100},{109,240,100},{67,114,74},{66,98,75},{64,92,70},{60,84,67},{60,84,67},{57,78,65}},
  {{71,107,101},{70,108,84},{71,118,82},{71,118,82},{75,131,86},{216,252,198},{141,245,118},{135,246,107},{135,246,107},{86,173,81},{65,102,70},{65,102,70},{61,92,67},{66,98,75},{60,84,67},{57,78,65}},
  {{74,114,100},{71,118,82},{71,118,82},{75,123,83},{81,163,89},{153,244,115},{153,244,115},{153,244,115},{139,228,115},{67,114,74},{65,106,68},{61,100,67},{61,100,67},{64,92,70},{60,84,67},{60,84,67}},
  {{76,117,108},{78,126,89},{78,126,89},{75,131,86},{112,182,99},{153,244,115},{165,248,131},{159,250,121},{146,223,124},{69,123,76},{67,114,74},{65,106,68},{61,100,67},{66,98,75},{61,92,67},{60,84,67}},
  {{70,121,93},{75,123,83},{77,138,85},{86,155,83},{165,248,131},{165,248,131},{172,252,128},{165,248,131},{183,246,147},{96,177,84},{69,123,76},{68,109,75},{65,106,68},{61,100,67},{60,84,67},{60,84,67}},
  {{76,125,103},{78,131,88},{76,137,88},{82,151,88},{99,184,87},{139,236,118},{217,250,179},{227,252,197},{242,254,216},{227,252,197},{126,203,104},{112,182,99},{68,109,75},{61,100,67},{61,92,67},{64,92,70}},
  {{77,129,108},{77,138,85},{77,138,85},{109,230,102},{146,223,124},{227,252,197},{245,253,230},{245,253,230},{245,253,230},{184,246,152},{172,252,128},{192,247,153},{67,114,74},{65,102,70},{61,92,67},{61,92,67}},
  {{76,130,102},{76,137,88},{86,155,83},{183,246,147},{182,253,140},{245,253,234},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{165,248,131},{165,248,131},{64,120,69},{61,100,67},{61,92,67},{61,92,67}},
  {{76,130,102},{77,138,85},{86,155,83},{182,253,140},{192,247,153},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{229,255,189},{192,247,153},{77,138,85},{65,102,70},{60,92,62},{64,92,70}},
  {{75,131,86},{78,131,88},{73,158,77},{165,248,131},{217,250,179},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{183,246,147},{165,248,131},{60,123,67},{61,100,67},{61,92,67},{60,84,67}},
  {{75,123,83},{75,131,86},{81,157,90},{82,186,82},{180,242,162},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{183,246,147},{65,141,69},{69,123,76},{61,100,67},{61,92,67},{60,84,67}},
  {{72,118,83},{69,123,76},{76,144,80},{73,158,77},{75,183,76},{240,244,234},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{55,143,62},{60,123,67},{60,116,66},{60,92,62},{57,84,61},{57,84,61}},
  {{67,114,74},{67,114,74},{66,131,75},{65,141,69},{66,150,70},{78,181,85},{245,253,230},{245,253,234},{245,253,230},{86,155,83},{57,126,62},{57,118,61},{62,108,66},{54,82,60},{54,82,60},{54,82,60}}
 },
 {
  {{72,93,87},{67,92,85},{69,91,82},{69,97,81},{69,92,80},{65,89,71},{69,91,82},{66,119,69},{64,85,72},{64,85,72},{61,82,70},{62,77,69},{62,77,69},{56,73,62},{53,68,58},{56,70,64}},
  {{67,92,85},{60,93,76},{72,93,87},{67,91,76},{60,93,76},{65,100,73},{57,102,62},{83,185,82},{67,91,76},{64,89,67},{61,82,70},{58,77,65},{62,77,69},{56,73,62},{58,74,64},{56,70,64}},
  {{69,97,81},{61,97,80},{73,101,81},{67,108,81},{66,108,76},{71,174,76},{98,225,101},{88,224,89},{88,224,89},{64,100,69},{60,90,66},{67,91,76},{64,86,68},{60,77,66},{60,77,66},{56,69,60}},
  {{73,101,91},{72,104,89},{66,108,76},{79,119,90},{71,118,82},{123,243,105},{108,240,101},{108,240,101},{108,240,101},{108,240,101},{98,231,90},{76,165,74},{64,92,70},{61,82,70},{60,77,66},{56,73,62}},
  {{70,105,94},{67,108,81},{74,118,84},{76,124,83},{68,122,77},{147,250,115},{136,244,106},{123,243,105},{136,244,106},{136,244,106},{80,176,79},{69,123,68},{60,90,66},{60,90,66},{59,83,65},{58,77,65}},
  {{76,116,105},{74,118,84},{74,118,84},{76,124,83},{145,249,133},{155,249,115},{153,244,121},{147,250,115},{147,250,115},{153,244,121},{65,115,73},{64,100,69},{65,100,73},{58,86,64},{65,89,71},{61,82,67}},
  {{75,123,99},{76,123,89},{76,124,83},{85,195,98},{162,245,126},{162,245,126},{208,248,180},{162,245,126},{153,244,121},{162,245,126},{66,108,76},{66,108,70},{65,100,73},{65,100,73},{58,86,64},{59,83,65}},
  {{75,123,99},{76,124,83},{75,137,86},{152,231,128},{176,247,134},{176,247,134},{162,245,126},{170,247,119},{176,247,134},{153,244,121},{138,204,109},{66,108,70},{64,100,69},{65,100,73},{60,90,66},{59,83,65}},
  {{75,123,99},{79,135,92},{79,145,90},{179,244,149},{176,247,134},{176,247,134},{176,247,134},{199,255,162},{202,254,153},{176,247,134},{162,245,126},{128,199,102},{60,107,66},{65,100,73},{60,90,66},{59,83,65}},
  {{77,130,101},{75,137,86},{78,155,84},{176,247,134},{184,251,142},{248,253,230},{238,255,216},{227,255,202},{242,255,220},{238,255,216},{208,248,180},{153,244,121},{59,98,66},{64,100,69},{60,90,66},{57,84,61}},
  {{77,130,101},{75,137,86},{98,173,95},{215,251,164},{248,253,230},{248,253,230},{233,255,209},{227,255,202},{248,253,230},{238,255,216},{227,255,202},{114,217,97},{66,108,70},{59,98,66},{60,90,66},{60,90,66}},
  {{76,131,86},{75,137,86},{94,179,92},{191,250,153},{244,255,229},{248,253,230},{244,255,229},{248,253,230},{248,253,230},{244,255,229},{144,241,113},{76,165,74},{66,108,70},{64,100,69},{60,90,66},{57,84,61}},
  {{76,124,83},{75,137,86},{94,179,92},{184,251,142},{244,255,229},{248,253,230},{248,253,230},{248,253,230},{248,253,230},{248,253,230},{148,216,123},{66,134,70},{68,122,77},{64,100,69},{58,86,64},{57,84,61}},
  {{76,123,89},{70,134,80},{78,155,84},{93,190,85},{244,255,229},{248,253,230},{248,253,230},{248,253,230},{244,255,229},{244,255,229},{148,216,123},{61,126,69},{68,122,77},{65,100,73},{60,90,66},{59,83,65}},
  {{71,118,82},{68,122,77},{74,149,77},{75,161,81},{176,247,134},{255,252,242},{244,255,229},{244,255,229},{244,255,229},{176,247,134},{61,126,69},{61,126,69},{64,100,69},{53,89,60},{58,86,64},{53,76,59}},
  {{67,108,81},{61,112,69},{66,134,70},{64,143,72},{63,154,67},{63,154,67},{182,252,138},{182,252,138},{176,247,134},{58,135,65},{55,120,60},{60,107,66},{59,98,66},{57,84,61},{57,84,61},{56,78,61}}
 },
 {
  {{70,99,85},{73,99,86},{71,104,82},{66,102,80},{66,105,80},{78,112,81},{70,104,78},{91,227,95},{94,184,89},{66,99,74},{65,93,74},{62,90,68},{65,93,74},{62,83,68},{65,81,73},{56,76,62}},
  {{69,101,85},{71,104,82},{66,105,80},{70,110,82},{70,110,82},{62,109,67},{61,98,67},{96,237,97},{111,233,97},{85,186,89},{64,106,68},{64,100,69},{65,93,74},{62,90,68},{57,76,64},{57,76,64}},
  {{73,110,88},{73,110,88},{76,116,87},{73,117,82},{73,117,82},{65,133,81},{168,245,149},{131,246,110},{126,241,102},{126,241,102},{66,113,69},{66,99,74},{66,99,74},{62,90,68},{62,90,68},{56,76,62}},
  {{71,112,92},{70,110,82},{73,117,82},{73,117,82},{69,120,75},{73,130,78},{141,248,110},{138,246,108},{138,246,108},{138,246,108},{66,113,69},{64,100,69},{64,100,69},{64,100,69},{65,90,68},{63,87,69}},
  {{78,119,99},{77,121,92},{75,125,84},{77,131,84},{77,131,84},{162,240,134},{164,249,119},{157,249,123},{157,249,123},{157,249,123},{75,123,77},{64,106,68},{61,98,67},{60,92,65},{65,94,70},{56,84,61}},
  {{77,121,92},{75,125,84},{77,131,84},{90,177,95},{171,253,132},{164,249,119},{164,250,122},{164,250,122},{164,249,119},{164,249,119},{69,129,73},{67,115,74},{64,100,69},{61,98,67},{60,92,65},{60,88,66}},
  {{76,125,97},{77,131,84},{73,151,78},{164,250,122},{179,252,132},{179,252,132},{179,252,132},{164,249,119},{164,250,122},{164,250,122},{72,140,69},{67,115,74},{64,106,68},{61,98,67},{62,93,68},{58,87,69}},
  {{78,129,99},{68,138,74},{96,192,96},{165,234,136},{179,252,132},{179,252,132},{179,252,132},{246,252,226},{246,252,226},{215,252,176},{89,169,79},{55,119,66},{64,106,68},{61,98,67},{61,98,67},{57,84,65}},
  {{76,125,97},{76,131,88},{80,145,85},{85,168,87},{124,238,112},{186,251,139},{186,251,139},{246,252,226},{246,252,226},{246,252,226},{186,251,139},{186,251,139},{67,115,74},{64,100,69},{57,91,61},{66,99,74}},
  {{78,129,99},{81,139,87},{90,165,83},{107,186,98},{162,240,134},{246,252,233},{246,252,233},{248,253,234},{246,252,233},{246,252,233},{197,253,153},{90,165,83},{73,130,78},{64,100,69},{61,98,67},{58,88,64}},
  {{76,131,88},{81,139,87},{90,165,83},{207,240,196},{246,252,226},{246,252,226},{246,252,233},{246,252,233},{246,252,233},{246,252,226},{246,252,226},{179,252,132},{66,128,68},{64,100,69},{57,91,61},{54,84,60}},
  {{75,125,84},{81,139,87},{90,165,83},{207,240,196},{246,252,226},{246,252,226},{246,252,233},{246,252,233},{246,252,233},{246,252,226},{246,252,226},{179,252,132},{66,128,68},{67,115,74},{61,98,67},{56,84,61}},
  {{71,121,84},{77,131,84},{78,162,79},{168,230,138},{246,252,226},{246,252,226},{246,252,233},{246,252,226},{246,252,226},{246,252,226},{186,251,139},{87,231,80},{61,120,68},{62,109,67},{60,92,65},{56,84,61}},
  {{73,117,82},{75,125,84},{78,146,81},{82,158,82},{248,253,234},{246,252,233},{248,253,234},{246,252,233},{241,255,218},{197,253,153},{179,252,132},{58,127,63},{61,115,69},{61,98,67},{62,93,68},{57,84,65}},
  {{67,111,80},{67,115,74},{68,138,74},{72,140,69},{61,161,66},{197,253,153},{170,253,124},{164,250,122},{164,250,122},{179,252,132},{97,229,79},{48,113,53},{61,115,69},{56,84,61},{58,88,64},{56,84,61}},
  {{63,107,77},{54,102,66},{53,101,62},{55,123,67},{58,127,63},{63,136,61},{50,131,59},{138,246,108},{185,252,133},{100,172,91},{50,114,60},{51,107,59},{61,98,67},{56,84,61},{54,84,60},{53,76,58}}
 },
 {
  {{70,93,81},{69,98,84},{67,99,76},{67,99,76},{67,99,76},{67,99,76},{65,100,69},{60,93,76},{73,202,84},{76,188,88},{65,92,70},{60,83,67},{60,83,67},{58,77,65},{58,77,65},{58,77,65}},
  {{66,95,81},{60,93,76},{75,99,83},{67,102,84},{73,110,85},{68,109,81},{140,235,112},{80,224,91},{80,224,91},{94,206,97},{58,90,62},{64,94,72},{60,91,67},{60,83,67},{60,83,67},{58,77,65}},
  {{65,101,82},{75,116,85},{67,99,76},{75,116,85},{75,116,85},{70,115,82},{75,116,85},{99,240,97},{110,241,101},{106,221,104},{67,99,76},{65,100,69},{67,99,76},{60,91,67},{60,83,67},{65,82,72}},
  {{73,110,85},{68,109,81},{75,116,85},{70,115,82},{70,115,82},{68,123,75},{105,182,100},{140,235,112},{131,246,107},{120,234,108},{65,105,73},{67,99,76},{61,98,66},{60,91,67},{60,91,67},{60,83,67}},
  {{70,115,82},{73,122,84},{75,116,85},{73,122,84},{135,196,121},{135,214,110},{150,255,117},{150,244,111},{138,242,112},{140,235,112},{62,124,70},{64,108,69},{61,98,66},{60,91,67},{60,91,67},{60,83,67}},
  {{77,118,98},{73,122,84},{80,127,89},{76,132,86},{164,240,132},{165,252,125},{165,252,125},{165,252,125},{138,242,112},{147,246,115},{84,155,84},{64,108,69},{61,98,66},{65,100,69},{60,91,67},{65,92,70}},
  {{75,126,98},{73,122,84},{76,132,86},{77,137,86},{78,146,84},{170,252,130},{165,252,125},{252,253,255},{202,250,141},{150,244,111},{170,252,130},{68,123,75},{65,105,73},{65,100,69},{61,98,66},{60,91,67}},
  {{77,130,97},{76,132,86},{82,141,89},{78,146,84},{84,155,84},{174,243,146},{170,252,130},{170,252,130},{233,255,186},{218,254,177},{165,252,125},{69,130,74},{67,116,74},{65,105,73},{65,100,69},{65,92,70}},
  {{77,130,97},{77,137,86},{80,145,89},{165,226,140},{184,252,139},{218,254,177},{236,253,202},{236,253,202},{236,253,202},{231,254,195},{194,250,155},{147,246,115},{61,115,68},{64,108,69},{65,100,69},{60,91,67}},
  {{77,130,97},{80,145,89},{79,157,84},{174,243,146},{210,251,166},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{233,253,209},{194,250,155},{165,252,125},{76,200,88},{65,100,69},{65,100,69},{60,91,67}},
  {{77,133,89},{77,137,86},{104,177,89},{195,251,147},{210,251,166},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{244,254,211},{153,230,130},{69,130,74},{64,108,69},{65,100,69},{60,91,67}},
  {{77,133,89},{77,137,86},{90,167,85},{194,250,155},{233,253,209},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{233,253,209},{89,169,79},{68,133,70},{59,105,65},{61,98,66},{58,90,62}},
  {{76,132,86},{78,146,84},{81,169,83},{174,243,146},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{174,243,146},{68,133,70},{61,115,68},{65,100,69},{64,94,72}},
  {{73,122,84},{78,146,84},{68,155,76},{80,183,79},{226,254,226},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{115,218,101},{62,124,70},{61,115,68},{65,100,69},{60,91,67}},
  {{73,122,84},{71,128,83},{71,149,76},{67,166,72},{182,244,150},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{245,253,230},{174,243,146},{58,147,61},{59,129,68},{53,97,62},{60,91,67},{60,91,67}},
  {{70,115,82},{67,116,74},{61,137,66},{67,146,69},{67,166,72},{170,252,130},{245,253,235},{245,253,230},{245,253,230},{216,255,204},{65,161,67},{59,129,68},{61,115,68},{58,90,62},{58,90,62},{54,82,59}}
 },
 {
  {{66,101,82},{70,108,85},{70,108,85},{72,110,84},{67,114,75},{66,122,75},{106,210,100},{109,235,98},{109,235,98},{57,114,65},{62,99,67},{65,100,73},{62,94,67},{64,92,72},{61,83,68},{61,83,68}},
  {{72,115,84},{70,108,85},{72,115,84},{72,115,84},{75,123,84},{121,187,110},{126,239,109},{126,239,109},{126,239,109},{126,239,109},{60,106,67},{61,107,60},{52,99,61},{64,99,69},{64,90,70},{64,90,70}},
  {{77,118,92},{69,116,82},{75,123,84},{75,123,84},{75,123,84},{74,130,84},{145,228,131},{144,249,110},{226,255,224},{132,245,113},{144,249,110},{146,241,121},{132,245,113},{62,99,67},{62,94,67},{64,92,72}},
  {{77,118,92},{80,121,86},{75,123,84},{75,123,84},{74,130,84},{91,169,91},{146,241,121},{150,240,118},{144,249,110},{136,243,109},{92,156,84},{67,114,75},{97,194,94},{65,100,73},{64,99,69},{62,94,67}},
  {{78,123,89},{78,123,89},{75,130,90},{74,130,84},{77,138,85},{134,212,124},{155,247,123},{150,240,118},{156,240,118},{151,242,110},{172,251,131},{72,117,79},{67,108,73},{60,106,67},{64,99,69},{62,94,67}},
  {{78,123,89},{81,132,90},{77,138,85},{97,166,89},{137,206,121},{173,239,137},{180,252,131},{186,252,139},{212,252,173},{186,252,139},{212,252,173},{109,189,94},{119,181,107},{83,163,84},{64,99,69},{62,99,67}},
  {{77,129,96},{77,138,85},{75,146,84},{123,208,103},{193,252,148},{225,252,188},{193,252,148},{180,252,131},{193,252,148},{225,252,188},{241,253,214},{171,252,123},{172,251,131},{91,169,91},{62,99,67},{64,99,69}},
  {{75,130,90},{77,137,88},{75,146,84},{124,204,98},{186,252,139},{225,252,188},{199,245,164},{180,252,131},{225,252,188},{244,253,229},{241,253,214},{172,251,131},{172,251,131},{97,194,94},{65,107,70},{62,99,67}},
  {{75,130,90},{77,137,88},{75,146,84},{167,212,144},{212,252,173},{229,253,206},{237,253,220},{237,253,220},{244,253,229},{244,253,229},{244,253,229},{172,251,131},{180,252,131},{71,136,73},{67,108,73},{62,94,67}},
  {{75,130,90},{77,138,85},{83,163,84},{135,215,113},{213,251,184},{238,254,229},{244,253,229},{244,253,229},{244,253,229},{241,253,214},{244,253,229},{238,254,229},{180,252,131},{70,132,75},{65,107,70},{64,99,69}},
  {{75,130,90},{77,138,85},{83,163,84},{135,215,113},{213,251,184},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{171,252,123},{69,129,68},{65,107,70},{62,99,67}},
  {{75,123,84},{77,138,85},{83,163,84},{135,215,113},{212,252,173},{238,254,229},{244,253,229},{244,253,229},{245,254,235},{244,253,229},{244,253,229},{244,253,229},{241,253,214},{61,133,67},{64,114,69},{62,94,67}},
  {{75,123,84},{74,130,84},{81,149,84},{81,183,86},{138,224,113},{229,253,206},{244,253,229},{244,253,229},{245,254,235},{244,253,229},{244,253,229},{244,253,229},{92,226,87},{69,129,68},{64,114,69},{62,94,67}},
  {{75,123,84},{75,123,84},{75,146,84},{67,150,71},{123,208,103},{237,253,220},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{244,253,229},{245,254,235},{67,150,71},{64,125,69},{52,99,61},{64,99,69}},
  {{67,114,75},{67,114,75},{70,132,75},{67,150,71},{67,150,71},{69,185,72},{216,255,203},{244,253,229},{244,253,229},{244,253,229},{245,254,235},{57,153,61},{61,133,67},{57,114,65},{57,92,62},{62,94,67}},
  {{63,106,76},{60,106,67},{55,110,68},{61,133,67},{61,133,67},{70,151,62},{59,162,71},{65,175,66},{120,246,113},{57,185,61},{40,148,53},{57,121,60},{53,121,65},{52,99,61},{57,92,62},{53,81,59}}
 },
 {
  {{66,93,80},{68,97,83},{67,100,79},{69,97,76},{62,94,73},{68,97,83},{81,194,85},{81,194,85},{77,191,80},{71,194,78},{53,96,61},{57,86,72},{58,76,65},{58,76,65},{58,76,65},{58,76,65}},
  {{66,98,84},{62,98,78},{69,101,83},{66,102,82},{72,108,83},{65,109,75},{92,222,91},{92,222,91},{92,222,91},{92,222,91},{92,222,91},{57,86,65},{64,93,70},{58,76,65},{60,81,69},{58,76,65}},
  {{69,101,85},{72,108,83},{68,108,81},{68,108,81},{73,116,83},{71,194,78},{108,235,101},{108,235,101},{108,235,101},{108,235,101},{59,107,61},{61,100,67},{64,93,70},{59,86,68},{58,76,65},{58,76,65}},
  {{75,114,90},{75,114,90},{73,116,83},{75,123,83},{76,131,85},{126,250,109},{130,243,113},{131,246,110},{130,243,113},{113,207,102},{67,114,75},{61,107,67},{68,100,74},{66,92,74},{66,92,74},{58,76,65}},
  {{75,114,90},{75,114,90},{73,116,83},{75,123,83},{164,246,129},{152,246,116},{152,246,116},{152,246,116},{136,247,108},{136,247,108},{124,212,103},{56,102,63},{65,99,69},{60,92,66},{59,86,68},{60,85,65}},
  {{76,116,102},{75,123,83},{76,131,85},{76,131,85},{170,247,132},{165,244,123},{157,248,117},{157,248,117},{152,246,116},{165,244,123},{152,246,116},{59,107,61},{65,99,69},{68,100,74},{60,92,66},{58,83,61}},
  {{76,121,94},{81,126,88},{76,131,85},{75,140,85},{170,247,132},{165,244,123},{168,245,126},{168,245,126},{160,249,122},{160,249,122},{157,248,117},{170,247,132},{80,174,82},{60,92,66},{60,92,66},{59,86,68}},
  {{80,131,103},{81,130,91},{81,138,89},{93,186,95},{181,251,138},{196,250,149},{181,251,138},{181,251,138},{196,250,149},{243,254,211},{243,254,211},{164,246,129},{59,107,61},{65,99,69},{60,92,66},{60,92,66}},
  {{77,129,98},{81,138,89},{84,163,84},{165,244,123},{181,251,138},{246,252,228},{181,251,138},{179,252,132},{196,250,149},{243,254,211},{181,251,138},{130,243,113},{67,114,75},{61,100,67},{65,99,69},{64,93,70}},
  {{77,129,98},{78,139,88},{92,164,83},{181,251,138},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{232,253,198},{170,247,132},{168,245,126},{61,107,67},{61,100,67},{61,100,67},{60,92,66}},
  {{77,129,98},{75,140,85},{100,178,89},{189,252,144},{225,255,186},{246,252,228},{246,252,228},{246,253,234},{246,252,228},{246,252,228},{189,252,144},{98,176,97},{75,132,74},{61,100,67},{65,99,69},{60,92,66}},
  {{75,129,91},{78,139,88},{92,164,83},{219,249,197},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{232,253,198},{168,245,126},{64,128,69},{64,105,69},{60,92,66},{60,92,66}},
  {{75,123,83},{81,144,90},{84,163,84},{171,233,144},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{112,183,93},{67,146,64},{68,133,75},{61,100,67},{60,92,66},{57,86,65}},
  {{75,123,83},{75,140,85},{82,152,81},{98,217,103},{187,252,142},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{246,252,228},{187,252,142},{52,123,59},{61,123,69},{53,96,61},{60,92,66},{55,82,64}},
  {{67,114,75},{67,122,77},{71,141,75},{73,147,76},{76,180,76},{179,252,132},{246,252,228},{246,252,228},{246,252,228},{212,254,171},{69,152,70},{61,123,69},{67,114,75},{61,100,67},{60,92,66},{60,85,65}},
  {{65,109,75},{65,109,75},{68,133,75},{66,141,70},{66,141,70},{77,185,77},{170,247,132},{170,247,132},{170,247,132},{112,183,93},{59,128,64},{60,118,66},{51,115,63},{60,92,66},{54,83,60},{58,83,61}}
 },
 {
  {{64,104,73},{64,104,73},{62,101,69},{69,96,82},{62,101,69},{69,96,82},{65,100,69},{62,101,69},{65,100,69},{62,101,69},{65,100,69},{62,101,69},{62,101,69},{62,91,69},{54,84,59},{54,84,59}},
  {{72,100,92},{67,109,82},{73,110,84},{67,109,82},{62,101,69},{74,118,83},{74,139,80},{131,245,106},{126,245,97},{70,158,73},{70,158,73},{61,101,65},{61,93,65},{62,91,69},{63,84,69},{56,78,62}},
  {{76,116,91},{76,116,91},{71,118,84},{71,118,84},{97,201,93},{151,243,119},{151,242,126},{189,249,163},{140,245,114},{136,239,116},{136,239,116},{146,234,121},{137,231,117},{61,93,65},{65,92,68},{60,88,66}},
  {{76,116,91},{74,118,83},{74,118,83},{79,137,88},{169,246,127},{151,243,119},{140,245,114},{156,247,121},{148,250,114},{140,245,114},{140,245,114},{140,245,114},{140,245,114},{64,97,69},{65,92,68},{60,88,66}},
  {{76,116,91},{75,123,85},{75,123,85},{76,129,84},{173,246,129},{156,247,121},{156,247,121},{156,247,121},{156,247,121},{156,247,121},{163,250,124},{156,247,121},{156,247,121},{65,100,69},{66,100,73},{60,88,66}},
  {{77,125,89},{75,123,85},{76,129,84},{101,214,99},{96,218,92},{174,251,137},{169,246,127},{169,246,127},{169,246,127},{173,246,129},{173,246,129},{163,250,124},{173,246,129},{62,101,69},{62,101,69},{58,93,65}},
  {{77,125,89},{76,129,84},{81,137,85},{74,139,80},{91,198,91},{174,251,137},{174,251,137},{174,251,137},{174,251,137},{237,253,206},{224,255,184},{68,129,67},{76,128,77},{60,108,66},{67,103,67},{64,97,69}},
  {{77,125,89},{82,133,87},{136,239,116},{189,253,145},{189,253,145},{189,253,145},{174,251,137},{179,245,145},{173,246,129},{245,253,228},{174,251,137},{74,139,80},{67,114,74},{104,227,102},{65,92,68},{65,100,69}},
  {{77,125,89},{78,144,89},{190,253,155},{190,253,155},{189,253,145},{245,253,228},{237,253,206},{237,253,206},{242,254,213},{245,253,228},{239,255,228},{101,214,99},{101,214,99},{148,250,114},{54,99,68},{65,100,69}},
  {{77,131,93},{79,137,88},{189,249,163},{186,253,138},{190,253,155},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{216,252,156},{71,152,82},{79,181,86},{140,245,114},{61,101,65},{65,100,69}},
  {{77,131,93},{79,137,88},{179,245,145},{189,253,145},{189,253,145},{245,253,228},{239,255,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{91,198,91},{174,251,137},{156,247,121},{62,101,69},{65,100,69}},
  {{80,127,89},{69,130,81},{69,150,74},{190,253,155},{131,245,106},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{244,254,234},{60,135,72},{58,116,65},{64,109,69},{66,100,73}},
  {{75,123,85},{74,139,80},{78,148,82},{104,227,102},{186,253,138},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{245,253,228},{173,246,129},{62,122,68},{60,108,66},{64,97,69}},
  {{74,118,83},{66,129,76},{78,148,82},{91,198,91},{189,253,145},{215,254,184},{239,255,228},{245,253,228},{245,253,228},{239,255,228},{245,253,228},{173,246,129},{66,129,76},{66,123,72},{60,108,66},{61,93,65}},
  {{66,109,77},{67,114,74},{70,138,73},{70,138,73},{156,247,121},{189,253,145},{169,246,127},{239,255,228},{239,255,228},{245,253,228},{174,251,137},{50,137,52},{62,119,62},{53,109,61},{46,88,52},{54,84,59}},
  {{60,108,66},{67,114,74},{68,129,67},{60,131,65},{60,131,65},{81,212,77},{189,253,145},{186,253,138},{186,253,138},{96,218,92},{60,131,65},{62,122,68},{58,116,65},{60,108,66},{53,89,57},{54,84,59}}
 },
 {
  {{68,99,81},{75,111,90},{68,99,81},{73,110,85},{73,110,85},{66,105,75},{74,108,77},{109,239,112},{101,227,100},{86,219,91},{96,202,95},{64,97,68},{65,93,73},{60,85,67},{60,85,67},{57,76,64}},
  {{73,114,85},{69,108,81},{73,110,85},{73,110,85},{68,112,77},{78,144,89},{153,247,117},{157,248,132},{119,245,100},{122,245,113},{119,245,100},{112,208,109},{64,97,68},{65,92,68},{60,85,67},{64,85,72}},
  {{73,110,85},{73,114,85},{73,114,85},{76,122,86},{142,214,127},{146,246,115},{146,246,115},{146,246,115},{146,246,115},{146,246,115},{146,246,115},{139,250,112},{135,220,117},{63,98,72},{60,85,67},{60,90,67}},
  {{71,116,82},{73,114,85},{76,122,86},{76,122,86},{153,219,135},{167,249,130},{160,248,125},{154,248,118},{153,247,117},{154,248,118},{154,248,118},{165,245,135},{152,214,124},{64,97,68},{60,90,67},{65,92,68}},
  {{76,118,91},{76,122,86},{76,122,86},{76,132,86},{74,138,75},{176,246,142},{167,249,130},{167,249,130},{167,249,130},{167,249,130},{165,232,142},{68,122,75},{72,121,77},{63,98,72},{64,97,68},{60,90,67}},
  {{77,124,89},{77,124,89},{76,132,86},{88,164,89},{135,220,117},{180,249,134},{180,249,134},{180,249,134},{171,251,130},{171,244,127},{68,122,75},{62,116,67},{65,108,70},{64,97,68},{63,98,72},{60,90,67}},
  {{77,124,89},{81,125,89},{83,153,85},{176,246,142},{193,251,155},{193,251,155},{179,245,145},{180,249,134},{211,252,167},{215,252,159},{121,191,105},{92,176,85},{105,186,93},{73,144,75},{62,97,69},{65,92,68}},
  {{81,125,89},{76,132,86},{88,164,89},{180,249,134},{193,251,155},{179,245,145},{235,253,212},{230,255,203},{235,253,212},{235,253,212},{176,246,142},{99,180,87},{100,188,88},{74,138,75},{63,98,72},{60,90,67}},
  {{77,124,89},{76,132,86},{101,173,90},{180,249,134},{180,249,134},{212,254,185},{249,253,229},{246,253,227},{246,253,227},{235,253,212},{212,254,185},{102,178,96},{66,136,72},{67,134,70},{64,97,68},{65,92,68}},
  {{77,124,89},{76,132,86},{76,169,81},{175,237,143},{179,245,145},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{175,240,166},{81,175,83},{68,122,75},{64,97,68},{65,93,73}},
  {{77,124,89},{76,132,86},{75,153,78},{175,237,143},{211,252,167},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{211,252,167},{159,228,132},{68,122,75},{62,97,69},{60,90,67}},
  {{76,122,86},{79,137,86},{75,153,78},{103,200,96},{214,250,196},{246,253,227},{249,253,229},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{195,251,170},{97,206,105},{62,116,67},{60,90,67},{60,90,67}},
  {{71,116,82},{76,132,86},{76,145,82},{124,229,111},{193,251,155},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{235,253,212},{152,214,124},{67,124,69},{62,116,67},{60,90,67},{60,85,67}},
  {{69,108,81},{68,112,77},{74,138,75},{73,144,75},{141,220,114},{235,253,212},{246,253,227},{246,253,227},{246,253,227},{246,253,227},{231,253,215},{75,153,78},{62,116,67},{65,108,70},{60,90,67},{58,83,61}},
  {{69,108,81},{66,105,75},{69,131,73},{67,134,70},{64,148,71},{165,245,135},{245,252,210},{249,253,229},{249,253,229},{235,253,212},{69,131,73},{62,116,67},{56,112,62},{61,104,67},{53,83,60},{58,83,61}},
  {{72,94,82},{72,94,82},{74,102,85},{68,99,81},{68,99,81},{63,98,72},{180,249,134},{180,249,134},{180,249,134},{86,211,88},{65,92,68},{60,90,67},{60,85,67},{60,85,67},{62,78,73},{56,74,62}}
 }
};