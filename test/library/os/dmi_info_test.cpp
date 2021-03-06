#define BOOST_TEST_MODULE dmi_info_test
#include <string>
#include <iostream>
#include <unordered_map>
#include <boost/test/unit_test.hpp>
#include "../../../src/library/os/dmi_info.hpp"


namespace license {
namespace test {
using namespace std;

BOOST_AUTO_TEST_CASE(dmi_info) {
	os::DmiInfo dmiInfo;
//windows bug

#ifdef __unix__
	BOOST_CHECK_MESSAGE(dmiInfo.bios_vendor().size()>0, "Bios vendor OK");
	BOOST_CHECK_MESSAGE(dmiInfo.bios_description().size() > 0, "Bios description OK");
	BOOST_CHECK_MESSAGE(dmiInfo.sys_vendor().size() > 0, "Sys vendor OK");
#endif
}

}  // namespace test
}  // namespace license
