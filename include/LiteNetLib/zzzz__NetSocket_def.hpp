#pragma once
// IWYU pragma private; include "LiteNetLib/NetSocket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocket)
namespace LiteNetLib {
class INetSocketListener;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class NetSocket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetSocket);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetSocket
class CORDL_TYPE NetSocket : public ::System::Object {
public:
  // Declarations
  /// @brief Field IPv6Support, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IPv6Support, put = setStaticF_IPv6Support)) bool IPv6Support;

  /// @brief Field IsRunning, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_IsRunning, put = __cordl_internal_set_IsRunning)) bool IsRunning;

  __declspec(property(get = get_LocalPort, put = set_LocalPort)) int32_t LocalPort;

  /// @brief Field MulticastAddressV6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MulticastAddressV6, put = setStaticF_MulticastAddressV6)) ::System::Net::IPAddress* MulticastAddressV6;

  __declspec(property(get = get_Ttl, put = set_Ttl)) int16_t Ttl;

  /// @brief Field <LocalPort>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__LocalPort_k__BackingField, put = __cordl_internal_set__LocalPort_k__BackingField)) int32_t _LocalPort_k__BackingField;

  /// @brief Field _listener, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__listener, put = __cordl_internal_set__listener)) ::LiteNetLib::INetSocketListener* _listener;

  /// @brief Field _threadv4, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__threadv4, put = __cordl_internal_set__threadv4)) ::System::Threading::Thread* _threadv4;

  /// @brief Field _threadv6, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__threadv6, put = __cordl_internal_set__threadv6)) ::System::Threading::Thread* _threadv6;

  /// @brief Field _udpSocketv4, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__udpSocketv4, put = __cordl_internal_set__udpSocketv4)) ::System::Net::Sockets::Socket* _udpSocketv4;

  /// @brief Field _udpSocketv6, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__udpSocketv6, put = __cordl_internal_set__udpSocketv6)) ::System::Net::Sockets::Socket* _udpSocketv6;

  /// @brief Method Bind, addr 0x3ab4330, size 0x3d4, virtual false, abstract: false, final false
  inline bool Bind(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port, bool reuseAddress, bool ipv6, ::System::Threading::ThreadPriority priority);

  /// @brief Method BindSocket, addr 0x3ab8894, size 0x690, virtual false, abstract: false, final false
  inline bool BindSocket(::System::Net::Sockets::Socket* socket, ::System::Net::IPEndPoint* ep, bool reuseAddress);

  /// @brief Method Close, addr 0x3ab5b30, size 0xa8, virtual false, abstract: false, final false
  inline void Close(bool suspend);

  /// @brief Method IsActive, addr 0x3ab8304, size 0x18, virtual false, abstract: false, final false
  inline bool IsActive();

  static inline ::LiteNetLib::NetSocket* New_ctor(::LiteNetLib::INetSocketListener* listener);

  /// @brief Method ReceiveLogic, addr 0x3ab831c, size 0x578, virtual false, abstract: false, final false
  inline void ReceiveLogic(::System::Object* state);

  /// @brief Method SendBroadcast, addr 0x3ab4cc8, size 0x2f4, virtual false, abstract: false, final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, int32_t port);

  /// @brief Method SendTo, addr 0x3aaefa4, size 0x364, virtual false, abstract: false, final false
  inline int32_t SendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::System::Net::Sockets::SocketError> errorCode);

  constexpr bool const& __cordl_internal_get_IsRunning() const;

  constexpr bool& __cordl_internal_get_IsRunning();

  constexpr int32_t const& __cordl_internal_get__LocalPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LocalPort_k__BackingField();

  constexpr ::LiteNetLib::INetSocketListener* const& __cordl_internal_get__listener() const;

  constexpr ::LiteNetLib::INetSocketListener*& __cordl_internal_get__listener();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__threadv4() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__threadv4();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__threadv6() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__threadv6();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get__udpSocketv4() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__udpSocketv4();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get__udpSocketv6() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__udpSocketv6();

  constexpr void __cordl_internal_set_IsRunning(bool value);

  constexpr void __cordl_internal_set__LocalPort_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__listener(::LiteNetLib::INetSocketListener* value);

  constexpr void __cordl_internal_set__threadv4(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set__threadv6(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set__udpSocketv4(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set__udpSocketv6(::System::Net::Sockets::Socket* value);

  /// @brief Method .ctor, addr 0x3ab07fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::INetSocketListener* listener);

  static inline bool getStaticF_IPv6Support();

  static inline ::System::Net::IPAddress* getStaticF_MulticastAddressV6();

  /// @brief Method get_LocalPort, addr 0x3ab8210, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LocalPort();

  /// @brief Method get_Ttl, addr 0x3ab8220, size 0x1c, virtual false, abstract: false, final false
  inline int16_t get_Ttl();

  static inline void setStaticF_IPv6Support(bool value);

  static inline void setStaticF_MulticastAddressV6(::System::Net::IPAddress* value);

  /// @brief Method set_LocalPort, addr 0x3ab8218, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalPort(int32_t value);

  /// @brief Method set_Ttl, addr 0x3aaef88, size 0x1c, virtual false, abstract: false, final false
  inline void set_Ttl(int16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSocket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSocket(NetSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSocket(NetSocket const&) = delete;

  /// @brief Field ReceivePollingTime offset 0xffffffff size 0x4
  static constexpr int32_t ReceivePollingTime{ static_cast<int32_t>(0x7a120) };

  /// @brief Field SioUdpConnreset offset 0xffffffff size 0x4
  static constexpr int32_t SioUdpConnreset{ static_cast<int32_t>(0x9800000c) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16566 };

  /// @brief Field _udpSocketv4, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ____udpSocketv4;

  /// @brief Field _udpSocketv6, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ____udpSocketv6;

  /// @brief Field _threadv4, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Thread* ____threadv4;

  /// @brief Field _threadv6, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Thread* ____threadv6;

  /// @brief Field _listener, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::INetSocketListener* ____listener;

  /// @brief Field <LocalPort>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____LocalPort_k__BackingField;

  /// @brief Field IsRunning, offset: 0x3c, size: 0x1, def value: None
  bool ___IsRunning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetSocket, ____udpSocketv4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ____udpSocketv6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ____threadv4) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ____threadv6) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ____listener) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ____LocalPort_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetSocket, ___IsRunning) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetSocket, 0x40>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetSocket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetSocket*, "LiteNetLib", "NetSocket");
