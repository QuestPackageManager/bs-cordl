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
  /// @brief Method OPENSSL_init_crypto, addr 0x3ab4ff4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_crypto(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method OPENSSL_init_ssl, addr 0x3ab5078, size 0x80, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_ssl(uint64_t opts, ::System::IntPtr settings);

  /// @brief Method enet_address_get_hostname, addr 0x3ab1374, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_hostname(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* hostName, ::System::IntPtr nameLength);

  /// @brief Method enet_address_get_ip, addr 0x3ab10f4, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_ip(::ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* ip, ::System::IntPtr ipLength);

  /// @brief Method enet_address_set_hostname, addr 0x3ab1494, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_hostname(::ByRef<::ENet::ENetAddress> address, ::StringW hostName);

  /// @brief Method enet_address_set_ip, addr 0x3ab1214, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_ip(::ByRef<::ENet::ENetAddress> address, ::StringW ip);

  /// @brief Method enet_crc64, addr 0x3ab5480, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t enet_crc64(::System::IntPtr buffers, int32_t bufferCount);

  /// @brief Method enet_deinitialize, addr 0x3ab5418, size 0x64, virtual false, abstract: false, final false
  static inline void enet_deinitialize();

  /// @brief Method enet_host_bandwidth_limit, addr 0x3ab37ac, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_bandwidth_limit(::System::IntPtr host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method enet_host_broadcast, addr 0x3ab2f74, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_broadcast(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_host_broadcast_exclude, addr 0x3ab3058, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_exclude(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::System::IntPtr excludedPeer);

  /// @brief Method enet_host_broadcast_selective, addr 0x3ab3250, size 0xb4, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_selective(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> peers,
                                                   ::System::IntPtr peersLength);

  /// @brief Method enet_host_channel_limit, addr 0x3ab3880, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_channel_limit(::System::IntPtr host, ::System::IntPtr channelLimit);

  /// @brief Method enet_host_check_events, addr 0x3ab335c, size 0x84, virtual false, abstract: false, final false
  static inline int32_t enet_host_check_events(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event);

  /// @brief Method enet_host_connect, addr 0x3ab35a0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_connect(::System::IntPtr host, ::ByRef<::ENet::ENetAddress> address, ::System::IntPtr channelCount, uint32_t data);

  /// @brief Method enet_host_create, addr 0x3ab5504, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                  uint32_t outgoingBandwidth, int32_t bufferSize);

  /// @brief Method enet_host_create, addr 0x3ab55b8, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                  int32_t bufferSize);

  /// @brief Method enet_host_create_ssl, addr 0x3ab2c50, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::ByRef<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                      uint32_t outgoingBandwidth, int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_create_ssl, addr 0x3ab2d6c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_host_create_ssl(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                      int32_t bufferSize, ::ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_destroy, addr 0x3ab2538, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_destroy(::System::IntPtr host);

  /// @brief Method enet_host_flush, addr 0x3ab3c40, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_flush(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_received, addr 0x3ab2934, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_received(::System::IntPtr host);

  /// @brief Method enet_host_get_bytes_sent, addr 0x3ab28a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_received, addr 0x3ab280c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_received(::System::IntPtr host);

  /// @brief Method enet_host_get_packets_sent, addr 0x3ab2778, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_sent(::System::IntPtr host);

  /// @brief Method enet_host_get_peers_count, addr 0x3ab26e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_peers_count(::System::IntPtr host);

  /// @brief Method enet_host_prevent_connections, addr 0x3ab2eb0, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_prevent_connections(::System::IntPtr host, uint8_t state);

  /// @brief Method enet_host_service, addr 0x3ab36e8, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_host_service(::System::IntPtr host, ::ByRef<::ENet::ENetEvent> event, uint32_t timeout);

  /// @brief Method enet_host_set_checksum_callback, addr 0x3ab3b14, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_checksum_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_intercept_callback, addr 0x3ab39d8, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_intercept_callback(::System::IntPtr host, ::System::IntPtr callback);

  /// @brief Method enet_host_set_max_duplicate_peers, addr 0x3ab392c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_max_duplicate_peers(::System::IntPtr host, uint16_t number);

  /// @brief Method enet_initialize, addr 0x3ab51f0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t enet_initialize();

  /// @brief Method enet_initialize_with_callbacks, addr 0x3ab5350, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t enet_initialize_with_callbacks(uint32_t version, ::ByRef<::ENet::ENetCallbacks> inits);

  /// @brief Method enet_linked_version, addr 0x3ab5188, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_linked_version();

  /// @brief Method enet_packet_check_references, addr 0x3ab1b04, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_check_references(::System::IntPtr packet);

  /// @brief Method enet_packet_create, addr 0x3ab1e10, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create, addr 0x3ab1f8c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3ab2134, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x3ab22f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_create_offset(::System::IntPtr data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_dispose, addr 0x3ab1784, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_packet_dispose(::System::IntPtr packet);

  /// @brief Method enet_packet_get_data, addr 0x3ab1890, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_data(::System::IntPtr packet);

  /// @brief Method enet_packet_get_length, addr 0x3ab1a64, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_get_length(::System::IntPtr packet);

  /// @brief Method enet_packet_get_user_data, addr 0x3ab1924, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_get_user_data(::System::IntPtr packet);

  /// @brief Method enet_packet_set_free_callback, addr 0x3ab1ba8, size 0x84, virtual false, abstract: false, final false
  static inline void enet_packet_set_free_callback(::System::IntPtr packet, ::System::IntPtr callback);

  /// @brief Method enet_packet_set_user_data, addr 0x3ab19c8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_packet_set_user_data(::System::IntPtr packet, ::System::IntPtr userData);

  /// @brief Method enet_peer_disconnect, addr 0x3ab4cf4, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_later, addr 0x3ab4e4c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_later(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_now, addr 0x3ab4da0, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_now(::System::IntPtr peer, uint32_t data);

  /// @brief Method enet_peer_get_bytes_received, addr 0x3ab465c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_received(::System::IntPtr peer);

  /// @brief Method enet_peer_get_bytes_sent, addr 0x3ab45c8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_data, addr 0x3ab46f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_get_data(::System::IntPtr peer);

  /// @brief Method enet_peer_get_id, addr 0x3ab3cd4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_id(::System::IntPtr peer);

  /// @brief Method enet_peer_get_ip, addr 0x3ab3e98, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t enet_peer_get_ip(::System::IntPtr peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip, ::System::IntPtr ipLength);

  /// @brief Method enet_peer_get_last_rtt, addr 0x3ab4250, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_last_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastreceivetime, addr 0x3ab4378, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastreceivetime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_lastsendtime, addr 0x3ab42e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastsendtime(::System::IntPtr peer);

  /// @brief Method enet_peer_get_mtu, addr 0x3ab4078, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_mtu(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_lost, addr 0x3ab44a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_lost(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_sent, addr 0x3ab440c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_sent(::System::IntPtr peer);

  /// @brief Method enet_peer_get_packets_throttle, addr 0x3ab4534, size 0x7c, virtual false, abstract: false, final false
  static inline float_t enet_peer_get_packets_throttle(::System::IntPtr peer);

  /// @brief Method enet_peer_get_port, addr 0x3ab3fe4, size 0x7c, virtual false, abstract: false, final false
  static inline uint16_t enet_peer_get_port(::System::IntPtr peer);

  /// @brief Method enet_peer_get_rtt, addr 0x3ab41bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_rtt(::System::IntPtr peer);

  /// @brief Method enet_peer_get_state, addr 0x3ab4128, size 0x7c, virtual false, abstract: false, final false
  static inline ::ENet::PeerState enet_peer_get_state(::System::IntPtr peer);

  /// @brief Method enet_peer_ping, addr 0x3ab4ac8, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_ping(::System::IntPtr peer);

  /// @brief Method enet_peer_ping_interval, addr 0x3ab4b6c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_ping_interval(::System::IntPtr peer, uint32_t pingInterval);

  /// @brief Method enet_peer_receive, addr 0x3ab4a2c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr enet_peer_receive(::System::IntPtr peer, ::ByRef<uint8_t> channelID);

  /// @brief Method enet_peer_reset, addr 0x3ab4ee8, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_reset(::System::IntPtr peer);

  /// @brief Method enet_peer_send, addr 0x3ab4944, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_peer_send(::System::IntPtr peer, uint8_t channelID, ::System::IntPtr packet);

  /// @brief Method enet_peer_set_data, addr 0x3ab4794, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_set_data(::System::IntPtr peer, ::System::IntPtr data);

  /// @brief Method enet_peer_throttle_configure, addr 0x3ab4860, size 0xac, virtual false, abstract: false, final false
  static inline void enet_peer_throttle_configure(::System::IntPtr peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method enet_peer_timeout, addr 0x3ab4c30, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_peer_timeout(::System::IntPtr peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method enet_time_get, addr 0x3ab4f68, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17759 };

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
