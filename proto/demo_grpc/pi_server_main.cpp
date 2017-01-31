#include <PI/frontends/proto/device_mgr.h>

#include "pi_server.h"

using pi::fe::proto::DeviceMgr;

int main(int argc, char** argv) {
  DeviceMgr::init(256);
  RunServer();
  DeviceMgr::destroy();

  return 0;
}
