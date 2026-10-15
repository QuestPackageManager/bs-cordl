#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class SteamGameDlcProductCollectionModel;
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
struct SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;
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
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14;
}
namespace GlobalNamespace {
struct SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamPlatformAdditionalContentModel*);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14);
MARK_VAL_T(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel*, "", "SteamPlatformAdditionalContentModel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, "", "SteamPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, "",
                    "SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, "",
                    "SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, "",
                    "SteamPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, "", "SteamPlatformAdditionalContentModel/<IsDataValidAsync>d__14");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, "", "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18");
// [CompilerGenerated]
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__12
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b0fcc, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b1234, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14240 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__10
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b12b4, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b1538, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14241 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__11
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b15b8, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b183c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14242 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__13
struct CORDL_TYPE SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b18bc, size 0x37c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b1c38, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_originalPack_5__2", ty:
  // "::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
  // "::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13(int32_t __1__state,
                                                                                         ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> __t__builder,
                                                                                         ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                         ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* _originalPack_5__2,
                                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14243 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, _originalPack_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<IsDataValidAsync>d__14
struct CORDL_TYPE SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b1cb8, size 0x304, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b1fbc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                        ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14244 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18
struct CORDL_TYPE SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39b203c, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b2300, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None, comment: None }]
  constexpr SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14245 };

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
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamPlatformAdditionalContentModel
class CORDL_TYPE SteamPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _GetLevelDataVersionInternalAsync_d__12 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__12;

  using _GetLevelEntitlementStatusInternalAsync_d__10 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__10;

  using _GetPackEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__11;

  using _GetRedirectedLevelPackProductData_d__13 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__13;

  using _IsDataValidAsync_d__14 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__IsDataValidAsync_d__14;

  using _OpenLevelPackProductStoreAsync_d__18 = ::GlobalNamespace::SteamPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;

  /// @brief Field _entitlementsAppIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsAppIds, put = __cordl_internal_set__entitlementsAppIds)) ::System::Collections::Generic::HashSet_1<uint32_t>* _entitlementsAppIds;

  /// @brief Field _isDataValid, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _semaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim)) ::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _steamGameDlcProductCollectionModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__steamGameDlcProductCollectionModel,
                      put = __cordl_internal_set__steamGameDlcProductCollectionModel)) ::GlobalNamespace::SteamGameDlcProductCollectionModel* _steamGameDlcProductCollectionModel;

  /// @brief Field _steamLevelProductCollectionModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLevelProductCollectionModel,
                      put = __cordl_internal_set__steamLevelProductCollectionModel)) ::GlobalNamespace::SteamLevelProductCollectionModel* _steamLevelProductCollectionModel;

  /// @brief Method CheckForNewEntitlementsAsync, addr 0x39b0d40, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult CheckForNewEntitlementsAsync();

  /// @brief Method Dispose, addr 0x39b0270, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetExcludedLevelIdsInternalAsync, addr 0x39b0bb0, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken token);

  /// @brief Method GetGameDlcAppId, addr 0x39b07d4, size 0xa4, virtual false, abstract: false, final false
  inline uint32_t GetGameDlcAppId(::StringW gameDlcId);

  /// @brief Method GetGameDlcEntitlementStatusInternalAsync, addr 0x39b0748, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetGameDlcEntitlementStatusInternalAsync(::StringW gameDlcId,
                                                                                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelDataVersion, addr 0x39b0d48, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::StringW levelId);

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<GetLevelDataVersionInternalAsync>d__12))]
  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x39b0474, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__10))]
  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x39b0294, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelProductData, addr 0x39b027c, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW levelId);

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__11))]
  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x39b0384, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__13))]
  /// @brief Method GetRedirectedLevelPackProductData, addr 0x39b0564, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x39b0d50, size 0x90, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x39b0de0, size 0xd8, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method Initialize, addr 0x39b026c, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InvalidateDataInternal, addr 0x39b0274, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<IsDataValidAsync>d__14))]
  /// @brief Method IsDataValidAsync, addr 0x39b0658, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x39b0cd0, size 0x70, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::SteamPlatformAdditionalContentModel* New_ctor();

  /// @brief Method OpenBundleUrl, addr 0x39b0c94, size 0x3c, virtual false, abstract: false, final false
  inline void OpenBundleUrl(uint32_t bundleId);

  /// @brief Method OpenGameDlcProductStoreAsync, addr 0x39b0878, size 0x130, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenGameDlcProductStoreAsync(::StringW gameDlcId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(SteamPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__18))]
  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x39b0abc, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x39b09e4, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenProductStore, addr 0x39b09a8, size 0x3c, virtual false, abstract: false, final false
  inline void OpenProductStore(uint32_t appId);

  /// @brief Method OpenStore, addr 0x39b0bac, size 0x4, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// [CompilerGenerated]
  /// @brief Method <HasLevelPackEntitlement>b__28_0, addr 0x39b0f64, size 0x68, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__28_0(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* levelProductData);

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& __cordl_internal_get__entitlementsAppIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get__entitlementsAppIds();

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr ::GlobalNamespace::SteamGameDlcProductCollectionModel* const& __cordl_internal_get__steamGameDlcProductCollectionModel() const;

  constexpr ::GlobalNamespace::SteamGameDlcProductCollectionModel*& __cordl_internal_get__steamGameDlcProductCollectionModel();

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel* const& __cordl_internal_get__steamLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel*& __cordl_internal_get__steamLevelProductCollectionModel();

  constexpr void __cordl_internal_set__entitlementsAppIds(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__steamGameDlcProductCollectionModel(::GlobalNamespace::SteamGameDlcProductCollectionModel* value);

  constexpr void __cordl_internal_set__steamLevelProductCollectionModel(::GlobalNamespace::SteamLevelProductCollectionModel* value);

  /// @brief Method .ctor, addr 0x39b0eb8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14246 };

  /// @brief Field _steamAppID offset 0xffffffff size 0x4
  static constexpr uint32_t _steamAppID{ static_cast<uint32_t>(0x0u) };

  /// [Inject]
  /// @brief Field _steamLevelProductCollectionModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel* ____steamLevelProductCollectionModel;

  /// [Inject]
  /// @brief Field _steamGameDlcProductCollectionModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamGameDlcProductCollectionModel* ____steamGameDlcProductCollectionModel;

  /// @brief Field _entitlementsAppIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ____entitlementsAppIds;

  /// @brief Field _semaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x38, size: 0x1, def value: None
  bool ____isDataValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____steamLevelProductCollectionModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____steamGameDlcProductCollectionModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____entitlementsAppIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____semaphoreSlim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____isDataValid) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamPlatformAdditionalContentModel) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
