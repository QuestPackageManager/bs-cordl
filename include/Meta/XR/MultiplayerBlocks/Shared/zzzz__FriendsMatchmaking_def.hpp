#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsMatchmaking)
namespace Meta::XR::MultiplayerBlocks::Shared {
struct CustomMatchmaking_RoomOperationResult;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__JoinRoom_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__OnJoinIntentReceived_d__31;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__OnRoomOperationResult_d__24;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__RegisterGameRoom_d__27;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass28_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass29_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform {
class GroupPresenceOptions;
}
namespace Oculus::Platform {
class InviteOptions;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class RosterOptions;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass28_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking___c__DisplayClass29_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__JoinRoom_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__OnJoinIntentReceived_d__31;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__OnRoomOperationResult_d__24;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct FriendsMatchmaking__RegisterGameRoom_d__27;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass21_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs,
                      put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* tcs;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0* New_ctor();

  /// @brief Method <LaunchFriendsInvitePanelAsync>b__0, addr 0x585ff00, size 0xe8, virtual false, abstract: false, final false
  inline void _LaunchFriendsInvitePanelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* message);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* value);

  /// @brief Method .ctor, addr 0x585f4c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsMatchmaking___c__DisplayClass21_0(FriendsMatchmaking___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsMatchmaking___c__DisplayClass21_0(FriendsMatchmaking___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20327 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass23_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* tcs;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0* New_ctor();

  /// @brief Method <LaunchRosterPanelAsync>b__0, addr 0x585ffe8, size 0xe8, virtual false, abstract: false, final false
  inline void _LaunchRosterPanelAsync_b__0(::Oculus::Platform::Message* message);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value);

  /// @brief Method .ctor, addr 0x585f63c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsMatchmaking___c__DisplayClass23_0(FriendsMatchmaking___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsMatchmaking___c__DisplayClass23_0(FriendsMatchmaking___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20328 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass28_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* tcs;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0* New_ctor();

  /// @brief Method <ClearGroupPresence>b__0, addr 0x58600d0, size 0xe8, virtual false, abstract: false, final false
  inline void _ClearGroupPresence_b__0(::Oculus::Platform::Message* message);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value);

  /// @brief Method .ctor, addr 0x585f9bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking___c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsMatchmaking___c__DisplayClass28_0(FriendsMatchmaking___c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsMatchmaking___c__DisplayClass28_0(FriendsMatchmaking___c__DisplayClass28_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20329 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<>c__DisplayClass29_0
class CORDL_TYPE FriendsMatchmaking___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* tcs;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0* New_ctor();

  /// @brief Method <SetGroupPresence>b__0, addr 0x58601b8, size 0x64, virtual false, abstract: false, final false
  inline void _SetGroupPresence_b__0(::Oculus::Platform::Message* message);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value);

  /// @brief Method .ctor, addr 0x585faf8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsMatchmaking___c__DisplayClass29_0(FriendsMatchmaking___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsMatchmaking___c__DisplayClass29_0(FriendsMatchmaking___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20330 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<JoinRoom>d__25
struct CORDL_TYPE FriendsMatchmaking__JoinRoom_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586021c, size 0x28c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58604a8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking__JoinRoom_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "roomPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None }]
  constexpr FriendsMatchmaking__JoinRoom_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                               ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::StringW roomId, ::StringW roomPassword,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20331 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this;

  /// @brief Field roomId, offset: 0x28, size: 0x8, def value: None
  ::StringW roomId;

  /// @brief Field roomPassword, offset: 0x30, size: 0x8, def value: None
  ::StringW roomPassword;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, roomId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, roomPassword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<OnJoinIntentReceived>d__31
struct CORDL_TYPE FriendsMatchmaking__OnJoinIntentReceived_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5860514, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5860764, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking__OnJoinIntentReceived_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr FriendsMatchmaking__OnJoinIntentReceived_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message,
                                                           ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<OnRoomOperationResult>d__24
struct CORDL_TYPE FriendsMatchmaking__OnRoomOperationResult_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586076c, size 0x198, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5860904, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking__OnRoomOperationResult_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "result", ty:
  // "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr FriendsMatchmaking__OnRoomOperationResult_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result,
                                                            ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field result, offset: 0x28, size: 0x18, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, 0x50>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<RegisterGameRoom>d__27
