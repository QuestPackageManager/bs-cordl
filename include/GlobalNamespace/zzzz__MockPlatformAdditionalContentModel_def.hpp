#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15;
}
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MockPlatformAdditionalContentModel*);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21);
MARK_VAL_T(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel*, "", "MockPlatformAdditionalContentModel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, "",
                    "MockPlatformAdditionalContentModel/<GetGameDlcEntitlementStatusInternalAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, "",
                    "MockPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, "",
                    "MockPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, "", "MockPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__14");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, "", "MockPlatformAdditionalContentModel/<OpenGameDlcProductStoreAsync>d__16");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, "", "MockPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__21");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, "", "MockPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__15");
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<GetGameDlcEntitlementStatusInternalAsync>d__12
struct CORDL_TYPE MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a89a4, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a8c5c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW gameDlcId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field gameDlcId, offset: 0x30, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, gameDlcId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10
struct CORDL_TYPE MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a8cdc, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a8f60, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11
struct CORDL_TYPE MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a8fe0, size 0x2bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a929c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies IsPackBetterBuyThanLevelResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__14
struct CORDL_TYPE MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a931c, size 0x254, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a9570, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<OpenGameDlcProductStoreAsync>d__16
struct CORDL_TYPE MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a95f0, size 0x2f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a98e0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW gameDlcId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14220 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field gameDlcId, offset: 0x30, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, gameDlcId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__21
struct CORDL_TYPE MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a9960, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a9c04, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14221 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__15
struct CORDL_TYPE MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39a9c84, size 0x2f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39a9f74, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15(int32_t __1__state,
                                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
                                                                                 ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token,
                                                                                 ::StringW levelId, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14222 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel, UnityEngine.RangeInt
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlatformAdditionalContentModel
class CORDL_TYPE MockPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _GetGameDlcEntitlementStatusInternalAsync_d__12 = ::GlobalNamespace::MockPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__12;

  using _GetLevelEntitlementStatusInternalAsync_d__10 = ::GlobalNamespace::MockPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;

  using _GetPackEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::MockPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;

  using _IsPackBetterBuyThanLevelAsync_d__14 = ::GlobalNamespace::MockPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__14;

  using _OpenGameDlcProductStoreAsync_d__16 = ::GlobalNamespace::MockPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__16;

  using _OpenLevelPackProductStoreAsync_d__21 = ::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__21;

  using _OpenLevelProductStoreAsync_d__15 = ::GlobalNamespace::MockPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__15;

  /// @brief Field _gameDlcEntitlements, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameDlcEntitlements,
                      put = __cordl_internal_set__gameDlcEntitlements)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _gameDlcEntitlements;

  /// @brief Field _hasAllEntitlements, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasAllEntitlements, put = __cordl_internal_set__hasAllEntitlements)) bool _hasAllEntitlements;

  /// @brief Field _levelPacksEntitlements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPacksEntitlements,
                      put =
                          __cordl_internal_set__levelPacksEntitlements)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelPacksEntitlements;

  /// @brief Field _levelsEntitlements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsEntitlements,
                      put = __cordl_internal_set__levelsEntitlements)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelsEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__packBetterBuyThanLevel, put = __cordl_internal_set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  /// @brief Field randomMillisecondsResponseTime, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get_randomMillisecondsResponseTime, put = __cordl_internal_set_randomMillisecondsResponseTime)) ::UnityEngine::RangeInt randomMillisecondsResponseTime;

  /// @brief Method BuyGameDlc, addr 0x39a85a4, size 0x100, virtual false, abstract: false, final false
  inline void BuyGameDlc(::StringW gameDlcId);

  /// @brief Method BuyLevel, addr 0x39a86b0, size 0x100, virtual false, abstract: false, final false
  inline void BuyLevel(::StringW levelId);

  /// @brief Method Dispose, addr 0x39a7ea4, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetExcludedLevelIdsInternalAsync, addr 0x39a84c0, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<GetGameDlcEntitlementStatusInternalAsync>d__12))]
  /// @brief Method GetGameDlcEntitlementStatusInternalAsync, addr 0x39a808c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetGameDlcEntitlementStatusInternalAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x39a817c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__10))]
  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x39a7eac, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__11))]
  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x39a7f9c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method Initialize, addr 0x39a7ea0, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InvalidateDataInternal, addr 0x39a7ea8, size 0x4, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__14))]
  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x39a81ec, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::MockPlatformAdditionalContentModel* New_ctor(/* [InjectOptional] */ ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* initialData);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<OpenGameDlcProductStoreAsync>d__16))]
  /// @brief Method OpenGameDlcProductStoreAsync, addr 0x39a83cc, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenGameDlcProductStoreAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__21))]
  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x39a87b0, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(MockPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__15))]
  /// @brief Method OpenLevelProductStoreAsync, addr 0x39a82dc, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenStore, addr 0x39a84bc, size 0x4, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// @brief Method Wait, addr 0x39a88a0, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Wait(::System::Threading::CancellationToken token);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* const& __cordl_internal_get__gameDlcEntitlements() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__gameDlcEntitlements();

  constexpr bool const& __cordl_internal_get__hasAllEntitlements() const;

  constexpr bool& __cordl_internal_get__hasAllEntitlements();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* const& __cordl_internal_get__levelPacksEntitlements() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelPacksEntitlements();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* const& __cordl_internal_get__levelsEntitlements() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelsEntitlements();

  constexpr bool const& __cordl_internal_get__packBetterBuyThanLevel() const;

  constexpr bool& __cordl_internal_get__packBetterBuyThanLevel();

  constexpr ::UnityEngine::RangeInt const& __cordl_internal_get_randomMillisecondsResponseTime() const;

  constexpr ::UnityEngine::RangeInt& __cordl_internal_get_randomMillisecondsResponseTime();

  constexpr void __cordl_internal_set__gameDlcEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr void __cordl_internal_set__hasAllEntitlements(bool value);

  constexpr void __cordl_internal_set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr void __cordl_internal_set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr void __cordl_internal_set__packBetterBuyThanLevel(bool value);

  constexpr void __cordl_internal_set_randomMillisecondsResponseTime(::UnityEngine::RangeInt value);

  /// @brief Method .ctor, addr 0x39a755c, size 0x938, virtual false, abstract: false, final false
  inline void _ctor(/* [InjectOptional] */ ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* initialData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14223 };

  /// @brief Field _hasAllEntitlements, offset: 0x18, size: 0x1, def value: None
  bool ____hasAllEntitlements;

  /// @brief Field _levelsEntitlements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelPacksEntitlements;

  /// @brief Field _gameDlcEntitlements, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____gameDlcEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x38, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  /// @brief Field randomMillisecondsResponseTime, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::RangeInt ___randomMillisecondsResponseTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____hasAllEntitlements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelsEntitlements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelPacksEntitlements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____gameDlcEntitlements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____packBetterBuyThanLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ___randomMillisecondsResponseTime) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlatformAdditionalContentModel) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
