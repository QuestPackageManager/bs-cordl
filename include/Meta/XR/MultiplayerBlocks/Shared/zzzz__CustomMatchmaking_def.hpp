#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmaking)
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking_ICustomMatchmakingBehaviour;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomCreationOptions;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomOperationResult;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__CreateRoom_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__CreateRoom_d__26;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__JoinOpenRoom_d__28;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__JoinRoom_d__27;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking_ICustomMatchmakingBehaviour;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomCreationOptions;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomOperationResult;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__CreateRoom_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__CreateRoom_d__26;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__JoinOpenRoom_d__28;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking__JoinRoom_d__27;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/ICustomMatchmakingBehaviour
class CORDL_TYPE CustomMatchmaking_ICustomMatchmakingBehaviour {
public:
  // Declarations
  __declspec(property(get = get_ConnectedRoomToken)) ::StringW ConnectedRoomToken;

  __declspec(property(get = get_IsConnected)) bool IsConnected;

  __declspec(property(get = get_SupportsRoomPassword)) bool SupportsRoomPassword;

  /// @brief Method CreateRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*
  CreateRoom(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions options);

  /// @brief Method JoinOpenRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* JoinOpenRoom(::StringW lobbyName);

  /// @brief Method JoinRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* JoinRoom(::StringW roomToken, ::StringW roomPassword);

  /// @brief Method LeaveRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LeaveRoom();

  /// @brief Method get_ConnectedRoomToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ConnectedRoomToken();

  /// @brief Method get_IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsConnected();

  /// @brief Method get_SupportsRoomPassword, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsRoomPassword();

  // Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking_ICustomMatchmakingBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomMatchmaking_ICustomMatchmakingBehaviour(CustomMatchmaking_ICustomMatchmakingBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/RoomCreationOptions
struct CORDL_TYPE CustomMatchmaking_RoomCreationOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking_RoomCreationOptions();

  // Ctor Parameters [CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "MaxPlayersPerRoom", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "IsPrivate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LobbyName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr CustomMatchmaking_RoomCreationOptions(::StringW RoomPassword, int32_t MaxPlayersPerRoom, bool IsPrivate, ::StringW LobbyName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20342 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field RoomPassword, offset: 0x0, size: 0x8, def value: None
  ::StringW RoomPassword;

  /// @brief Field MaxPlayersPerRoom, offset: 0x8, size: 0x4, def value: None
  int32_t MaxPlayersPerRoom;

  /// @brief Field IsPrivate, offset: 0xc, size: 0x1, def value: None
  bool IsPrivate;

  /// @brief Field LobbyName, offset: 0x10, size: 0x8, def value: None
  ::StringW LobbyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, RoomPassword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, MaxPlayersPerRoom) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, IsPrivate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, LobbyName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/RoomOperationResult
struct CORDL_TYPE CustomMatchmaking_RoomOperationResult {
public:
  // Declarations
  __declspec(property(get = get_IsSuccess)) bool IsSuccess;

  /// @brief Method get_IsSuccess, addr 0x58c3d3c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsSuccess();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking_RoomOperationResult();

  // Ctor Parameters [CppParam { name: "ErrorMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RoomToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr CustomMatchmaking_RoomOperationResult(::StringW ErrorMessage, ::StringW RoomToken, ::StringW RoomPassword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20343 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field ErrorMessage, offset: 0x0, size: 0x8, def value: None
  ::StringW ErrorMessage;

  /// @brief Field RoomToken, offset: 0x8, size: 0x8, def value: None
  ::StringW RoomToken;

  /// @brief Field RoomPassword, offset: 0x10, size: 0x8, def value: None
  ::StringW RoomPassword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult, ErrorMessage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult, RoomToken) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult, RoomPassword) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/<CreateRoom>d__25
