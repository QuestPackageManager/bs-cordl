#pragma once
// IWYU pragma private; include "ENet\Host.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Host)
namespace ENet {
struct Address;
}
namespace ENet {
class ChecksumCallback;
}
namespace ENet {
struct Event;
}
namespace ENet {
class InterceptCallback;
}
namespace ENet {
struct Packet;
}
namespace ENet {
struct Peer;
}
namespace ENet {
struct SslConfiguration;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace ENet {
class Host;
}
// Write type traits
MARK_REF_T(::ENet::Host*);
DEFINE_IL2CPP_CLASS(::ENet::Host*, "ENet", "Host");
// Dependencies System.IntPtr, System.Object
namespace ENet {
// Is value type: false
// CS Name: ENet.Host
class CORDL_TYPE Host : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BytesReceived)) uint32_t BytesReceived;

  __declspec(property(get = get_BytesSent)) uint32_t BytesSent;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_NativeData, put = set_NativeData)) ::System::IntPtr NativeData;

  __declspec(property(get = get_PacketsReceived)) uint32_t PacketsReceived;

  __declspec(property(get = get_PacketsSent)) uint32_t PacketsSent;

  __declspec(property(get = get_PeersCount)) uint32_t PeersCount;

  /// @brief Field nativeHost, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeHost, put = __cordl_internal_set_nativeHost)) ::System::IntPtr nativeHost;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Broadcast, addr 0x5893af0, size 0x40, virtual false, abstract: false, final false
  inline void Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet);

  /// @brief Method Broadcast, addr 0x5893bc4, size 0x50, virtual false, abstract: false, final false
  inline void Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet, ::ENet::Peer excludedPeer);

  /// @brief Method Broadcast, addr 0x5893cb0, size 0x118, virtual false, abstract: false, final false
  inline void Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet, ::ArrayW<::ENet::Peer> peers);

  /// @brief Method CheckEvents, addr 0x5893e7c, size 0x58, virtual false, abstract: false, final false
  inline int32_t CheckEvents(::by_ref<::ENet::Event> event);

  /// @brief Method Connect, addr 0x5893f58, size 0x54, virtual false, abstract: false, final false
  inline ::ENet::Peer Connect(::ENet::Address address);

  /// @brief Method Connect, addr 0x589409c, size 0x50, virtual false, abstract: false, final false
  inline ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit);

  /// @brief Method Connect, addr 0x5893fac, size 0xf0, virtual false, abstract: false, final false
  inline ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit, uint32_t data);

  /// @brief Method Create, addr 0x58935e4, size 0x228, virtual false, abstract: false, final false
  inline void Create(::System::Nullable_1<::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize,
                     ::ENet::SslConfiguration sslConfiguration);

  /// @brief Method Dispose, addr 0x58930e4, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5893154, size 0x20, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x58931f0, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Flush, addr 0x5894774, size 0x18, virtual false, abstract: false, final false
  inline void Flush();

  static inline ::ENet::Host* New_ctor();

  /// @brief Method PreventConnections, addr 0x5893a44, size 0x28, virtual false, abstract: false, final false
  inline void PreventConnections(bool state);

  /// @brief Method Service, addr 0x5894188, size 0xac, virtual false, abstract: false, final false
  inline int32_t Service(int32_t timeout, ::by_ref<::ENet::Event> event);

  /// @brief Method SetBandwidthLimit, addr 0x58942c8, size 0x30, virtual false, abstract: false, final false
  inline void SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method SetChannelLimit, addr 0x589438c, size 0x30, virtual false, abstract: false, final false
  inline void SetChannelLimit(int32_t channelLimit);

  /// @brief Method SetChecksumCallback, addr 0x58946dc, size 0x98, virtual false, abstract: false, final false
  inline void SetChecksumCallback(::ENet::ChecksumCallback* callback);

  /// @brief Method SetChecksumCallback, addr 0x5894630, size 0x28, virtual false, abstract: false, final false
  inline void SetChecksumCallback(::System::IntPtr callback);

  /// @brief Method SetInterceptCallback, addr 0x5894598, size 0x98, virtual false, abstract: false, final false
  inline void SetInterceptCallback(::ENet::InterceptCallback* callback);

  /// @brief Method SetInterceptCallback, addr 0x58944ec, size 0x28, virtual false, abstract: false, final false
  inline void SetInterceptCallback(::System::IntPtr callback);

  /// @brief Method SetMaxDuplicatePeers, addr 0x5894440, size 0x28, virtual false, abstract: false, final false
  inline void SetMaxDuplicatePeers(uint16_t number);

  /// @brief Method ThrowIfChannelsExceeded, addr 0x589358c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowIfChannelsExceeded(int32_t channelLimit);

  /// @brief Method ThrowIfNotCreated, addr 0x5893268, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  constexpr ::System::IntPtr const& __cordl_internal_get_nativeHost() const;

  constexpr ::System::IntPtr& __cordl_internal_get_nativeHost();

  constexpr void __cordl_internal_set_nativeHost(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x5894808, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BytesReceived, addr 0x58934f8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_BytesReceived();

  /// @brief Method get_BytesSent, addr 0x5893464, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_BytesSent();

  /// @brief Method get_IsSet, addr 0x5893240, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_NativeData, addr 0x58930d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_NativeData();

  /// @brief Method get_PacketsReceived, addr 0x58933d0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_PacketsReceived();

  /// @brief Method get_PacketsSent, addr 0x589333c, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_PacketsSent();

  /// @brief Method get_PeersCount, addr 0x5893250, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_PeersCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_NativeData, addr 0x58930dc, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Host();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Host(Host&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Host(Host const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21730 };

  /// @brief Field nativeHost, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___nativeHost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ENet::Host, ___nativeHost) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ENet::Host) == 0x18, "Size mismatch!");

} // namespace ENet
