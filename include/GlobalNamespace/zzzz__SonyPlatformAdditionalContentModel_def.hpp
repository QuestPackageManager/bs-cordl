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
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyPlatformAdditionalContentModel)
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
class SonyLevelProductCollectionModel;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelProductData;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
struct __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21);
// Type: ::<EnsureDataValidity>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<EnsureDataValidity>d__20
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b5820, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b5c60, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13162 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelDataVersionInternalAsync>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetLevelDataVersionInternalAsync>d__12
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b5cdc, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b5f3c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13163 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__10
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b5fb8, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b6220, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13164 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__11
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b629c, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b6504, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13165 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRedirectedLevelPackProductData>d__16
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__16
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b6580, size 0x348, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b68c8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalProductLabel_5__2", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW packId,
      ::System::Threading::CancellationToken cancellationToken, ::StringW _originalProductLabel_5__2,
      ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

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
  ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13166 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, _originalProductLabel_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__15
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__15
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b6944, size 0x668, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b6fac, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13167 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__14
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__14
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b7028, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b7404, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__2) noexcept;

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13168 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__13
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b7480, size 0x2fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b777c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateEntitlementsAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<UpdateEntitlementsAsync>d__21
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b77f8, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b7bb4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13170 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyPlatformAdditionalContentModel
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyPlatformAdditionalContentModel*
class CORDL_TYPE SonyPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _EnsureDataValidity_d__20 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20;

  using _GetLevelDataVersionInternalAsync_d__12 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12;

  using _GetLevelEntitlementStatusInternalAsync_d__10 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10;

  using _GetPackEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11;

  using _GetRedirectedLevelPackProductData_d__16 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16;

  using _IsPackBetterBuyThanLevelAsync_d__15 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15;

  using _OpenLevelPackProductStoreAsync_d__14 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14;

  using _OpenLevelProductStoreAsync_d__13 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13;

  using _UpdateEntitlementsAsync_d__21 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21;

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

  /// @brief Method Dispose, addr 0x26b4a94, size 0x10c, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method EnsureDataValidity, addr 0x26b54ec, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureDataValidity(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelDataVersion, addr 0x26b5458, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::StringW levelId);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x26b4d98, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x26b4ba8, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x26b4ca0, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x26b517c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x26b5278, size 0x118, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x26b5390, size 0xc8, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method Init, addr 0x26b499c, size 0xf8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method InvalidateDataInternal, addr 0x26b4ba0, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x26b5084, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::SonyPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                                ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x26b4f88, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x26b4e90, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateEntitlementsAsync, addr 0x26b55e4, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <GetRedirectedLevelPackProductData>g__GetProductLabel|16_0, addr 0x26b570c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW _GetRedirectedLevelPackProductData_g__GetProductLabel_16_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* levelPackProductData);

  /// @brief Method <HasLevelPackEntitlement>b__18_0, addr 0x26b577c, size 0xa4, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__18_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* levelProductData);

  /// @brief Method <OpenLevelProductStoreAsync>g__GetProductLabelForProductBrowseDialog|13_0, addr 0x26b56d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW _OpenLevelProductStoreAsync_g__GetProductLabelForProductBrowseDialog_13_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* levelProductData);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__entitlementsLabels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__entitlementsLabels() const;

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::GlobalNamespace::ISonyCommerceHelper*& __cordl_internal_get__sonyCommerceHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISonyCommerceHelper*> const& __cordl_internal_get__sonyCommerceHelper() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel*& __cordl_internal_get__sonyLevelProductCollectionModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyLevelProductCollectionModel*> const& __cordl_internal_get__sonyLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value);

  constexpr void __cordl_internal_set__sonyLevelProductCollectionModel(::GlobalNamespace::SonyLevelProductCollectionModel* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x26b24d0, size 0xc8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____entitlementsLabels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____semaphoreSlim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____isDataValid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyCommerceHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyLevelProductCollectionModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____vrPlatformHelper) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel*, "", "SonyPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__20, "", "SonyPlatformAdditionalContentModel/<EnsureDataValidity>d__20");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__12, "",
                       "SonyPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__10, "",
                       "SonyPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__11, "",
                       "SonyPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__16, "",
                       "SonyPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__15, "", "SonyPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__14, "", "SonyPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__13, "", "SonyPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__21, "", "SonyPlatformAdditionalContentModel/<UpdateEntitlementsAsync>d__21");
