#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct AdditionalContentModel_UpdateEntitlementsResult;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_AdditionalSkus;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel___c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
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
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel___c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAdditionalContentModel);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAdditionalContentModel/<>c__DisplayClass14_0
class CORDL_TYPE OculusPlatformAdditionalContentModel___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field launchCheckoutFlowTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_launchCheckoutFlowTaskSource, put = __cordl_internal_set_launchCheckoutFlowTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<
      ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0* New_ctor();

  /// @brief Method <LaunchCheckoutFlow>b__0, addr 0x26ab994, size 0x58, virtual false, abstract: false, final false
  inline void _LaunchCheckoutFlow_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* const& __cordl_internal_get_launchCheckoutFlowTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*& __cordl_internal_get_launchCheckoutFlowTaskSource();

  constexpr void __cordl_internal_set_launchCheckoutFlowTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* value);

  /// @brief Method .ctor, addr 0x26aaf5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAdditionalContentModel___c__DisplayClass14_0(OculusPlatformAdditionalContentModel___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAdditionalContentModel___c__DisplayClass14_0(OculusPlatformAdditionalContentModel___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12771 };

  /// @brief Field launchCheckoutFlowTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* ___launchCheckoutFlowTaskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0, ___launchCheckoutFlowTaskSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__17
struct CORDL_TYPE OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ab9ec, size 0x102c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26aca18, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__10
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26aca94, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26acd18, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_additionalSkus_5__2", ty:
  // "::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken token,
      ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <additionalSkus>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, _additionalSkus_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__8
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26acd94, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26acffc, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__9
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ad078, size 0x268, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ad2e0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12775 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__6
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ad35c, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ad6dc, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalSku_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                         ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                         ::System::Threading::CancellationToken cancellationToken, ::StringW _originalSku_5__2,
                                                                                         ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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

  /// @brief Field <originalSku>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _originalSku_5__2;

  /// @brief Field <levelPackRedirectionData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, _originalSku_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__11
struct CORDL_TYPE OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ad758, size 0x42c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26adb84, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__13
struct CORDL_TYPE OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26adc00, size 0x800, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ae400, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__12
struct CORDL_TYPE OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ae47c, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26ae8bc, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel, System.TimeSpan
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAdditionalContentModel
class CORDL_TYPE OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _CheckForNewEntitlementsAsync_d__17 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17;

  using _GetLevelDataVersionInternalAsync_d__10 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10;

  using _GetLevelEntitlementStatusInternalAsync_d__8 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8;

  using _GetPackEntitlementStatusInternalAsync_d__9 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9;

  using _GetRedirectedLevelPackProductData_d__6 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6;

  using _IsDataValidAsync_d__11 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11;

  using _OpenLevelPackProductStoreAsync_d__13 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13;

  using _OpenLevelProductStoreAsync_d__12 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12;

  using __c__DisplayClass14_0 = ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0;

  /// @brief Field _entitlementsSKU, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsSKU, put = __cordl_internal_set__entitlementsSKU)) ::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsSKU;

  /// @brief Field _isDataValid, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _oculusLevelProductCollectionModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusLevelProductCollectionModel,
                      put = __cordl_internal_set__oculusLevelProductCollectionModel)) ::GlobalNamespace::OculusLevelProductCollectionModel* _oculusLevelProductCollectionModel;

  /// @brief Field _semaphoreSlim, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim)) ::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field kOculusRequestTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kOculusRequestTimeout, put = setStaticF_kOculusRequestTimeout)) ::System::TimeSpan kOculusRequestTimeout;

  /// @brief Method CheckForNewEntitlementsAsync, addr 0x26ab3c4, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelDataAdditionalSkus, addr 0x26ab5c0, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* GetLevelDataAdditionalSkus(::StringW levelId);

  /// @brief Method GetLevelDataVersion, addr 0x26ab600, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* additionalSkus);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x26aaa38, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x26aa848, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelProductData, addr 0x26aa728, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW GetLevelProductData);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x26aa940, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRedirectedLevelPackProductData, addr 0x26aa744, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x26ab4ac, size 0x114, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelPackEntitlement, addr 0x26ab664, size 0xcc, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method InvalidateDataInternal, addr 0x26aa840, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsDataValidAsync, addr 0x26aab34, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x26aaf64, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method LaunchCheckoutFlow, addr 0x26aae20, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW sku);

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* New_ctor();

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x26aad24, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x26aac2c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenStore, addr 0x26aafcc, size 0x3f8, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// @brief Method <GetRedirectedLevelPackProductData>g__GetSku|6_0, addr 0x26ab854, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW _GetRedirectedLevelPackProductData_g__GetSku_6_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* levelPackProductData);

  /// @brief Method <HasLevelPackEntitlement>b__21_0, addr 0x26ab8f8, size 0x9c, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__21_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData);

  /// @brief Method <OpenLevelProductStoreAsync>g__GetSkuForProductFlow|12_0, addr 0x26ab8c4, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW _OpenLevelProductStoreAsync_g__GetSkuForProductFlow_12_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__entitlementsSKU() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__entitlementsSKU();

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel* const& __cordl_internal_get__oculusLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel*& __cordl_internal_get__oculusLevelProductCollectionModel();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr void __cordl_internal_set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__oculusLevelProductCollectionModel(::GlobalNamespace::OculusLevelProductCollectionModel* value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  /// @brief Method .ctor, addr 0x26ab730, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::TimeSpan getStaticF_kOculusRequestTimeout();

  static inline void setStaticF_kOculusRequestTimeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12780 };

  /// @brief Field _oculusLevelProductCollectionModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel* ____oculusLevelProductCollectionModel;

  /// @brief Field _entitlementsSKU, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsSKU;

  /// @brief Field _semaphoreSlim, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x30, size: 0x1, def value: None
  bool ____isDataValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____oculusLevelProductCollectionModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____entitlementsSKU) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____semaphoreSlim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____isDataValid) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass14_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__17, "", "OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__10, "",
                       "OculusPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__8, "",
                       "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__9, "",
                       "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__6, "",
                       "OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__11, "", "OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__13, "", "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__12, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__12");
