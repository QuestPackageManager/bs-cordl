#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct AdditionalContentModel_UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13);
MARK_VAL_T(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22);
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<EnsureDataValidity>d__21
struct CORDL_TYPE SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ee1c4, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ee604, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13201 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__12
struct CORDL_TYPE SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ee680, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ee8e0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13202 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10
struct CORDL_TYPE SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ee95c, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26eebc4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13203 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11
struct CORDL_TYPE SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26eec40, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26eeea8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13204 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__17
struct CORDL_TYPE SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26eef24, size 0x348, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ef26c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalProductLabel_5__2", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                        ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                        ::System::Threading::CancellationToken cancellationToken, ::StringW _originalProductLabel_5__2,
                                                                                        ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13205 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field packId, offset: 0x28, size: 0x8, def value: None
  ::StringW packId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <originalProductLabel>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _originalProductLabel_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, _originalProductLabel_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IsPackBetterBuyThanLevelResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__15
struct CORDL_TYPE SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ef2e8, size 0x668, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ef950, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ISonyCommerceHelper::DisplayProductBrowseDialogResult, OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__14
struct CORDL_TYPE SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ef9cc, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26efda8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13207 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ISonyCommerceHelper::DisplayProductBrowseDialogResult, OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__13
struct CORDL_TYPE SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26efe24, size 0x2fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f0120, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13208 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, ISonyCommerceHelper::AdditionalContentEntitlementsAsyncResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyPlatformAdditionalContentModel/<UpdateEntitlementsAsync>d__22
struct CORDL_TYPE SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f019c, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f0558, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
  constexpr SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13209 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyPlatformAdditionalContentModel
class CORDL_TYPE SonyPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _EnsureDataValidity_d__21 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21;

  using _GetLevelDataVersionInternalAsync_d__12 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;

  using _GetLevelEntitlementStatusInternalAsync_d__10 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;

  using _GetPackEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;

  using _GetRedirectedLevelPackProductData_d__17 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17;

  using _IsPackBetterBuyThanLevelAsync_d__15 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15;

  using _OpenLevelPackProductStoreAsync_d__14 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;

  using _OpenLevelProductStoreAsync_d__13 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13;

  using _UpdateEntitlementsAsync_d__22 = ::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22;

  /// @brief Field _entitlementsLabels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsLabels, put = __cordl_internal_set__entitlementsLabels)) ::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsLabels;

  /// @brief Field _isDataValid, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _semaphoreSlim, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim)) ::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _sonyCommerceHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyCommerceHelper, put = __cordl_internal_set__sonyCommerceHelper)) ::GlobalNamespace::ISonyCommerceHelper* _sonyCommerceHelper;

  /// @brief Field _sonyLevelProductCollectionModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyLevelProductCollectionModel,
                      put = __cordl_internal_set__sonyLevelProductCollectionModel)) ::GlobalNamespace::SonyLevelProductCollectionModel* _sonyLevelProductCollectionModel;

  /// @brief Field _vrPlatformHelper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method Dispose, addr 0x26ed434, size 0x10c, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method EnsureDataValidity, addr 0x26ede90, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureDataValidity(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelDataVersion, addr 0x26eddfc, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::StringW levelId);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x26ed738, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x26ed548, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x26ed640, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x26edb20, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x26edc1c, size 0x118, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x26edd34, size 0xc8, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method Init, addr 0x26ed33c, size 0xf8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method InvalidateDataInternal, addr 0x26ed540, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x26eda24, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::SonyPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                                ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x26ed928, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x26ed830, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenStore, addr 0x26edb1c, size 0x4, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// @brief Method UpdateEntitlementsAsync, addr 0x26edf88, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>* UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <GetRedirectedLevelPackProductData>g__GetProductLabel|17_0, addr 0x26ee0b0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW _GetRedirectedLevelPackProductData_g__GetProductLabel_17_0(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* levelPackProductData);

  /// @brief Method <HasLevelPackEntitlement>b__19_0, addr 0x26ee120, size 0xa4, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__19_0(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData* levelProductData);

  /// @brief Method <OpenLevelProductStoreAsync>g__GetProductLabelForProductBrowseDialog|13_0, addr 0x26ee074, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW _OpenLevelProductStoreAsync_g__GetProductLabelForProductBrowseDialog_13_0(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData* levelProductData);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__entitlementsLabels() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__entitlementsLabels();

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr ::GlobalNamespace::ISonyCommerceHelper* const& __cordl_internal_get__sonyCommerceHelper() const;

  constexpr ::GlobalNamespace::ISonyCommerceHelper*& __cordl_internal_get__sonyCommerceHelper();

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel* const& __cordl_internal_get__sonyLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel*& __cordl_internal_get__sonyLevelProductCollectionModel();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value);

  constexpr void __cordl_internal_set__sonyLevelProductCollectionModel(::GlobalNamespace::SonyLevelProductCollectionModel* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x26eae70, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper, ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyPlatformAdditionalContentModel(SonyPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyPlatformAdditionalContentModel(SonyPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13210 };

  /// @brief Field _entitlementsLabels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsLabels;

  /// @brief Field _semaphoreSlim, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x28, size: 0x1, def value: None
  bool ____isDataValid;

  /// @brief Field _sonyCommerceHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ISonyCommerceHelper* ____sonyCommerceHelper;

  /// @brief Field _sonyLevelProductCollectionModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel* ____sonyLevelProductCollectionModel;

  /// @brief Field _vrPlatformHelper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____entitlementsLabels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____semaphoreSlim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____isDataValid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyCommerceHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyLevelProductCollectionModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____vrPlatformHelper) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel*, "", "SonyPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__EnsureDataValidity_d__21, "", "SonyPlatformAdditionalContentModel/<EnsureDataValidity>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, "", "SonyPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, "",
                       "SonyPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, "",
                       "SonyPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__17, "",
                       "SonyPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__IsPackBetterBuyThanLevelAsync_d__15, "", "SonyPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, "", "SonyPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__13, "", "SonyPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel__UpdateEntitlementsAsync_d__22, "", "SonyPlatformAdditionalContentModel/<UpdateEntitlementsAsync>d__22");
