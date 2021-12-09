const uint8_t sun[6][16][16][3] = {
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0}},
  {{0,0,0},{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 },
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20}},
  {{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{0,0,0},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{0,0,0}},
  {{0,0,0},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{0,0,0}},
  {{0,0,0},{0,0,0},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 },
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 },
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20}},
  {{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19}},
  {{0,0,0},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{0,0,0}},
  {{0,0,0},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{0,0,0}},
  {{0,0,0},{0,0,0},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{78,20,88},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 },
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{0,0,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{0,0,0}},
  {{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0},{255,234,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0}},
  {{0,0,0},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{235,0,121},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{156,39,176},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 },
 {
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{0,0,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{0,0,0}},
  {{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0},{255,233,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0},{255,143,0}},
  {{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19},{120,19,19}},
  {{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39},{240,39,39}},
  {{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20},{120,20,20}},
  {{0,0,0},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{117,0,60},{0,0,0}},
  {{0,0,0},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{235,0,122},{0,0,0}},
  {{0,0,0},{0,0,0},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{118,0,61},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{78,19,88},{0,0,0},{0,0,0},{0,0,0}},
  {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{155,39,175},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}
 }
};