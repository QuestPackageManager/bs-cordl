#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelDetailViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
namespace GlobalNamespace {
class StandardLevelBuyView;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController_ContentType;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d;
}
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct StandardLevelDetailViewController_ContentType;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController_ContentType);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailViewController);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/ContentType
struct CORDL_TYPE StandardLevelDetailViewController_ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StandardLevelDetailViewController_ContentType_Unwrapped
  enum struct __StandardLevelDetailViewController_ContentType_Unwrapped : int32_t {
    __E_Loading = static_cast<int32_t>(0x0),
    __E_OwnedAndReady = static_cast<int32_t>(0x1),
    __E_NoAllowedDifficultyBeatmap = static_cast<int32_t>(0x2),
    __E_OwnedAndDownloading = static_cast<int32_t>(0x3),
    __E_Buy = static_cast<int32_t>(0x4),
    __E_BuyInfo = static_cast<int32_t>(0x5),
    __E_Error = static_cast<int32_t>(0x6),
    __E_Inactive = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StandardLevelDetailViewController_ContentType_Unwrapped() const noexcept {
    return static_cast<__StandardLevelDetailViewController_ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController_ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController_ContentType(int32_t value__) noexcept;

  /// @brief Field Buy value: I32(4)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const Buy;

  /// @brief Field BuyInfo value: I32(5)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const BuyInfo;

  /// @brief Field Error value: I32(6)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const Error;

  /// @brief Field Inactive value: I32(7)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const Inactive;

  /// @brief Field Loading value: I32(0)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const Loading;

  /// @brief Field NoAllowedDifficultyBeatmap value: I32(2)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const NoAllowedDifficultyBeatmap;

  /// @brief Field OwnedAndDownloading value: I32(3)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const OwnedAndDownloading;

  /// @brief Field OwnedAndReady value: I32(1)
  static ::GlobalNamespace::StandardLevelDetailViewController_ContentType const OwnedAndReady;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController_ContentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController_ContentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/<<BuyPackButtonWasPressed>b__55_0>d
struct CORDL_TYPE StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b6dbb0, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b6de74, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
                                                                                  ::System::Threading::CancellationToken token,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OpenProductStoreResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/<<OpenLevelProductStore>b__57_0>d
struct CORDL_TYPE StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b6dedc, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b6e1a0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this, ::System::Threading::CancellationToken token,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5363 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IsPackBetterBuyThanLevelResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/<<OpenLevelProductStoreOrShowBuyInfo>b__56_0>d
struct CORDL_TYPE StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b6e208, size 0x3d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b6e5d8, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/<<RefreshAvailabilityIfNeeded>b__58_0>d
struct CORDL_TYPE StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b6e640, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b6e9cc, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                      ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
                                                                                      ::System::Threading::CancellationToken token,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailViewController/<ShowLoadingAndDoSomething>d__61
struct CORDL_TYPE StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b6ea34, size 0x29c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b6ecd0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::StandardLevelDetailViewController>", modifiers: "", def_value: None }, CppParam { name: "action", ty:
  // "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                               ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this,
                                                                               ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> __4__this;

  /// @brief Field action, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelDetailViewController
class CORDL_TYPE StandardLevelDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using ContentType = ::GlobalNamespace::StandardLevelDetailViewController_ContentType;

  using _ShowLoadingAndDoSomething_d__61 = ::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61;

  using __BuyPackButtonWasPressed_b__55_0_d = ::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d;

  using __OpenLevelProductStoreOrShowBuyInfo_b__56_0_d = ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d;

  using __OpenLevelProductStore_b__57_0_d = ::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d;

  using __RefreshAvailabilityIfNeeded_b__58_0_d = ::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d;

  /// @brief Field _additionalContentModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x129, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _analyticsModel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevel, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _beatmapLevelsModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _canBuyPack, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__canBuyPack, put = __cordl_internal_set__canBuyPack)) bool _canBuyPack;

  /// @brief Field _cancellationTokenSource, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _contentIsOwnedAndReady, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__contentIsOwnedAndReady, put = __cordl_internal_set__contentIsOwnedAndReady)) bool _contentIsOwnedAndReady;

  /// @brief Field _dlcPromoPanelModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelModel, put = __cordl_internal_set__dlcPromoPanelModel)) ::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _eventBinder, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBinder, put = __cordl_internal_set__eventBinder)) ::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _loadingControl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _noAllowedBeatmapInfoContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__noAllowedBeatmapInfoContainer, put = __cordl_internal_set__noAllowedBeatmapInfoContainer)) ::UnityW<::UnityEngine::GameObject>
      _noAllowedBeatmapInfoContainer;

  /// @brief Field _notAllowedCharacteristics, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__notAllowedCharacteristics,
                      put =
                          __cordl_internal_set__notAllowedCharacteristics)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* _notAllowedCharacteristics;

  /// @brief Field _ownedObjectsEventBinder, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__ownedObjectsEventBinder, put = __cordl_internal_set__ownedObjectsEventBinder)) ::GlobalNamespace::EventBinder* _ownedObjectsEventBinder;

  /// @brief Field _pack, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__pack, put = __cordl_internal_set__pack)) ::GlobalNamespace::BeatmapLevelPack* _pack;

  /// @brief Field _playerDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _standardLevelBuyInfoView, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelBuyInfoView, put = __cordl_internal_set__standardLevelBuyInfoView)) ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView>
      _standardLevelBuyInfoView;

  /// @brief Field _standardLevelBuyView, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelBuyView, put = __cordl_internal_set__standardLevelBuyView)) ::UnityW<::GlobalNamespace::StandardLevelBuyView> _standardLevelBuyView;

  /// @brief Field _standardLevelDetailView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelDetailView, put = __cordl_internal_set__standardLevelDetailView)) ::UnityW<::GlobalNamespace::StandardLevelDetailView>
      _standardLevelDetailView;

  __declspec(property(get = get_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field didChangeContentEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeContentEvent,
                      put = __cordl_internal_set_didChangeContentEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>,
                                                                                            ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* didChangeContentEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didPressActionButtonEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressActionButtonEvent,
                      put = __cordl_internal_set_didPressActionButtonEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* didPressActionButtonEvent;

  /// @brief Field didPressOpenLevelPackButtonEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressOpenLevelPackButtonEvent,
                      put = __cordl_internal_set_didPressOpenLevelPackButtonEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>,
                                                                                                       ::GlobalNamespace::BeatmapLevelPack*>* didPressOpenLevelPackButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPracticeButtonEvent,
                      put = __cordl_internal_set_didPressPracticeButtonEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*
      didPressPracticeButtonEvent;

  /// @brief Field levelFavoriteStatusDidChangeEvent, offset 0xe0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_levelFavoriteStatusDidChangeEvent,
      put = __cordl_internal_set_levelFavoriteStatusDidChangeEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* levelFavoriteStatusDidChangeEvent;

  /// @brief Method BuyLevelButtonWasPressed, addr 0x3b6c5e8, size 0x94, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed();

  /// @brief Method BuyPackButtonWasPressed, addr 0x3b6c6fc, size 0xf4, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed();

  /// @brief Method ClearSelected, addr 0x3b6c4c8, size 0x20, virtual false, abstract: false, final false
  inline void ClearSelected();

  /// @brief Method DidActivate, addr 0x3b6c004, size 0x360, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b6c364, size 0x58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidChangeDifficultyBeatmap, addr 0x3b6c4f0, size 0x80, virtual false, abstract: false, final false
  inline void HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView* view);

  /// @brief Method HandleDidFavoriteToggleChange, addr 0x3b6c570, size 0x78, virtual false, abstract: false, final false
  inline void HandleDidFavoriteToggleChange(::UnityEngine::UI::Toggle* toggle);

  static inline ::GlobalNamespace::StandardLevelDetailViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b6c3bc, size 0x3c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OpenLevelProductStore, addr 0x3b6c67c, size 0x80, virtual false, abstract: false, final false
  inline void OpenLevelProductStore();

  /// @brief Method OpenLevelProductStoreOrShowBuyInfo, addr 0x3b6c888, size 0xe4, virtual false, abstract: false, final false
  inline void OpenLevelProductStoreOrShowBuyInfo();

  /// @brief Method RefreshAvailabilityIfNeeded, addr 0x3b6bf68, size 0x9c, virtual false, abstract: false, final false
  inline void RefreshAvailabilityIfNeeded();

  /// @brief Method RefreshContentLevelDetailView, addr 0x3b6c3f8, size 0x18, virtual false, abstract: false, final false
  inline void RefreshContentLevelDetailView();

  /// @brief Method SetData, addr 0x3b6bc2c, size 0x84, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton, ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics);

  /// @brief Method SetData, addr 0x3b6bcb0, size 0x260, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hidePracticeButton, bool canBuyPack, ::StringW playButtonText,
                      ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics);

  /// @brief Method ShowContent, addr 0x3b6cd08, size 0x280, virtual false, abstract: false, final false
  inline void ShowContent(::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType, ::StringW errorText);

  /// @brief Method ShowLoadingAndDoSomething, addr 0x3b6c7f0, size 0x98, virtual false, abstract: false, final false
  inline void ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action);

  /// @brief Method ShowOwnedContent, addr 0x3b6c96c, size 0x88, virtual false, abstract: false, final false
  inline void ShowOwnedContent();

  /// @brief Method <BuyPackButtonWasPressed>b__55_0, addr 0x3b6d874, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _BuyPackButtonWasPressed_b__55_0(::System::Threading::CancellationToken token);

  /// @brief Method <DidActivate>b__47_0, addr 0x3b6d000, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_0();

  /// @brief Method <DidActivate>b__47_1, addr 0x3b6d024, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_1();

  /// @brief Method <DidActivate>b__47_2, addr 0x3b6d044, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_2();

  /// @brief Method <DidActivate>b__47_3, addr 0x3b6d068, size 0x174, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_3();

  /// @brief Method <DidActivate>b__47_4, addr 0x3b6d33c, size 0x1e8, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_4();

  /// @brief Method <DidActivate>b__47_5, addr 0x3b6d684, size 0xf0, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_5();

  /// @brief Method <DidActivate>b__47_6, addr 0x3b6d774, size 0x100, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_6();

  /// @brief Method <OpenLevelProductStoreOrShowBuyInfo>b__56_0, addr 0x3b6d948, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _OpenLevelProductStoreOrShowBuyInfo_b__56_0(::System::Threading::CancellationToken _);

  /// @brief Method <OpenLevelProductStore>b__57_0, addr 0x3b6da08, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _OpenLevelProductStore_b__57_0(::System::Threading::CancellationToken token);

  /// @brief Method <RefreshAvailabilityIfNeeded>b__58_0, addr 0x3b6dadc, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshAvailabilityIfNeeded_b__58_0(::System::Threading::CancellationToken token);

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr bool const& __cordl_internal_get__canBuyPack() const;

  constexpr bool& __cordl_internal_get__canBuyPack();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr bool const& __cordl_internal_get__contentIsOwnedAndReady() const;

  constexpr bool& __cordl_internal_get__contentIsOwnedAndReady();

  constexpr ::GlobalNamespace::DlcPromoPanelModel* const& __cordl_internal_get__dlcPromoPanelModel() const;

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel();

  constexpr ::GlobalNamespace::EventBinder* const& __cordl_internal_get__eventBinder() const;

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__eventBinder();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noAllowedBeatmapInfoContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noAllowedBeatmapInfoContainer();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::GlobalNamespace::EventBinder* const& __cordl_internal_get__ownedObjectsEventBinder() const;

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__ownedObjectsEventBinder();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get__pack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__pack();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView> const& __cordl_internal_get__standardLevelBuyInfoView() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView>& __cordl_internal_get__standardLevelBuyInfoView();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyView> const& __cordl_internal_get__standardLevelBuyView() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelBuyView>& __cordl_internal_get__standardLevelBuyView();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailView> const& __cordl_internal_get__standardLevelDetailView() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailView>& __cordl_internal_get__standardLevelDetailView();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* const&
  __cordl_internal_get_didChangeContentEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*&
  __cordl_internal_get_didChangeContentEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* const& __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* const& __cordl_internal_get_didPressActionButtonEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>*& __cordl_internal_get_didPressActionButtonEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* const&
  __cordl_internal_get_didPressOpenLevelPackButtonEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didPressOpenLevelPackButtonEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_didPressPracticeButtonEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_didPressPracticeButtonEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* const& __cordl_internal_get_levelFavoriteStatusDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>*& __cordl_internal_get_levelFavoriteStatusDidChangeEvent();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__canBuyPack(bool value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__contentIsOwnedAndReady(bool value);

  constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr void __cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__noAllowedBeatmapInfoContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder* value);

  constexpr void __cordl_internal_set__pack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__standardLevelBuyInfoView(::UnityW<::GlobalNamespace::StandardLevelBuyInfoView> value);

  constexpr void __cordl_internal_set__standardLevelBuyView(::UnityW<::GlobalNamespace::StandardLevelBuyView> value);

  constexpr void __cordl_internal_set__standardLevelDetailView(::UnityW<::GlobalNamespace::StandardLevelDetailView> value);

  constexpr void __cordl_internal_set_didChangeContentEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  constexpr void __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  constexpr void __cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  constexpr void __cordl_internal_set_didPressOpenLevelPackButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value);

  /// @brief Method .ctor, addr 0x3b6cf88, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeContentEvent, addr 0x3b6ba9c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeContentEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x3b6b93c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  /// @brief Method add_didPressActionButtonEvent, addr 0x3b6b3bc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  /// @brief Method add_didPressOpenLevelPackButtonEvent, addr 0x3b6b51c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressOpenLevelPackButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method add_didPressPracticeButtonEvent, addr 0x3b6b7dc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method add_levelFavoriteStatusDidChangeEvent, addr 0x3b6b67c, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value);

  /// @brief Method get_beatmapKey, addr 0x3b6bbfc, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_beatmapLevel, addr 0x3b6bc24, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_beatmapLevel();

  /// @brief Method remove_didChangeContentEvent, addr 0x3b6bb4c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeContentEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x3b6b9ec, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  /// @brief Method remove_didPressActionButtonEvent, addr 0x3b6b46c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* value);

  /// @brief Method remove_didPressOpenLevelPackButtonEvent, addr 0x3b6b5cc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressOpenLevelPackButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method remove_didPressPracticeButtonEvent, addr 0x3b6b88c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method remove_levelFavoriteStatusDidChangeEvent, addr 0x3b6b72c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailViewController(StandardLevelDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailViewController(StandardLevelDetailViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5367 };

  /// @brief Field kLoadingDataErrorLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadingDataErrorLocalizationKey{ u"ERROR_LOADING_DATA" };

  /// @brief Field kLoadingDataErrorNoInternetLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadingDataErrorNoInternetLocalizationKey{ u"ERROR_LOADING_DATA_NO_INTERNET_MESSAGE" };

  /// @brief Field _standardLevelDetailView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> ____standardLevelDetailView;

  /// @brief Field _standardLevelBuyView, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelBuyView> ____standardLevelBuyView;

  /// @brief Field _standardLevelBuyInfoView, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelBuyInfoView> ____standardLevelBuyInfoView;

  /// @brief Field _loadingControl, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _noAllowedBeatmapInfoContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____noAllowedBeatmapInfoContainer;

  /// @brief Field _playerDataModel, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _additionalContentModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _dlcPromoPanelModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didPressActionButtonEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* ___didPressActionButtonEvent;

  /// @brief Field didPressOpenLevelPackButtonEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevelPack*>* ___didPressOpenLevelPackButtonEvent;

  /// @brief Field levelFavoriteStatusDidChangeEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, bool>* ___levelFavoriteStatusDidChangeEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::BeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field didChangeContentEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelDetailViewController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* ___didChangeContentEvent;

  /// @brief Field _ownedObjectsEventBinder, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____ownedObjectsEventBinder;

  /// @brief Field _eventBinder, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field _cancellationTokenSource, offset: 0x110, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _beatmapLevel, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _pack, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____pack;

  /// @brief Field _canBuyPack, offset: 0x128, size: 0x1, def value: None
  bool ____canBuyPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x129, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____notAllowedCharacteristics;

  /// @brief Field _contentIsOwnedAndReady, offset: 0x138, size: 0x1, def value: None
  bool ____contentIsOwnedAndReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelDetailView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelBuyView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelBuyInfoView) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____loadingControl) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____noAllowedBeatmapInfoContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____playerDataModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____additionalContentModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____beatmapLevelsModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____dlcPromoPanelModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____analyticsModel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____beatmapCharacteristicCollection) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressActionButtonEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressOpenLevelPackButtonEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___levelFavoriteStatusDidChangeEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressPracticeButtonEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didChangeDifficultyBeatmapEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didChangeContentEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____ownedObjectsEventBinder) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____eventBinder) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____cancellationTokenSource) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____beatmapLevel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____pack) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____canBuyPack) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____allowedBeatmapDifficultyMask) == 0x129, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____notAllowedCharacteristics) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____contentIsOwnedAndReady) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController_ContentType, "", "StandardLevelDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController*, "", "StandardLevelDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController__ShowLoadingAndDoSomething_d__61, "", "StandardLevelDetailViewController/<ShowLoadingAndDoSomething>d__61");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController___BuyPackButtonWasPressed_b__55_0_d, "", "StandardLevelDetailViewController/<<BuyPackButtonWasPressed>b__55_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStoreOrShowBuyInfo_b__56_0_d, "",
                       "StandardLevelDetailViewController/<<OpenLevelProductStoreOrShowBuyInfo>b__56_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController___OpenLevelProductStore_b__57_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStore>b__57_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController___RefreshAvailabilityIfNeeded_b__58_0_d, "", "StandardLevelDetailViewController/<<RefreshAvailabilityIfNeeded>b__58_0>d");
