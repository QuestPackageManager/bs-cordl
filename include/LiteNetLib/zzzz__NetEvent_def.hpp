#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetEvent)
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
struct __NetEvent__EType;
}
namespace LiteNetLib {
class NetEvent;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::__NetEvent__EType);
MARK_REF_PTR_T(::LiteNetLib::NetEvent);
// Type: ::EType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::NetEvent::EType
struct CORDL_TYPE __NetEvent__EType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NetEvent__EType_Unwrapped
  enum struct ____NetEvent__EType_Unwrapped : int32_t {
    __E_Connect = static_cast<int32_t>(0x0),
    __E_Disconnect = static_cast<int32_t>(0x1),
    __E_Receive = static_cast<int32_t>(0x2),
    __E_ReceiveUnconnected = static_cast<int32_t>(0x3),
    __E_Error = static_cast<int32_t>(0x4),
    __E_ConnectionLatencyUpdated = static_cast<int32_t>(0x5),
    __E_Broadcast = static_cast<int32_t>(0x6),
    __E_ConnectionRequest = static_cast<int32_t>(0x7),
    __E_MessageDelivered = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NetEvent__EType_Unwrapped() const noexcept {
    return static_cast<____NetEvent__EType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetEvent__EType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NetEvent__EType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Broadcast value: static_cast<int32_t>(0x6)
  static ::LiteNetLib::__NetEvent__EType const Broadcast;

  /// @brief Field Connect value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::__NetEvent__EType const Connect;

  /// @brief Field ConnectionLatencyUpdated value: static_cast<int32_t>(0x5)
  static ::LiteNetLib::__NetEvent__EType const ConnectionLatencyUpdated;

  /// @brief Field ConnectionRequest value: static_cast<int32_t>(0x7)
  static ::LiteNetLib::__NetEvent__EType const ConnectionRequest;

  /// @brief Field Disconnect value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::__NetEvent__EType const Disconnect;

  /// @brief Field Error value: static_cast<int32_t>(0x4)
  static ::LiteNetLib::__NetEvent__EType const Error;

  /// @brief Field MessageDelivered value: static_cast<int32_t>(0x8)
  static ::LiteNetLib::__NetEvent__EType const MessageDelivered;

  /// @brief Field Receive value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::__NetEvent__EType const Receive;

  /// @brief Field ReceiveUnconnected value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::__NetEvent__EType const ReceiveUnconnected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__NetEvent__EType, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::__NetEvent__EType, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::NetEvent
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::NetEvent*
class CORDL_TYPE NetEvent : public ::System::Object {
public:
  // Declarations
  using EType = ::LiteNetLib::__NetEvent__EType;

  /// @brief Field ConnectionRequest, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionRequest, put = __cordl_internal_set_ConnectionRequest))::LiteNetLib::ConnectionRequest* ConnectionRequest;

  /// @brief Field DataReader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_DataReader, put = __cordl_internal_set_DataReader))::LiteNetLib::NetPacketReader* DataReader;

  /// @brief Field DeliveryMethod, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_DeliveryMethod, put = __cordl_internal_set_DeliveryMethod))::LiteNetLib::DeliveryMethod DeliveryMethod;

  /// @brief Field DisconnectReason, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_DisconnectReason, put = __cordl_internal_set_DisconnectReason))::LiteNetLib::DisconnectReason DisconnectReason;

  /// @brief Field ErrorCode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_ErrorCode, put = __cordl_internal_set_ErrorCode))::System::Net::Sockets::SocketError ErrorCode;

  /// @brief Field Latency, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_Latency, put = __cordl_internal_set_Latency)) int32_t Latency;

  /// @brief Field Peer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Peer, put = __cordl_internal_set_Peer))::LiteNetLib::NetPeer* Peer;

  /// @brief Field RemoteEndPoint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_RemoteEndPoint, put = __cordl_internal_set_RemoteEndPoint))::System::Net::IPEndPoint* RemoteEndPoint;

  /// @brief Field Type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::LiteNetLib::__NetEvent__EType Type;

  /// @brief Field UserData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_UserData, put = __cordl_internal_set_UserData))::System::Object* UserData;

  static inline ::LiteNetLib::NetEvent* New_ctor(::LiteNetLib::NetManager* manager);

  constexpr ::LiteNetLib::ConnectionRequest*& __cordl_internal_get_ConnectionRequest();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> const& __cordl_internal_get_ConnectionRequest() const;

  constexpr ::LiteNetLib::NetPacketReader*& __cordl_internal_get_DataReader();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> const& __cordl_internal_get_DataReader() const;

  constexpr ::LiteNetLib::DeliveryMethod const& __cordl_internal_get_DeliveryMethod() const;

  constexpr ::LiteNetLib::DeliveryMethod& __cordl_internal_get_DeliveryMethod();

  constexpr ::LiteNetLib::DisconnectReason const& __cordl_internal_get_DisconnectReason() const;

  constexpr ::LiteNetLib::DisconnectReason& __cordl_internal_get_DisconnectReason();

  constexpr ::System::Net::Sockets::SocketError const& __cordl_internal_get_ErrorCode() const;

  constexpr ::System::Net::Sockets::SocketError& __cordl_internal_get_ErrorCode();

  constexpr int32_t const& __cordl_internal_get_Latency() const;

  constexpr int32_t& __cordl_internal_get_Latency();

  constexpr ::LiteNetLib::NetPeer*& __cordl_internal_get_Peer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& __cordl_internal_get_Peer() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_RemoteEndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __cordl_internal_get_RemoteEndPoint() const;

  constexpr ::LiteNetLib::__NetEvent__EType const& __cordl_internal_get_Type() const;

  constexpr ::LiteNetLib::__NetEvent__EType& __cordl_internal_get_Type();

  constexpr ::System::Object*& __cordl_internal_get_UserData();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_UserData() const;

  constexpr void __cordl_internal_set_ConnectionRequest(::LiteNetLib::ConnectionRequest* value);

  constexpr void __cordl_internal_set_DataReader(::LiteNetLib::NetPacketReader* value);

  constexpr void __cordl_internal_set_DeliveryMethod(::LiteNetLib::DeliveryMethod value);

  constexpr void __cordl_internal_set_DisconnectReason(::LiteNetLib::DisconnectReason value);

  constexpr void __cordl_internal_set_ErrorCode(::System::Net::Sockets::SocketError value);

  constexpr void __cordl_internal_set_Latency(int32_t value);

  constexpr void __cordl_internal_set_Peer(::LiteNetLib::NetPeer* value);

  constexpr void __cordl_internal_set_RemoteEndPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set_Type(::LiteNetLib::__NetEvent__EType value);

  constexpr void __cordl_internal_set_UserData(::System::Object* value);

  /// @brief Method .ctor, addr 0x24e99d0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* manager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetEvent(NetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetEvent(NetEvent const&) = delete;

  /// @brief Field Type, offset: 0x10, size: 0x4, def value: None
  ::LiteNetLib::__NetEvent__EType ___Type;

  /// @brief Field Peer, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::NetPeer* ___Peer;

  /// @brief Field RemoteEndPoint, offset: 0x20, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___RemoteEndPoint;

  /// @brief Field UserData, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___UserData;

  /// @brief Field Latency, offset: 0x30, size: 0x4, def value: None
  int32_t ___Latency;

  /// @brief Field ErrorCode, offset: 0x34, size: 0x4, def value: None
  ::System::Net::Sockets::SocketError ___ErrorCode;

  /// @brief Field DisconnectReason, offset: 0x38, size: 0x4, def value: None
  ::LiteNetLib::DisconnectReason ___DisconnectReason;

  /// @brief Field ConnectionRequest, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::ConnectionRequest* ___ConnectionRequest;

  /// @brief Field DeliveryMethod, offset: 0x48, size: 0x1, def value: None
  ::LiteNetLib::DeliveryMethod ___DeliveryMethod;

  /// @brief Field DataReader, offset: 0x50, size: 0x8, def value: None
  ::LiteNetLib::NetPacketReader* ___DataReader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetEvent, 0x58>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___Peer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___RemoteEndPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___UserData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___Latency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___ErrorCode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___DisconnectReason) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___ConnectionRequest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___DeliveryMethod) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetEvent, ___DataReader) == 0x50, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__NetEvent__EType, "LiteNetLib", "NetEvent/EType");
NEED_NO_BOX(::LiteNetLib::NetEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetEvent*, "LiteNetLib", "NetEvent");