struct CORDL_TYPE FriendsMatchmaking__RegisterGameRoom_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586090c, size 0x314, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5860c20, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking__RegisterGameRoom_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "roomPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: None }]
  constexpr FriendsMatchmaking__RegisterGameRoom_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::StringW roomId, ::StringW roomPassword, int32_t _i_5__2,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this;

  /// @brief Field roomId, offset: 0x28, size: 0x8, def value: None
  ::StringW roomId;

  /// @brief Field roomPassword, offset: 0x30, size: 0x8, def value: None
  ::StringW roomPassword;

  /// @brief Field <i>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t _i_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, roomId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, roomPassword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, _i_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking
class CORDL_TYPE FriendsMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _JoinRoom_d__25 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25;

  using _OnJoinIntentReceived_d__31 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31;

  using _OnRoomOperationResult_d__24 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24;

  using _RegisterGameRoom_d__27 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27;

  using __c__DisplayClass21_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0;

  using __c__DisplayClass23_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0;

  using __c__DisplayClass28_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0;

  using __c__DisplayClass29_0 = ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0;

  __declspec(property(get = get_DestinationApi, put = set_DestinationApi)) ::StringW DestinationApi;

  __declspec(property(get = get_InviteMessage, put = set_InviteMessage)) ::StringW InviteMessage;

  __declspec(property(get = get_MaxRetries, put = set_MaxRetries)) uint32_t MaxRetries;

  /// @brief Field _customMatchmaking, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__customMatchmaking, put = __cordl_internal_set__customMatchmaking)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>
      _customMatchmaking;

  /// @brief Field destinationApi, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationApi, put = __cordl_internal_set_destinationApi)) ::StringW destinationApi;

  /// @brief Field inviteMessage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inviteMessage, put = __cordl_internal_set_inviteMessage)) ::StringW inviteMessage;

  /// @brief Field maxRetries, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRetries, put = __cordl_internal_set_maxRetries)) uint32_t maxRetries;

  /// @brief Field onInvitationsSent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onInvitationsSent,
      put = __cordl_internal_set_onInvitationsSent)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* onInvitationsSent;

  /// @brief Field onLeaveIntentReceived, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onLeaveIntentReceived,
                      put = __cordl_internal_set_onLeaveIntentReceived)) ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*
      onLeaveIntentReceived;

  /// @brief Field onMatchRequestFound, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onMatchRequestFound,
      put = __cordl_internal_set_onMatchRequestFound)) ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* onMatchRequestFound;

  /// @brief Method Awake, addr 0x585eac4, size 0x154, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearGroupPresence, addr 0x585f7c4, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* ClearGroupPresence();

  /// @brief Method ClearGroupPresenceCallback, addr 0x585f7c0, size 0x4, virtual true, abstract: false, final false
  inline void ClearGroupPresenceCallback();

  /// @brief Method GetGroupPresenceOptions, addr 0x585fdac, size 0xe0, virtual true, abstract: false, final false
  inline ::Oculus::Platform::GroupPresenceOptions* GetGroupPresenceOptions(::StringW roomId, ::StringW roomPassword);

  /// @brief Method JoinRoom, addr 0x585f6fc, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* JoinRoom(::StringW roomId, ::StringW roomPassword);

  /// @brief Method LaunchFriendsInvitePanel, addr 0x585f340, size 0x8, virtual false, abstract: false, final false
  inline void LaunchFriendsInvitePanel();

  /// @brief Method LaunchFriendsInvitePanelAsync, addr 0x585f348, size 0x180, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*
  LaunchFriendsInvitePanelAsync(::Oculus::Platform::InviteOptions* inviteOptions);

  /// @brief Method LaunchRosterPanel, addr 0x585f4cc, size 0x8, virtual false, abstract: false, final false
  inline void LaunchRosterPanel();

  /// @brief Method LaunchRosterPanelAsync, addr 0x585f4d4, size 0x168, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* LaunchRosterPanelAsync(::Oculus::Platform::RosterOptions* rosterOptions);

  static inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking* New_ctor();

  /// @brief Method OnDisable, addr 0x585f15c, size 0x1e4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x585ef78, size 0x1e4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEntitlementFinished, addr 0x585fafc, size 0x124, virtual false, abstract: false, final false
  inline void OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info);

  /// @brief Method OnInvitationsSent, addr 0x585fccc, size 0x70, virtual false, abstract: false, final false
  inline void OnInvitationsSent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* message);

  /// @brief Method OnJoinIntentReceived, addr 0x585fc20, size 0xac, virtual true, abstract: false, final false
  inline void OnJoinIntentReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message);

  /// @brief Method OnLeaveIntentNotification, addr 0x585fd3c, size 0x70, virtual false, abstract: false, final false
  inline void OnLeaveIntentNotification(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* message);

  /// @brief Method OnRoomOperationResult, addr 0x585f640, size 0xbc, virtual true, abstract: false, final false
  inline void OnRoomOperationResult(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result);

  /// @brief Method RegisterGameRoom, addr 0x585f8f4, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RegisterGameRoom(::StringW roomId, ::StringW roomPassword);

  /// @brief Method SetGroupPresence, addr 0x585f9c0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* SetGroupPresence(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions);

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& __cordl_internal_get__customMatchmaking() const;

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& __cordl_internal_get__customMatchmaking();

  constexpr ::StringW const& __cordl_internal_get_destinationApi() const;

  constexpr ::StringW& __cordl_internal_get_destinationApi();

  constexpr ::StringW const& __cordl_internal_get_inviteMessage() const;

  constexpr ::StringW& __cordl_internal_get_inviteMessage();

  constexpr uint32_t const& __cordl_internal_get_maxRetries() const;

  constexpr uint32_t& __cordl_internal_get_maxRetries();

  constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* const& __cordl_internal_get_onInvitationsSent() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*& __cordl_internal_get_onInvitationsSent();

  constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* const& __cordl_internal_get_onLeaveIntentReceived() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*& __cordl_internal_get_onLeaveIntentReceived();

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onMatchRequestFound() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onMatchRequestFound();

  constexpr void __cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> value);

  constexpr void __cordl_internal_set_destinationApi(::StringW value);

  constexpr void __cordl_internal_set_inviteMessage(::StringW value);

  constexpr void __cordl_internal_set_maxRetries(uint32_t value);

  constexpr void __cordl_internal_set_onInvitationsSent(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* value);

  constexpr void __cordl_internal_set_onLeaveIntentReceived(::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* value);

  constexpr void __cordl_internal_set_onMatchRequestFound(::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* value);

  /// @brief Method .ctor, addr 0x585fe8c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationApi, addr 0x585ea94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DestinationApi();

  /// @brief Method get_InviteMessage, addr 0x585eaa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InviteMessage();

  /// @brief Method get_MaxRetries, addr 0x585eab4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_MaxRetries();

  /// @brief Method set_DestinationApi, addr 0x585ea9c, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationApi(::StringW value);

  /// @brief Method set_InviteMessage, addr 0x585eaac, size 0x8, virtual false, abstract: false, final false
  inline void set_InviteMessage(::StringW value);

  /// @brief Method set_MaxRetries, addr 0x585eabc, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxRetries(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsMatchmaking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsMatchmaking(FriendsMatchmaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsMatchmaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsMatchmaking(FriendsMatchmaking const&) = delete;

  /// @brief Field DebugCategory offset 0xffffffff size 0x8
  static constexpr ::ConstString DebugCategory{ u"Friends Matchmaking" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20335 };

  /// @brief Field destinationApi, offset: 0x20, size: 0x8, def value: None
  ::StringW ___destinationApi;

  /// @brief Field inviteMessage, offset: 0x28, size: 0x8, def value: None
  ::StringW ___inviteMessage;

  /// @brief Field maxRetries, offset: 0x30, size: 0x4, def value: None
  uint32_t ___maxRetries;

  /// @brief Field onMatchRequestFound, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* ___onMatchRequestFound;

  /// @brief Field onInvitationsSent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* ___onInvitationsSent;

  /// @brief Field onLeaveIntentReceived, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* ___onLeaveIntentReceived;

  /// @brief Field _customMatchmaking, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> ____customMatchmaking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___destinationApi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___inviteMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___maxRetries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onMatchRequestFound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onInvitationsSent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ___onLeaveIntentReceived) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, ____customMatchmaking) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking, 0x58>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass21_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass23_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass28_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<>c__DisplayClass29_0");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<JoinRoom>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<OnJoinIntentReceived>d__31");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<OnRoomOperationResult>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<RegisterGameRoom>d__27");
