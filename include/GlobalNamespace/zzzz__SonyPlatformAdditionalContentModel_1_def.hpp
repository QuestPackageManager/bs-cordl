#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
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
CORDL_MODULE_EXPORT(SonyPlatformAdditionalContentModel_1)
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
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
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductModelSO__LevelProductData;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
template <typename T> class SonyPlatformAdditionalContentModel_1;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13;
}
namespace GlobalNamespace {
template <typename T> struct __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SonyPlatformAdditionalContentModel_1);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13);
MARK_GEN_VAL_T(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__11
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(16270)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880
// }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4593)) CS Name: ::SonyPlatformAdditionalContentModel`1::<GetLevelEntitlementStatusInternalAsync>d__11<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

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
// Type: ::<GetPackEntitlementStatusInternalAsync>d__12
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(16270)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3402), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4594)) CS Name: ::SonyPlatformAdditionalContentModel`1::<GetPackEntitlementStatusInternalAsync>d__12<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

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
// Type: ::<OpenLevelProductStoreAsync>d__13
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16271)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5070 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4140)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4595)) CS Name:
// ::SonyPlatformAdditionalContentModel`1::<OpenLevelProductStoreAsync>d__13<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

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
// Type: ::<OpenLevelPackProductStoreAsync>d__14
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5070 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4140)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(16271))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4596)) CS Name: ::SonyPlatformAdditionalContentModel`1::<OpenLevelPackProductStoreAsync>d__14<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

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
} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__15
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16272)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 891
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4597)) CS Name: ::SonyPlatformAdditionalContentModel`1::<IsPackBetterBuyThanLevelAsync>d__15<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder;

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
// Type: ::<GetRedirectedLevelPackProductData>d__16
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(16270)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 397 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4598)) CS Name: ::SonyPlatformAdditionalContentModel`1::<GetRedirectedLevelPackProductData>d__16<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalPack_5__2", ty:
  // "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*", modifiers: "", def_value: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
  // "::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                             ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::StringW packId,
                                                                                             ::System::Threading::CancellationToken cancellationToken,
                                                                                             ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* _originalPack_5__2,
                                                                                             ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this;

  /// @brief Field packId, offset: 0x28, size: 0x8, def value: None
  ::StringW packId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <originalPack>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* _originalPack_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<EnsureDataValidity>d__20
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// TypeDefinitionIndex(TypeDefinitionIndex(4097)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3393)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 903 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4599)) CS Name:
// ::SonyPlatformAdditionalContentModel`1::<EnsureDataValidity>d__20<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20();

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
// Type: ::<UpdateEntitlementsAsync>d__21
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(4143)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 903 }), TypeDefinitionIndex(TypeDefinitionIndex(4097)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 5069 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4600)) CS Name:
// ::SonyPlatformAdditionalContentModel`1::<UpdateEntitlementsAsync>d__21<T>
struct CORDL_TYPE __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }]
  constexpr __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
      ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21();

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
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4601))
// CS Name: ::SonyPlatformAdditionalContentModel`1<T>*
class CORDL_TYPE SonyPlatformAdditionalContentModel_1 : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _UpdateEntitlementsAsync_d__21 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21<T>;

  using _EnsureDataValidity_d__20 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20<T>;

  using _GetRedirectedLevelPackProductData_d__16 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16<T>;

  using _IsPackBetterBuyThanLevelAsync_d__15 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15<T>;

  using _OpenLevelPackProductStoreAsync_d__14 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14<T>;

  using _OpenLevelProductStoreAsync_d__13 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13<T>;

  using _GetPackEntitlementStatusInternalAsync_d__12 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12<T>;

  using _GetLevelEntitlementStatusInternalAsync_d__11 = ::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11<T>;

  /// @brief Field _entitlementsLabels, offset 0x28, size 0x8
  __declspec(property(get = __get__entitlementsLabels, put = __set__entitlementsLabels))::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsLabels;

  /// @brief Field _semaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _isDataValid, offset 0x38, size 0x1
  __declspec(property(get = __get__isDataValid, put = __set__isDataValid)) bool _isDataValid;

  /// @brief Field _sonyCommerceHelper, offset 0x40, size 0x8
  __declspec(property(get = __get__sonyCommerceHelper, put = __set__sonyCommerceHelper))::GlobalNamespace::ISonyCommerceHelper* _sonyCommerceHelper;

  /// @brief Field _levelIdToProductData, offset 0x48, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x50, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x58, size 0x8
  __declspec(property(get = __get__levelPackRedirectionData, put = __set__levelPackRedirectionData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>* _levelPackRedirectionData;

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

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*& __get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>*> const&
  __get__levelPackRedirectionData() const;

  constexpr void __set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>* value);

  static inline ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>* New_ctor(T levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                                     ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T levelPackProductsData, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper, ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method GetLevelProductData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method InvalidateDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelPackRedirectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method HasLevelEntitlement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method EnsureDataValidity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureDataValidity(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateEntitlementsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* UpdateEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

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

  /// @brief Field _levelIdToProductData, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductModelSO__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SonyPlatformAdditionalContentModel_1, "", "SonyPlatformAdditionalContentModel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__20, "", "SonyPlatformAdditionalContentModel`1/<EnsureDataValidity>d__20");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__11, "",
                                      "SonyPlatformAdditionalContentModel`1/<GetLevelEntitlementStatusInternalAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__12, "",
                                      "SonyPlatformAdditionalContentModel`1/<GetPackEntitlementStatusInternalAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___GetRedirectedLevelPackProductData_d__16, "",
                                      "SonyPlatformAdditionalContentModel`1/<GetRedirectedLevelPackProductData>d__16");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__15, "",
                                      "SonyPlatformAdditionalContentModel`1/<IsPackBetterBuyThanLevelAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__14, "",
                                      "SonyPlatformAdditionalContentModel`1/<OpenLevelPackProductStoreAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__13, "",
                                      "SonyPlatformAdditionalContentModel`1/<OpenLevelProductStoreAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__21, "",
                                      "SonyPlatformAdditionalContentModel`1/<UpdateEntitlementsAsync>d__21");