struct CORDL_TYPE CustomMatchmaking__CreateRoom_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c3d5c, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c4028, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking__CreateRoom_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }]
  constexpr CustomMatchmaking__CreateRoom_d__25(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder,
      ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20344 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, 0x30>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomCreationOptions, Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult,
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/<CreateRoom>d__26
struct CORDL_TYPE CustomMatchmaking__CreateRoom_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c40a8, size 0x3c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c4470, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking__CreateRoom_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "options", ty:
  // "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }]
  constexpr CustomMatchmaking__CreateRoom_d__26(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder,
      ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this, ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions options,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20345 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this;

  /// @brief Field options, offset: 0x28, size: 0x18, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions options;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/<JoinOpenRoom>d__28
struct CORDL_TYPE CustomMatchmaking__JoinOpenRoom_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c44f0, size 0x3ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c489c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking__JoinOpenRoom_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "roomLobby", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "",
  // def_value: None }]
  constexpr CustomMatchmaking__JoinOpenRoom_d__28(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder,
      ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this, ::StringW roomLobby,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this;

  /// @brief Field roomLobby, offset: 0x28, size: 0x8, def value: None
  ::StringW roomLobby;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, roomLobby) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/<JoinRoom>d__27
struct CORDL_TYPE CustomMatchmaking__JoinRoom_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c491c, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c4ccc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking__JoinRoom_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "roomToken", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }]
  constexpr CustomMatchmaking__JoinRoom_d__27(int32_t __1__state,
                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder,
                                              ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this, ::StringW roomToken, ::StringW roomPassword,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20347 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> __4__this;

  /// @brief Field roomToken, offset: 0x28, size: 0x8, def value: None
  ::StringW roomToken;

  /// @brief Field roomPassword, offset: 0x30, size: 0x8, def value: None
  ::StringW roomPassword;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, roomToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, roomPassword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking
class CORDL_TYPE CustomMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ICustomMatchmakingBehaviour = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour;

  using RoomCreationOptions = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions;

  using RoomOperationResult = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult;

  using _CreateRoom_d__25 = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25;

  using _CreateRoom_d__26 = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26;

  using _JoinOpenRoom_d__28 = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28;

  using _JoinRoom_d__27 = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27;

  __declspec(property(get = get_ConnectedRoomToken)) ::StringW ConnectedRoomToken;

  __declspec(property(get = get_IsConnected)) bool IsConnected;

  __declspec(property(get = get_IsPasswordProtected, put = set_IsPasswordProtected)) bool IsPasswordProtected;

  __declspec(property(get = get_IsPrivate, put = set_IsPrivate)) bool IsPrivate;

  __declspec(property(get = get_LobbyName, put = set_LobbyName)) ::StringW LobbyName;

  /// @brief Field MatchmakingBehaviour, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_MatchmakingBehaviour,
                      put = __cordl_internal_set_MatchmakingBehaviour)) ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* MatchmakingBehaviour;

  __declspec(property(get = get_MaxPlayersPerRoom, put = set_MaxPlayersPerRoom)) int32_t MaxPlayersPerRoom;

  __declspec(property(get = get_SupportsRoomPassword)) bool SupportsRoomPassword;

  /// @brief Field isPasswordProtected, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isPasswordProtected, put = __cordl_internal_set_isPasswordProtected)) bool isPasswordProtected;

  /// @brief Field isPrivate, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isPrivate, put = __cordl_internal_set_isPrivate)) bool isPrivate;

  /// @brief Field lobbyName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyName, put = __cordl_internal_set_lobbyName)) ::StringW lobbyName;

  /// @brief Field maxPlayersPerRoom, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPlayersPerRoom, put = __cordl_internal_set_maxPlayersPerRoom)) int32_t maxPlayersPerRoom;

  /// @brief Field onRoomCreationFinished, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onRoomCreationFinished,
      put = __cordl_internal_set_onRoomCreationFinished)) ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* onRoomCreationFinished;

  /// @brief Field onRoomJoinFinished, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onRoomJoinFinished,
      put = __cordl_internal_set_onRoomJoinFinished)) ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* onRoomJoinFinished;

  /// @brief Field onRoomLeaveFinished, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoomLeaveFinished, put = __cordl_internal_set_onRoomLeaveFinished)) ::UnityEngine::Events::UnityEvent* onRoomLeaveFinished;

  /// @brief Method CreateRoom, addr 0x58c3628, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* CreateRoom();

  /// @brief Method CreateRoom, addr 0x58c3704, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*
  CreateRoom(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions options);

  /// @brief Method GenerateRoomPassword, addr 0x58c3c14, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW GenerateRoomPassword();

  /// @brief Method JoinOpenRoom, addr 0x58c38f0, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* JoinOpenRoom(::StringW roomLobby);

  /// @brief Method JoinRoom, addr 0x58c3800, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* JoinRoom(::StringW roomToken, ::StringW roomPassword);

  /// @brief Method LeaveRoom, addr 0x58c39e0, size 0xc4, virtual false, abstract: false, final false
  inline void LeaveRoom();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking* New_ctor();

  /// @brief Method OnEnable, addr 0x58c353c, size 0xec, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* const& __cordl_internal_get_MatchmakingBehaviour() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*& __cordl_internal_get_MatchmakingBehaviour();

  constexpr bool const& __cordl_internal_get_isPasswordProtected() const;

  constexpr bool& __cordl_internal_get_isPasswordProtected();

  constexpr bool const& __cordl_internal_get_isPrivate() const;

  constexpr bool& __cordl_internal_get_isPrivate();

  constexpr ::StringW const& __cordl_internal_get_lobbyName() const;

  constexpr ::StringW& __cordl_internal_get_lobbyName();

  constexpr int32_t const& __cordl_internal_get_maxPlayersPerRoom() const;

  constexpr int32_t& __cordl_internal_get_maxPlayersPerRoom();

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onRoomCreationFinished() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onRoomCreationFinished();

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onRoomJoinFinished() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onRoomJoinFinished();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRoomLeaveFinished() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRoomLeaveFinished();

  constexpr void __cordl_internal_set_MatchmakingBehaviour(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* value);

  constexpr void __cordl_internal_set_isPasswordProtected(bool value);

  constexpr void __cordl_internal_set_isPrivate(bool value);

  constexpr void __cordl_internal_set_lobbyName(::StringW value);

  constexpr void __cordl_internal_set_maxPlayersPerRoom(int32_t value);

  constexpr void __cordl_internal_set_onRoomCreationFinished(::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* value);

  constexpr void __cordl_internal_set_onRoomJoinFinished(::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* value);

  constexpr void __cordl_internal_set_onRoomLeaveFinished(::UnityEngine::Events::UnityEvent* value);

  /// @brief Method .ctor, addr 0x58c3ce4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConnectedRoomToken, addr 0x58c3b58, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW get_ConnectedRoomToken();

  /// @brief Method get_IsConnected, addr 0x58c3aa4, size 0xb4, virtual false, abstract: false, final false
  inline bool get_IsConnected();

  /// @brief Method get_IsPasswordProtected, addr 0x58c352c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPasswordProtected();

  /// @brief Method get_IsPrivate, addr 0x58c350c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPrivate();

  /// @brief Method get_LobbyName, addr 0x58c34fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LobbyName();

  /// @brief Method get_MaxPlayersPerRoom, addr 0x58c351c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxPlayersPerRoom();

  /// @brief Method get_SupportsRoomPassword, addr 0x58c3c30, size 0xb4, virtual false, abstract: false, final false
  inline bool get_SupportsRoomPassword();

  /// @brief Method set_IsPasswordProtected, addr 0x58c3534, size 0x8, virtual false, abstract: false, final false
  inline void set_IsPasswordProtected(bool value);

  /// @brief Method set_IsPrivate, addr 0x58c3514, size 0x8, virtual false, abstract: false, final false
  inline void set_IsPrivate(bool value);

  /// @brief Method set_LobbyName, addr 0x58c3504, size 0x8, virtual false, abstract: false, final false
  inline void set_LobbyName(::StringW value);

  /// @brief Method set_MaxPlayersPerRoom, addr 0x58c3524, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxPlayersPerRoom(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomMatchmaking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomMatchmaking(CustomMatchmaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomMatchmaking(CustomMatchmaking const&) = delete;

  /// @brief Field DebugCategory offset 0xffffffff size 0x8
  static constexpr ::ConstString DebugCategory{ u"Custom Matchmaking" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20348 };

  /// @brief Field onRoomCreationFinished, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* ___onRoomCreationFinished;

  /// @brief Field onRoomJoinFinished, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* ___onRoomJoinFinished;

  /// @brief Field onRoomLeaveFinished, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onRoomLeaveFinished;

  /// @brief Field lobbyName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___lobbyName;

  /// @brief Field isPrivate, offset: 0x40, size: 0x1, def value: None
  bool ___isPrivate;

  /// @brief Field maxPlayersPerRoom, offset: 0x44, size: 0x4, def value: None
  int32_t ___maxPlayersPerRoom;

  /// @brief Field isPasswordProtected, offset: 0x48, size: 0x1, def value: None
  bool ___isPasswordProtected;

  /// @brief Field MatchmakingBehaviour, offset: 0x50, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* ___MatchmakingBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomCreationFinished) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomJoinFinished) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomLeaveFinished) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___lobbyName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___isPrivate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___maxPlayersPerRoom) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___isPasswordProtected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___MatchmakingBehaviour) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, 0x58>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/ICustomMatchmakingBehaviour");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomCreationOptions, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/RoomCreationOptions");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/RoomOperationResult");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__25, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/<CreateRoom>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__CreateRoom_d__26, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/<CreateRoom>d__26");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinOpenRoom_d__28, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/<JoinOpenRoom>d__28");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking__JoinRoom_d__27, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/<JoinRoom>d__27");
