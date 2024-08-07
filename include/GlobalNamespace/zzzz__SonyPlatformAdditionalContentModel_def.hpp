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
struct __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18;
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
struct __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__7
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f1520, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f1730, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__8
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f1788, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f1998, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelDataVersionInternalAsync>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetLevelDataVersionInternalAsync>d__9
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f19f0, size 0x208, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f1bf8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__10
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f1c50, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f1ef4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__11
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__11
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f1f4c, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f22cc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__12
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f2324, size 0x610, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f2934, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRedirectedLevelPackProductData>d__13
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__13
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f298c, size 0x2ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f2c78, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalProductLabel_5__2", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, _originalProductLabel_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<EnsureDataValidity>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<EnsureDataValidity>d__17
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f2cd0, size 0x3c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f3090, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateEntitlementsAsync>d__18
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyPlatformAdditionalContentModel::<UpdateEntitlementsAsync>d__18
struct CORDL_TYPE __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f30e8, size 0x378, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f3460, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18(
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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyPlatformAdditionalContentModel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyPlatformAdditionalContentModel*
class CORDL_TYPE SonyPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _EnsureDataValidity_d__17 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17;

  using _GetLevelDataVersionInternalAsync_d__9 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9;

  using _GetLevelEntitlementStatusInternalAsync_d__7 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7;

  using _GetPackEntitlementStatusInternalAsync_d__8 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8;

  using _GetRedirectedLevelPackProductData_d__13 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13;

  using _IsPackBetterBuyThanLevelAsync_d__12 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12;

  using _OpenLevelPackProductStoreAsync_d__11 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;

  using _OpenLevelProductStoreAsync_d__10 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10;

  using _UpdateEntitlementsAsync_d__18 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18;

  /// @brief Field _entitlementsLabels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsLabels, put = __cordl_internal_set__entitlementsLabels))::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsLabels;

  /// @brief Field _isDataValid, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _semaphoreSlim, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _sonyCommerceHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyCommerceHelper, put = __cordl_internal_set__sonyCommerceHelper))::GlobalNamespace::ISonyCommerceHelper* _sonyCommerceHelper;

  /// @brief Field _sonyLevelProductCollectionModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyLevelProductCollectionModel,
                      put = __cordl_internal_set__sonyLevelProductCollectionModel))::GlobalNamespace::SonyLevelProductCollectionModel* _sonyLevelProductCollectionModel;

  /// @brief Method EnsureDataValidity, addr 0x14f11d4, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureDataValidity(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelDataVersion, addr 0x14f1140, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::StringW levelId);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x14f0a40, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x14f0838, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x14f093c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x14f0e54, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x14f0f5c, size 0x118, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x14f1074, size 0xcc, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method InvalidateDataInternal, addr 0x14f0830, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x14f0d50, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::SonyPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                                ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x14f0c48, size 0x108, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x14f0b44, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateEntitlementsAsync, addr 0x14f12d4, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <GetRedirectedLevelPackProductData>g__GetProductLabel|13_0, addr 0x14f140c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW _GetRedirectedLevelPackProductData_g__GetProductLabel_13_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* levelPackProductData);

  /// @brief Method <HasLevelPackEntitlement>b__15_0, addr 0x14f147c, size 0xa4, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__15_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* levelProductData);

  /// @brief Method <OpenLevelProductStoreAsync>g__GetProductLabelForProductBrowseDialog|10_0, addr 0x14f13d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW _OpenLevelProductStoreAsync_g__GetProductLabelForProductBrowseDialog_10_0(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* levelProductData);

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

  constexpr void __cordl_internal_set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value);

  constexpr void __cordl_internal_set__sonyLevelProductCollectionModel(::GlobalNamespace::SonyLevelProductCollectionModel* value);

  /// @brief Method .ctor, addr 0x14f0764, size 0xcc, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPlatformAdditionalContentModel, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____entitlementsLabels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____semaphoreSlim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____isDataValid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyCommerceHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyPlatformAdditionalContentModel, ____sonyLevelProductCollectionModel) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPlatformAdditionalContentModel*, "", "SonyPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___EnsureDataValidity_d__17, "", "SonyPlatformAdditionalContentModel/<EnsureDataValidity>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelDataVersionInternalAsync_d__9, "",
                       "SonyPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__7, "",
                       "SonyPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__8, "",
                       "SonyPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__13, "",
                       "SonyPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__12, "", "SonyPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, "", "SonyPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__10, "", "SonyPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyPlatformAdditionalContentModel___UpdateEntitlementsAsync_d__18, "", "SonyPlatformAdditionalContentModel/<UpdateEntitlementsAsync>d__18");
