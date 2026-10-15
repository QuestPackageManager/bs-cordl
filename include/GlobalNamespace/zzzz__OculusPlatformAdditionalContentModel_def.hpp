#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class OculusGameDlcProductCollectionModel;
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
struct OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel___c__DisplayClass20_0;
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
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel___c__DisplayClass20_0;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;
}
namespace GlobalNamespace {
struct OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OculusPlatformAdditionalContentModel*);
MARK_REF_T(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18);
MARK_VAL_T(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass20_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, "", "OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__25");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, "",
                    "OculusPlatformAdditionalContentModel/<GetExcludedLevelIdsInternalAsync>d__24");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, "",
                    "OculusPlatformAdditionalContentModel/<GetGameDlcEntitlementStatusInternalAsync>d__14");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, "",
                    "OculusPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__15");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, "",
                    "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, "",
                    "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, "",
                    "OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, "", "OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__16");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, "", "OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__20");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, "", "OculusPlatformAdditionalContentModel/<OpenGameDlcProductStoreAsync>d__19");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, "", "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__17");
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAdditionalContentModel/<>c__DisplayClass20_0
class CORDL_TYPE OculusPlatformAdditionalContentModel___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cancellationToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field launchCheckoutFlowTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_launchCheckoutFlowTaskSource, put = __cordl_internal_set_launchCheckoutFlowTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<
      ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0* New_ctor();

  /// @brief Method <LaunchCheckoutFlow>b__0, addr 0x39abdec, size 0x58, virtual false, abstract: false, final false
  inline void _LaunchCheckoutFlow_b__0();

  /// @brief Method <LaunchCheckoutFlow>b__1, addr 0x39abe44, size 0x64, virtual false, abstract: false, final false
  inline void _LaunchCheckoutFlow_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* const& __cordl_internal_get_launchCheckoutFlowTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*& __cordl_internal_get_launchCheckoutFlowTaskSource();

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_launchCheckoutFlowTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* value);

  /// @brief Method .ctor, addr 0x39abde8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAdditionalContentModel___c__DisplayClass20_0(OculusPlatformAdditionalContentModel___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAdditionalContentModel___c__DisplayClass20_0(OculusPlatformAdditionalContentModel___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14226 };

  /// @brief Field launchCheckoutFlowTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* ___launchCheckoutFlowTaskSource;

  /// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0, ___launchCheckoutFlowTaskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__25
