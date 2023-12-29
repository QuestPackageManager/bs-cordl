#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OculusConnectionManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusConnectionManager)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
class __OculusConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class __OculusConnectionManager__OculusConnection;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
struct __OculusConnectionManager__NetworkMode;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IConnection;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __OculusConnectionManager__ConnectToServerParams;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __OculusConnectionManager___HandlePeerConnectionRequest_d__61;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IPollable;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OculusConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class OculusConnectionManager;
}
namespace GlobalNamespace {
class __OculusConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __OculusConnectionManager__OculusConnection;
}
namespace GlobalNamespace {
class __OculusConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
struct __OculusConnectionManager___HandlePeerConnectionRequest_d__61;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OculusConnectionManager__NetworkMode);
MARK_REF_PTR_T(::GlobalNamespace::OculusConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__OculusConnectionManager__OculusConnection);
MARK_REF_PTR_T(::GlobalNamespace::__OculusConnectionManager__StartServerParams);
MARK_VAL_T(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61);
// Type: ::NetworkMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4580))
// CS Name: ::OculusConnectionManager::NetworkMode
struct CORDL_TYPE __OculusConnectionManager__NetworkMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusConnectionManager__NetworkMode_Unwrapped
  enum struct ____OculusConnectionManager__NetworkMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Client = static_cast<int32_t>(0x1),
    __E_Server = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusConnectionManager__NetworkMode_Unwrapped() const noexcept {
    return static_cast<____OculusConnectionManager__NetworkMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusConnectionManager__NetworkMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusConnectionManager__NetworkMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OculusConnectionManager__NetworkMode const None;

  /// @brief Field Client value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OculusConnectionManager__NetworkMode const Client;

  /// @brief Field Server value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OculusConnectionManager__NetworkMode const Server;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusConnectionManager__NetworkMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__NetworkMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4581))
// CS Name: ::OculusConnectionManager::OculusConnection*
class CORDL_TYPE __OculusConnectionManager__OculusConnection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __get__id, put = __set__id)) uint64_t _id;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _isConnectionOwner, offset 0x28, size 0x1
  __declspec(property(get = __get__isConnectionOwner, put = __set__isConnectionOwner)) bool _isConnectionOwner;

  __declspec(property(get = get_id)) uint64_t id;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Convert operator to "::GlobalNamespace::IConnection"
  constexpr operator ::GlobalNamespace::IConnection*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>*() noexcept;

  constexpr uint64_t& __get__id();

  constexpr uint64_t const& __get__id() const;

  constexpr void __set__id(uint64_t value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr bool& __get__isConnectionOwner();

  constexpr bool const& __get__isConnectionOwner() const;

  constexpr void __set__isConnectionOwner(bool value);

  /// @brief Method get_id addr 0x221fb1c size 0x8 virtual false final false
  inline uint64_t get_id();

  /// @brief Method get_userId addr 0x221fb24 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x221fb2c size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isConnectionOwner addr 0x221fb34 size 0x8 virtual true final true
  inline bool get_isConnectionOwner();

  static inline ::GlobalNamespace::__OculusConnectionManager__OculusConnection* New_ctor(uint64_t id, ::StringW userName, bool isConnectionOwner);

  /// @brief Method .ctor addr 0x221fb3c size 0xac virtual false final false
  inline void _ctor(uint64_t id, ::StringW userName, bool isConnectionOwner);

  /// @brief Method Send addr 0x221fbe8 size 0x144 virtual true final true
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method Disconnect addr 0x221fd2c size 0xc virtual true final true
  inline void Disconnect();

  /// @brief Method Equals addr 0x221fd38 size 0x30 virtual true final true
  inline bool Equals(::GlobalNamespace::__OculusConnectionManager__OculusConnection* other);

  /// @brief Method Equals addr 0x221fd68 size 0x110 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x221fe78 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x221fe98 size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__OculusConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusConnectionManager__OculusConnection(__OculusConnectionManager__OculusConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__OculusConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusConnectionManager__OculusConnection(__OculusConnectionManager__OculusConnection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusConnectionManager__OculusConnection();

public:
  /// @brief Field _id, offset: 0x10, size: 0x8, def value: None
  uint64_t ____id;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isConnectionOwner, offset: 0x28, size: 0x1, def value: None
  bool ____isConnectionOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusConnectionManager__OculusConnection, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__OculusConnection, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__OculusConnection, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__OculusConnection, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__OculusConnection, ____isConnectionOwner) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartServerParams
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4582))
// CS Name: ::OculusConnectionManager::StartServerParams*
class CORDL_TYPE __OculusConnectionManager__StartServerParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field oculusNetworkPlayerModel, offset 0x10, size 0x8
  __declspec(property(get = __get_oculusNetworkPlayerModel, put = __set_oculusNetworkPlayerModel))::GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>*() noexcept;

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get_oculusNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get_oculusNetworkPlayerModel() const;

  constexpr void __set_oculusNetworkPlayerModel(::GlobalNamespace::OculusNetworkPlayerModel* value);

  static inline ::GlobalNamespace::__OculusConnectionManager__StartServerParams* New_ctor();

  /// @brief Method .ctor addr 0x221ff20 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusConnectionManager__StartServerParams(__OculusConnectionManager__StartServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__StartServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusConnectionManager__StartServerParams(__OculusConnectionManager__StartServerParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusConnectionManager__StartServerParams();

