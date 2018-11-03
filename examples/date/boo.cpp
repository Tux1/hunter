#include <iostream>
#include <date/date.h>
#include <date/tz.h>

int main() {
  using namespace date;
  using namespace std::chrono;
  auto now = system_clock::now();
  auto now_local = make_zoned(current_zone(), now);
  auto today = floor<days>(now);
  std::cout << today << '\n';
  std::cout << "now utc = " << now << std::endl;
  std::cout << "now local = " << now_local << std::endl;
}
