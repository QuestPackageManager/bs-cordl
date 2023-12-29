#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __TestPlatformAdditionalContentModel__Entitlement;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__OpenProductStoreResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct __YieldAwaitable__YieldAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class __TestPlatformAdditionalContentModel__Entitlement;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;
}
namespace GlobalNamespace {
struct __TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestPlatformAdditionalContentModel);
MARK_REF_PTR_T(::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement);
MARK_VAL_T(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10);
MARK_VAL_T(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8);
// Type: ::Entitlement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4149))
// CS Name: ::TestPlatformAdditionalContentModel::Entitlement*
class CORDL_TYPE __TestPlatformAdditionalContentModel__Entitlement : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::StringW id;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __get_status, put = __set_status))::GlobalNamespace::__AdditionalContentModel__EntitlementStatus status;

  constexpr ::StringW& __get_id();

  constexpr ::StringW const& __get_id() const;

  constexpr void __set_id(::StringW value);

  constexpr ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus& __get_status();

  constexpr ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus const& __get_status() const;

  constexpr void __set_status(::GlobalNamespace::__AdditionalContentModel__EntitlementStatus value);

  static inline ::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement* New_ctor();

  /// @brief Method .ctor addr 0x21ca974 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TestPlatformAdditionalContentModel__Entitlement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TestPlatformAdditionalContentModel__Entitlement(__TestPlatformAdditionalContentModel__Entitlement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TestPlatformAdditionalContentModel__Entitlement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TestPlatformAdditionalContentModel__Entitlement(__TestPlatformAdditionalContentModel__Entitlement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel__Entitlement();

public:
  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__AdditionalContentModel__EntitlementStatus ___status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement, ___status) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4122)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3404)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4150))
// CS Name: ::TestPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__5
struct CORDL_TYPE __TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21ca97c size 0x260 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21cabdc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TestPlatformAdditionalContentModel*", modifiers: "", def_value:
  // None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::System::Threading::CancellationToken token, ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this, ::StringW levelId,
      ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 883
// }), TypeDefinitionIndex(TypeDefinitionIndex(3404)), TypeDefinitionIndex(TypeDefinitionIndex(4122))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4151)) CS Name:
// ::TestPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__6
struct CORDL_TYPE __TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21cac34 size 0x260 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21cae94 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TestPlatformAdditionalContentModel*", modifiers: "", def_value:
  // None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder,
      ::System::Threading::CancellationToken token, ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this, ::StringW levelPackId,
      ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelPackId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, levelPackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<IsPackBetterBuyThanLevelAsync>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 884 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)),
// TypeDefinitionIndex(TypeDefinitionIndex(3404)), TypeDefinitionIndex(TypeDefinitionIndex(4125)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4152))
// CS Name: ::TestPlatformAdditionalContentModel::<IsPackBetterBuyThanLevelAsync>d__7
struct CORDL_TYPE __TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21caeec size 0x1e4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21cb0d0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }, CppParam { name:
  // "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TestPlatformAdditionalContentModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
  constexpr __TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder,
      ::System::Threading::CancellationToken token, ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this,
      ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4123)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885
// }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3404))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4153)) CS Name:
// ::TestPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE __TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21cb128 size 0x25c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21cb384 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::TestPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::System::Threading::CancellationToken token, ::StringW levelId, ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this,
      ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TestPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4123)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 885 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3404)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4154))
// CS Name: ::TestPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__10
struct CORDL_TYPE __TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21cb3dc size 0x22c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21cb608 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
  constexpr __TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder,
      ::System::Threading::CancellationToken token, ::StringW levelPackId, ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelPackId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelPackId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TestPlatformAdditionalContentModel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4155))
// CS Name: ::TestPlatformAdditionalContentModel*
class CORDL_TYPE TestPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _OpenLevelPackProductStoreAsync_d__10 = ::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10;

  using _OpenLevelProductStoreAsync_d__8 = ::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

  using _IsPackBetterBuyThanLevelAsync_d__7 = ::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7;

  using _GetPackEntitlementStatusInternalAsync_d__6 = ::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6;

  using _GetLevelEntitlementStatusInternalAsync_d__5 = ::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5;

  using Entitlement = ::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement;

  /// @brief Field _levelsEntitlements, offset 0x28, size 0x8
  __declspec(property(get = __get__levelsEntitlements, put = __set__levelsEntitlements))::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*,
                                                                                                 ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> _levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset 0x30, size 0x8
  __declspec(property(get = __get__levelPacksEntitlements,
                      put = __set__levelPacksEntitlements))::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*,
                                                                    ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> _levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x38, size 0x1
  __declspec(property(get = __get__packBetterBuyThanLevel, put = __set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  constexpr ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*>&
  __get__levelsEntitlements();

  constexpr ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> const&
  __get__levelsEntitlements() const;

  constexpr void
  __set__levelsEntitlements(::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*>&
  __get__levelPacksEntitlements();

  constexpr ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> const&
  __get__levelPacksEntitlements() const;

  constexpr void
  __set__levelPacksEntitlements(::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> value);

  constexpr bool& __get__packBetterBuyThanLevel();

  constexpr bool const& __get__packBetterBuyThanLevel() const;

  constexpr void __set__packBetterBuyThanLevel(bool value);

  /// @brief Method InvalidateDataInternal addr 0x20df714 size 0x4 virtual true final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x20df718 size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId,
                                                                                                                                                    ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync addr 0x20df81c size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId,
                                                                                                                                                   ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync addr 0x20df920 size 0xfc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId,
                                                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync addr 0x20dfa1c size 0x104 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId,
                                                                                                                                             ::System::Threading::CancellationToken token);

  /// @brief Method BuyLevel addr 0x20dfb20 size 0x1a0 virtual false final false
  inline void BuyLevel(::StringW levelId);

  /// @brief Method OpenLevelPackProductStoreAsync addr 0x20dfcc0 size 0xfc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId,
                                                                                                                                                 ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::TestPlatformAdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x20dfdbc size 0x1010 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestPlatformAdditionalContentModel(TestPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestPlatformAdditionalContentModel(TestPlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestPlatformAdditionalContentModel();

public:
  /// @brief Field _levelsEntitlements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, ::Array<::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*>*> ____levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x38, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestPlatformAdditionalContentModel, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TestPlatformAdditionalContentModel, ____levelsEntitlements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestPlatformAdditionalContentModel, ____levelPacksEntitlements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestPlatformAdditionalContentModel, ____packBetterBuyThanLevel) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformAdditionalContentModel*, "", "TestPlatformAdditionalContentModel");
NEED_NO_BOX(::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel__Entitlement*, "", "TestPlatformAdditionalContentModel/Entitlement");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__5, "",
                       "TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__6, "",
                       "TestPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel___IsPackBetterBuyThanLevelAsync_d__7, "", "TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__10, "", "TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "TestPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
