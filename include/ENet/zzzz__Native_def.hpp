#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace ENet {
class Native;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Native);
// Type: ENet::Native
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15350))
// CS Name: ::ENet::Native*
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method OPENSSL_init_crypto, addr 0x228951c, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_crypto(uint64_t opts, void* settings);

  /// @brief Method OPENSSL_init_ssl, addr 0x22895a0, size 0x80, virtual false, abstract: false, final false
  static inline int32_t OPENSSL_init_ssl(uint64_t opts, void* settings);

  /// @brief Method enet_initialize, addr 0x2289704, size 0x68, virtual false, abstract: false, final false
  static inline int32_t enet_initialize();

  /// @brief Method enet_initialize_with_callbacks, addr 0x228985c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t enet_initialize_with_callbacks(uint32_t version, ByRef<::ENet::ENetCallbacks> inits);

  /// @brief Method enet_deinitialize, addr 0x2289924, size 0x64, virtual false, abstract: false, final false
  static inline void enet_deinitialize();

  /// @brief Method enet_linked_version, addr 0x228969c, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_linked_version();

  /// @brief Method enet_time_get, addr 0x2289450, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t enet_time_get();

  /// @brief Method enet_crc64, addr 0x228998c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t enet_crc64(void* buffers, int32_t bufferCount);

  /// @brief Method enet_address_set_ip, addr 0x2285238, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_ip(ByRef<::ENet::ENetAddress> address, ::StringW ip);

  /// @brief Method enet_address_set_hostname, addr 0x22854bc, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t enet_address_set_hostname(ByRef<::ENet::ENetAddress> address, ::StringW hostName);

  /// @brief Method enet_address_get_ip, addr 0x2285114, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_ip(ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* ip, void* ipLength);

  /// @brief Method enet_address_get_hostname, addr 0x2285398, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t enet_address_get_hostname(ByRef<::ENet::ENetAddress> address, ::System::Text::StringBuilder* hostName, void* nameLength);

  /// @brief Method enet_packet_create, addr 0x2285f40, size 0x9c, virtual false, abstract: false, final false
  static inline void* enet_packet_create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, void* dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create, addr 0x22860fc, size 0x94, virtual false, abstract: false, final false
  static inline void* enet_packet_create(void* data, void* dataLength, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x22862b0, size 0xa4, virtual false, abstract: false, final false
  static inline void* enet_packet_create_offset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, void* dataLength, void* dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_create_offset, addr 0x22864b4, size 0x9c, virtual false, abstract: false, final false
  static inline void* enet_packet_create_offset(void* data, void* dataLength, void* dataOffset, ::ENet::PacketFlags flags);

  /// @brief Method enet_packet_check_references, addr 0x2285c28, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_check_references(void* packet);

  /// @brief Method enet_packet_get_data, addr 0x22859b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* enet_packet_get_data(void* packet);

  /// @brief Method enet_packet_get_user_data, addr 0x2285a48, size 0x7c, virtual false, abstract: false, final false
  static inline void* enet_packet_get_user_data(void* packet);

  /// @brief Method enet_packet_set_user_data, addr 0x2285aec, size 0x84, virtual false, abstract: false, final false
  static inline void* enet_packet_set_user_data(void* packet, void* userData);

  /// @brief Method enet_packet_get_length, addr 0x2285b88, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t enet_packet_get_length(void* packet);

  /// @brief Method enet_packet_set_free_callback, addr 0x2285ccc, size 0x84, virtual false, abstract: false, final false
  static inline void enet_packet_set_free_callback(void* packet, void* callback);

  /// @brief Method enet_packet_dispose, addr 0x2285824, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_packet_dispose(void* packet);

  /// @brief Method enet_host_create, addr 0x2289a10, size 0xb4, virtual false, abstract: false, final false
  static inline void* enet_host_create(ByRef<::ENet::ENetAddress> address, void* peerLimit, void* channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize);

  /// @brief Method enet_host_create, addr 0x2289ac4, size 0xb4, virtual false, abstract: false, final false
  static inline void* enet_host_create(void* address, void* peerLimit, void* channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize);

  /// @brief Method enet_host_create_ssl, addr 0x2286f34, size 0x11c, virtual false, abstract: false, final false
  static inline void* enet_host_create_ssl(ByRef<::ENet::ENetAddress> address, void* peerLimit, void* channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize,
                                           ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_create_ssl, addr 0x2287050, size 0x11c, virtual false, abstract: false, final false
  static inline void* enet_host_create_ssl(void* address, void* peerLimit, void* channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize,
                                           ByRef<::ENet::ENetSslConfiguration> sslConfiguration);

  /// @brief Method enet_host_connect, addr 0x2287980, size 0x9c, virtual false, abstract: false, final false
  static inline void* enet_host_connect(void* host, ByRef<::ENet::ENetAddress> address, void* channelCount, uint32_t data);

  /// @brief Method enet_host_broadcast, addr 0x2287298, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_broadcast(void* host, uint8_t channelID, void* packet);

  /// @brief Method enet_host_broadcast_exclude, addr 0x22873bc, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_exclude(void* host, uint8_t channelID, void* packet, void* excludedPeer);

  /// @brief Method enet_host_broadcast_selective, addr 0x22875f8, size 0xb4, virtual false, abstract: false, final false
  static inline void enet_host_broadcast_selective(void* host, uint8_t channelID, void* packet, ::ArrayW<void*, ::Array<void*>*> peers, void* peersLength);

  /// @brief Method enet_host_service, addr 0x2287acc, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_host_service(void* host, ByRef<::ENet::ENetEvent> event, uint32_t timeout);

  /// @brief Method enet_host_check_events, addr 0x2287704, size 0x84, virtual false, abstract: false, final false
  static inline int32_t enet_host_check_events(void* host, ByRef<::ENet::ENetEvent> event);

  /// @brief Method enet_host_channel_limit, addr 0x2287c64, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_channel_limit(void* host, void* channelLimit);

  /// @brief Method enet_host_bandwidth_limit, addr 0x2287b90, size 0x94, virtual false, abstract: false, final false
  static inline void enet_host_bandwidth_limit(void* host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method enet_host_get_peers_count, addr 0x2286970, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_peers_count(void* host);

  /// @brief Method enet_host_get_packets_sent, addr 0x2286a04, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_sent(void* host);

  /// @brief Method enet_host_get_packets_received, addr 0x2286a98, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_packets_received(void* host);

  /// @brief Method enet_host_get_bytes_sent, addr 0x2286b2c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_sent(void* host);

  /// @brief Method enet_host_get_bytes_received, addr 0x2286bc0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_host_get_bytes_received(void* host);

  /// @brief Method enet_host_set_max_duplicate_peers, addr 0x2287d10, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_max_duplicate_peers(void* host, uint16_t number);

  /// @brief Method enet_host_set_intercept_callback, addr 0x2287dbc, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_intercept_callback(void* host, void* callback);

  /// @brief Method enet_host_set_checksum_callback, addr 0x2287ef8, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_set_checksum_callback(void* host, void* callback);

  /// @brief Method enet_host_flush, addr 0x2288024, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_flush(void* host);

  /// @brief Method enet_host_destroy, addr 0x2286740, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_host_destroy(void* host);

  /// @brief Method enet_host_prevent_connections, addr 0x2287194, size 0x84, virtual false, abstract: false, final false
  static inline void enet_host_prevent_connections(void* host, uint8_t state);

  /// @brief Method enet_peer_throttle_configure, addr 0x2288d08, size 0xac, virtual false, abstract: false, final false
  static inline void enet_peer_throttle_configure(void* peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method enet_peer_get_id, addr 0x22880b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_id(void* peer);

  /// @brief Method enet_peer_get_ip, addr 0x2288300, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t enet_peer_get_ip(void* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip, void* ipLength);

  /// @brief Method enet_peer_get_port, addr 0x2288450, size 0x7c, virtual false, abstract: false, final false
  static inline uint16_t enet_peer_get_port(void* peer);

  /// @brief Method enet_peer_get_mtu, addr 0x22884e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_mtu(void* peer);

  /// @brief Method enet_peer_get_state, addr 0x22885d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ENet::PeerState enet_peer_get_state(void* peer);

  /// @brief Method enet_peer_get_rtt, addr 0x2288664, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_rtt(void* peer);

  /// @brief Method enet_peer_get_last_rtt, addr 0x22886f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_last_rtt(void* peer);

  /// @brief Method enet_peer_get_lastsendtime, addr 0x228878c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastsendtime(void* peer);

  /// @brief Method enet_peer_get_lastreceivetime, addr 0x2288820, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t enet_peer_get_lastreceivetime(void* peer);

  /// @brief Method enet_peer_get_packets_sent, addr 0x22888b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_sent(void* peer);

  /// @brief Method enet_peer_get_packets_lost, addr 0x2288948, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_packets_lost(void* peer);

  /// @brief Method enet_peer_get_packets_throttle, addr 0x22889dc, size 0x7c, virtual false, abstract: false, final false
  static inline float_t enet_peer_get_packets_throttle(void* peer);

  /// @brief Method enet_peer_get_bytes_sent, addr 0x2288a70, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_sent(void* peer);

  /// @brief Method enet_peer_get_bytes_received, addr 0x2288b04, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t enet_peer_get_bytes_received(void* peer);

  /// @brief Method enet_peer_get_data, addr 0x2288b98, size 0x7c, virtual false, abstract: false, final false
  static inline void* enet_peer_get_data(void* peer);

  /// @brief Method enet_peer_set_data, addr 0x2288c3c, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_set_data(void* peer, void* data);

  /// @brief Method enet_peer_send, addr 0x2288dec, size 0x94, virtual false, abstract: false, final false
  static inline int32_t enet_peer_send(void* peer, uint8_t channelID, void* packet);

  /// @brief Method enet_peer_receive, addr 0x2288f14, size 0x84, virtual false, abstract: false, final false
  static inline void* enet_peer_receive(void* peer, ByRef<uint8_t> channelID);

  /// @brief Method enet_peer_ping, addr 0x2288fb0, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_ping(void* peer);

  /// @brief Method enet_peer_ping_interval, addr 0x2289054, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_ping_interval(void* peer, uint32_t pingInterval);

  /// @brief Method enet_peer_timeout, addr 0x2289118, size 0x9c, virtual false, abstract: false, final false
  static inline void enet_peer_timeout(void* peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method enet_peer_disconnect, addr 0x22891dc, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect(void* peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_now, addr 0x2289288, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_now(void* peer, uint32_t data);

  /// @brief Method enet_peer_disconnect_later, addr 0x2289334, size 0x84, virtual false, abstract: false, final false
  static inline void enet_peer_disconnect_later(void* peer, uint32_t data);

  /// @brief Method enet_peer_reset, addr 0x22893d0, size 0x7c, virtual false, abstract: false, final false
  static inline void enet_peer_reset(void* peer);

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Native(Native&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Native(Native const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Native();

public:
  /// @brief Field nativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString nativeLibrary{ u"enet" };

  /// @brief Field cryptoNativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString cryptoNativeLibrary{ u"crypto" };

  /// @brief Field sslNativeLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString sslNativeLibrary{ u"ssl" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Native, 0x10>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Native);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Native*, "ENet", "Native");
