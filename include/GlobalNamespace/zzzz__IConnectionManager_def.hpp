#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IConnectionManager)
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class IPollable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnectionManager);
// Type: ::IConnectionManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12678))
// CS Name: ::IConnectionManager*
class CORDL_TYPE IConnectionManager {
public:
  // Declarations
  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method add_onInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onReceivedDataEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_userId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userName();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_connectionCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_connectionCount();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisposed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDisposed();

  /// @brief Method SendToAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConnectionManager(IConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectionManager(IConnectionManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionManager*, "", "IConnectionManager");
