#include <string>
#include <stdlib.h>
#include <propsys.h>
namespace NetConstants
{
	
		constexpr ::std::string_view local_dnsport = "53";
		constexpr ::std::string_view virtual_net = "10.0.0.0/10";  // VirtualAddrNetwork
		constexpr ::std::string_view local_loopback = "127.0.0.1"; //Local loopback
		constexpr ::std::string_view non_tor_net = { "192.168.0.0/16", "172.16.0.0/12" };
		constexpr ::std::string_view non_tor = { ("127.0.0.0/9", "127.128.0.0/10", "127.0.0.0/8") };
		constexpr ::std::string_view trans_port = "9040";
		constexpr ::std::string_view tor_config_file = "/etc/tor/torrc";
		constexpr ::std::string_view torrc = "r'''";
		constexpr ::std::string_view trans_port = "9040";
		

		///
	//std::string cmd("echo -n " + std::to_string(curr_val) + " > /file.txt"); //Linux command
	//	

	}
	

