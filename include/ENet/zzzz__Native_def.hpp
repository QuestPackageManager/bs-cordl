#pragma once
// IWYU pragma private; include "ENet/Native.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
namespace ENet {
struct ENetAddress;
}
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
struct ENetEvent;
}
namespace ENet {
struct ENetSslConfiguration;
}
namespace ENet {
struct PacketFlags;
}
namespace ENet {
struct PeerState;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace ENet {
class Native;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Native);
// Dependencies System.Object
namespace ENet {
// Is value type: false
// CS Name: ENet.Native
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method OPENSSL_init_crypto, addr 0x3aa6ca0, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_crypto(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method OPENSSL_init_ssl, addr 0x3aa6d24, size 0x80, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_ssl(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method enet_address_get_hostname, addr 0x3aa3020, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_hostname(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* hostName, ::System::IntPtr nameLength);

  /// @brief Method enet_address_get_ip, addr 0x3aa2da0, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_ip(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* ip, ::System::IntPtr ipLength);

  /// @brief Method enet_address_set_hostname, addr 0x3aa3140, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_hostname(::ByRef<::ENet::ENetAddress> address, ::StringW hostName);

  /// @brief Method enet_address_set_ip, addr 0x3aa2ec0, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_ip(::ByRef<::ENet::ENetAddress> address, ::StringW ip);

  /// @brief Method enet_crc64, addr 0x3aa712c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t enet_crc64(::System::IntPtr buffers, int32_t bufferCount);

  /// @brief Method enet_deinitialize, addr 0x3aa70c4, size 0x64, virtual false, abstract: false, final false
  static inline void enet_deinitialize();

  /// @brief Method enet_host_bandwidth_limit, addr 0x3aa5458, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_bandwidth_limit(::System::IntPtr host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method enet_host_broadcast, addr 0x3aa4c20, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_broadcast(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_host_broadcast_exclude, addr 0x3aa4d04, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_exclude(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::System::IntPtr excludedPeer);

  /// @brief Method enet_host_broadcast_selective, addr 0x3aa4efc, size 0xb4, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_selective(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> peers,
                                                   ::System::IntPtr peersLength);

  /// @brief Method enet_host_channel_limit, addr 0x3aa552c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_channel_limit(::System::IntPtr host, ::System::IntPtr channelLimit);

  /// @brief Method enet_host_check_events, addr 0x3aa5008, size 0x84, virtual false, abstract: false, final false
  static inline int32_t enet_host_check_events(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event);

  /// @brief Method enet_host_connect, addr 0x3aa524c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_connect(::System::IntPtr host, ::ByRef<::ENet::ENetAddress> address, ::System::IntPtr channelCount, uint32_t data);

  /// @brief Method enet_host_create, addr 0x3aa71b0, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                  uint32_t outgoingBandwidth, int32_t bufferSize);

  /// @brief Method enet_host_create, addr 0x3aa7264, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                  int32_t bufferSize);

  /// @brief Method enet_host_create_ssl, addr 0x3aa48fc, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                      uint32_t outgoingBandwidth, int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_create_ssl, addr 0x3aa4a18, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                      int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_destroy, addr 0x3aa41e4, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_destroy(::System::IntPtr host);

  /// @brief Method enet_host_flush, addr 0x3aa58ec, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_flush(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_received, addr 0x3aa45e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_received(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_sent, addr 0x3aa454c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_received, addr 0x3aa44b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_received(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_sent, addr 0x3aa4424, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_peers_count, addr 0x3aa4390, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_peers_count(::System::IntPtr host);

  /// @brief Method enet_host_prevent_connections, addr 0x3aa4b5c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_prevent_connections(::System::IntPtr host, uint8_t state);

  /// @brief Method enet_host_service, addr 0x3aa5394, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_host_service(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event, uint32_t timeout);

  /// @brief Method enet_host_set_checksum_callback, addr 0x3aa57c0, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_checksum_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_intercept_callback, addr 0x3aa5684, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_intercept_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_max_duplicate_peers, addr 0x3aa55d8, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_max_duplicate_peers(::System::IntPtr host, uint16_t number);

  /// @brief Method enet_initialize, addr 0x3aa6e9c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t enet_initialize();

  /// @brief Method enet_initialize_with_callbacks, addr 0x3aa6ffc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t enet_initialize_with_callbacks(uint32_t version, ::ByRef<::ENet::ENetCallbacks> inits);

  /// @brief Method enet_linked_version, addr 0x3aa6e34, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_linked_version();

  /// @brief Method enet_packet_check_references, addr 0x3aa37b0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_check_references(::System::IntPtr packet);

  /// @brief Method enet_packet_create, addr 0x3aa3abc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create, addr 0x3aa3c38, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3aa3de0, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3aa3fa0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::System::IntPtr data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_dispose, addr 0x3aa3430, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_packet_dispose(::System::IntPtr packet);

  /// @brief Method enet_packet_get_data, addr 0x3aa353c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_data(::System::IntPtr packet);

  /// @brief Method enet_packet_get_length, addr 0x3aa3710, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_get_length(::System::IntPtr packet);

  /// @brief Method enet_packet_get_user_data, addr 0x3aa35d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_user_data(::System::IntPtr packet);

  /// @brief Method enet_packet_set_free_callback, addr 0x3aa3854, size 0x84, virtual false, abstract: false, final false
  static inline void enet_packet_set_free_callback(::System::IntPtr packet, ::System::IntPtr callback);

  /// @brief Method enet_packet_set_user_data, addr 0x3aa3674, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_set_user_data(::System::IntPtr packet, ::System::IntPtr userData);

  /// @brief Method enet_peer_disconnect, addr 0x3aa69a0, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_later, addr 0x3aa6af8, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_later(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_now, addr 0x3aa6a4c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_now(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_get_bytes_received, addr 0x3aa6308, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_received(::System::IntPtr peer);

  /// @brief Method enet_peer_get_bytes_sent, addr 0x3aa6274, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_data, addr 0x3aa639c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_get_data(::System::IntPtr peer);

  /// @brief Method enet_peer_get_id, addr 0x3aa5980, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_id(::System::IntPtr peer);

  /// @brief Method enet_peer_get_ip, addr 0x3aa5b44, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t enet_peer_get_ip(::System::IntPtr peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip, ::System::IntPtr ipLength);

  /// @brief Method enet_peer_get_last_rtt, addr 0x3aa5efc, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_last_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastreceivetime, addr 0x3aa6024, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastreceivetime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastsendtime, addr 0x3aa5f90, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastsendtime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_mtu, addr 0x3aa5d24, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_mtu(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_lost, addr 0x3aa614c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_lost(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_sent, addr 0x3aa60b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_throttle, addr 0x3aa61e0, size 0x7c, virtual false, abstract: false, final false
  static inline float_t enet_peer_get_packets_throttle(::System::IntPtr peer);

  /// @brief Method enet_peer_get_port, addr 0x3aa5c90, size 0x7c, virtual false, abstract: false, final false
  static inline uint16_t enet_peer_get_port(::System::IntPtr peer);

  /// @brief Method enet_peer_get_rtt, addr 0x3aa5e68, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_state, addr 0x3aa5dd4, size 0x7c, virtual false, abstract: false, final false
  static inline ::ENet::PeerState enet_peer_get_state(::System::IntPtr peer);

  /// @brief Method enet_peer_ping, addr 0x3aa6774, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_ping(::System::IntPtr peer);

  /// @brief Method enet_peer_ping_interval, addr 0x3aa6818, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_ping_interval(::System::IntPtr peer, uint32_t pingInterval);

  /// @brief Method enet_peer_receive, addr 0x3aa66d8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_receive(::System::IntPtr peer, ::ByRef<uint8_t> channelID);

  /// @brief Method enet_peer_reset, addr 0x3aa6b94, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_reset(::System::IntPtr peer);

  /// @brief Method enet_peer_send, addr 0x3aa65f0, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_peer_send(::System::IntPtr peer, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_peer_set_data, addr 0x3aa6440, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_set_data(::System::IntPtr peer, ::System::IntPtr data);

  /// @brief Method enet_peer_throttle_configure, addr 0x3aa650c, size 0xac, virtual false, abstract: false, final false
  static inline void enet_peer_throttle_configure(::System::IntPtr peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method enet_peer_timeout, addr 0x3aa68dc, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_peer_timeout(::System::IntPtr peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method enet_time_get, addr 0x3aa6c14, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_time_get();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Native();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Native(Native&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Native(Native const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17761 };

  /// @brief Field cryptoNativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString cryptoNativeLibrary{ u"crypto" };

  /// @brief Field nativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString nativeLibrary{ u"enet" };

  /// @brief Field sslNativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString sslNativeLibrary{ u"ssl" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Native, 0x10>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Native);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Native*, "ENet", "Native");
