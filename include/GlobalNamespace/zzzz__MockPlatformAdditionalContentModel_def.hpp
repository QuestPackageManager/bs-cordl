#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
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
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
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
struct __YieldAwaitable__YieldAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8);
// Type: ::<OpenLevelProductStoreAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), TypeDefinitionIndex(TypeDefinitionIndex(3405)),
// TypeDefinitionIndex(TypeDefinitionIndex(16446)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 896 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10561)) CS
// Name: ::MockPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x125e1cc, size 0x274, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x125e440, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder, ::System::Threading::CancellationToken token,
      ::StringW levelId, ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this, ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field token, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MockPlatformAdditionalContentModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10560))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10562))
// CS Name: ::MockPlatformAdditionalContentModel*
class CORDL_TYPE MockPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _OpenLevelProductStoreAsync_d__8 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

  /// @brief Field _levelsEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsEntitlements,
                      put = __cordl_internal_set__levelsEntitlements))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPacksEntitlements,
                      put = __cordl_internal_set__levelPacksEntitlements))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* _levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__packBetterBuyThanLevel, put = __cordl_internal_set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelsEntitlements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
  __cordl_internal_get__levelsEntitlements() const;

  constexpr void __cordl_internal_set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*& __cordl_internal_get__levelPacksEntitlements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>*> const&
  __cordl_internal_get__levelPacksEntitlements() const;

  constexpr void __cordl_internal_set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* value);

  constexpr bool& __cordl_internal_get__packBetterBuyThanLevel();

  constexpr bool const& __cordl_internal_get__packBetterBuyThanLevel() const;

  constexpr void __cordl_internal_set__packBetterBuyThanLevel(bool value);

  static inline ::GlobalNamespace::MockPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

  /// @brief Method .ctor, addr 0x125d668, size 0x610, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

  /// @brief Method InvalidateDataInternal, addr 0x125dc78, size 0x4, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x125dc7c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x125dd54, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x125de2c, size 0x90, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x125debc, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method BuyLevel, addr 0x125dfc0, size 0xec, virtual false, abstract: false, final false
  inline void BuyLevel(::StringW levelId);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x125e0e8, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModel();

public:
  /// @brief Field _levelsEntitlements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MockPlatformEntitlement*>* ____levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x28, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformAdditionalContentModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelsEntitlements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____levelPacksEntitlements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModel, ____packBetterBuyThanLevel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformAdditionalContentModel*, "", "MockPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "MockPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
