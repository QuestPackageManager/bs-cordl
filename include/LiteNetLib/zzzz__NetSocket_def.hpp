#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocket)
namespace LiteNetLib {
class INetSocketListener;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Object;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace LiteNetLib {
class NetSocket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetSocket);
// Type: LiteNetLib::NetSocket
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14180))
// CS Name: ::LiteNetLib::NetSocket*
class CORDL_TYPE NetSocket : public ::System::Object {
public:
  // Declarations
  /// @brief Field _udpSocketv4, offset 0x10, size 0x8
  __declspec(property(get = __get__udpSocketv4, put = __set__udpSocketv4))::System::Net::Sockets::Socket* _udpSocketv4;

  /// @brief Field _udpSocketv6, offset 0x18, size 0x8
  __declspec(property(get = __get__udpSocketv6, put = __set__udpSocketv6))::System::Net::Sockets::Socket* _udpSocketv6;

  /// @brief Field _threadv4, offset 0x20, size 0x8
  __declspec(property(get = __get__threadv4, put = __set__threadv4))::System::Threading::Thread* _threadv4;

  /// @brief Field _threadv6, offset 0x28, size 0x8
  __declspec(property(get = __get__threadv6, put = __set__threadv6))::System::Threading::Thread* _threadv6;

  /// @brief Field _listener, offset 0x30, size 0x8
  __declspec(property(get = __get__listener, put = __set__listener))::LiteNetLib::INetSocketListener* _listener;

  /// @brief Field <LocalPort>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__LocalPort_k__BackingField, put = __set__LocalPort_k__BackingField)) int32_t _LocalPort_k__BackingField;

  /// @brief Field IsRunning, offset 0x3c, size 0x1
  __declspec(property(get = __get_IsRunning, put = __set_IsRunning)) bool IsRunning;

  /// @brief Field MulticastAddressV6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MulticastAddressV6, put = setStaticF_MulticastAddressV6))::System::Net::IPAddress* MulticastAddressV6;

  /// @brief Field IPv6Support, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IPv6Support, put = setStaticF_IPv6Support)) bool IPv6Support;

  __declspec(property(get = get_LocalPort, put = set_LocalPort)) int32_t LocalPort;

  __declspec(property(get = get_Ttl, put = set_Ttl)) int16_t Ttl;

  constexpr ::System::Net::Sockets::Socket*& __get__udpSocketv4();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get__udpSocketv4() const;

  constexpr void __set__udpSocketv4(::System::Net::Sockets::Socket* value);

  constexpr ::System::Net::Sockets::Socket*& __get__udpSocketv6();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get__udpSocketv6() const;

  constexpr void __set__udpSocketv6(::System::Net::Sockets::Socket* value);

  constexpr ::System::Threading::Thread*& __get__threadv4();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__threadv4() const;

  constexpr void __set__threadv4(::System::Threading::Thread* value);

  constexpr ::System::Threading::Thread*& __get__threadv6();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__threadv6() const;

  constexpr void __set__threadv6(::System::Threading::Thread* value);

  constexpr ::LiteNetLib::INetSocketListener*& __get__listener();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetSocketListener*> const& __get__listener() const;

  constexpr void __set__listener(::LiteNetLib::INetSocketListener* value);

  constexpr int32_t& __get__LocalPort_k__BackingField();

  constexpr int32_t const& __get__LocalPort_k__BackingField() const;

  constexpr void __set__LocalPort_k__BackingField(int32_t value);

  constexpr bool& __get_IsRunning();

  constexpr bool const& __get_IsRunning() const;

  constexpr void __set_IsRunning(bool value);

  static inline void setStaticF_MulticastAddressV6(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_MulticastAddressV6();

  static inline void setStaticF_IPv6Support(bool value);

  static inline bool getStaticF_IPv6Support();

  /// @brief Method get_LocalPort addr 0x2204ed8 size 0x8 virtual false final false
  inline int32_t get_LocalPort();

  /// @brief Method set_LocalPort addr 0x2204ee0 size 0x8 virtual false final false
  inline void set_LocalPort(int32_t value);

  /// @brief Method get_Ttl addr 0x2204ee8 size 0x1c virtual false final false
  inline int16_t get_Ttl();

  /// @brief Method set_Ttl addr 0x21fb8dc size 0x1c virtual false final false
  inline void set_Ttl(int16_t value);

  static inline ::LiteNetLib::NetSocket* New_ctor(::LiteNetLib::INetSocketListener* listener);

  /// @brief Method .ctor addr 0x21fd1e0 size 0x28 virtual false final false
  inline void _ctor(::LiteNetLib::INetSocketListener* listener);

  /// @brief Method IsActive addr 0x2204fcc size 0x18 virtual false final false
  inline bool IsActive();

  /// @brief Method ReceiveLogic addr 0x2204fe4 size 0x578 virtual false final false
  inline void ReceiveLogic(::System::Object* state);

  /// @brief Method Bind addr 0x2200e44 size 0x404 virtual false final false
  inline bool Bind(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port, bool reuseAddress, bool ipv6, ::System::Threading::ThreadPriority priority);

  /// @brief Method BindSocket addr 0x220555c size 0x6bc virtual false final false
  inline bool BindSocket(::System::Net::Sockets::Socket* socket, ::System::Net::IPEndPoint* ep, bool reuseAddress);

  /// @brief Method SendBroadcast addr 0x220180c size 0x30c virtual false final false
  inline bool SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, int32_t port);

  /// @brief Method SendTo addr 0x21fb8f8 size 0x360 virtual false final false
  inline int32_t SendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint* remoteEndPoint, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Close addr 0x22026a4 size 0xa8 virtual false final false
  inline void Close(bool suspend);

  // Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSocket(NetSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSocket(NetSocket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSocket();

public:
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

  /// @brief Field ReceivePollingTime offset 0xffffffff size 0x4
  static constexpr int32_t ReceivePollingTime{ static_cast<int32_t>(0x7a120) };

  /// @brief Field SioUdpConnreset offset 0xffffffff size 0x4
  static constexpr int32_t SioUdpConnreset{ static_cast<int32_t>(0x9800000c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetSocket, 0x40>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetSocket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetSocket*, "LiteNetLib", "NetSocket");
