#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalContentModel)
namespace System {
class Action;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__EntitlementStatus);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::AdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11);
// Type: ::EntitlementStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4122))
// CS Name: ::AdditionalContentModel::EntitlementStatus
struct CORDL_TYPE __AdditionalContentModel__EntitlementStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AdditionalContentModel__EntitlementStatus_Unwrapped
  enum struct ____AdditionalContentModel__EntitlementStatus_Unwrapped : int32_t {
    __E_Failed = static_cast<int32_t>(0x0),
    __E_Owned = static_cast<int32_t>(0x1),
    __E_NotOwned = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AdditionalContentModel__EntitlementStatus_Unwrapped() const noexcept {
    return static_cast<____AdditionalContentModel__EntitlementStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__EntitlementStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__EntitlementStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Failed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus const Failed;

  /// @brief Field Owned value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus const Owned;

  /// @brief Field NotOwned value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus const NotOwned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__EntitlementStatus, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenProductStoreResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4123))
// CS Name: ::AdditionalContentModel::OpenProductStoreResult
struct CORDL_TYPE __AdditionalContentModel__OpenProductStoreResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AdditionalContentModel__OpenProductStoreResult_Unwrapped
  enum struct ____AdditionalContentModel__OpenProductStoreResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AdditionalContentModel__OpenProductStoreResult_Unwrapped() const noexcept {
    return static_cast<____AdditionalContentModel__OpenProductStoreResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__OpenProductStoreResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__OpenProductStoreResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UpdateEntitlementsResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4124))
// CS Name: ::AdditionalContentModel::UpdateEntitlementsResult
struct CORDL_TYPE __AdditionalContentModel__UpdateEntitlementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped
  enum struct ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped() const noexcept {
    return static_cast<____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__UpdateEntitlementsResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IsPackBetterBuyThanLevelResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4125))
// CS Name: ::AdditionalContentModel::IsPackBetterBuyThanLevelResult
struct CORDL_TYPE __AdditionalContentModel__IsPackBetterBuyThanLevelResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped
  enum struct ____AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped : int32_t {
    __E_PackIsBetter = static_cast<int32_t>(0x0),
    __E_LevelIsBetter = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped() const noexcept {
    return static_cast<____AdditionalContentModel__IsPackBetterBuyThanLevelResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__IsPackBetterBuyThanLevelResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__IsPackBetterBuyThanLevelResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PackIsBetter value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult const PackIsBetter;

  /// @brief Field LevelIsBetter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult const LevelIsBetter;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelEntitlementStatusAsync>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(4122)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 883 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4126)) CS Name: ::AdditionalContentModel::<GetLevelEntitlementStatusAsync>d__10
struct CORDL_TYPE __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20da1e8 size 0x258 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20da464 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::AdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken token,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusAsync>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4122))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4127)) CS Name: ::AdditionalContentModel::<GetPackEntitlementStatusAsync>d__11
struct CORDL_TYPE __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x20da4bc size 0x258 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x20da738 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::GlobalNamespace::AdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AdditionalContentModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4128))
// CS Name: ::AdditionalContentModel*
class CORDL_TYPE AdditionalContentModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetPackEntitlementStatusAsync_d__11 = ::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;

  using _GetLevelEntitlementStatusAsync_d__10 = ::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;

  using IsPackBetterBuyThanLevelResult = ::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult;

  using UpdateEntitlementsResult = ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult;

  using OpenProductStoreResult = ::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult;

  using EntitlementStatus = ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus;

  /// @brief Field _alwaysOwnedContentContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__alwaysOwnedContentContainer, put = __set__alwaysOwnedContentContainer))::GlobalNamespace::AlwaysOwnedContentContainerSO* _alwaysOwnedContentContainer;

  /// @brief Field didInvalidateDataEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didInvalidateDataEvent, put = __set_didInvalidateDataEvent))::System::Action* didInvalidateDataEvent;

  constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO*& __get__alwaysOwnedContentContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentContainerSO*> const& __get__alwaysOwnedContentContainer() const;

  constexpr void __set__alwaysOwnedContentContainer(::GlobalNamespace::AlwaysOwnedContentContainerSO* value);

  constexpr ::System::Action*& __get_didInvalidateDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didInvalidateDataEvent() const;

  constexpr void __set_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method add_didInvalidateDataEvent addr 0x20d9e2c size 0x9c virtual false final false
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method remove_didInvalidateDataEvent addr 0x20d9ec8 size 0x9c virtual false final false
  inline void remove_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method OnApplicationFocus addr 0x20d9f64 size 0x3c virtual false final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method InvalidateData addr 0x20d9fa0 size 0x38 virtual false final false
  inline void InvalidateData();

  /// @brief Method GetLevelEntitlementStatusAsync addr 0x20d9fd8 size 0x104 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId,
                                                                                                                                            ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusAsync addr 0x20da0dc size 0x104 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetPackEntitlementStatusAsync(::StringW levelPackId,
                                                                                                                                           ::System::Threading::CancellationToken token);

  /// @brief Method InvalidateDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId,
                                                                                                                                                    ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                                                   ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId,
                                                                                                                                             ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId,
                                                                                                                                                 ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::AdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x20da1e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalContentModel(AdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalContentModel(AdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalContentModel();

public:
  /// @brief Field _alwaysOwnedContentContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AlwaysOwnedContentContainerSO* ____alwaysOwnedContentContainer;

  /// @brief Field didInvalidateDataEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didInvalidateDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdditionalContentModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ____alwaysOwnedContentContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ___didInvalidateDataEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__EntitlementStatus, "", "AdditionalContentModel/EntitlementStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult, "", "AdditionalContentModel/IsPackBetterBuyThanLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult, "", "AdditionalContentModel/OpenProductStoreResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::AdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, "", "AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, "", "AdditionalContentModel/<GetPackEntitlementStatusAsync>d__11");
