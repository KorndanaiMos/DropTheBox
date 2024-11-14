void m_f(int l, int r) {
  motor(2, l);
  motor(1, r);
}
void t_ff() { //ข้าม
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
    }
    if (count == 1) {
      m_f(100, 100);
      delay(70);
      break;
    }
    pd_ctrl_f();
  }
}

void t_fo() { //หยุดเส้นตัด
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
    }
    if (count == 1) {
      m_f(100, 100);
      delay(500);
      break;
    }
    pd_ctrl_f();
  }
}


void t_wst() {  //หยุดสีขาว
  while (1) {
    get_error_f();
    if (error == -100) {
      m_f(0,0);
      break;
    }
    pd_ctrl_f();
  }
}

void t_wst3() {  //หยุดสีขาว
  while (1) {
    get_error_f();
    if (s0 W && s1 W && s2 W && s3 W) {
      m_f(0,0);
      break;
    }
    pd_ctrl_f();
  }
}


void t_flthird() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 30;
    }
    if (count == 1) {
      m_f(40, 40);
      delay(60);
      if (s1 W && s2 W) {
        m_f(-30, 30);
        delay(200);
      } else {
        while (s0 B) {
          m_f(-30, 30);
        }
        while (s1 B) {
          m_f(-30, 30);
        }
      }
      while (s0 W) {
        m_f(-30, 30);
      }
      while (s0 B) {
        m_f(-20, 20);
      }
      while (s1 B) {
        m_f(-30, 30);
      }
      m_f(100, 100);
      delay(20);
      m_f(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}


void t_flthird2() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 30;
    }
    if (count == 1) {
      m_f(100, 100);
      delay(40);
      if (s1 W && s2 W) {
        m_f(-30, 30);
        delay(200);
      } else {
        while (s0 B) {
          m_f(-30, 30);
        }
        while (s1 B) {
          m_f(-30, 30);
        }
      }
      while (s0 W) {
        m_f(-30, 30);
      }
      while (s0 B) {
        m_f(-20, 20);
      }
      while (s1 B) {
        m_f(-30, 30);
      }
      m_f(100, -100);
      delay(0);
      m_f(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}

void t_flfifth() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 30;
    }
    if (count == 1) {
      m_f(100, 100);
      delay(60);
      if (s1 W && s2 W) {
        m_f(-30, 30);
        delay(200);
      } else {
        while (s0 B) {
          m_f(-30, 30);
        }
        while (s1 B) {
          m_f(-30, 30);
        }
      }
      while (s0 W) {
        m_f(-40, 40);
        // delay(290);
        // m_b(-100, -100);
        // delay(10);
        // m_b(0, 0);

      }
      while (s0 B) {
        m_f(-20, 20);
      }
      while (s1 B) {
        m_f(-30, 30);
      }
      m_f(100, -100);
      delay(0);
      m_f(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}

void t_fr() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 50;
    }
    if (count == 1) {
      m_f(100, 100);
      if (s1 W && s2 W) {
        m_f(0, 0);
        delay(10);
        DropF();
      } else {
        while (s3 B) {
          m_f(50, -50);
        }
        while (s2 B) {
          m_f(50, -50);
        }
      }
      while (s3 W) {
        m_f(50, -50);
      }
      while (s3 B) {
        m_f(40, -40);
      }
      while (s2 B) {
        m_f(30, -30);
      }
      m_f(-100, 100);
      delay(30);
      m_f(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}

void t_frH() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 50;
    }
    if (count == 1) {
      m_f(0, 0);
      m_f(100, 100);
      delay(10);
      if (s1 W && s2 W) {
        m_f(50, -50);
        delay(200);
      } else {
        while (s3 B) {
          m_f(50, -50);
        }
        while (s2 B) {
          m_f(50, -50);
        }
      }
      while (s3 W) {
        m_f(50, -50);
      }
      while (s3 B) {
        m_f(40, -40);
      }
      while (s2 B) {
        m_f(30, -30);
      }
      m_f(-100, 100);
      delay(30);
      m_f(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}

void t_fr2() {
  int count = 0;
  while (1) {
    get_error_f();
    if (error == -100) {
      error = 0;
      count = 1;
      sp_int = 30;
    }
    if (count == 1) {
      m_b(0, 0);
      m_f(100, 100);
      delay(10);
      while (s7 B) {
        m_b(50, -50);
      }
      while (s6 B) {
        m_b(50, -50);
      }
      while (s7 W) {
        m_b(50, -50);
      }
      while (s7 B) {
        m_b(40, -40);
      }
      while (s6 B) {
        m_b(30, -30);
      }
      m_b(-100, 100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_f();
  }
  fixf();
}

void DropF() {
  servo(1,25);
  delay(100);
  servo(1, 90);
  }