void m_b(int l, int r) {
  motor(2, -r);
  motor(1, -l);
}

void t_bb() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      break;
    }
    pd_ctrl_b();
  }
}

void t_bl() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(0, 0);
      m_b(100, 100);
      delay(40);
      if (s5 W && s6 W) {
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      } else {
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      }
      while (s4 W) {
        m_b(-30, 30);
      }
      while (s4 B) {
        m_b(-30, 30);
      }
      while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_bleight() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(70);
      if (s5 W && s6 W) {
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      } else {
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      }
      while (s4 W) {
        m_b(-40, 40);
        delay(270);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;
      }
      while (s4 B) {
        m_b(-30, 30);
      }
      while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}


void t_blforth() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(0, 0);
      m_b(100, 100);
      delay(50);
      if (s5 W && s6 W) {
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      } else {
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      }
      while (s4 W) {
        m_b(-30, 30);
      }
      while (s4 B) {
        m_b(-30, 30);
      }
      while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_bl3() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(50);
      m_b(0, 0);
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      
      while (s4 W) {
        m_b(-30, 30);
      }
      while (s4 B) {
        m_b(-40, 40);
        delay(180);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;

      } while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}


void t_blsecond() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(10);
      m_b(0, 0);
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      
      while (s4 W) {
        m_b(-30, 30);
      }
      while (s4 B) {
        m_b(-40, 40);
        delay(170);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;

      } while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_blsixth() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(40);
      m_b(0, 0);
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      
      while (s4 W) {
        m_b(-30, 30);
      }
      while (s4 B) {
        m_b(-40, 40);
        delay(180);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;

      } while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_blsixth2() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(40);
      m_b(0, 0);
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      
      while (s4 W) {
        m_b(-40, 40);
        // delay(220);
        // m_b(-100, -100);
        // delay(10);
        // m_b(0, 0);
        break;
      }
      while (s4 B) {
        m_b(-40, 40);
        delay(155);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;

      } while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}


void t_blforth2() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
    }
    if (count == 1) {
      m_b(100, 100);
      delay(40);
      m_b(0, 0);
        while (s4 B) {
          m_b(-30, 30);
        }
        while (s5 B) {
          m_b(-30, 30);
        }
      
      while (s4 W) {
        m_b(-40, 40);
        delay(290);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;
      }
      while (s4 B) {
        m_b(-40, 40);
        delay(180);
        m_b(-100, -100);
        delay(10);
        m_b(0, 0);
        break;

      } while (s5 B) {
        m_b(-30, 30);
      }
      m_b(100, -100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}



void t_br_ins() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
      sp_int_b = 50;
    }
    if ( count == 1) {
      m_b(0, 0);
      m_b(-100, -100);
      delay(20);
      if (s5 W && s6 W) {
        m_b(50, -50);
        delay(200);
      } else {
        while (s7 B) {
          m_b(50, -50);
        }
        while (s6 B) {
          m_b(50, -50);
        }
      }
      while (s7 W) {
        m_b(50, -50);
      }
      while (s7 B) {
        m_b(50, -50);
      }
      while (s6 B) {
        m_b(30, -30);
      }
      m_b(-100, 100);
      delay(30);
      m_b(0, 0);
      m_b(100,100);
      delay(100);
      m_b(0,0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_br_slow() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
      sp_int_b = 50;
    }
    if ( count == 1) {
      m_b(0, 0);
      m_b(100, 100);
      delay(20);
      if (s5 W && s6 W) {
        m_b(50, -50);
        delay(200);
      } else {
        while (s7 B) {
          m_b(30, -30);
        }
        while (s6 B) {
          m_b(30, -30);
        }
      }
      while (s7 W) {
        m_b(50, -50);
      }
      while (s7 B) {
        m_b(30, -30);
      }
      while (s6 B) {
        m_b(30, -30);
      }
      m_b(-100, 100);
      delay(30);
      m_b(0, 0);
      m_b(100,100);
      delay(100);
      m_b(0,0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}


void t_brH() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
      sp_int_b = 50;
    }
    if ( count == 1) {
      m_b(0, 0);
      m_b(100, 100);
      delay(10);
      if (s5 W && s6 W) {
        m_b(50, -50);
        delay(200);
      } else {
        while (s7 B) {
          m_b(50, -50);
        }
        while (s6 B) {
          m_b(50, -50);
        }
      }
      while (s7 W) {
        m_b(50, -50);
      }
      while (s7 B) {
        m_b(50, -50);
      }
      while (s6 B) {
        m_b(30, -30);
      }
      m_b(-100, 100);
      delay(30);
      m_b(0, 0);
      break;
    }
    pd_ctrl_b();
  }
  fixb();
}

void t_brA() {
  int count = 0;
  while (1) {
    get_error_b();
    if (error_b == -100) {
      error_b = 0;
      count = 1;
      sp_int_b = 50;
    }
    if (sL B && count == 1) {
      m_b(0, 0);
      m_b(-100, -100);
      delay(60);
      if (s5 W && s6 W) {
        m_b(50, -50);
        delay(200);
      } else {
        while (s7 B) {
          m_b(50, -50);
        }
        while (s6 B) {
          m_b(50, -50);
        }
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
    pd_ctrl_b();
  }
  fixb();
}

void DropB() {
  servo(2,25);
  delay(150);
  servo(2, 90);
}