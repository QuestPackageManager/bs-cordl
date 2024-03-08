#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftConnectionManager)
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class GameLiftClientConnectionRequestHandler;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager___GameLiftConnectToServer_d__81;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
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
struct __GameLiftConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager___GameLiftConnectToServer_d__81;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::GameLiftConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams);
MARK_VAL_T(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81);
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameLiftConnectionManager::ConnectionState
struct CORDL_TYPE __GameLiftConnectionManager__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameLiftConnectionManager__ConnectionState_Unwrapped
  enum struct ____GameLiftConnectionManager__ConnectionState_Unwrapped : int32_t {
    __E_Unconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameLiftConnectionManager__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____GameLiftConnectionManager__ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameLiftConnectionManager__ConnectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Connected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Connecting;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Disconnecting;

  /// @brief Field Unconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Unconnected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameLiftConnectionManagerParamsBase
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase*
class CORDL_TYPE __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field authenticationTokenProviderTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_authenticationTokenProviderTask,
                      put = __cordl_internal_set_authenticationTokenProviderTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;

  /// @brief Field configuration, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_configuration, put = __cordl_internal_set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field gameLiftPlayerSessionProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameLiftPlayerSessionProvider,
                      put = __cordl_internal_set_gameLiftPlayerSessionProvider))::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* gameLiftPlayerSessionProvider;

  /// @brief Field selectionMask, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get_selectionMask, put = __cordl_internal_set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*() noexcept;

  static inline ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase* New_ctor();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __cordl_internal_get_authenticationTokenProviderTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const&
  __cordl_internal_get_authenticationTokenProviderTask() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_configuration();

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __cordl_internal_get_gameLiftPlayerSessionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const& __cordl_internal_get_gameLiftPlayerSessionProvider() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_selectionMask();

  constexpr void __cordl_internal_set_authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr void __cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  constexpr void __cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0xeca2f4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>"
  constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*
  i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__GameLiftConnectionManager__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase const&) = delete;

  /// @brief Field authenticationTokenProviderTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ___authenticationTokenProviderTask;

  /// @brief Field gameLiftPlayerSessionProvider, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ___gameLiftPlayerSessionProvider;

  /// @brief Field selectionMask, offset: 0x20, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___authenticationTokenProviderTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___gameLiftPlayerSessionProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___selectionMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___configuration) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameLiftConnectionManager::ConnectToServerParams*
class CORDL_TYPE __GameLiftConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
  // Declarations
  /// @brief Field code, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code))::StringW code;

  /// @brief Field secret, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret))::StringW secret;

  static inline ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_code() const;

  constexpr ::StringW& __cordl_internal_get_code();

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_code(::StringW value);

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method .ctor, addr 0xeca334, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__ConnectToServerParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__ConnectToServerParams(__GameLiftConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__ConnectToServerParams(__GameLiftConnectionManager__ConnectToServerParams const&) = delete;

  /// @brief Field secret, offset: 0x60, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x68, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, ___secret) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, ___code) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientParams
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameLiftConnectionManager::StartClientParams*
class CORDL_TYPE __GameLiftConnectionManager__StartClientParams : public ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* New_ctor();

  /// @brief Method .ctor, addr 0xeca360, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__StartClientParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__StartClientParams(__GameLiftConnectionManager__StartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__StartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__StartClientParams(__GameLiftConnectionManager__StartClientParams const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GameLiftConnectToServer>d__81
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameLiftConnectionManager::<GameLiftConnectToServer>d__81
struct CORDL_TYPE __GameLiftConnectionManager___GameLiftConnectToServer_d__81 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xeca38c, size 0x60c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xeca998, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager___GameLiftConnectToServer_d__81();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameLiftConnectionManager*", modifiers: "",
  // def_value: None }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: None }]
  constexpr __GameLiftConnectionManager___GameLiftConnectToServer_d__81(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::GameLiftConnectionManager* __4__this, ::StringW secret, ::StringW code,
                                                                        ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> __u__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftConnectionManager* __4__this;

  /// @brief Field secret, offset: 0x30, size: 0x8, def value: None
  ::StringW secret;

  /// @brief Field code, offset: 0x38, size: 0x8, def value: None
  ::StringW code;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, secret) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, code) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, __u__2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameLiftConnectionManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameLiftConnectionManager*
class CORDL_TYPE GameLiftConnectionManager : public ::System::Object {
public:
  // Declarations
  using ConnectToServerParams = ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams;

  using ConnectionState = ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState;

  using GameLiftConnectionManagerParamsBase = ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;

  using StartClientParams = ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams;

  using _GameLiftConnectToServer_d__81 = ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81;

