#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRColocationSession_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMatchmaking)
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomOperationResult;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__HostOrJoinSessionAutomatically_d__14;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__OnColocationSessionFound_d__16;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAdvertisingColocationSession_d__17;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAsGuest_d__13;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAsHost_d__12;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartDiscoveringColocationSessions_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StopAdvertisingColocationSession_d__18;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StopDiscoveringColocationSessions_d__20;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class LocalMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__HostOrJoinSessionAutomatically_d__14;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__OnColocationSessionFound_d__16;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAdvertisingColocationSession_d__17;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAsGuest_d__13;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartAsHost_d__12;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StartDiscoveringColocationSessions_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StopAdvertisingColocationSession_d__18;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct LocalMatchmaking__StopDiscoveringColocationSessions_d__20;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<HostOrJoinSessionAutomatically>d__14
struct CORDL_TYPE LocalMatchmaking__HostOrJoinSessionAutomatically_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c7f1c, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c81d4, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__HostOrJoinSessionAutomatically_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__HostOrJoinSessionAutomatically_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, OVRColocationSession::Data, System.Runtime.CompilerServices.AsyncVoidMethodBuilder,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<OnColocationSessionFound>d__16
struct CORDL_TYPE LocalMatchmaking__OnColocationSessionFound_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c81dc, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c8504, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__OnColocationSessionFound_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::GlobalNamespace::OVRColocationSession_Data", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers:
  // "", def_value: None }]
  constexpr LocalMatchmaking__OnColocationSessionFound_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
      ::GlobalNamespace::OVRColocationSession_Data data,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this;

  /// @brief Field data, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::OVRColocationSession_Data data;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, 0x50>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies OVRColocationSession::Result, OVRResult`2<TValue, TStatus>, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StartAdvertisingColocationSession>d__17
struct CORDL_TYPE LocalMatchmaking__StartAdvertisingColocationSession_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c850c, size 0x530, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c8a3c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StartAdvertisingColocationSession_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value:
  // None }]
  constexpr LocalMatchmaking__StartAdvertisingColocationSession_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20363 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StartAsGuest>d__13
struct CORDL_TYPE LocalMatchmaking__StartAsGuest_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c8a44, size 0x330, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c8d74, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StartAsGuest_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "stopAfterTimeout", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__StartAsGuest_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this, bool stopAfterTimeout,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this;

  /// @brief Field stopAfterTimeout, offset: 0x28, size: 0x1, def value: None
  bool stopAfterTimeout;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, stopAfterTimeout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StartAsHost>d__12
struct CORDL_TYPE LocalMatchmaking__StartAsHost_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c8de0, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c9058, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StartAsHost_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__StartAsHost_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, 0x30>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies OVRColocationSession::Result, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StartDiscoveringColocationSessions>d__19
struct CORDL_TYPE LocalMatchmaking__StartDiscoveringColocationSessions_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c90c4, size 0x434, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c94f8, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StartDiscoveringColocationSessions_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onGroupFound", ty:
  // "::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__StartDiscoveringColocationSessions_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onGroupFound, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, onGroupFound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies OVRColocationSession::Result, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StopAdvertisingColocationSession>d__18
struct CORDL_TYPE LocalMatchmaking__StopAdvertisingColocationSession_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c9500, size 0x31c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c981c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StopAdvertisingColocationSession_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__StopAdvertisingColocationSession_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20367 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies OVRColocationSession::Result, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StopDiscoveringColocationSessions>d__20
struct CORDL_TYPE LocalMatchmaking__StopDiscoveringColocationSessions_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c9824, size 0x32c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c9b50, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking__StopDiscoveringColocationSessions_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onGroupFound", ty:
  // "::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: None }]
  constexpr LocalMatchmaking__StopDiscoveringColocationSessions_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20368 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onGroupFound, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, onGroupFound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking
