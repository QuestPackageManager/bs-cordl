#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;
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
// Forward declare root types
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct __SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4122)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2675))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4142)) CS Name: ::SteamPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20de4c0 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20de6d0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4122))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4143)) CS Name: ::SteamPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__7
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20de728 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20de938 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DataIsValidAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 112
// }), TypeDefinitionIndex(TypeDefinitionIndex(4124)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 886 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4144)) CS Name: ::SteamPlatformAdditionalContentModel::<DataIsValidAsync>d__8
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20de990 size 0x3b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20ded40 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__9
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4123)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885
// }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 885 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4145)) CS
// Name: ::SteamPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__9
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20ded98 size 0x334 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20df0cc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4123)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885
// }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 885 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4146)) CS
// Name: ::SteamPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__10
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20df124 size 0x334 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20df458 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SteamPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckForNewEntitlementsAsync>d__14
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4124)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 886
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4147)) CS
// Name: ::SteamPlatformAdditionalContentModel::<CheckForNewEntitlementsAsync>d__14
struct CORDL_TYPE __SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20df4b0 size 0x20c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20df6bc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SteamPlatformAdditionalContentModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4148))
// CS Name: ::SteamPlatformAdditionalContentModel*
class CORDL_TYPE SteamPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _CheckForNewEntitlementsAsync_d__14 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14;

  using _OpenLevelPackProductStoreAsync_d__10 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;

  using _OpenLevelProductStoreAsync_d__9 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;

  using _DataIsValidAsync_d__8 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8;

  using _GetPackEntitlementStatusInternalAsync_d__7 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;

  using _GetLevelEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;

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

  /// @brief Method InvalidateDataInternal addr 0x20ddbfc size 0x8 virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20ddc04 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20ddd08 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DataIsValidAsync addr 0x20dde0c size 0x100 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* DataIsValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync addr 0x20ddf0c size 0xfc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId,
                                                                                                                                             ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x20de008 size 0xfc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId,
                                                                                                                                                 ::System::Threading::CancellationToken token);

  /// @brief Method OpenProductStore addr 0x20de104 size 0x38 virtual false final false
  inline void OpenProductStore(uint32_t appId);

  /// @brief Method OpenBundleUrl addr 0x20de13c size 0x38 virtual false final false
  inline void OpenBundleUrl(uint32_t bundleId);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20de174 size 0x68 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method CheckForNewEntitlementsAsync addr 0x20de1dc size 0xe4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
  CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement addr 0x20de2c0 size 0x80 virtual false final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement addr 0x20de340 size 0xcc virtual false final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  static inline ::GlobalNamespace::SteamPlatformAdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x20de40c size 0xb4 virtual false final false
  inline void _ctor();

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamPlatformAdditionalContentModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____steamLevelProductsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____entitlementsAppIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____dataIsValidTaskCompletionSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____semaphoreSlim) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamPlatformAdditionalContentModel, ____isDataValid) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamPlatformAdditionalContentModel*, "", "SteamPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__14, "", "SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___DataIsValidAsync_d__8, "", "SteamPlatformAdditionalContentModel/<DataIsValidAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, "",
                       "SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, "",
                       "SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, "",
                       "SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, "", "SteamPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__9");
