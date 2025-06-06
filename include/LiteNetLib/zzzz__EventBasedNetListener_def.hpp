#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNetListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBasedNetListener)
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace LiteNetLib {
class EventBasedNetListener_OnConnectionRequest;
}
namespace LiteNetLib {
class EventBasedNetListener_OnDeliveryEvent;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkError;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkLatencyUpdate;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkReceiveUnconnected;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkReceive;
}
namespace LiteNetLib {
class EventBasedNetListener_OnPeerConnected;
}
namespace LiteNetLib {
class EventBasedNetListener_OnPeerDisconnected;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNetListener;
}
namespace LiteNetLib {
class EventBasedNetListener_OnConnectionRequest;
}
namespace LiteNetLib {
class EventBasedNetListener_OnDeliveryEvent;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkError;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkLatencyUpdate;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkReceive;
}
namespace LiteNetLib {
class EventBasedNetListener_OnNetworkReceiveUnconnected;
}
namespace LiteNetLib {
class EventBasedNetListener_OnPeerConnected;
}
namespace LiteNetLib {
class EventBasedNetListener_OnPeerDisconnected;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnConnectionRequest);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnNetworkError);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnNetworkReceive);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnPeerConnected);
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected);
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnPeerConnected
class CORDL_TYPE EventBasedNetListener_OnPeerConnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aad2e4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aad304, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aad2d0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer);

  static inline ::LiteNetLib::EventBasedNetListener_OnPeerConnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad1d0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnPeerConnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnPeerConnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnPeerConnected(EventBasedNetListener_OnPeerConnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnPeerConnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnPeerConnected(EventBasedNetListener_OnPeerConnected const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnPeerConnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnPeerDisconnected
class CORDL_TYPE EventBasedNetListener_OnPeerDisconnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aad428, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aad4bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aad414, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  static inline ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad310, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnPeerDisconnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnPeerDisconnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnPeerDisconnected(EventBasedNetListener_OnPeerDisconnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnPeerDisconnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnPeerDisconnected(EventBasedNetListener_OnPeerDisconnected const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnNetworkError
class CORDL_TYPE EventBasedNetListener_OnNetworkError : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aad5e0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aad674, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aad5cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  static inline ::LiteNetLib::EventBasedNetListener_OnNetworkError* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad4c8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnNetworkError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnNetworkError(EventBasedNetListener_OnNetworkError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnNetworkError(EventBasedNetListener_OnNetworkError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnNetworkError, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnNetworkReceive
class CORDL_TYPE EventBasedNetListener_OnNetworkReceive : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aad798, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aad830, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aad784, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  static inline ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad680, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnNetworkReceive();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkReceive", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnNetworkReceive(EventBasedNetListener_OnNetworkReceive&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkReceive", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnNetworkReceive(EventBasedNetListener_OnNetworkReceive const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16524 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnNetworkReceive, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
class CORDL_TYPE EventBasedNetListener_OnNetworkReceiveUnconnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aad954, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aad9ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aad940, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType);

  static inline ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad83c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnNetworkReceiveUnconnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkReceiveUnconnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnNetworkReceiveUnconnected(EventBasedNetListener_OnNetworkReceiveUnconnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkReceiveUnconnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnNetworkReceiveUnconnected(EventBasedNetListener_OnNetworkReceiveUnconnected const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate
class CORDL_TYPE EventBasedNetListener_OnNetworkLatencyUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aadb10, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, int32_t latency, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aadba4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aadafc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, int32_t latency);

  static inline ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aad9f8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnNetworkLatencyUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkLatencyUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnNetworkLatencyUpdate(EventBasedNetListener_OnNetworkLatencyUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnNetworkLatencyUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnNetworkLatencyUpdate(EventBasedNetListener_OnNetworkLatencyUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16526 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnConnectionRequest
class CORDL_TYPE EventBasedNetListener_OnConnectionRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aadcc4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::ConnectionRequest* request, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aadce4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aadcb0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::ConnectionRequest* request);

  static inline ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aadbb0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnConnectionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnConnectionRequest(EventBasedNetListener_OnConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnConnectionRequest(EventBasedNetListener_OnConnectionRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16527 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnConnectionRequest, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies System.MulticastDelegate
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener/OnDeliveryEvent
class CORDL_TYPE EventBasedNetListener_OnDeliveryEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aade08, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aade30, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aaddf4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData);

  static inline ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aadcf0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener_OnDeliveryEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnDeliveryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener_OnDeliveryEvent(EventBasedNetListener_OnDeliveryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener_OnDeliveryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener_OnDeliveryEvent(EventBasedNetListener_OnDeliveryEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Dependencies LiteNetLib.IDeliveryEventListener, LiteNetLib.INetEventListener, System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.EventBasedNetListener
class CORDL_TYPE EventBasedNetListener : public ::System::Object {
public:
  // Declarations
  using OnConnectionRequest = ::LiteNetLib::EventBasedNetListener_OnConnectionRequest;

  using OnDeliveryEvent = ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent;

  using OnNetworkError = ::LiteNetLib::EventBasedNetListener_OnNetworkError;

  using OnNetworkLatencyUpdate = ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate;

  using OnNetworkReceive = ::LiteNetLib::EventBasedNetListener_OnNetworkReceive;

  using OnNetworkReceiveUnconnected = ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected;

  using OnPeerConnected = ::LiteNetLib::EventBasedNetListener_OnPeerConnected;

  using OnPeerDisconnected = ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected;

  /// @brief Field ConnectionRequestEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionRequestEvent,
                      put = __cordl_internal_set_ConnectionRequestEvent)) ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* ConnectionRequestEvent;

  /// @brief Field DeliveryEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_DeliveryEvent, put = __cordl_internal_set_DeliveryEvent)) ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* DeliveryEvent;

  /// @brief Field NetworkErrorEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkErrorEvent, put = __cordl_internal_set_NetworkErrorEvent)) ::LiteNetLib::EventBasedNetListener_OnNetworkError* NetworkErrorEvent;

  /// @brief Field NetworkLatencyUpdateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkLatencyUpdateEvent,
                      put = __cordl_internal_set_NetworkLatencyUpdateEvent)) ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* NetworkLatencyUpdateEvent;

  /// @brief Field NetworkReceiveEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkReceiveEvent, put = __cordl_internal_set_NetworkReceiveEvent)) ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* NetworkReceiveEvent;

  /// @brief Field NetworkReceiveUnconnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkReceiveUnconnectedEvent,
                      put = __cordl_internal_set_NetworkReceiveUnconnectedEvent)) ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* NetworkReceiveUnconnectedEvent;

  /// @brief Field PeerConnectedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_PeerConnectedEvent, put = __cordl_internal_set_PeerConnectedEvent)) ::LiteNetLib::EventBasedNetListener_OnPeerConnected* PeerConnectedEvent;

  /// @brief Field PeerDisconnectedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PeerDisconnectedEvent,
                      put = __cordl_internal_set_PeerDisconnectedEvent)) ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* PeerDisconnectedEvent;

  /// @brief Convert operator to "::LiteNetLib::IDeliveryEventListener"
  constexpr operator ::LiteNetLib::IDeliveryEventListener*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  /// @brief Method ClearConnectionRequestEvent, addr 0x3aad0d8, size 0x8, virtual false, abstract: false, final false
  inline void ClearConnectionRequestEvent();

  /// @brief Method ClearDeliveryEvent, addr 0x3aad0e0, size 0x8, virtual false, abstract: false, final false
  inline void ClearDeliveryEvent();

  /// @brief Method ClearNetworkErrorEvent, addr 0x3aad0b8, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkErrorEvent();

  /// @brief Method ClearNetworkLatencyUpdateEvent, addr 0x3aad0d0, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkLatencyUpdateEvent();

  /// @brief Method ClearNetworkReceiveEvent, addr 0x3aad0c0, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkReceiveEvent();

  /// @brief Method ClearNetworkReceiveUnconnectedEvent, addr 0x3aad0c8, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkReceiveUnconnectedEvent();

  /// @brief Method ClearPeerConnectedEvent, addr 0x3aad0a8, size 0x8, virtual false, abstract: false, final false
  inline void ClearPeerConnectedEvent();

  /// @brief Method ClearPeerDisconnectedEvent, addr 0x3aad0b0, size 0x8, virtual false, abstract: false, final false
  inline void ClearPeerDisconnectedEvent();

  /// @brief Method LiteNetLib.IDeliveryEventListener.OnMessageDelivered, addr 0x3aad1ac, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest, addr 0x3aad190, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError, addr 0x3aad120, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate, addr 0x3aad174, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive, addr 0x3aad13c, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected, addr 0x3aad158, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected, addr 0x3aad0e8, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected, addr 0x3aad104, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  static inline ::LiteNetLib::EventBasedNetListener* New_ctor();

  constexpr ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* const& __cordl_internal_get_ConnectionRequestEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnConnectionRequest*& __cordl_internal_get_ConnectionRequestEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* const& __cordl_internal_get_DeliveryEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*& __cordl_internal_get_DeliveryEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkError* const& __cordl_internal_get_NetworkErrorEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkError*& __cordl_internal_get_NetworkErrorEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* const& __cordl_internal_get_NetworkLatencyUpdateEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*& __cordl_internal_get_NetworkLatencyUpdateEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* const& __cordl_internal_get_NetworkReceiveEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceive*& __cordl_internal_get_NetworkReceiveEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* const& __cordl_internal_get_NetworkReceiveUnconnectedEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*& __cordl_internal_get_NetworkReceiveUnconnectedEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnPeerConnected* const& __cordl_internal_get_PeerConnectedEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnPeerConnected*& __cordl_internal_get_PeerConnectedEvent();

  constexpr ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* const& __cordl_internal_get_PeerDisconnectedEvent() const;

  constexpr ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*& __cordl_internal_get_PeerDisconnectedEvent();

  constexpr void __cordl_internal_set_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value);

  constexpr void __cordl_internal_set_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value);

  constexpr void __cordl_internal_set_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value);

  constexpr void __cordl_internal_set_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value);

  constexpr void __cordl_internal_set_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value);

  constexpr void __cordl_internal_set_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value);

  constexpr void __cordl_internal_set_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value);

  constexpr void __cordl_internal_set_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value);

  /// @brief Method .ctor, addr 0x3aad1c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ConnectionRequestEvent, addr 0x3aace38, size 0x9c, virtual false, abstract: false, final false
  inline void add_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value);

  /// @brief Method add_DeliveryEvent, addr 0x3aacf70, size 0x9c, virtual false, abstract: false, final false
  inline void add_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value);

  /// @brief Method add_NetworkErrorEvent, addr 0x3aac958, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value);

  /// @brief Method add_NetworkLatencyUpdateEvent, addr 0x3aacd00, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value);

  /// @brief Method add_NetworkReceiveEvent, addr 0x3aaca90, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value);

  /// @brief Method add_NetworkReceiveUnconnectedEvent, addr 0x3aacbc8, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value);

  /// @brief Method add_PeerConnectedEvent, addr 0x3aac6e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value);

  /// @brief Method add_PeerDisconnectedEvent, addr 0x3aac820, size 0x9c, virtual false, abstract: false, final false
  inline void add_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value);

  /// @brief Convert to "::LiteNetLib::IDeliveryEventListener"
  constexpr ::LiteNetLib::IDeliveryEventListener* i___LiteNetLib__IDeliveryEventListener() noexcept;

  /// @brief Convert to "::LiteNetLib::INetEventListener"
  constexpr ::LiteNetLib::INetEventListener* i___LiteNetLib__INetEventListener() noexcept;

  /// @brief Method remove_ConnectionRequestEvent, addr 0x3aaced4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value);

  /// @brief Method remove_DeliveryEvent, addr 0x3aad00c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value);

  /// @brief Method remove_NetworkErrorEvent, addr 0x3aac9f4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value);

  /// @brief Method remove_NetworkLatencyUpdateEvent, addr 0x3aacd9c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value);

  /// @brief Method remove_NetworkReceiveEvent, addr 0x3aacb2c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value);

  /// @brief Method remove_NetworkReceiveUnconnectedEvent, addr 0x3aacc64, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value);

  /// @brief Method remove_PeerConnectedEvent, addr 0x3aac784, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value);

  /// @brief Method remove_PeerDisconnectedEvent, addr 0x3aac8bc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBasedNetListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBasedNetListener(EventBasedNetListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBasedNetListener(EventBasedNetListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16529 };

  /// @brief Field PeerConnectedEvent, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnPeerConnected* ___PeerConnectedEvent;

  /// @brief Field PeerDisconnectedEvent, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* ___PeerDisconnectedEvent;

  /// @brief Field NetworkErrorEvent, offset: 0x20, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnNetworkError* ___NetworkErrorEvent;

  /// @brief Field NetworkReceiveEvent, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* ___NetworkReceiveEvent;

  /// @brief Field NetworkReceiveUnconnectedEvent, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* ___NetworkReceiveUnconnectedEvent;

  /// @brief Field NetworkLatencyUpdateEvent, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* ___NetworkLatencyUpdateEvent;

  /// @brief Field ConnectionRequestEvent, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* ___ConnectionRequestEvent;

  /// @brief Field DeliveryEvent, offset: 0x48, size: 0x8, def value: None
  ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* ___DeliveryEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___PeerConnectedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___PeerDisconnectedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkErrorEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkReceiveEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkReceiveUnconnectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkLatencyUpdateEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___ConnectionRequestEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___DeliveryEvent) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener, 0x50>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener*, "LiteNetLib", "EventBasedNetListener");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnConnectionRequest*, "LiteNetLib", "EventBasedNetListener/OnConnectionRequest");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*, "LiteNetLib", "EventBasedNetListener/OnDeliveryEvent");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnNetworkError);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnNetworkError*, "LiteNetLib", "EventBasedNetListener/OnNetworkError");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*, "LiteNetLib", "EventBasedNetListener/OnNetworkLatencyUpdate");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnNetworkReceive);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnNetworkReceive*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceive");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceiveUnconnected");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnPeerConnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnPeerConnected*, "LiteNetLib", "EventBasedNetListener/OnPeerConnected");
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
