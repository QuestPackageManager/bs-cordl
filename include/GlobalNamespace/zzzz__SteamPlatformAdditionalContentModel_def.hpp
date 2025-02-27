#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamPlatformAdditionalContentModel)
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
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14);
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__10
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26af360, size 0x24c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26af5ac, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__8
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26af628, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26af890, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12782 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__9
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26af90c, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26afb74, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field packId, offset: 0x30, size: 0x8, def value: None
  ::StringW packId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__11
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26afbf0, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26affe4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalPack_5__2", ty:
  // "::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*", modifiers: "", def_value: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
  // "::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11(int32_t __1__state,
                                                                                         ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> __t__builder,
                                                                                         ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                         ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* _originalPack_5__2,
                                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field packId, offset: 0x28, size: 0x8, def value: None
  ::StringW packId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <originalPack>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* _originalPack_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, _originalPack_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<IsDataValidAsync>d__12
struct CORDL_TYPE SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b0060, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b0300, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                        ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12785 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__14
struct CORDL_TYPE SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26b037c, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26b062c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None }]
  constexpr SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamPlatformAdditionalContentModel
class CORDL_TYPE SteamPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _GetLevelDataVersionInternalAsync_d__10 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;

  using _GetLevelEntitlementStatusInternalAsync_d__8 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;

  using _GetPackEntitlementStatusInternalAsync_d__9 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;

  using _GetRedirectedLevelPackProductData_d__11 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11;

  using _IsDataValidAsync_d__12 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12;

  using _OpenLevelPackProductStoreAsync_d__14 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14;

  /// @brief Field _dataIsValidTaskCompletionSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dataIsValidTaskCompletionSource,
                      put = __cordl_internal_set__dataIsValidTaskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* _dataIsValidTaskCompletionSource;

  /// @brief Field _entitlementsAppIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsAppIds, put = __cordl_internal_set__entitlementsAppIds)) ::System::Collections::Generic::HashSet_1<uint32_t>* _entitlementsAppIds;

  /// @brief Field _isDataValid, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _semaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim)) ::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _steamLevelProductCollectionModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLevelProductCollectionModel,
                      put = __cordl_internal_set__steamLevelProductCollectionModel)) ::GlobalNamespace::SteamLevelProductCollectionModel* _steamLevelProductCollectionModel;

  /// @brief Method CheckForNewEntitlementsAsync, addr 0x26af0fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult CheckForNewEntitlementsAsync();

  /// @brief Method GetLevelDataVersion, addr 0x26af104, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::StringW levelId);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x26aeb4c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x26ae95c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelProductData, addr 0x26ae940, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x26aea54, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x26aec44, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x26af10c, size 0x80, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x26af18c, size 0xcc, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method InvalidateDataInternal, addr 0x26ae938, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsDataValidAsync, addr 0x26aed4c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x26af094, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::SteamPlatformAdditionalContentModel* New_ctor();

  /// @brief Method OpenBundleUrl, addr 0x26af058, size 0x3c, virtual false, abstract: false, final false
  inline void OpenBundleUrl(uint32_t bundleId);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x26aef5c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x26aee48, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenProductStore, addr 0x26aef20, size 0x3c, virtual false, abstract: false, final false
  inline void OpenProductStore(uint32_t appId);

  /// @brief Method OpenStore, addr 0x26af054, size 0x4, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// @brief Method <HasLevelPackEntitlement>b__22_0, addr 0x26af304, size 0x5c, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__22_0(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* levelProductData);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__dataIsValidTaskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__dataIsValidTaskCompletionSource();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get__entitlementsAppIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get__entitlementsAppIds();

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel* const& __cordl_internal_get__steamLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel*& __cordl_internal_get__steamLevelProductCollectionModel();

  constexpr void __cordl_internal_set__dataIsValidTaskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__entitlementsAppIds(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__steamLevelProductCollectionModel(::GlobalNamespace::SteamLevelProductCollectionModel* value);

  /// @brief Method .ctor, addr 0x26af258, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12787 };

  /// @brief Field _steamAppID offset 0xffffffff size 0x4
  static constexpr uint32_t _steamAppID{ static_cast<uint32_t>(0x0u) };

  /// @brief Field _steamLevelProductCollectionModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel* ____steamLevelProductCollectionModel;

  /// @brief Field _entitlementsAppIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ____entitlementsAppIds;

  /// @brief Field _dataIsValidTaskCompletionSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____dataIsValidTaskCompletionSource;

  /// @brief Field _semaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x38, size: 0x1, def value: None
  bool ____isDataValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____steamLevelProductCollectionModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____entitlementsAppIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____dataIsValidTaskCompletionSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____semaphoreSlim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____isDataValid) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel*, "", "SteamPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, "",
                       "SteamPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, "",
                       "SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, "",
                       "SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__11, "",
                       "SteamPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__12, "", "SteamPlatformAdditionalContentModel/<IsDataValidAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__14, "", "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__14");