public:
  /// @brief Field oculusNetworkPlayerModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* ___oculusNetworkPlayerModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusConnectionManager__StartServerParams, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__StartServerParams, ___oculusNetworkPlayerModel) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4583))
// CS Name: ::OculusConnectionManager::ConnectToServerParams*
class CORDL_TYPE __OculusConnectionManager__ConnectToServerParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field oculusNetworkPlayerModel, offset 0x10, size 0x8
  __declspec(property(get = __get_oculusNetworkPlayerModel, put = __set_oculusNetworkPlayerModel))::GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;

  /// @brief Field serverId, offset 0x18, size 0x8
  __declspec(property(get = __get_serverId, put = __set_serverId)) uint64_t serverId;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>*() noexcept;

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get_oculusNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get_oculusNetworkPlayerModel() const;

  constexpr void __set_oculusNetworkPlayerModel(::GlobalNamespace::OculusNetworkPlayerModel* value);

  constexpr uint64_t& __get_serverId();

  constexpr uint64_t const& __get_serverId() const;

  constexpr void __set_serverId(uint64_t value);

  static inline ::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams* New_ctor();

  /// @brief Method .ctor addr 0x221ff28 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusConnectionManager__ConnectToServerParams(__OculusConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusConnectionManager__ConnectToServerParams(__OculusConnectionManager__ConnectToServerParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusConnectionManager__ConnectToServerParams();

public:
  /// @brief Field oculusNetworkPlayerModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* ___oculusNetworkPlayerModel;

  /// @brief Field serverId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___serverId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams, ___oculusNetworkPlayerModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams, ___serverId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandlePeerConnectionRequest>d__61
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4584)) CS Name: ::OculusConnectionManager::<HandlePeerConnectionRequest>d__61
struct CORDL_TYPE __OculusConnectionManager___HandlePeerConnectionRequest_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x221ff30 size 0x2e4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22203e8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusConnectionManager*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusConnectionManager___HandlePeerConnectionRequest_d__61(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* message,
                                                                          ::GlobalNamespace::OculusConnectionManager* __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusConnectionManager___HandlePeerConnectionRequest_d__61();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* message;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OculusConnectionManager* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusConnectionManager
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4580)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4585))
// CS Name: ::OculusConnectionManager*
class CORDL_TYPE OculusConnectionManager : public ::System::Object {
public:
  // Declarations
  using _HandlePeerConnectionRequest_d__61 = ::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61;

  using ConnectToServerParams = ::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams;

  using StartServerParams = ::GlobalNamespace::__OculusConnectionManager__StartServerParams;

  using OculusConnection = ::GlobalNamespace::__OculusConnectionManager__OculusConnection;

  using NetworkMode = ::GlobalNamespace::__OculusConnectionManager__NetworkMode;

  /// @brief Field _connections, offset 0x10, size 0x8
  __declspec(property(get = __get__connections, put = __set__connections))::System::Collections::Generic::List_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>* _connections;

  /// @brief Field _dataReader, offset 0x18, size 0x8
  __declspec(property(get = __get__dataReader, put = __set__dataReader))::LiteNetLib::Utils::NetDataReader* _dataReader;

  /// @brief Field _oculusNetworkPlayerModel, offset 0x20, size 0x8
  __declspec(property(get = __get__oculusNetworkPlayerModel, put = __set__oculusNetworkPlayerModel))::GlobalNamespace::OculusNetworkPlayerModel* _oculusNetworkPlayerModel;

