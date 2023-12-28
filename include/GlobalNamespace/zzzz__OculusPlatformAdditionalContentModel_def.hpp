#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
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
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass21_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass19_0;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackRedirectionData;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform::Models {
class PurchaseList;
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
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass21_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAdditionalContentModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17);
// Type: ::<GetRedirectedLevelPackProductData>d__10
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 397
// }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(16270))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4107)) CS Name: ::OculusPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__10
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x223628c size 0x2c4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2236550 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalPack_5__2", ty:
  // "::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*", modifiers: "", def_value: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty:
  // "::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                             ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                             ::System::Threading::CancellationToken cancellationToken,
                                                                                             ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* _originalPack_5__2,
                                                                                             ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field packId, offset: 0x28, size: 0x8, def value: None
  ::StringW packId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <originalPack>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* _originalPack_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(16270)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4108)) CS Name: ::OculusPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__14
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22365a8 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22367b8 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__15
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(16270)),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4109)) CS Name: ::OculusPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__15
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2236810 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2236a20 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsDataValidAsync>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 903
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(4097)),
// TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4110)) CS Name: ::OculusPlatformAdditionalContentModel::<IsDataValidAsync>d__16
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2236a78 size 0x3b8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2236e30 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16271)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 1182 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5058 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(13475)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4111)) CS Name: ::OculusPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__17
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2236e88 size 0x33c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22371c4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__18
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13475)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// TypeDefinitionIndex(TypeDefinitionIndex(16271)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5058 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(13262), inst: 1182 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 895 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4112)) CS Name:
// ::OculusPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__18
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x223721c size 0x46c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2237688 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4113))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass19_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass19_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0* New_ctor();

  /// @brief Method .ctor addr 0x2235f98 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LaunchCheckoutFlow>b__0 addr 0x22376e0 size 0x58 virtual false final false
  inline void _LaunchCheckoutFlow_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAdditionalContentModel____c__DisplayClass19_0(__OculusPlatformAdditionalContentModel____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAdditionalContentModel____c__DisplayClass19_0(__OculusPlatformAdditionalContentModel____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel____c__DisplayClass19_0();

public:
  /// @brief Field launchCheckoutFlowTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* ___launchCheckoutFlowTaskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4114))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass21_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass21_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor addr 0x2236154 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CheckForNewEntitlementsAsync>b__0 addr 0x2237738 size 0x518 virtual false final false
  inline void _CheckForNewEntitlementsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg);

  /// @brief Method <CheckForNewEntitlementsAsync>b__1 addr 0x2237c50 size 0x38c virtual false final false
  inline void _CheckForNewEntitlementsAsync_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* getPurchasesMsg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAdditionalContentModel____c__DisplayClass21_0(__OculusPlatformAdditionalContentModel____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAdditionalContentModel____c__DisplayClass21_0(__OculusPlatformAdditionalContentModel____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAdditionalContentModel____c__DisplayClass21_0();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformAdditionalContentModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4115))
// CS Name: ::OculusPlatformAdditionalContentModel*
class CORDL_TYPE OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0;

  using __c__DisplayClass19_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0;

  using _OpenLevelPackProductStoreAsync_d__18 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;

  using _OpenLevelProductStoreAsync_d__17 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;

  using _IsDataValidAsync_d__16 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;

  using _GetPackEntitlementStatusInternalAsync_d__15 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;

  using _GetLevelEntitlementStatusInternalAsync_d__14 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;

  using _GetRedirectedLevelPackProductData_d__10 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;

  /// @brief Field _entitlementsSKU, offset 0x28, size 0x8
  __declspec(property(get = __get__entitlementsSKU, put = __set__entitlementsSKU))::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsSKU;

  /// @brief Field _semaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _isDataValid, offset 0x38, size 0x1
  __declspec(property(get = __get__isDataValid, put = __set__isDataValid)) bool _isDataValid;

  /// @brief Field _levelIdToProductData, offset 0x40, size 0x8
  __declspec(
      property(get = __get__levelIdToProductData,
               put = __set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x48, size 0x8
  __declspec(property(
      get = __get__levelPackIdToProductData,
      put = __set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x50, size 0x8
  __declspec(property(get = __get__levelPackRedirectionData, put = __set__levelPackRedirectionData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset 0x58, size 0x8
  __declspec(property(get = __get__assetFileToSku, put = __set__assetFileToSku))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _assetFileToSku;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__entitlementsSKU();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__entitlementsSKU() const;

  constexpr void __set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__semaphoreSlim() const;

  constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr bool& __get__isDataValid();

  constexpr bool const& __get__isDataValid() const;

  constexpr void __set__isDataValid(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*& __get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> const&
  __get__levelIdToProductData() const;

  constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*& __get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> const&
  __get__levelPackIdToProductData() const;

  constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*& __get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*> const&
  __get__levelPackRedirectionData() const;

  constexpr void __set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get__assetFileToSku();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get__assetFileToSku() const;

  constexpr void __set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel,
                                                                                  ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor addr 0x223527c size 0x3d4 virtual false final false
  inline void _ctor(::GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method GetLevelProductData addr 0x2235650 size 0x78 virtual false final false
  inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData addr 0x22356c8 size 0x78 virtual false final false
  inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetRedirectedLevelPackProductData addr 0x2235740 size 0x108 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelPackRedirectionData addr 0x2235848 size 0x78 virtual false final false
  inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelSku addr 0x22358c0 size 0x78 virtual false final false
  inline ::StringW GetLevelSku(::StringW assetFile);

  /// @brief Method InvalidateDataInternal addr 0x2235938 size 0x8 virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x2235940 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x2235a44 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsDataValidAsync addr 0x2235b48 size 0x100 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync addr 0x2235c48 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x2235d4c size 0x108 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LaunchCheckoutFlow addr 0x2235e54 size 0x144 virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW sku);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x2235fa0 size 0x68 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method CheckForNewEntitlementsAsync addr 0x2236008 size 0x14c virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*
  CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement addr 0x223615c size 0x6c virtual false final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement addr 0x22361c8 size 0xc4 virtual false final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

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
  /// @brief Field _entitlementsSKU, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsSKU;

  /// @brief Field _semaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x38, size: 0x1, def value: None
  bool ____isDataValid;

  /// @brief Field _levelIdToProductData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____assetFileToSku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass21_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14, "",
                       "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15, "",
                       "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10, "",
                       "OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16, "", "OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, "",
                       "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__17");
