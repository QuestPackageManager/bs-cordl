#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformAdditionalContentModel)
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
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
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAdditionalContentModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3397), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4131)) CS Name: ::OculusPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__5
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20db6f8 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20db908 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 883 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4132)) CS Name: ::OculusPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20db960 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dbb70 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DataIsValidAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 886
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 112 }), TypeDefinitionIndex(TypeDefinitionIndex(4124)), TypeDefinitionIndex(TypeDefinitionIndex(2675)),
// TypeDefinitionIndex(TypeDefinitionIndex(3388))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4133)) CS Name: ::OculusPlatformAdditionalContentModel::<DataIsValidAsync>d__7
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dbbc8 size 0x3b8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dbf80 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13531)), TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst:
// 1160 }), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 854 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 885 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4123)),
// TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4134)) CS Name: ::OculusPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dbfd8 size 0x458 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dc430 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__9
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4123)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(13269)), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// TypeDefinitionIndex(TypeDefinitionIndex(13531)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 854 }), TypeDefinitionIndex(TypeDefinitionIndex(3388)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 1160 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4135)) CS Name:
// ::OculusPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__9
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dc488 size 0x4c8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dc950 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4136))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass10_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field launchCheckoutFlowTaskSource, offset 0x10, size 0x8
  __declspec(property(
      get = __get_launchCheckoutFlowTaskSource,
      put = __set_launchCheckoutFlowTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*& __get_launchCheckoutFlowTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*> const&
  __get_launchCheckoutFlowTaskSource() const;

  constexpr void __set_launchCheckoutFlowTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* value);

  static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x20dc9a8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LaunchCheckoutFlow>b__0 addr 0x20dc9b0 size 0x58 virtual false final false
  inline void _LaunchCheckoutFlow_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAdditionalContentModel____c__DisplayClass10_0(__OculusPlatformAdditionalContentModel____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAdditionalContentModel____c__DisplayClass10_0(__OculusPlatformAdditionalContentModel____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel____c__DisplayClass10_0();

public:
  /// @brief Field launchCheckoutFlowTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* ___launchCheckoutFlowTaskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0, ___launchCheckoutFlowTaskSource) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LaunchCheckoutFlow>d__10
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 854 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(13269), inst: 1160 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 854 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13531)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4137)) CS Name:
// ::OculusPlatformAdditionalContentModel::<LaunchCheckoutFlow>d__10
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dca08 size 0x30c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dcd14 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }, CppParam { name: "sku",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __t__builder, ::StringW sku,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __t__builder;

  /// @brief Field sku, offset: 0x20, size: 0x8, def value: None
  ::StringW sku;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, sku) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__11
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 884 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(4125)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 884 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4138)) CS Name: ::OculusPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__11
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dcd6c size 0x20c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20dcf78 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4139))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass12_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field getViewerPurchasesTaskSource, offset 0x18, size 0x8
  __declspec(property(
      get = __get_getViewerPurchasesTaskSource,
      put = __set_getViewerPurchasesTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* getViewerPurchasesTaskSource;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>9__1, offset 0x28, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>* __9__1;

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*& __get_getViewerPurchasesTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*> const&
  __get_getViewerPurchasesTaskSource() const;

  constexpr void __set_getViewerPurchasesTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* value);

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel* value);

  constexpr ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*> const& __get___9__1() const;

  constexpr void __set___9__1(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>* value);

  static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x20dcfd0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CheckForNewEntitlementsAsync>b__0 addr 0x20dcfd8 size 0x528 virtual false final false
  inline void _CheckForNewEntitlementsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg);

  /// @brief Method <CheckForNewEntitlementsAsync>b__1 addr 0x20dd500 size 0x38c virtual false final false
  inline void _CheckForNewEntitlementsAsync_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* getPurchasesMsg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAdditionalContentModel____c__DisplayClass12_0(__OculusPlatformAdditionalContentModel____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAdditionalContentModel____c__DisplayClass12_0(__OculusPlatformAdditionalContentModel____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel____c__DisplayClass12_0();

public:
  /// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field getViewerPurchasesTaskSource, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* ___getViewerPurchasesTaskSource;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* _____4__this;

  /// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, ___getViewerPurchasesTaskSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0, _____9__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckForNewEntitlementsAsync>d__12
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3389), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4124)), TypeDefinitionIndex(TypeDefinitionIndex(2675))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4140)) CS Name: ::OculusPlatformAdditionalContentModel::<CheckForNewEntitlementsAsync>d__12
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20dd88c size 0x318 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20ddba4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformAdditionalContentModel
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4141))
// CS Name: ::OculusPlatformAdditionalContentModel*
class CORDL_TYPE OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _CheckForNewEntitlementsAsync_d__12 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0;

  using _IsPackBetterBuyThanLevelAsync_d__11 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11;

  using _LaunchCheckoutFlow_d__10 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0;

  using _OpenLevelPackProductStoreAsync_d__9 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9;

  using _OpenLevelProductStoreAsync_d__8 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

  using _DataIsValidAsync_d__7 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7;

  using _GetPackEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;

  using _GetLevelEntitlementStatusInternalAsync_d__5 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;

  /// @brief Field _oculusLevelProductsModel, offset 0x28, size 0x8
  __declspec(property(get = __get__oculusLevelProductsModel, put = __set__oculusLevelProductsModel))::GlobalNamespace::OculusLevelProductsModelSO* _oculusLevelProductsModel;

  /// @brief Field _entitlementsSKU, offset 0x30, size 0x8
  __declspec(property(get = __get__entitlementsSKU, put = __set__entitlementsSKU))::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsSKU;

  /// @brief Field _semaphoreSlim, offset 0x38, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _isDataValid, offset 0x40, size 0x1
  __declspec(property(get = __get__isDataValid, put = __set__isDataValid)) bool _isDataValid;

  constexpr ::GlobalNamespace::OculusLevelProductsModelSO*& __get__oculusLevelProductsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusLevelProductsModelSO*> const& __get__oculusLevelProductsModel() const;

  constexpr void __set__oculusLevelProductsModel(::GlobalNamespace::OculusLevelProductsModelSO* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__entitlementsSKU();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__entitlementsSKU() const;

  constexpr void __set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__semaphoreSlim() const;

  constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__isDataValid();

  constexpr bool const& __get__isDataValid() const;

  constexpr void __set__isDataValid(bool value);

  /// @brief Method InvalidateDataInternal addr 0x20dad14 size 0x8 virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20dad1c size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20dae20 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>*
  GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DataIsValidAsync addr 0x20daf24 size 0x100 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* DataIsValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync addr 0x20db024 size 0x108 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId,
                                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x20db12c size 0x108 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>*
  OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LaunchCheckoutFlow addr 0x20db234 size 0xf0 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW sku);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20db324 size 0xe4 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method CheckForNewEntitlementsAsync addr 0x20db408 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
  CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement addr 0x20db504 size 0x74 virtual false final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement addr 0x20db578 size 0xcc virtual false final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x20db644 size 0xb4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel();

public:
  /// @brief Field _oculusLevelProductsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductsModelSO* ____oculusLevelProductsModel;

  /// @brief Field _entitlementsSKU, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsSKU;

  /// @brief Field _semaphoreSlim, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x40, size: 0x1, def value: None
  bool ____isDataValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____oculusLevelProductsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____entitlementsSKU) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____semaphoreSlim) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____isDataValid) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass10_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass12_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___CheckForNewEntitlementsAsync_d__12, "", "OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___DataIsValidAsync_d__7, "", "OculusPlatformAdditionalContentModel/<DataIsValidAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, "",
                       "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, "",
                       "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__11, "",
                       "OculusPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___LaunchCheckoutFlow_d__10, "", "OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__9, "",
                       "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
