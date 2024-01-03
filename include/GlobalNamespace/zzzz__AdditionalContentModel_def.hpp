#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalContentModel)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;
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
// Forward declare root types
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
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::AdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11);
// Type: ::UpdateEntitlementsResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4097))
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
// Type: ::<GetLevelEntitlementStatusAsync>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(16270)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880
// }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4098)) CS Name: ::AdditionalContentModel::<GetLevelEntitlementStatusAsync>d__10
struct CORDL_TYPE __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2233ed4, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2234104, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10(int32_t __1__state,
                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
                                                                            ::GlobalNamespace::AdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken token,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 880 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(16270))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4099))
// CS Name: ::AdditionalContentModel::<GetPackEntitlementStatusAsync>d__11
struct CORDL_TYPE __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x223415c, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x223438c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11(int32_t __1__state,
                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
                                                                           ::GlobalNamespace::AdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken token,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel___GetPackEntitlementStatusAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4100))
// CS Name: ::AdditionalContentModel*
class CORDL_TYPE AdditionalContentModel : public ::System::Object {
public:
  // Declarations
  using _GetPackEntitlementStatusAsync_d__11 = ::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11;

  using _GetLevelEntitlementStatusAsync_d__10 = ::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10;

  using UpdateEntitlementsResult = ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult;

  /// @brief Field didInvalidateDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_didInvalidateDataEvent, put = __set_didInvalidateDataEvent))::System::Action* didInvalidateDataEvent;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset 0x18, size 0x8
  __declspec(property(get = __get__alwaysOwnedBeatmapLevelIds, put = __set__alwaysOwnedBeatmapLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset 0x20, size 0x8
  __declspec(property(get = __get__alwaysOwnedPacksIds, put = __set__alwaysOwnedPacksIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedPacksIds;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Action*& __get_didInvalidateDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didInvalidateDataEvent() const;

  constexpr void __set_didInvalidateDataEvent(::System::Action* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__alwaysOwnedBeatmapLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__alwaysOwnedBeatmapLevelIds() const;

  constexpr void __set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__alwaysOwnedPacksIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__alwaysOwnedPacksIds() const;

  constexpr void __set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method add_didInvalidateDataEvent, addr 0x22334c4, size 0x9c, virtual true, abstract: false, final true
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method remove_didInvalidateDataEvent, addr 0x2233560, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didInvalidateDataEvent(::System::Action* value);

  static inline ::GlobalNamespace::AdditionalContentModel* New_ctor(::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor, addr 0x22335fc, size 0x5dc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method Dispose, addr 0x2233bd8, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method OnApplicationFocusChanged, addr 0x2233c58, size 0x3c, virtual false, abstract: false, final false
  inline void OnApplicationFocusChanged(bool hasFocus);

  /// @brief Method InvalidateData, addr 0x2233c94, size 0x38, virtual false, abstract: false, final false
  inline void InvalidateData();

  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x2233ccc, size 0x104, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusAsync, addr 0x2233dd0, size 0x104, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method InvalidateDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

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
  /// @brief Field didInvalidateDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didInvalidateDataEvent;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedPacksIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdditionalContentModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ___didInvalidateDataEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ____alwaysOwnedBeatmapLevelIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ____alwaysOwnedPacksIds) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::AdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel___GetLevelEntitlementStatusAsync_d__10, "", "AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel___GetPackEntitlementStatusAsync_d__11, "", "AdditionalContentModel/<GetPackEntitlementStatusAsync>d__11");
