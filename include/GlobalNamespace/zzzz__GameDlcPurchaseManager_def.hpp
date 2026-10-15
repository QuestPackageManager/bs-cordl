#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcPurchaseManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameDlcPurchaseManager)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15;
}
namespace GlobalNamespace {
struct GameDlcPurchaseResult;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameDlcPurchaseManager;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12;
}
namespace GlobalNamespace {
struct GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameDlcPurchaseManager*);
MARK_VAL_T(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11);
MARK_VAL_T(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12);
MARK_VAL_T(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcPurchaseManager*, "", "GameDlcPurchaseManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, "", "GameDlcPurchaseManager/<GetGameDlcEntitlementStatusAsync>d__11");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, "", "GameDlcPurchaseManager/<PurchaseGameDlcAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, "", "GameDlcPurchaseManager/<RequestEntitlementStatusAsync>d__15");
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameDlcPurchaseManager/<GetGameDlcEntitlementStatusAsync>d__11
struct CORDL_TYPE GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39f02cc, size 0x288, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39f0554, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }]
  constexpr GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11(int32_t __1__state,
                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
                                                                           ::GlobalNamespace::GameDlcPurchaseManager* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken token,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameDlcPurchaseManager* __4__this;

  /// @brief Field gameDlcId, offset: 0x28, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, gameDlcId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, GameDlcPurchaseResult, OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameDlcPurchaseManager/<PurchaseGameDlcAsync>d__12
struct CORDL_TYPE GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39f05d4, size 0x4a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39f0a74, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GameDlcPurchaseResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }]
  constexpr GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GameDlcPurchaseResult> __t__builder,
                                                               ::GlobalNamespace::GameDlcPurchaseManager* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken token,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GameDlcPurchaseResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameDlcPurchaseManager* __4__this;

  /// @brief Field gameDlcId, offset: 0x28, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, gameDlcId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameDlcPurchaseManager/<RequestEntitlementStatusAsync>d__15
