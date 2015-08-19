#ifndef SSF_CORE_VIRTUAL_NETWORK_PHYSICAL_LAYER_TCP_HELPERS_H_
#define SSF_CORE_VIRTUAL_NETWORK_PHYSICAL_LAYER_TCP_HELPERS_H_

#include <boost/asio/io_service.hpp>
#include <boost/asio/ip/tcp.hpp>

#include <boost/system/error_code.hpp>

#include "core/virtual_network/parameters.h"

namespace virtual_network {
namespace physical_layer {
namespace detail {

boost::asio::ip::tcp::endpoint make_tcp_endpoint(
    boost::asio::io_service& io_service, const LayerParameters& parameters,
    boost::system::error_code& ec);

}  // detail
}  // physical_layer
}  // virtual_network

#endif  // SSF_CORE_VIRTUAL_NETWORK_PHYSICAL_LAYER_TCP_HELPERS_H_