  /// @brief Field _authenticationTokenProviderTask, offset 0x90, size 0x8
  __declspec(
      property(get = __cordl_internal_get__authenticationTokenProviderTask,
               put = __cordl_internal_set__authenticationTokenProviderTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* _authenticationTokenProviderTask;

  /// @brief Field _certificateValidator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__certificateValidator, put = __cordl_internal_set__certificateValidator))::GlobalNamespace::ICertificateValidator* _certificateValidator;

  /// @brief Field _code, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::StringW _code;

  /// @brief Field _configuration, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration))::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _connectionCancellationTokenSource, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionCancellationTokenSource,
                      put = __cordl_internal_set__connectionCancellationTokenSource))::System::Threading::CancellationTokenSource* _connectionCancellationTokenSource;

  /// @brief Field _connectionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager))::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _connectionRequestHandler, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionRequestHandler,
                      put = __cordl_internal_set__connectionRequestHandler))::GlobalNamespace::GameLiftClientConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field _connectionState, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState))::GlobalNamespace::__GameLiftConnectionManager__ConnectionState _connectionState;

  /// @brief Field _gameLiftPlayerSessionProvider, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftPlayerSessionProvider,
                      put = __cordl_internal_set__gameLiftPlayerSessionProvider))::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* _gameLiftPlayerSessionProvider;

  /// @brief Field _secret, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__secret, put = __cordl_internal_set__secret))::StringW _secret;

  /// @brief Field _selectionMask, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask, put = __cordl_internal_set__selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  /// @brief Field _taskUtility, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _timeProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  /// @brief Field onConnectedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectedEvent, put = __cordl_internal_set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionConnectedEvent,
                      put = __cordl_internal_set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onConnectionDisconnectedEvent,
               put = __cordl_internal_set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_onConnectionFailedEvent,
                      put = __cordl_internal_set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onDisconnectedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisconnectedEvent, put = __cordl_internal_set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onInitializedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializedEvent, put = __cordl_internal_set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onReceivedDataEvent, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onReceivedDataEvent,
      put = __cordl_internal_set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  __declspec(property(get = get_playerSessionId))::StringW playerSessionId;

  __declspec(property(get = get_secret))::StringW secret;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Disconnect, addr 0xec9a50, size 0x8, virtual true, abstract: false, final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal, addr 0xec9cbc, size 0xc, virtual false, abstract: false, final false
  inline void DisconnectInternal(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method DisconnectInternal, addr 0xec9a58, size 0x264, virtual false, abstract: false, final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method Dispose, addr 0xec99b0, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0xec990c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method GameLiftConnectToServer, addr 0xec9e04, size 0xb8, virtual false, abstract: false, final false
  inline void GameLiftConnectToServer(::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetConnection, addr 0xec9cc8, size 0xac, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method GetPublicServers, addr 0xeca290, size 0x64, virtual false, abstract: false, final false
  inline void GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                               ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration configuration, int32_t offset, int32_t count);

  /// @brief Method HandleConnectToServerSuccess, addr 0xec9ebc, size 0x3c4, virtual false, abstract: false, final false
  inline void HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret, ::StringW code,
                                           ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method HandleConnected, addr 0xec9d74, size 0x30, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionConnected, addr 0xec9da4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected, addr 0xec9dc0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method HandleConnectionFailed, addr 0xec9ddc, size 0xc, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason failedReason);

  /// @brief Method HandleReceivedData, addr 0xec9de8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleReceivedData(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  static inline ::GlobalNamespace::GameLiftConnectionManager* New_ctor();

  static inline ::GlobalNamespace::GameLiftConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                       ::GlobalNamespace::IConnectionManager* connectionManager, ::GlobalNamespace::ICertificateValidator* certificateValidator);

  /// @brief Method PollUpdate, addr 0xec91f8, size 0xa0, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method SendToAll, addr 0xec9078, size 0xbc, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll, addr 0xec9134, size 0xc4, virtual true, abstract: false, final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __cordl_internal_get__authenticationTokenProviderTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const&
  __cordl_internal_get__authenticationTokenProviderTask() const;

  constexpr ::GlobalNamespace::ICertificateValidator*& __cordl_internal_get__certificateValidator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateValidator*> const& __cordl_internal_get__certificateValidator() const;

  constexpr ::StringW const& __cordl_internal_get__code() const;

  constexpr ::StringW& __cordl_internal_get__code();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__connectionCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__connectionCancellationTokenSource() const;

  constexpr ::GlobalNamespace::IConnectionManager*& __cordl_internal_get__connectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> const& __cordl_internal_get__connectionManager() const;

  constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler*& __cordl_internal_get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftClientConnectionRequestHandler*> const& __cordl_internal_get__connectionRequestHandler() const;

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __cordl_internal_get__gameLiftPlayerSessionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const& __cordl_internal_get__gameLiftPlayerSessionProvider() const;

  constexpr ::StringW const& __cordl_internal_get__secret() const;

  constexpr ::StringW& __cordl_internal_get__secret();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask();

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __cordl_internal_get__timeProvider() const;

  constexpr ::System::Action*& __cordl_internal_get_onConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __cordl_internal_get_onConnectionConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& __cordl_internal_get_onConnectionConnectedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onConnectionDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const&
  __cordl_internal_get_onConnectionDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_onConnectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __cordl_internal_get_onConnectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_onDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __cordl_internal_get_onDisconnectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_onInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onInitializedEvent() const;

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __cordl_internal_get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __cordl_internal_get_onReceivedDataEvent() const;

  constexpr void __cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr void __cordl_internal_set__certificateValidator(::GlobalNamespace::ICertificateValidator* value);

  constexpr void __cordl_internal_set__code(::StringW value);

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr void __cordl_internal_set__connectionRequestHandler(::GlobalNamespace::GameLiftClientConnectionRequestHandler* value);

  constexpr void __cordl_internal_set__connectionState(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState value);

  constexpr void __cordl_internal_set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  constexpr void __cordl_internal_set__secret(::StringW value);

  constexpr void __cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr void __cordl_internal_set_onConnectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr void __cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_onInitializedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method .ctor, addr 0xec9298, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0xec945c, size 0x4b0, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
                    ::GlobalNamespace::ICertificateValidator* certificateValidator);

  /// @brief Method add_onConnectedEvent, addr 0xec8418, size 0x9c, virtual true, abstract: false, final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onConnectionConnectedEvent, addr 0xec8810, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent, addr 0xec8970, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent, addr 0xec86b0, size 0xb0, virtual true, abstract: false, final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onDisconnectedEvent, addr 0xec8550, size 0xb0, virtual true, abstract: false, final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onInitializedEvent, addr 0xec82e0, size 0x9c, virtual true, abstract: false, final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onReceivedDataEvent, addr 0xec8ad0, size 0xb0, virtual true, abstract: false, final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_code, addr 0xec9068, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0xec9054, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectionCount, addr 0xec8e38, size 0xa4, virtual true, abstract: false, final true
  inline int32_t get_connectionCount();

  /// @brief Method get_isConnected, addr 0xec8e08, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0xec8e18, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0xec8edc, size 0xa4, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0xec8e28, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isDisposed, addr 0xec8f80, size 0xa4, virtual true, abstract: false, final true
  inline bool get_isDisposed();

  /// @brief Method get_playerSessionId, addr 0xec9024, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_playerSessionId();

  /// @brief Method get_secret, addr 0xec9070, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Method get_selectionMask, addr 0xec9040, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_userId, addr 0xec8c30, size 0xec, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0xec8d1c, size 0xec, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectionManager"
  constexpr ::GlobalNamespace::IConnectionManager* i___GlobalNamespace__IConnectionManager() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onConnectedEvent, addr 0xec84b4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectionConnectedEvent, addr 0xec88c0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent, addr 0xec8a20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent, addr 0xec8760, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onDisconnectedEvent, addr 0xec8600, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onInitializedEvent, addr 0xec837c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onReceivedDataEvent, addr 0xec8b80, size 0xb0, virtual true, abstract: false, final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftConnectionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftConnectionManager(GameLiftConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftConnectionManager(GameLiftConnectionManager const&) = delete;

  /// @brief Field _timeProvider, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connectionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionManager* ____connectionManager;

  /// @brief Field _certificateValidator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ICertificateValidator* ____certificateValidator;

  /// @brief Field _code, offset: 0x30, size: 0x8, def value: None
  ::StringW ____code;

  /// @brief Field _secret, offset: 0x38, size: 0x8, def value: None
  ::StringW ____secret;

  /// @brief Field _selectionMask, offset: 0x40, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field _configuration, offset: 0x68, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _connectionState, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState ____connectionState;

  /// @brief Field _connectionCancellationTokenSource, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____connectionCancellationTokenSource;

  /// @brief Field _authenticationTokenProviderTask, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ____authenticationTokenProviderTask;

  /// @brief Field _gameLiftPlayerSessionProvider, offset: 0x98, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ____gameLiftPlayerSessionProvider;

  /// @brief Field _connectionRequestHandler, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftClientConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field onInitializedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___onInitializedEvent;

  /// @brief Field onConnectedEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnection*>* ___onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* ___onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* ___onReceivedDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftConnectionManager, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____timeProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____taskUtility) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____certificateValidator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____code) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____secret) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____selectionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____configuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionCancellationTokenSource) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____authenticationTokenProviderTask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____gameLiftPlayerSessionProvider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionRequestHandler) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onInitializedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectedEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onDisconnectedEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionFailedEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionConnectedEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionDisconnectedEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onReceivedDataEvent) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, "", "GameLiftConnectionManager/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::GameLiftConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftConnectionManager*, "", "GameLiftConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*, "", "GameLiftConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*, "", "GameLiftConnectionManager/GameLiftConnectionManagerParamsBase");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*, "", "GameLiftConnectionManager/StartClientParams");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81, "", "GameLiftConnectionManager/<GameLiftConnectToServer>d__81");