struct CORDL_TYPE GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39f0af4, size 0x504, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39f0ff8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameDlcPurchaseManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }]
  constexpr GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15(int32_t __1__state,
                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
                                                                        ::GlobalNamespace::GameDlcPurchaseManager* __4__this, ::StringW gameDlcId,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameDlcPurchaseManager* __4__this;

  /// @brief Field gameDlcId, offset: 0x28, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, gameDlcId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameDlcPurchaseManager
class CORDL_TYPE GameDlcPurchaseManager : public ::System::Object {
public:
  // Declarations
  using _GetGameDlcEntitlementStatusAsync_d__11 = ::GlobalNamespace::GameDlcPurchaseManager__GetGameDlcEntitlementStatusAsync_d__11;

  using _PurchaseGameDlcAsync_d__12 = ::GlobalNamespace::GameDlcPurchaseManager__PurchaseGameDlcAsync_d__12;

  using _RequestEntitlementStatusAsync_d__15 = ::GlobalNamespace::GameDlcPurchaseManager__RequestEntitlementStatusAsync_d__15;

  /// @brief Field _additionalContentModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _cancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _entitlementModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _entitlementStatuses, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementStatuses,
                      put = __cordl_internal_set__entitlementStatuses)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* _entitlementStatuses;

  /// @brief Field _gameDlcIdsToRefresh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameDlcIdsToRefresh, put = __cordl_internal_set__gameDlcIdsToRefresh)) ::System::Collections::Generic::List_1<::StringW>* _gameDlcIdsToRefresh;

  /// @brief Field _runningRequests, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__runningRequests,
      put =
          __cordl_internal_set__runningRequests)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* _runningRequests;

  /// @brief Field gameDlcEntitlementDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gameDlcEntitlementDidChangeEvent,
                      put = __cordl_internal_set_gameDlcEntitlementDidChangeEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* gameDlcEntitlementDidChangeEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x39efa20, size 0x124, virtual true, abstract: false, final true
  inline void Dispose();

  /// [AsyncStateMachine(typeof(GameDlcPurchaseManager::<GetGameDlcEntitlementStatusAsync>d__11))]
  /// @brief Method GetGameDlcEntitlementStatusAsync, addr 0x39efb44, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetGameDlcEntitlementStatusAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token);

  /// @brief Method GetOrStartEntitlementRequestAsync, addr 0x39efd28, size 0x134, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetOrStartEntitlementRequestAsync(::StringW gameDlcId);

  /// @brief Method HandleAdditionalContentDidInvalidateData, addr 0x39f0128, size 0x1a4, virtual false, abstract: false, final false
  inline void HandleAdditionalContentDidInvalidateData();

  static inline ::GlobalNamespace::GameDlcPurchaseManager* New_ctor(::GlobalNamespace::IEntitlementModel* entitlementModel, ::GlobalNamespace::IAdditionalContentModel* additionalContentModel);

  /// [AsyncStateMachine(typeof(GameDlcPurchaseManager::<PurchaseGameDlcAsync>d__12))]
  /// @brief Method PurchaseGameDlcAsync, addr 0x39efc34, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GameDlcPurchaseResult>* PurchaseGameDlcAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token);

  /// @brief Method RefreshEntitlementStatusAsync, addr 0x39efe5c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* RefreshEntitlementStatusAsync(::StringW gameDlcId);

  /// [AsyncStateMachine(typeof(GameDlcPurchaseManager::<RequestEntitlementStatusAsync>d__15))]
  /// @brief Method RequestEntitlementStatusAsync, addr 0x39eff3c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* RequestEntitlementStatusAsync(::StringW gameDlcId);

  /// @brief Method SetEntitlementStatus, addr 0x39f002c, size 0xfc, virtual false, abstract: false, final false
  inline void SetEntitlementStatus(::StringW gameDlcId, ::GlobalNamespace::EntitlementStatus status);

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* const& __cordl_internal_get__entitlementStatuses() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>*& __cordl_internal_get__entitlementStatuses();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__gameDlcIdsToRefresh() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__gameDlcIdsToRefresh();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* const& __cordl_internal_get__runningRequests() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>*& __cordl_internal_get__runningRequests();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* const& __cordl_internal_get_gameDlcEntitlementDidChangeEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>*& __cordl_internal_get_gameDlcEntitlementDidChangeEvent();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__entitlementStatuses(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value);

  constexpr void __cordl_internal_set__gameDlcIdsToRefresh(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__runningRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* value);

  constexpr void __cordl_internal_set_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value);

  /// @brief Method .ctor, addr 0x39ef7c0, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IEntitlementModel* entitlementModel, ::GlobalNamespace::IAdditionalContentModel* additionalContentModel);

  /// [CompilerGenerated]
  /// @brief Method add_gameDlcEntitlementDidChangeEvent, addr 0x39ef640, size 0xc0, virtual false, abstract: false, final false
  inline void add_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_gameDlcEntitlementDidChangeEvent, addr 0x39ef700, size 0xc0, virtual false, abstract: false, final false
  inline void remove_gameDlcEntitlementDidChangeEvent(::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcPurchaseManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameDlcPurchaseManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameDlcPurchaseManager(GameDlcPurchaseManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameDlcPurchaseManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameDlcPurchaseManager(GameDlcPurchaseManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14597 };

  /// @brief Field _entitlementModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _additionalContentModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementStatuses, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::EntitlementStatus>* ____entitlementStatuses;

  /// @brief Field _runningRequests, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>* ____runningRequests;

  /// @brief Field _gameDlcIdsToRefresh, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____gameDlcIdsToRefresh;

  /// @brief Field _cancellationTokenSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// [CompilerGenerated]
  /// @brief Field gameDlcEntitlementDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::EntitlementStatus>* ___gameDlcEntitlementDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____entitlementModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____additionalContentModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____entitlementStatuses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____runningRequests) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____gameDlcIdsToRefresh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ____cancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseManager, ___gameDlcEntitlementDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcPurchaseManager) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
