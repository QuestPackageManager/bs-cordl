#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IDeliveryEventListener;
}
namespace LiteNetLib {
class INetEventListener;
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
namespace LiteNetLib {
class __EventBasedNetListener__OnConnectionRequest;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnDeliveryEvent;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkError;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkLatencyUpdate;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkReceiveUnconnected;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkReceive;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnPeerConnected;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnPeerDisconnected;
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
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNetListener;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnConnectionRequest;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnDeliveryEvent;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkError;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkLatencyUpdate;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkReceive;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnNetworkReceiveUnconnected;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnPeerConnected;
}
namespace LiteNetLib {
class __EventBasedNetListener__OnPeerDisconnected;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::EventBasedNetListener);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnNetworkError);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnPeerConnected);
MARK_REF_PTR_T(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected);
// Type: ::OnPeerConnected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnPeerConnected*
class CORDL_TYPE __EventBasedNetListener__OnPeerConnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bd43c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bd45c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bd428, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer);

  static inline ::LiteNetLib::__EventBasedNetListener__OnPeerConnected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bd2fc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnPeerConnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnPeerConnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnPeerConnected(__EventBasedNetListener__OnPeerConnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnPeerConnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnPeerConnected(__EventBasedNetListener__OnPeerConnected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnPeerConnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnPeerDisconnected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnPeerDisconnected*
class CORDL_TYPE __EventBasedNetListener__OnPeerDisconnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bd5ac, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bd640, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bd598, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  static inline ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bd468, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnPeerDisconnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnPeerDisconnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnPeerDisconnected(__EventBasedNetListener__OnPeerDisconnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnPeerDisconnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnPeerDisconnected(__EventBasedNetListener__OnPeerDisconnected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnNetworkError
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnNetworkError*
class CORDL_TYPE __EventBasedNetListener__OnNetworkError : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bd790, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bd824, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bd77c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  static inline ::LiteNetLib::__EventBasedNetListener__OnNetworkError* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bd64c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnNetworkError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnNetworkError(__EventBasedNetListener__OnNetworkError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnNetworkError(__EventBasedNetListener__OnNetworkError const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnNetworkError, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnNetworkReceive
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnNetworkReceive*
class CORDL_TYPE __EventBasedNetListener__OnNetworkReceive : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bd974, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bda0c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bd960, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  static inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bd830, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnNetworkReceive();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkReceive", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnNetworkReceive(__EventBasedNetListener__OnNetworkReceive&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkReceive", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnNetworkReceive(__EventBasedNetListener__OnNetworkReceive const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnNetworkReceiveUnconnected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnNetworkReceiveUnconnected*
class CORDL_TYPE __EventBasedNetListener__OnNetworkReceiveUnconnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bdb5c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bdbf4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bdb48, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType);

  static inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bda18, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnNetworkReceiveUnconnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkReceiveUnconnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnNetworkReceiveUnconnected(__EventBasedNetListener__OnNetworkReceiveUnconnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkReceiveUnconnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnNetworkReceiveUnconnected(__EventBasedNetListener__OnNetworkReceiveUnconnected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnNetworkLatencyUpdate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnNetworkLatencyUpdate*
class CORDL_TYPE __EventBasedNetListener__OnNetworkLatencyUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bdd44, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, int32_t latency, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bddd8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bdd30, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, int32_t latency);

  static inline ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bdc00, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnNetworkLatencyUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkLatencyUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnNetworkLatencyUpdate(__EventBasedNetListener__OnNetworkLatencyUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnNetworkLatencyUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnNetworkLatencyUpdate(__EventBasedNetListener__OnNetworkLatencyUpdate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnConnectionRequest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnConnectionRequest*
class CORDL_TYPE __EventBasedNetListener__OnConnectionRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23bdf24, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::ConnectionRequest* request, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23bdf44, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23bdf10, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::ConnectionRequest* request);

  static inline ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bdde4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnConnectionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnConnectionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnConnectionRequest(__EventBasedNetListener__OnConnectionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnConnectionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnConnectionRequest(__EventBasedNetListener__OnConnectionRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: ::OnDeliveryEvent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::EventBasedNetListener::OnDeliveryEvent*
class CORDL_TYPE __EventBasedNetListener__OnDeliveryEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x23be094, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x23be0bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x23be080, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData);

  static inline ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23bdf50, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventBasedNetListener__OnDeliveryEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnDeliveryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventBasedNetListener__OnDeliveryEvent(__EventBasedNetListener__OnDeliveryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventBasedNetListener__OnDeliveryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventBasedNetListener__OnDeliveryEvent(__EventBasedNetListener__OnDeliveryEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent, 0x80>, "Size mismatch!");

} // namespace LiteNetLib
// Type: LiteNetLib::EventBasedNetListener
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::EventBasedNetListener*
class CORDL_TYPE EventBasedNetListener : public ::System::Object {
public:
  // Declarations
  using OnConnectionRequest = ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest;

  using OnDeliveryEvent = ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent;

  using OnNetworkError = ::LiteNetLib::__EventBasedNetListener__OnNetworkError;

  using OnNetworkLatencyUpdate = ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate;

  using OnNetworkReceive = ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive;

  using OnNetworkReceiveUnconnected = ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected;

  using OnPeerConnected = ::LiteNetLib::__EventBasedNetListener__OnPeerConnected;

  using OnPeerDisconnected = ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected;

  /// @brief Field ConnectionRequestEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionRequestEvent,
                      put = __cordl_internal_set_ConnectionRequestEvent))::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* ConnectionRequestEvent;

  /// @brief Field DeliveryEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_DeliveryEvent, put = __cordl_internal_set_DeliveryEvent))::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* DeliveryEvent;

  /// @brief Field NetworkErrorEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkErrorEvent, put = __cordl_internal_set_NetworkErrorEvent))::LiteNetLib::__EventBasedNetListener__OnNetworkError* NetworkErrorEvent;

  /// @brief Field NetworkLatencyUpdateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkLatencyUpdateEvent,
                      put = __cordl_internal_set_NetworkLatencyUpdateEvent))::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* NetworkLatencyUpdateEvent;

  /// @brief Field NetworkReceiveEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkReceiveEvent, put = __cordl_internal_set_NetworkReceiveEvent))::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* NetworkReceiveEvent;

  /// @brief Field NetworkReceiveUnconnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NetworkReceiveUnconnectedEvent,
                      put = __cordl_internal_set_NetworkReceiveUnconnectedEvent))::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* NetworkReceiveUnconnectedEvent;

  /// @brief Field PeerConnectedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_PeerConnectedEvent, put = __cordl_internal_set_PeerConnectedEvent))::LiteNetLib::__EventBasedNetListener__OnPeerConnected* PeerConnectedEvent;

  /// @brief Field PeerDisconnectedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PeerDisconnectedEvent,
                      put = __cordl_internal_set_PeerDisconnectedEvent))::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* PeerDisconnectedEvent;

  /// @brief Convert operator to "::LiteNetLib::IDeliveryEventListener"
  constexpr operator ::LiteNetLib::IDeliveryEventListener*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::INetEventListener"
  constexpr operator ::LiteNetLib::INetEventListener*() noexcept;

  /// @brief Method ClearConnectionRequestEvent, addr 0x23bd204, size 0x8, virtual false, abstract: false, final false
  inline void ClearConnectionRequestEvent();

  /// @brief Method ClearDeliveryEvent, addr 0x23bd20c, size 0x8, virtual false, abstract: false, final false
  inline void ClearDeliveryEvent();

  /// @brief Method ClearNetworkErrorEvent, addr 0x23bd1e4, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkErrorEvent();

  /// @brief Method ClearNetworkLatencyUpdateEvent, addr 0x23bd1fc, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkLatencyUpdateEvent();

  /// @brief Method ClearNetworkReceiveEvent, addr 0x23bd1ec, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkReceiveEvent();

  /// @brief Method ClearNetworkReceiveUnconnectedEvent, addr 0x23bd1f4, size 0x8, virtual false, abstract: false, final false
  inline void ClearNetworkReceiveUnconnectedEvent();

  /// @brief Method ClearPeerConnectedEvent, addr 0x23bd1d4, size 0x8, virtual false, abstract: false, final false
  inline void ClearPeerConnectedEvent();

  /// @brief Method ClearPeerDisconnectedEvent, addr 0x23bd1dc, size 0x8, virtual false, abstract: false, final false
  inline void ClearPeerDisconnectedEvent();

  /// @brief Method LiteNetLib.IDeliveryEventListener.OnMessageDelivered, addr 0x23bd2d8, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData);

  /// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest, addr 0x23bd2bc, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkError, addr 0x23bd24c, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate, addr 0x23bd2a0, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive, addr 0x23bd268, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected, addr 0x23bd284, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                       ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerConnected, addr 0x23bd214, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected, addr 0x23bd230, size 0x1c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  static inline ::LiteNetLib::EventBasedNetListener* New_ctor();

  constexpr ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*& __cordl_internal_get_ConnectionRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*> const& __cordl_internal_get_ConnectionRequestEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*& __cordl_internal_get_DeliveryEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*> const& __cordl_internal_get_DeliveryEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkError*& __cordl_internal_get_NetworkErrorEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkError*> const& __cordl_internal_get_NetworkErrorEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*& __cordl_internal_get_NetworkLatencyUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*> const& __cordl_internal_get_NetworkLatencyUpdateEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*& __cordl_internal_get_NetworkReceiveEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*> const& __cordl_internal_get_NetworkReceiveEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*& __cordl_internal_get_NetworkReceiveUnconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*> const& __cordl_internal_get_NetworkReceiveUnconnectedEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerConnected*& __cordl_internal_get_PeerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*> const& __cordl_internal_get_PeerConnectedEvent() const;

  constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*& __cordl_internal_get_PeerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*> const& __cordl_internal_get_PeerDisconnectedEvent() const;

  constexpr void __cordl_internal_set_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value);

  constexpr void __cordl_internal_set_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value);

  constexpr void __cordl_internal_set_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value);

  constexpr void __cordl_internal_set_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value);

  constexpr void __cordl_internal_set_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value);

  constexpr void __cordl_internal_set_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value);

  constexpr void __cordl_internal_set_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value);

  constexpr void __cordl_internal_set_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value);

  /// @brief Method .ctor, addr 0x23bd2f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ConnectionRequestEvent, addr 0x23bcf64, size 0x9c, virtual false, abstract: false, final false
  inline void add_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value);

  /// @brief Method add_DeliveryEvent, addr 0x23bd09c, size 0x9c, virtual false, abstract: false, final false
  inline void add_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value);

  /// @brief Method add_NetworkErrorEvent, addr 0x23bca84, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value);

  /// @brief Method add_NetworkLatencyUpdateEvent, addr 0x23bce2c, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value);

  /// @brief Method add_NetworkReceiveEvent, addr 0x23bcbbc, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value);

  /// @brief Method add_NetworkReceiveUnconnectedEvent, addr 0x23bccf4, size 0x9c, virtual false, abstract: false, final false
  inline void add_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value);

  /// @brief Method add_PeerConnectedEvent, addr 0x23bc814, size 0x9c, virtual false, abstract: false, final false
  inline void add_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value);

  /// @brief Method add_PeerDisconnectedEvent, addr 0x23bc94c, size 0x9c, virtual false, abstract: false, final false
  inline void add_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value);

  /// @brief Convert to "::LiteNetLib::IDeliveryEventListener"
  constexpr ::LiteNetLib::IDeliveryEventListener* i___LiteNetLib__IDeliveryEventListener() noexcept;

  /// @brief Convert to "::LiteNetLib::INetEventListener"
  constexpr ::LiteNetLib::INetEventListener* i___LiteNetLib__INetEventListener() noexcept;

  /// @brief Method remove_ConnectionRequestEvent, addr 0x23bd000, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value);

  /// @brief Method remove_DeliveryEvent, addr 0x23bd138, size 0x9c, virtual false, abstract: false, final false
  inline void remove_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value);

  /// @brief Method remove_NetworkErrorEvent, addr 0x23bcb20, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value);

  /// @brief Method remove_NetworkLatencyUpdateEvent, addr 0x23bcec8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value);

  /// @brief Method remove_NetworkReceiveEvent, addr 0x23bcc58, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value);

  /// @brief Method remove_NetworkReceiveUnconnectedEvent, addr 0x23bcd90, size 0x9c, virtual false, abstract: false, final false
  inline void remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value);

  /// @brief Method remove_PeerConnectedEvent, addr 0x23bc8b0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value);

  /// @brief Method remove_PeerDisconnectedEvent, addr 0x23bc9e8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value);

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

  /// @brief Field PeerConnectedEvent, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnPeerConnected* ___PeerConnectedEvent;

  /// @brief Field PeerDisconnectedEvent, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* ___PeerDisconnectedEvent;

  /// @brief Field NetworkErrorEvent, offset: 0x20, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnNetworkError* ___NetworkErrorEvent;

  /// @brief Field NetworkReceiveEvent, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* ___NetworkReceiveEvent;

  /// @brief Field NetworkReceiveUnconnectedEvent, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* ___NetworkReceiveUnconnectedEvent;

  /// @brief Field NetworkLatencyUpdateEvent, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* ___NetworkLatencyUpdateEvent;

  /// @brief Field ConnectionRequestEvent, offset: 0x40, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* ___ConnectionRequestEvent;

  /// @brief Field DeliveryEvent, offset: 0x48, size: 0x8, def value: None
  ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* ___DeliveryEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::EventBasedNetListener, 0x50>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___PeerConnectedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___PeerDisconnectedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkErrorEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkReceiveEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkReceiveUnconnectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___NetworkLatencyUpdateEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___ConnectionRequestEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::EventBasedNetListener, ___DeliveryEvent) == 0x48, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener*, "LiteNetLib", "EventBasedNetListener");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*, "LiteNetLib", "EventBasedNetListener/OnConnectionRequest");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*, "LiteNetLib", "EventBasedNetListener/OnDeliveryEvent");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnNetworkError);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnNetworkError*, "LiteNetLib", "EventBasedNetListener/OnNetworkError");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*, "LiteNetLib", "EventBasedNetListener/OnNetworkLatencyUpdate");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceive");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceiveUnconnected");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnPeerConnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*, "LiteNetLib", "EventBasedNetListener/OnPeerConnected");
NEED_NO_BOX(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