struct CORDL_TYPE OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39abea8, size 0x1048, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39acef0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>", modifiers: "", def_value: None, comment: None
  // }]
  constexpr OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14227 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetExcludedLevelIdsInternalAsync>d__24
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39acf70, size 0x310, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39ad280, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::StringW>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24(int32_t __1__state,
                                                                                         ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::StringW>> __t__builder,
                                                                                         ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
                                                                                         ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::StringW>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetGameDlcEntitlementStatusInternalAsync>d__14
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39ad300, size 0x2dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39ad5dc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sku_5__2", ty:
  // "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment:
  // None }]
  constexpr OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken, ::StringW _sku_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14229 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field gameDlcId, offset: 0x28, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <sku>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _sku_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, gameDlcId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, _sku_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetLevelDataVersionInternalAsync>d__15
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39ad65c, size 0x29c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39ad8f8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_additionalSkus_5__2", ty:
  // "::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataVersion> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken token,
      ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14230 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, _additionalSkus_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__12
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39ad978, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39adbfc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14231 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__13
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39adc7c, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39adf00, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW packId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14232 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, packId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__10
struct CORDL_TYPE OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39adf80, size 0x3b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39ae338, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_originalSku_5__2", ty: "::StringW",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "",
  // def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                                          ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW packId,
                                                                                          ::System::Threading::CancellationToken cancellationToken, ::StringW _originalSku_5__2,
                                                                                          ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* _levelPackRedirectionData_5__3,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14233 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, packId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, _originalSku_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, _levelPackRedirectionData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies AdditionalContentModel::UpdateEntitlementsResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__16
struct CORDL_TYPE OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39ae3b8, size 0x43c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39ae7f4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14234 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter,
// System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__20
struct CORDL_TYPE OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39ae874, size 0x6ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39aef60, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "sku", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_ctr_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty:
  // "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4",
  // ty: "::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::StringW sku, ::System::Threading::CancellationTokenRegistration _ctr_5__2, ::System::Object* __7__wrap2, int32_t __7__wrap3,
      ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* __7__wrap4,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1,
      ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14235 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field sku, offset: 0x28, size: 0x8, def value: None
  ::StringW sku;

  /// @brief Field <ctr>5__2, offset: 0x30, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration _ctr_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::System::Object* __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x50, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x58, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* __7__wrap4;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, sku) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, _ctr_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __7__wrap4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20, __u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<OpenGameDlcProductStoreAsync>d__19
struct CORDL_TYPE OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39aefe0, size 0x48c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39af46c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameDlcId", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this;

  /// @brief Field gameDlcId, offset: 0x28, size: 0x8, def value: None
  ::StringW gameDlcId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, gameDlcId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18
struct CORDL_TYPE OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39af4ec, size 0x814, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39afd00, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14237 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, levelPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__17
struct CORDL_TYPE OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39afd80, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39b01ec, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> __t__builder,
      ::GlobalNamespace::OculusPlatformAdditionalContentModel* __4__this, ::StringW levelId, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14238 };

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
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AdditionalContentModel, System.TimeSpan
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAdditionalContentModel
class CORDL_TYPE OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
  // Declarations
  using _CheckForNewEntitlementsAsync_d__25 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__CheckForNewEntitlementsAsync_d__25;

  using _GetExcludedLevelIdsInternalAsync_d__24 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetExcludedLevelIdsInternalAsync_d__24;

  using _GetGameDlcEntitlementStatusInternalAsync_d__14 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetGameDlcEntitlementStatusInternalAsync_d__14;

  using _GetLevelDataVersionInternalAsync_d__15 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelDataVersionInternalAsync_d__15;

  using _GetLevelEntitlementStatusInternalAsync_d__12 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetLevelEntitlementStatusInternalAsync_d__12;

  using _GetPackEntitlementStatusInternalAsync_d__13 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetPackEntitlementStatusInternalAsync_d__13;

  using _GetRedirectedLevelPackProductData_d__10 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__GetRedirectedLevelPackProductData_d__10;

  using _IsDataValidAsync_d__16 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__IsDataValidAsync_d__16;

  using _LaunchCheckoutFlow_d__20 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__LaunchCheckoutFlow_d__20;

  using _OpenGameDlcProductStoreAsync_d__19 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenGameDlcProductStoreAsync_d__19;

  using _OpenLevelPackProductStoreAsync_d__18 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelPackProductStoreAsync_d__18;

  using _OpenLevelProductStoreAsync_d__17 = ::GlobalNamespace::OculusPlatformAdditionalContentModel__OpenLevelProductStoreAsync_d__17;

  using __c__DisplayClass20_0 = ::GlobalNamespace::OculusPlatformAdditionalContentModel___c__DisplayClass20_0;

  /// @brief Field _entitlementsSKU, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementsSKU, put = __cordl_internal_set__entitlementsSKU)) ::System::Collections::Generic::HashSet_1<::StringW>* _entitlementsSKU;

  /// @brief Field _excludedLevels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__excludedLevels, put = __cordl_internal_set__excludedLevels)) ::ArrayW<::StringW> _excludedLevels;

  /// @brief Field _isDataValid, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isDataValid, put = __cordl_internal_set__isDataValid)) bool _isDataValid;

  /// @brief Field _oculusGameDlcProductCollectionModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusGameDlcProductCollectionModel,
                      put = __cordl_internal_set__oculusGameDlcProductCollectionModel)) ::GlobalNamespace::OculusGameDlcProductCollectionModel* _oculusGameDlcProductCollectionModel;

  /// @brief Field _oculusLevelProductCollectionModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusLevelProductCollectionModel,
                      put = __cordl_internal_set__oculusLevelProductCollectionModel)) ::GlobalNamespace::OculusLevelProductCollectionModel* _oculusLevelProductCollectionModel;

  /// @brief Field _semaphoreSlim, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim)) ::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field kOculusRequestTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kOculusRequestTimeout, put = setStaticF_kOculusRequestTimeout)) ::System::TimeSpan kOculusRequestTimeout;

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<CheckForNewEntitlementsAsync>d__25))]
  /// @brief Method CheckForNewEntitlementsAsync, addr 0x39ab634, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x39aa0e0, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetExcludedLevelIdsInternalAsync>d__24))]
  /// @brief Method GetExcludedLevelIdsInternalAsync, addr 0x39ab544, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken cancellationToken);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetGameDlcEntitlementStatusInternalAsync>d__14))]
  /// @brief Method GetGameDlcEntitlementStatusInternalAsync, addr 0x39aa3d8, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetGameDlcEntitlementStatusInternalAsync(::StringW gameDlcId,
                                                                                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetGameDlcSku, addr 0x39ab720, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW GetGameDlcSku(::StringW gameDlcId);

  /// @brief Method GetLevelDataAdditionalSkus, addr 0x39ab950, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* GetLevelDataAdditionalSkus(::StringW levelId);

  /// @brief Method GetLevelDataVersion, addr 0x39ab990, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataVersion GetLevelDataVersion(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* additionalSkus);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetLevelDataVersionInternalAsync>d__15))]
  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x39aa4cc, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__12))]
  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x39aa1f8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelProductData, addr 0x39aa0e4, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW GetLevelProductData);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__13))]
  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x39aa2e8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__10))]
  /// @brief Method GetRedirectedLevelPackProductData, addr 0x39aa0fc, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW packId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLevelEntitlement, addr 0x39ab7d0, size 0xd4, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::StringW levelId);

  /// @brief Method HasLevelEntitlement, addr 0x39ab8a4, size 0xac, virtual false, abstract: false, final false
  inline bool HasLevelEntitlement(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* productData);

  /// @brief Method HasLevelPackEntitlement, addr 0x39aba00, size 0xd8, virtual false, abstract: false, final false
  inline bool HasLevelPackEntitlement(::StringW levelPackId);

  /// @brief Method Initialize, addr 0x39aa0dc, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InvalidateDataInternal, addr 0x39aa1f0, size 0x8, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<IsDataValidAsync>d__16))]
  /// @brief Method IsDataValidAsync, addr 0x39aa5c0, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x39aaa78, size 0x70, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<LaunchCheckoutFlow>d__20))]
  /// @brief Method LaunchCheckoutFlow, addr 0x39aa980, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW sku,
                                                                                                                                              ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* New_ctor();

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<OpenGameDlcProductStoreAsync>d__19))]
  /// @brief Method OpenGameDlcProductStoreAsync, addr 0x39aa890, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenGameDlcProductStoreAsync(::StringW gameDlcId, ::System::Threading::CancellationToken cancellationToken);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__18))]
  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x39aa79c, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);

  /// [AsyncStateMachine(typeof(OculusPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__17))]
  /// @brief Method OpenLevelProductStoreAsync, addr 0x39aa6ac, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenStore, addr 0x39aaae8, size 0xa5c, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  /// [CompilerGenerated]
  /// @brief Method <GetExcludedLevelIdsInternalAsync>b__24_0, addr 0x39abccc, size 0x44, virtual false, abstract: false, final false
  inline bool _GetExcludedLevelIdsInternalAsync_b__24_0(::StringW levelId);

  /// [CompilerGenerated]
  /// @brief Method <GetRedirectedLevelPackProductData>g__GetSku|10_0, addr 0x39abc64, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW _GetRedirectedLevelPackProductData_g__GetSku_10_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* levelPackProductData);

  /// [CompilerGenerated]
  /// @brief Method <HasLevelPackEntitlement>b__31_0, addr 0x39abd10, size 0xd8, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__31_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData);

  /// [CompilerGenerated]
  /// @brief Method <OpenLevelProductStoreAsync>g__GetSkuForProductFlow|17_0, addr 0x39abc9c, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW _OpenLevelProductStoreAsync_g__GetSkuForProductFlow_17_0(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* levelProductData);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__entitlementsSKU() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__entitlementsSKU();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__excludedLevels() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__excludedLevels();

  constexpr bool const& __cordl_internal_get__isDataValid() const;

  constexpr bool& __cordl_internal_get__isDataValid();

  constexpr ::GlobalNamespace::OculusGameDlcProductCollectionModel* const& __cordl_internal_get__oculusGameDlcProductCollectionModel() const;

  constexpr ::GlobalNamespace::OculusGameDlcProductCollectionModel*& __cordl_internal_get__oculusGameDlcProductCollectionModel();

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel* const& __cordl_internal_get__oculusLevelProductCollectionModel() const;

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel*& __cordl_internal_get__oculusLevelProductCollectionModel();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr void __cordl_internal_set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__excludedLevels(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set__isDataValid(bool value);

  constexpr void __cordl_internal_set__oculusGameDlcProductCollectionModel(::GlobalNamespace::OculusGameDlcProductCollectionModel* value);

  constexpr void __cordl_internal_set__oculusLevelProductCollectionModel(::GlobalNamespace::OculusLevelProductCollectionModel* value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  /// @brief Method .ctor, addr 0x39abad8, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::TimeSpan getStaticF_kOculusRequestTimeout();

  static inline void setStaticF_kOculusRequestTimeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14239 };

  /// @brief Field kStoreEventRegex offset 0xffffffff size 0x8
  static constexpr ::ConstString kStoreEventRegex{ u"^\\/item\\/event\\/\\d+$" };

  /// [Inject]
  /// @brief Field _oculusLevelProductCollectionModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel* ____oculusLevelProductCollectionModel;

  /// [Inject]
  /// @brief Field _oculusGameDlcProductCollectionModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusGameDlcProductCollectionModel* ____oculusGameDlcProductCollectionModel;

  /// @brief Field _entitlementsSKU, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____entitlementsSKU;

  /// @brief Field _excludedLevels, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW> ____excludedLevels;

  /// @brief Field _semaphoreSlim, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _isDataValid, offset: 0x40, size: 0x1, def value: None
  bool ____isDataValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____oculusLevelProductCollectionModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____oculusGameDlcProductCollectionModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____entitlementsSKU) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____excludedLevels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____semaphoreSlim) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAdditionalContentModel, ____isDataValid) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusPlatformAdditionalContentModel) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
