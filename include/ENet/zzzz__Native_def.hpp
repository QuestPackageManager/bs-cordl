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
  /// @brief Method OPENSSL_init_crypto, addr 0x3aa9ce0, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_crypto(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method OPENSSL_init_ssl, addr 0x3aa9d64, size 0x80, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_ssl(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method enet_address_get_hostname, addr 0x3aa6060, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_hostname(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* hostName, ::System::IntPtr nameLength);

  /// @brief Method enet_address_get_ip, addr 0x3aa5de0, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_ip(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* ip, ::System::IntPtr ipLength);

  /// @brief Method enet_address_set_hostname, addr 0x3aa6180, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_hostname(::ByRef<::ENet::ENetAddress> address, ::StringW hostName);

  /// @brief Method enet_address_set_ip, addr 0x3aa5f00, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_ip(::ByRef<::ENet::ENetAddress> address, ::StringW ip);

  /// @brief Method enet_crc64, addr 0x3aaa16c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t enet_crc64(::System::IntPtr buffers, int32_t bufferCount);

  /// @brief Method enet_deinitialize, addr 0x3aaa104, size 0x64, virtual false, abstract: false, final false
  static inline void enet_deinitialize();

  /// @brief Method enet_host_bandwidth_limit, addr 0x3aa8498, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_bandwidth_limit(::System::IntPtr host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method enet_host_broadcast, addr 0x3aa7c60, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_broadcast(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_host_broadcast_exclude, addr 0x3aa7d44, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_exclude(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::System::IntPtr excludedPeer);

  /// @brief Method enet_host_broadcast_selective, addr 0x3aa7f3c, size 0xb4, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_selective(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> peers,
                                                   ::System::IntPtr peersLength);

  /// @brief Method enet_host_channel_limit, addr 0x3aa856c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_channel_limit(::System::IntPtr host, ::System::IntPtr channelLimit);

  /// @brief Method enet_host_check_events, addr 0x3aa8048, size 0x84, virtual false, abstract: false, final false
  static inline int32_t enet_host_check_events(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event);

  /// @brief Method enet_host_connect, addr 0x3aa828c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_connect(::System::IntPtr host, ::ByRef<::ENet::ENetAddress> address, ::System::IntPtr channelCount, uint32_t data);

  /// @brief Method enet_host_create, addr 0x3aaa1f0, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                  uint32_t outgoingBandwidth, int32_t bufferSize);

  /// @brief Method enet_host_create, addr 0x3aaa2a4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                  int32_t bufferSize);

  /// @brief Method enet_host_create_ssl, addr 0x3aa793c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                      uint32_t outgoingBandwidth, int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_create_ssl, addr 0x3aa7a58, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                      int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_destroy, addr 0x3aa7224, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_destroy(::System::IntPtr host);

  /// @brief Method enet_host_flush, addr 0x3aa892c, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_flush(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_received, addr 0x3aa7620, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_received(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_sent, addr 0x3aa758c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_received, addr 0x3aa74f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_received(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_sent, addr 0x3aa7464, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_peers_count, addr 0x3aa73d0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_peers_count(::System::IntPtr host);

  /// @brief Method enet_host_prevent_connections, addr 0x3aa7b9c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_prevent_connections(::System::IntPtr host, uint8_t state);

  /// @brief Method enet_host_service, addr 0x3aa83d4, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_host_service(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event, uint32_t timeout);

  /// @brief Method enet_host_set_checksum_callback, addr 0x3aa8800, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_checksum_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_intercept_callback, addr 0x3aa86c4, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_intercept_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_max_duplicate_peers, addr 0x3aa8618, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_max_duplicate_peers(::System::IntPtr host, uint16_t number);

  /// @brief Method enet_initialize, addr 0x3aa9edc, size 0x68, virtual false, abstract: false, final false
  static inline int32_t enet_initialize();

  /// @brief Method enet_initialize_with_callbacks, addr 0x3aaa03c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t enet_initialize_with_callbacks(uint32_t version, ::ByRef<::ENet::ENetCallbacks> inits);

  /// @brief Method enet_linked_version, addr 0x3aa9e74, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_linked_version();

  /// @brief Method enet_packet_check_references, addr 0x3aa67f0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_check_references(::System::IntPtr packet);

  /// @brief Method enet_packet_create, addr 0x3aa6afc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create, addr 0x3aa6c78, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3aa6e20, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3aa6fe0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::System::IntPtr data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_dispose, addr 0x3aa6470, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_packet_dispose(::System::IntPtr packet);

  /// @brief Method enet_packet_get_data, addr 0x3aa657c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_data(::System::IntPtr packet);

  /// @brief Method enet_packet_get_length, addr 0x3aa6750, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_get_length(::System::IntPtr packet);

  /// @brief Method enet_packet_get_user_data, addr 0x3aa6610, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_user_data(::System::IntPtr packet);

  /// @brief Method enet_packet_set_free_callback, addr 0x3aa6894, size 0x84, virtual false, abstract: false, final false
  static inline void enet_packet_set_free_callback(::System::IntPtr packet, ::System::IntPtr callback);

  /// @brief Method enet_packet_set_user_data, addr 0x3aa66b4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_set_user_data(::System::IntPtr packet, ::System::IntPtr userData);

  /// @brief Method enet_peer_disconnect, addr 0x3aa99e0, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_later, addr 0x3aa9b38, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_later(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_now, addr 0x3aa9a8c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_now(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_get_bytes_received, addr 0x3aa9348, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_received(::System::IntPtr peer);

  /// @brief Method enet_peer_get_bytes_sent, addr 0x3aa92b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_data, addr 0x3aa93dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_get_data(::System::IntPtr peer);

  /// @brief Method enet_peer_get_id, addr 0x3aa89c0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_id(::System::IntPtr peer);

  /// @brief Method enet_peer_get_ip, addr 0x3aa8b84, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t enet_peer_get_ip(::System::IntPtr peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip, ::System::IntPtr ipLength);

  /// @brief Method enet_peer_get_last_rtt, addr 0x3aa8f3c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_last_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastreceivetime, addr 0x3aa9064, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastreceivetime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastsendtime, addr 0x3aa8fd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastsendtime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_mtu, addr 0x3aa8d64, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_mtu(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_lost, addr 0x3aa918c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_lost(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_sent, addr 0x3aa90f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_throttle, addr 0x3aa9220, size 0x7c, virtual false, abstract: false, final false
  static inline float_t enet_peer_get_packets_throttle(::System::IntPtr peer);

  /// @brief Method enet_peer_get_port, addr 0x3aa8cd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint16_t enet_peer_get_port(::System::IntPtr peer);

  /// @brief Method enet_peer_get_rtt, addr 0x3aa8ea8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_state, addr 0x3aa8e14, size 0x7c, virtual false, abstract: false, final false
  static inline ::ENet::PeerState enet_peer_get_state(::System::IntPtr peer);

  /// @brief Method enet_peer_ping, addr 0x3aa97b4, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_ping(::System::IntPtr peer);

  /// @brief Method enet_peer_ping_interval, addr 0x3aa9858, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_ping_interval(::System::IntPtr peer, uint32_t pingInterval);

  /// @brief Method enet_peer_receive, addr 0x3aa9718, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_receive(::System::IntPtr peer, ::ByRef<uint8_t> channelID);

  /// @brief Method enet_peer_reset, addr 0x3aa9bd4, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_reset(::System::IntPtr peer);

  /// @brief Method enet_peer_send, addr 0x3aa9630, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_peer_send(::System::IntPtr peer, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_peer_set_data, addr 0x3aa9480, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_set_data(::System::IntPtr peer, ::System::IntPtr data);

  /// @brief Method enet_peer_throttle_configure, addr 0x3aa954c, size 0xac, virtual false, abstract: false, final false
  static inline void enet_peer_throttle_configure(::System::IntPtr peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method enet_peer_timeout, addr 0x3aa991c, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_peer_timeout(::System::IntPtr peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method enet_time_get, addr 0x3aa9c54, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17753 };

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