class CORDL_TYPE LocalMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HostOrJoinSessionAutomatically_d__14 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14;

  using _OnColocationSessionFound_d__16 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16;

  using _StartAdvertisingColocationSession_d__17 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17;

  using _StartAsGuest_d__13 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13;

  using _StartAsHost_d__12 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12;

  using _StartDiscoveringColocationSessions_d__19 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19;

  using _StopAdvertisingColocationSession_d__18 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18;

  using _StopDiscoveringColocationSessions_d__20 = ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20;

  /// @brief Field OnSessionCreateFailed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnSessionCreateFailed, put = setStaticF_OnSessionCreateFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>* OnSessionCreateFailed;

  /// @brief Field OnSessionCreateSucceeded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnSessionCreateSucceeded, put = setStaticF_OnSessionCreateSucceeded)) ::UnityEngine::Events::UnityEvent_1<::System::Guid>* OnSessionCreateSucceeded;

  /// @brief Field OnSessionDiscoverFailed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnSessionDiscoverFailed, put = setStaticF_OnSessionDiscoverFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>* OnSessionDiscoverFailed;

  /// @brief Field OnSessionDiscoverSucceeded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnSessionDiscoverSucceeded, put = setStaticF_OnSessionDiscoverSucceeded)) ::UnityEngine::Events::UnityEvent_1<::System::Guid>* OnSessionDiscoverSucceeded;

  /// @brief Field _customMatchmaking, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__customMatchmaking, put = __cordl_internal_set__customMatchmaking)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>
      _customMatchmaking;

  /// @brief Field _discoveredLocalSessionAsGuest, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__discoveredLocalSessionAsGuest, put = __cordl_internal_set__discoveredLocalSessionAsGuest)) bool _discoveredLocalSessionAsGuest;

  /// @brief Field automaticHostOrJoin, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_automaticHostOrJoin, put = __cordl_internal_set_automaticHostOrJoin)) bool automaticHostOrJoin;

  /// @brief Field timeDiscoveringInSec, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_timeDiscoveringInSec, put = __cordl_internal_set_timeDiscoveringInSec)) int32_t timeDiscoveringInSec;

  /// @brief Method Awake, addr 0x58c73f0, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HostOrJoinSessionAutomatically, addr 0x58c7738, size 0xa4, virtual false, abstract: false, final false
  inline void HostOrJoinSessionAutomatically();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking* New_ctor();

  /// @brief Method OnColocationSessionFound, addr 0x58c7aac, size 0xc0, virtual false, abstract: false, final false
  inline void OnColocationSessionFound(::GlobalNamespace::OVRColocationSession_Data data);

  /// @brief Method OnDisable, addr 0x58c75f4, size 0x134, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58c74c0, size 0x134, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRoomCreationFinished, addr 0x58c7954, size 0xb8, virtual false, abstract: false, final false
  inline void OnRoomCreationFinished(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result);

  /// @brief Method ReportDiscoverEvent, addr 0x58c7d48, size 0x90, virtual false, abstract: false, final false
  static inline void ReportDiscoverEvent(::GlobalNamespace::OVRColocationSession_Data data);

  /// @brief Method Start, addr 0x58c7728, size 0x10, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartAdvertisingColocationSession, addr 0x58c7a0c, size 0xa0, virtual false, abstract: false, final false
  static inline void StartAdvertisingColocationSession(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method StartAsGuest, addr 0x58c788c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartAsGuest(bool stopAfterTimeout);

  /// @brief Method StartAsHost, addr 0x58c77dc, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartAsHost();

  /// @brief Method StartDiscoveringColocationSessions, addr 0x58c7c08, size 0xa0, virtual false, abstract: false, final false
  static inline void StartDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound);

  /// @brief Method StopAdvertisingColocationSession, addr 0x58c7b6c, size 0x9c, virtual false, abstract: false, final false
  static inline void StopAdvertisingColocationSession();

  /// @brief Method StopDiscoveringColocationSessions, addr 0x58c7ca8, size 0xa0, virtual false, abstract: false, final false
  static inline void StopDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound);

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& __cordl_internal_get__customMatchmaking() const;

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& __cordl_internal_get__customMatchmaking();

  constexpr bool const& __cordl_internal_get__discoveredLocalSessionAsGuest() const;

  constexpr bool& __cordl_internal_get__discoveredLocalSessionAsGuest();

  constexpr bool const& __cordl_internal_get_automaticHostOrJoin() const;

  constexpr bool& __cordl_internal_get_automaticHostOrJoin();

  constexpr int32_t const& __cordl_internal_get_timeDiscoveringInSec() const;

  constexpr int32_t& __cordl_internal_get_timeDiscoveringInSec();

  constexpr void __cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> value);

  constexpr void __cordl_internal_set__discoveredLocalSessionAsGuest(bool value);

  constexpr void __cordl_internal_set_automaticHostOrJoin(bool value);

  constexpr void __cordl_internal_set_timeDiscoveringInSec(int32_t value);

  /// @brief Method .ctor, addr 0x58c7dd8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnSessionCreateFailed();

  static inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* getStaticF_OnSessionCreateSucceeded();

  static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnSessionDiscoverFailed();

  static inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* getStaticF_OnSessionDiscoverSucceeded();

  static inline void setStaticF_OnSessionCreateFailed(::UnityEngine::Events::UnityEvent_1<::StringW>* value);

  static inline void setStaticF_OnSessionCreateSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>* value);

  static inline void setStaticF_OnSessionDiscoverFailed(::UnityEngine::Events::UnityEvent_1<::StringW>* value);

  static inline void setStaticF_OnSessionDiscoverSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMatchmaking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalMatchmaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalMatchmaking(LocalMatchmaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalMatchmaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalMatchmaking(LocalMatchmaking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20369 };

  /// @brief Field automaticHostOrJoin, offset: 0x20, size: 0x1, def value: None
  bool ___automaticHostOrJoin;

  /// @brief Field timeDiscoveringInSec, offset: 0x24, size: 0x4, def value: None
  int32_t ___timeDiscoveringInSec;

  /// @brief Field _customMatchmaking, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> ____customMatchmaking;

  /// @brief Field _discoveredLocalSessionAsGuest, offset: 0x30, size: 0x1, def value: None
  bool ____discoveredLocalSessionAsGuest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ___automaticHostOrJoin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ___timeDiscoveringInSec) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ____customMatchmaking) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, ____discoveredLocalSessionAsGuest) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14, "Meta.XR.MultiplayerBlocks.Shared",
                       "LocalMatchmaking/<HostOrJoinSessionAutomatically>d__14");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<OnColocationSessionFound>d__16");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17, "Meta.XR.MultiplayerBlocks.Shared",
                       "LocalMatchmaking/<StartAdvertisingColocationSession>d__17");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<StartAsGuest>d__13");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<StartAsHost>d__12");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19, "Meta.XR.MultiplayerBlocks.Shared",
                       "LocalMatchmaking/<StartDiscoveringColocationSessions>d__19");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18, "Meta.XR.MultiplayerBlocks.Shared",
                       "LocalMatchmaking/<StopAdvertisingColocationSession>d__18");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20, "Meta.XR.MultiplayerBlocks.Shared",
                       "LocalMatchmaking/<StopDiscoveringColocationSessions>d__20");