  /// @brief Field _mode, offset 0x28, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::GlobalNamespace::__OculusConnectionManager__NetworkMode _mode;

  /// @brief Field _connectionEstablished, offset 0x2c, size 0x1
  __declspec(property(get = __get__connectionEstablished, put = __set__connectionEstablished)) bool _connectionEstablished;

  /// @brief Field onInitializedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_onInitializedEvent, put = __set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onConnectedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_onConnectedEvent, put = __set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_onDisconnectedEvent, put = __set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_onConnectionFailedEvent, put = __set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_onConnectionConnectedEvent, put = __set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_onConnectionDisconnectedEvent,
                      put = __set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_onReceivedDataEvent,
                      put = __set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  /// @brief Field <isDisconnecting>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __get__isDisconnecting_k__BackingField, put = __set__isDisconnecting_k__BackingField)) bool _isDisconnecting_k__BackingField;

  /// @brief Field _buffer, offset 0x70, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting, put = set_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isServer)) bool isServer;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>*& __get__connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>*> const& __get__connections() const;

  constexpr void __set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>* value);

  constexpr ::LiteNetLib::Utils::NetDataReader*& __get__dataReader();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& __get__dataReader() const;

  constexpr void __set__dataReader(::LiteNetLib::Utils::NetDataReader* value);

  constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& __get__oculusNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& __get__oculusNetworkPlayerModel() const;

  constexpr void __set__oculusNetworkPlayerModel(::GlobalNamespace::OculusNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::__OculusConnectionManager__NetworkMode& __get__mode();

  constexpr ::GlobalNamespace::__OculusConnectionManager__NetworkMode const& __get__mode() const;

  constexpr void __set__mode(::GlobalNamespace::__OculusConnectionManager__NetworkMode value);

  constexpr bool& __get__connectionEstablished();

  constexpr bool const& __get__connectionEstablished() const;

  constexpr void __set__connectionEstablished(bool value);

  constexpr ::System::Action*& __get_onInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onInitializedEvent() const;

  constexpr void __set_onInitializedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_onConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onConnectedEvent() const;

  constexpr void __set_onConnectedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get_onDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get_onDisconnectedEvent() const;

  constexpr void __set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __get_onConnectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __get_onConnectionFailedEvent() const;

  constexpr void __set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __get_onConnectionConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& __get_onConnectionConnectedEvent() const;

  constexpr void __set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __get_onConnectionDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const& __get_onConnectionDisconnectedEvent() const;

  constexpr void __set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __get_onReceivedDataEvent() const;

  constexpr void __set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  constexpr bool& __get__isDisconnecting_k__BackingField();

  constexpr bool const& __get__isDisconnecting_k__BackingField() const;

  constexpr void __set__isDisconnecting_k__BackingField(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method add_onInitializedEvent addr 0x221d494 size 0x9c virtual true final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onInitializedEvent addr 0x221d530 size 0x9c virtual true final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onConnectedEvent addr 0x221d5cc size 0x9c virtual true final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectedEvent addr 0x221d668 size 0x9c virtual true final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onDisconnectedEvent addr 0x221d704 size 0xb0 virtual true final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onDisconnectedEvent addr 0x221d7b4 size 0xb0 virtual true final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent addr 0x221d864 size 0xb0 virtual true final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent addr 0x221d914 size 0xb0 virtual true final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onConnectionConnectedEvent addr 0x221d9c4 size 0xb0 virtual true final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionConnectedEvent addr 0x221da74 size 0xb0 virtual true final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent addr 0x221db24 size 0xb0 virtual true final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent addr 0x221dbd4 size 0xb0 virtual true final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onReceivedDataEvent addr 0x221dc84 size 0xb0 virtual true final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onReceivedDataEvent addr 0x221dd34 size 0xb0 virtual true final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_userId addr 0x221dde4 size 0xa8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x221de8c size 0xac virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isConnected addr 0x221df38 size 0x34 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting addr 0x221df6c size 0x24 virtual true final true
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting addr 0x221df90 size 0x8 virtual true final true
  inline bool get_isDisconnecting();

  /// @brief Method set_isDisconnecting addr 0x221df98 size 0xc virtual false final false
  inline void set_isDisconnecting(bool value);

  /// @brief Method get_isDisposed addr 0x221dfa4 size 0x10 virtual true final true
  inline bool get_isDisposed();

  /// @brief Method get_isConnectionOwner addr 0x221dfb4 size 0x10 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isServer addr 0x221dfc4 size 0x10 virtual false final false
  inline bool get_isServer();

  /// @brief Method get_isClient addr 0x221dfd4 size 0x10 virtual false final false
  inline bool get_isClient();

  /// @brief Method get_connectionCount addr 0x221dfe4 size 0x48 virtual true final true
  inline int32_t get_connectionCount();

  /// @brief Method SendToAll addr 0x221e02c size 0x8 virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll addr 0x221e034 size 0xd4 virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method PollUpdate addr 0x221e108 size 0xf8 virtual true final true
  inline void PollUpdate();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method Disconnect addr 0x221e434 size 0x8 virtual true final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal addr 0x221e43c size 0x22c virtual false final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method Dispose addr 0x221e668 size 0xc virtual true final true
  inline void Dispose();

  /// @brief Method DisposeAsync addr 0x221e674 size 0x9c virtual true final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method GetConnection addr 0x221e710 size 0x58 virtual true final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method HandlePeerConnectionRequest addr 0x221e768 size 0x9c virtual false final false
  inline void HandlePeerConnectionRequest(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* message);

  /// @brief Method HandleConnectionStateChanged addr 0x221e804 size 0x100 virtual false final false
  inline void HandleConnectionStateChanged(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* message);

  /// @brief Method GetConnection addr 0x221e200 size 0x1b8 virtual false final false
  inline ::GlobalNamespace::__OculusConnectionManager__OculusConnection* GetConnection(uint64_t user);

  /// @brief Method RemoveConnection addr 0x221e904 size 0x134 virtual false final false
  inline void RemoveConnection(uint64_t id, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method AcquireBuffer addr 0x221e3b8 size 0x6c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AcquireBuffer(int32_t size);

  /// @brief Method ReleaseBuffer addr 0x221e430 size 0x4 virtual false final false
  inline void ReleaseBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method DeliveryMethodToSendPolicy addr 0x221ea38 size 0x10 virtual false final false
  static inline ::Oculus::Platform::SendPolicy DeliveryMethodToSendPolicy(::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendPolicyToDeliveryMethod addr 0x221e424 size 0xc virtual false final false
  static inline ::BGNet::Core::DeliveryMethod SendPolicyToDeliveryMethod(::Oculus::Platform::SendPolicy sendPolicy);

  /// @brief Method VoidHandler addr 0x221ea48 size 0x4 virtual false final false
  static inline void VoidHandler(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* message);

  static inline ::GlobalNamespace::OculusConnectionManager* New_ctor();

  /// @brief Method .ctor addr 0x221ea4c size 0x10d0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusConnectionManager(OculusConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusConnectionManager(OculusConnectionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusConnectionManager();

public:
  /// @brief Field _connections, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OculusConnectionManager__OculusConnection*>* ____connections;

  /// @brief Field _dataReader, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ____dataReader;

  /// @brief Field _oculusNetworkPlayerModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusNetworkPlayerModel* ____oculusNetworkPlayerModel;

  /// @brief Field _mode, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OculusConnectionManager__NetworkMode ____mode;

  /// @brief Field _connectionEstablished, offset: 0x2c, size: 0x1, def value: None
  bool ____connectionEstablished;

  /// @brief Field onInitializedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___onInitializedEvent;

  /// @brief Field onConnectedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnection*>* ___onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* ___onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* ___onReceivedDataEvent;

  /// @brief Field <isDisconnecting>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____isDisconnecting_k__BackingField;

  /// @brief Field _buffer, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusConnectionManager, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____connections) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____dataReader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____oculusNetworkPlayerModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____connectionEstablished) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onInitializedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onConnectedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onDisconnectedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onConnectionFailedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onConnectionConnectedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onConnectionDisconnectedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ___onReceivedDataEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____isDisconnecting_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusConnectionManager, ____buffer) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusConnectionManager__NetworkMode, "", "OculusConnectionManager/NetworkMode");
NEED_NO_BOX(::GlobalNamespace::OculusConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusConnectionManager*, "", "OculusConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusConnectionManager__ConnectToServerParams*, "", "OculusConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__OculusConnectionManager__OculusConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusConnectionManager__OculusConnection*, "", "OculusConnectionManager/OculusConnection");
NEED_NO_BOX(::GlobalNamespace::__OculusConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusConnectionManager__StartServerParams*, "", "OculusConnectionManager/StartServerParams");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusConnectionManager___HandlePeerConnectionRequest_d__61, "", "OculusConnectionManager/<HandlePeerConnectionRequest>d__61");
