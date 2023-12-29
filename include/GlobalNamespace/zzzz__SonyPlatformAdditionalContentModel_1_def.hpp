#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyPlatformAdditionalContentModel_1)
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SonyPlatformAdditionalContentModel_1;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SonyPlatformAdditionalContentModel_1);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4683)) CS Name: ::SonyPlatformAdditionalContentModel`1::<GetLevelEntitlementStatusInternalAsync>d__5<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4122))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4684)) CS Name: ::SonyPlatformAdditionalContentModel`1::<GetPackEntitlementStatusInternalAsync>d__6<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__7
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4174)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4960 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4123)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4685)) CS Name:
// ::SonyPlatformAdditionalContentModel`1::<OpenLevelProductStoreAsync>d__7<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__8
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4174)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4960 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3397), inst: 885 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(4123))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4686)) CS Name: ::SonyPlatformAdditionalContentModel`1::<OpenLevelPackProductStoreAsync>d__8<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__9
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3397), inst: 884 }), TypeDefinitionIndex(TypeDefinitionIndex(4125)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4687)) CS Name: ::SonyPlatformAdditionalContentModel`1::<IsPackBetterBuyThanLevelAsync>d__9<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<EnsureDataValidity>d__12
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 112 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3389), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4124)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4688)) CS Name: ::SonyPlatformAdditionalContentModel`1::<EnsureDataValidity>d__12<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<UpdateEntitlementsAsync>d__13
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4177)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 886 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 4959 }), TypeDefinitionIndex(TypeDefinitionIndex(4124))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4689)) CS Name:
// ::SonyPlatformAdditionalContentModel`1::<UpdateEntitlementsAsync>d__13<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SonyPlatformAdditionalContentModel`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4690))
// CS Name: ::SonyPlatformAdditionalContentModel`1<T>*
class CORDL_TYPE SonyPlatformAdditionalContentModel_1 : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _UpdateEntitlementsAsync_d__13 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>;

  using _EnsureDataValidity_d__12 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>;

  using _IsPackBetterBuyThanLevelAsync_d__9 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>;

  using _OpenLevelPackProductStoreAsync_d__8 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>;

  using _OpenLevelProductStoreAsync_d__7 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>;

  using _GetPackEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>;

  using _GetLevelEntitlementStatusInternalAsync_d__5 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>;

  /// @brief Field _entitlementsLabels, offset 0x28, size 0x8
  __declspec(property(get = __get__entitlementsLabels, put = __set__entitlementsLabels))::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsLabels;

  /// @brief Field _semaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _isDataValid, offset 0x38, size 0x1
  __declspec(property(get = __get__isDataValid, put = __set__isDataValid)) bool _isDataValid;

  /// @brief Field _sonyCommerceHelper, offset 0x40, size 0x8
  __declspec(property(get = __get__sonyCommerceHelper, put = __set__sonyCommerceHelper))::GlobalNamespace::ISonyCommerceHelper* _sonyCommerceHelper;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__entitlementsLabels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__entitlementsLabels() const;

  constexpr void __set__entitlementsLabels(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__semaphoreSlim() const;

  constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__isDataValid();

  constexpr bool const& __get__isDataValid() const;

  constexpr void __set__isDataValid(bool value);

  constexpr ::GlobalNamespace::ISonyCommerceHelper*& __get__sonyCommerceHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISonyCommerceHelper*> const& __get__sonyCommerceHelper() const;

  constexpr void __set__sonyCommerceHelper(::GlobalNamespace::ISonyCommerceHelper* value);

  /// @brief Method InvalidateDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId,
                                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*
  OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>*
  IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method EnsureDataValidity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureDataValidity(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateEntitlementsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelProductsModel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T GetLevelProductsModel();

  static inline ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyPlatformAdditionalContentModel_1(SonyPlatformAdditionalContentModel_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyPlatformAdditionalContentModel_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyPlatformAdditionalContentModel_1(SonyPlatformAdditionalContentModel_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPlatformAdditionalContentModel_1();

public:
  /// @brief Field _entitlementsLabels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsLabels;

  /// @brief Field _semaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x38, size: 0x1, def value: None
  bool ____isDataValid;

  /// @brief Field _sonyCommerceHelper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ISonyCommerceHelper* ____sonyCommerceHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SonyPlatformAdditionalContentModel_1, "", "SonyPlatformAdditionalContentModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12, "", "SonyPlatformAdditionalContentModel`1/<EnsureDataValidity>d__12");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5, "",
                                      "SonyPlatformAdditionalContentModel`1/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6, "",
                                      "SonyPlatformAdditionalContentModel`1/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9, "",
                                      "SonyPlatformAdditionalContentModel`1/<IsPackBetterBuyThanLevelAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8, "",
                                      "SonyPlatformAdditionalContentModel`1/<OpenLevelPackProductStoreAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7, "",
                                      "SonyPlatformAdditionalContentModel`1/<OpenLevelProductStoreAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13, "",
                                      "SonyPlatformAdditionalContentModel`1/<UpdateEntitlementsAsync>d__13");
