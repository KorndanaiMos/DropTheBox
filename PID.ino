void get_error_f_old() {
  if (s0 B && s1 B && s2 B && s3 B) {
    error = -100;
  }
  if (s0 B && s1 B && s2 B && s3 W) {
    error = -100;
  }
  if (s0 W && s1 B && s2 B && s3 B) {
    error = -100;
  }
  if (s0 W && s1 W && s2 W && s3 W) {
    error = 0;
  }
  if (s0 B && s1 W && s2 W && s3 W) {
    error = -3;
  }
  if (s0 B && s1 B && s2 W && s3 W) {
    error = -2;
  }
  if (s0 W && s1 B && s2 W && s3 W) {
    error = -1;
  }
  if (s0 W && s1 B && s2 B && s3 W) {
    error = 0;
  }
  if (s0 W && s1 W && s2 B && s3 W) {
    error = 1;
  }
  if (s0 W && s1 W && s2 B && s3 B) {
    error = 2;
  }
  if (s0 W && s1 W && s2 W && s3 B) {
    error = 3;
  }
}
void get_error_f() {
  if (s0 B && s1 B && s2 B && s3 B) {
    error = -100;
  }
  if (s0 B && s1 B && s2 B && s3 W) {
    error = -100;
  }
  if (s0 W && s1 W && s2 W && s3 W) {
    error = -100;
  }
  if (s0 W && s1 B && s2 B && s3 B) {
    error = -100;
  }
    if (s0 B && s1 W && s2 W && s3 W) {
    error = -3;
  }
  if (s0 B && s1 B && s2 W && s3 W) {
    error = -2;
  }
  if (s0 W && s1 B && s2 W && s3 W) {
    error = -1;
  }
  if (s0 W && s1 B && s2 B && s3 W) {
    error = 0;
  }
  if (s0 W && s1 W && s2 B && s3 W) {
    error = 1;
  }
  if (s0 W && s1 W && s2 B && s3 B) {
    error = 2;
  }
  if (s0 W && s1 W && s2 W && s3 B) {
    error = 3;
  }

}
void pd_ctrl_f() {
  float P = kp * error;
  float D = kd * (error - old_error);
  float PD_value = P + D;
  old_error = error;
  float spl = sp_int + PD_value;
  float spr = sp_int - PD_value;
  if (spl > 100) {
    spl = 100;
  } else if (spl < -100) {
    spl = -100;
  }
  if (spr > 100) {
    spr = 100;
  } else if (spr < -100) {
    spr = -100;
  }
  m_f(spl, spr);
}
void get_error_b() {
  if (s4 B && s5 B && s6 B && s7 B) {
    error_b = -100;
  }
  if (s4 B && s5 B && s6 B && s7 W) {
    error_b = -100;
  }
  if (s4 W && s5 B && s6 B && s7 B) {
    error_b = -100;
  }
  if (s4 W && s5 W && s6 W && s7 W) {
    error_b = -100;
  }
  if (s4 B && s5 W && s6 W && s7 W) {
    error_b = -3;
  }
  if (s4 B && s5 B && s6 W && s7 W) {
    error_b = -2;
  }
  if (s4 W && s5 B && s6 W && s7 W) {
    error_b = -1;
  }
  if (s4 W && s5 B && s6 B && s7 W) {
    error_b = 0;
  }
  if (s4 W && s5 W && s6 B && s7 W) {
    error_b = 1;
  }
  if (s4 W && s5 W && s6 B && s7 B) {
    error_b = 2;
  }
  if (s4 W && s5 W && s6 W && s7 B) {
    error_b = 3;
  }
}
void pd_ctrl_b() {
  float P_b = kp_b * error_b;
  float D_b = kd_b * (error_b - old_error_b);
  float PD_b_value = P_b + D_b;
  old_error_b = error_b;
  float spl_b = sp_int_b + PD_b_value;
  float spr_b = sp_int_b - PD_b_value;
  if (spl_b > 100) {
    spl_b = 100;
  } else if (spl_b < -100) {
    spl_b = -100;
  }
  if (spr_b > 100) {
    spr_b = 100;
  } else if (spr_b < -100) {
    spr_b = -100;
  }
  m_b(spl_b, spr_b);
}

void fixf() {
  kp = 20;
  kd = 10;
  sp_int = 30;
}
void fixb() {
  kp_b = 20;
  kd_b = 10;
  sp_int_b = 30;
}
void hit_f() {
  m_f(0, 0);
  servo(1, 180);
  delay(100);
  servo(1, 90);
}
void hit_b() {
  m_b(0, 0);
  servo(2, 90);
  delay(100);
  servo(2, 0);
}
void t_f() {  //หยุด
  while (1) {
    get_error_f();
    if (error == -100) {
      break;
    }
    pd_ctrl_f();
  }
}

void t_b() {
  while (1) {
    get_error_b();
    if (error_b == -100) {
      break;
    }
    pd_ctrl_b();
  }
}
