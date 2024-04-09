#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9);
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE __MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x139f644, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x139f854, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__7
struct CORDL_TYPE __MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x139f8ac, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x139facc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
  // None }]
  constexpr __MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__8
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__8
struct CORDL_TYPE __MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x139fb24, size 0x1c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x139fce8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__9
struct CORDL_TYPE __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x139fd40, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x139ff9c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__11
struct CORDL_TYPE __MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x139fff4, size 0x20c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13a0200, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
  // None }]
  constexpr __MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken token, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MockPlatformAdditionalContentModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlatformAdditionalContentModel*
class CORDL_TYPE MockPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _GetLevelEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6;

  using _GetPackEntitlementStatusInternalAsync_d__7 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7;

  using _IsPackBetterBuyThanLevelAsync_d__8 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8;

  using _OpenLevelPackProductStoreAsync_d__11 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11;

  using _OpenLevelProductStoreAsync_d__9 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9;

  /// @brief Field _levelPacksEntitlements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPacksEntitlements,
                      put = __cordl_internal_set__levelPacksEntitlements))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelPacksEntitlements;

  /// @brief Field _levelsEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsEntitlements,
                      put = __cordl_internal_set__levelsEntitlements))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelsEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__packBetterBuyThanLevel, put = __cordl_internal_set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  /// @brief Field randomMillisecondsResponseTime, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_randomMillisecondsResponseTime, put = __cordl_internal_set_randomMillisecondsResponseTime))::UnityEngine::RangeInt randomMillisecondsResponseTime;

  /// @brief Method BuyLevel, addr 0x139f334, size 0xec, virtual false, abstract: false, final false
  inline void BuyLevel(::StringW levelId);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x139ef2c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x139f030, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method InvalidateDataInternal, addr 0x139ef28, size 0x4, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x139f134, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::MockPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* initialData);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x139f45c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x139f230, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method Wait, addr 0x139f560, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Wait(::System::Threading::CancellationToken token);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelPacksEntitlements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
  __cordl_internal_get__levelPacksEntitlements() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelsEntitlements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
  __cordl_internal_get__levelsEntitlements() const;

  constexpr bool const& __cordl_internal_get__packBetterBuyThanLevel() const;

  constexpr bool& __cordl_internal_get__packBetterBuyThanLevel();

  constexpr ::UnityEngine::RangeInt const& __cordl_internal_get_randomMillisecondsResponseTime() const;

  constexpr ::UnityEngine::RangeInt& __cordl_internal_get_randomMillisecondsResponseTime();

  constexpr void __cordl_internal_set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr void __cordl_internal_set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr void __cordl_internal_set__packBetterBuyThanLevel(bool value);

  constexpr void __cordl_internal_set_randomMillisecondsResponseTime(::UnityEngine::RangeInt value);

  /// @brief Method .ctor, addr 0x139e8b8, size 0x670, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* initialData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel const&) = delete;

  /// @brief Field _levelsEntitlements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x28, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  /// @brief Field randomMillisecondsResponseTime, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::RangeInt ___randomMillisecondsResponseTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformAdditionalContentModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelsEntitlements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelPacksEntitlements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____packBetterBuyThanLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ___randomMillisecondsResponseTime) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformAdditionalContentModel*, "", "MockPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__6, "",
                       "MockPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__7, "",
                       "MockPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__8, "", "MockPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__11, "", "MockPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__9, "", "MockPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__9");
