#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class __SteamLevelProductsModelSO__LevelPackRedirectionData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(16270)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4116)) CS Name: ::SteamPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__11
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2238c8c, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2238e9c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4117)) CS Name: ::SteamPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__12
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2238ef4, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2239104, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRedirectedLevelPackProductData>d__14
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880
// }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 753 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 868 }), TypeDefinitionIndex(TypeDefinitionIndex(16270))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4118)) CS
// Name: ::SteamPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__14
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x223915c, size 0x35c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22394b8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalPack_5__2", ty:
  // "::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*", modifiers: "", def_value: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
  // "::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14(int32_t __1__state,
                                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<uint32_t>> __t__builder,
                                                                                            ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                            ::System::Threading::CancellationToken cancellationToken,
                                                                                            ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* _originalPack_5__2,
                                                                                            ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14();

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
  ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* _originalPack_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, _originalPack_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsDataValidAsync>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3394), inst: 903 }), TypeDefinitionIndex(TypeDefinitionIndex(4097)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3393)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4119)) CS Name: ::SteamPlatformAdditionalContentModel::<IsDataValidAsync>d__16
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2239510, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22398c0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16();

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

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__18
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16271)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 895 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 868 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 753 }), TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4120)) CS Name: ::SteamPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__18
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2239918, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2239b78, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<uint32_t>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SteamPlatformAdditionalContentModel
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4121))
// CS Name: ::SteamPlatformAdditionalContentModel*
class CORDL_TYPE SteamPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _OpenLevelPackProductStoreAsync_d__18 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;

  using _IsDataValidAsync_d__16 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16;

  using _GetRedirectedLevelPackProductData_d__14 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14;

  using _GetPackEntitlementStatusInternalAsync_d__12 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12;

  using _GetLevelEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11;

  /// @brief Field _steamLevelProductsModel, offset 0x28, size 0x8
  __declspec(property(get = __get__steamLevelProductsModel, put = __set__steamLevelProductsModel))::GlobalNamespace::SteamLevelProductsModelSO* _steamLevelProductsModel;

  /// @brief Field _entitlementsAppIds, offset 0x30, size 0x8
  __declspec(property(get = __get__entitlementsAppIds, put = __set__entitlementsAppIds))::System::Collections::Generic::HashSet_1<uint32_t>* _entitlementsAppIds;

  /// @brief Field _dataIsValidTaskCompletionSource, offset 0x38, size 0x8
  __declspec(property(get = __get__dataIsValidTaskCompletionSource,
                      put = __set__dataIsValidTaskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _dataIsValidTaskCompletionSource;

  /// @brief Field _semaphoreSlim, offset 0x40, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _isDataValid, offset 0x48, size 0x1
  __declspec(property(get = __get__isDataValid, put = __set__isDataValid)) bool _isDataValid;

  /// @brief Field _levelIdToProductData, offset 0x50, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x58, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x60, size 0x8
  __declspec(property(get = __get__levelPackRedirectionData, put = __set__levelPackRedirectionData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>* _levelPackRedirectionData;

  constexpr ::GlobalNamespace::SteamLevelProductsModelSO*& __get__steamLevelProductsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamLevelProductsModelSO*> const& __get__steamLevelProductsModel() const;

  constexpr void __set__steamLevelProductsModel(::GlobalNamespace::SteamLevelProductsModelSO* value);

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __get__entitlementsAppIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __get__entitlementsAppIds() const;

  constexpr void __set__entitlementsAppIds(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get__dataIsValidTaskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get__dataIsValidTaskCompletionSource() const;

  constexpr void __set__dataIsValidTaskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__semaphoreSlim() const;

  constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__isDataValid();

  constexpr bool const& __get__isDataValid() const;

  constexpr void __set__isDataValid(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*& __get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> const&
  __get__levelPackRedirectionData() const;

  constexpr void __set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>* value);

  /// @brief Method InvalidateDataInternal, addr 0x2237fdc, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  static inline ::GlobalNamespace::SteamPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel,
                                                                                 ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor, addr 0x2237fe4, size 0x2e0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method GetLevelProductData, addr 0x22382c4, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x223833c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x2238440, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelPackProductData, addr 0x2238544, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x22385bc, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelPackRedirectionData, addr 0x22386cc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method IsDataValidAsync, addr 0x2238744, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x2238844, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x2238944, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenProductStore, addr 0x223890c, size 0x38, virtual false, abstract: false, final false
  inline void OpenProductStore(uint32_t appId);

  /// @brief Method OpenBundleUrl, addr 0x2238a48, size 0x38, virtual false, abstract: false, final false
  inline void OpenBundleUrl(uint32_t bundleId);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x2238a80, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method CheckForNewEntitlementsAsync, addr 0x2238ae8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
  CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x2238b50, size 0x78, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x2238bc8, size 0xc4, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamPlatformAdditionalContentModel(SteamPlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamPlatformAdditionalContentModel();

public:
  /// @brief Field _steamLevelProductsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductsModelSO* ____steamLevelProductsModel;

  /// @brief Field _entitlementsAppIds, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ____entitlementsAppIds;

  /// @brief Field _dataIsValidTaskCompletionSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____dataIsValidTaskCompletionSource;

  /// @brief Field _semaphoreSlim, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x48, size: 0x1, def value: None
  bool ____isDataValid;

  /// @brief Field _levelIdToProductData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____steamLevelProductsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____entitlementsAppIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____dataIsValidTaskCompletionSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____semaphoreSlim) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____isDataValid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____levelIdToProductData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____levelPackIdToProductData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____levelPackRedirectionData) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel*, "", "SteamPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__11, "",
                       "SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__12, "",
                       "SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__14, "",
                       "SteamPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___IsDataValidAsync_d__16, "", "SteamPlatformAdditionalContentModel/<IsDataValidAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, "",
                       "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18");
