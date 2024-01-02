#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IsPackBetterBuyThanLevelResult_def.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelDetailViewController)
namespace GlobalNamespace {
class EventBinder;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;
}
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
namespace GlobalNamespace {
class StandardLevelBuyView;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;
}
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController__ContentType);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailViewController);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d);
// Type: ::ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5679))
// CS Name: ::StandardLevelDetailViewController::ContentType
struct CORDL_TYPE __StandardLevelDetailViewController__ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StandardLevelDetailViewController__ContentType_Unwrapped
  enum struct ____StandardLevelDetailViewController__ContentType_Unwrapped : int32_t {
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
  constexpr operator ____StandardLevelDetailViewController__ContentType_Unwrapped() const noexcept {
    return static_cast<____StandardLevelDetailViewController__ContentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController__ContentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController__ContentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Loading value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Loading;

  /// @brief Field OwnedAndReady value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const OwnedAndReady;

  /// @brief Field NoAllowedDifficultyBeatmap value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const NoAllowedDifficultyBeatmap;

  /// @brief Field OwnedAndDownloading value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const OwnedAndDownloading;

  /// @brief Field Buy value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Buy;

  /// @brief Field BuyInfo value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const BuyInfo;

  /// @brief Field Error value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Error;

  /// @brief Field Inactive value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Inactive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__57
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 906
// }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(4358))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5680)) CS Name: ::StandardLevelDetailViewController::<LoadBeatmapLevelAsync>d__57
struct CORDL_TYPE __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c571c, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c5c38, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::GlobalNamespace::StandardLevelDetailViewController* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ShowLoadingAndDoSomething>d__62
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5681))
// CS Name: ::StandardLevelDetailViewController::<ShowLoadingAndDoSomething>d__62
struct CORDL_TYPE __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c5c44, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c5ee8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                  ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
                                                                                  ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field action, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<BuyPackButtonWasPressed>b__56_0>d
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(3401)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(16271))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5682))
// CS Name: ::StandardLevelDetailViewController::<<BuyPackButtonWasPressed>b__56_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c5ef4, size 0x2e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c61dc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                     ::GlobalNamespace::StandardLevelDetailViewController* __4__this, ::System::Threading::CancellationToken token,
                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(16272)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 891 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5683)) CS Name:
// ::StandardLevelDetailViewController::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c61e8, size 0x3e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c65d0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value:
  // None }]
  constexpr __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailViewController* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<OpenLevelProductStore>b__59_0>d
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 895
// }), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(16271))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5684)) CS Name:
// ::StandardLevelDetailViewController::<<OpenLevelProductStore>b__59_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c65dc, size 0x2e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c68c4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::StandardLevelDetailViewController* __4__this, ::System::Threading::CancellationToken token,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<RefreshAvailabilityIfNeeded>b__60_0>d
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880
// }), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5685)) CS Name: ::StandardLevelDetailViewController::<<RefreshAvailabilityIfNeeded>b__60_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c68d0, size 0x430, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c6d00, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                         ::GlobalNamespace::StandardLevelDetailViewController* __4__this, ::System::Threading::CancellationToken token,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* __4__this;

  /// @brief Field token, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardLevelDetailViewController
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 305, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(14719))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5686))
// CS Name: ::StandardLevelDetailViewController*
class CORDL_TYPE StandardLevelDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __RefreshAvailabilityIfNeeded_b__60_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;

  using __OpenLevelProductStore_b__59_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;

  using __OpenLevelProductStoreOrShowBuyInfo_b__58_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;

  using __BuyPackButtonWasPressed_b__56_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;

  using _ShowLoadingAndDoSomething_d__62 = ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;

  using _LoadBeatmapLevelAsync_d__57 = ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;

  using ContentType = ::GlobalNamespace::__StandardLevelDetailViewController__ContentType;

  /// @brief Field _standardLevelDetailView, offset 0x70, size 0x8
  __declspec(property(get = __get__standardLevelDetailView, put = __set__standardLevelDetailView))::GlobalNamespace::StandardLevelDetailView* _standardLevelDetailView;

  /// @brief Field _standardLevelBuyView, offset 0x78, size 0x8
  __declspec(property(get = __get__standardLevelBuyView, put = __set__standardLevelBuyView))::GlobalNamespace::StandardLevelBuyView* _standardLevelBuyView;

  /// @brief Field _standardLevelBuyInfoView, offset 0x80, size 0x8
  __declspec(property(get = __get__standardLevelBuyInfoView, put = __set__standardLevelBuyInfoView))::GlobalNamespace::StandardLevelBuyInfoView* _standardLevelBuyInfoView;

  /// @brief Field _loadingControl, offset 0x88, size 0x8
  __declspec(property(get = __get__loadingControl, put = __set__loadingControl))::GlobalNamespace::LoadingControl* _loadingControl;

  /// @brief Field _noAllowedBeatmapInfoContainer, offset 0x90, size 0x8
  __declspec(property(get = __get__noAllowedBeatmapInfoContainer, put = __set__noAllowedBeatmapInfoContainer))::UnityEngine::GameObject* _noAllowedBeatmapInfoContainer;

  /// @brief Field _playerDataModel, offset 0x98, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _additionalContentModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _dlcPromoPanelModel, offset 0xb0, size 0x8
  __declspec(property(get = __get__dlcPromoPanelModel, put = __set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset 0xb8, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field didPressActionButtonEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_didPressActionButtonEvent,
                      put = __set_didPressActionButtonEvent))::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* didPressActionButtonEvent;

  /// @brief Field didPressOpenLevelPackButtonEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __get_didPressOpenLevelPackButtonEvent,
      put = __set_didPressOpenLevelPackButtonEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* didPressOpenLevelPackButtonEvent;

  /// @brief Field levelFavoriteStatusDidChangeEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_levelFavoriteStatusDidChangeEvent,
                      put = __set_levelFavoriteStatusDidChangeEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* levelFavoriteStatusDidChangeEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xd8, size 0x8
  __declspec(
      property(get = __get_didPressPracticeButtonEvent,
               put = __set_didPressPracticeButtonEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xe0, size 0x8
  __declspec(property(
      get = __get_didChangeDifficultyBeatmapEvent,
      put = __set_didChangeDifficultyBeatmapEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didChangeContentEvent, offset 0xe8, size 0x8
  __declspec(property(get = __get_didChangeContentEvent,
                      put = __set_didChangeContentEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,
                                                                            ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* didChangeContentEvent;

  /// @brief Field _ownedObjectsEventBinder, offset 0xf0, size 0x8
  __declspec(property(get = __get__ownedObjectsEventBinder, put = __set__ownedObjectsEventBinder))::GlobalNamespace::EventBinder* _ownedObjectsEventBinder;

  /// @brief Field _eventBinder, offset 0xf8, size 0x8
  __declspec(property(get = __get__eventBinder, put = __set__eventBinder))::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _cancellationTokenSource, offset 0x100, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _previewBeatmapLevel, offset 0x108, size 0x8
  __declspec(property(get = __get__previewBeatmapLevel, put = __set__previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* _previewBeatmapLevel;

  /// @brief Field _beatmapLevel, offset 0x110, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::IBeatmapLevel* _beatmapLevel;

  /// @brief Field _pack, offset 0x118, size 0x8
  __declspec(property(get = __get__pack, put = __set__pack))::GlobalNamespace::IBeatmapLevelPack* _pack;

  /// @brief Field _canBuyPack, offset 0x120, size 0x1
  __declspec(property(get = __get__canBuyPack, put = __set__canBuyPack)) bool _canBuyPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x121, size 0x1
  __declspec(property(get = __get__allowedBeatmapDifficultyMask, put = __set__allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset 0x128, size 0x8
  __declspec(property(get = __get__notAllowedCharacteristics,
                      put = __set__notAllowedCharacteristics))::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* _notAllowedCharacteristics;

  /// @brief Field _contentIsOwnedAndReady, offset 0x130, size 0x1
  __declspec(property(get = __get__contentIsOwnedAndReady, put = __set__contentIsOwnedAndReady)) bool _contentIsOwnedAndReady;

  __declspec(property(get = get_selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  __declspec(property(get = get_beatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel;

  constexpr ::GlobalNamespace::StandardLevelDetailView*& __get__standardLevelDetailView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailView*> const& __get__standardLevelDetailView() const;

  constexpr void __set__standardLevelDetailView(::GlobalNamespace::StandardLevelDetailView* value);

  constexpr ::GlobalNamespace::StandardLevelBuyView*& __get__standardLevelBuyView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyView*> const& __get__standardLevelBuyView() const;

  constexpr void __set__standardLevelBuyView(::GlobalNamespace::StandardLevelBuyView* value);

  constexpr ::GlobalNamespace::StandardLevelBuyInfoView*& __get__standardLevelBuyInfoView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyInfoView*> const& __get__standardLevelBuyInfoView() const;

  constexpr void __set__standardLevelBuyInfoView(::GlobalNamespace::StandardLevelBuyInfoView* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__loadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__loadingControl() const;

  constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::UnityEngine::GameObject*& __get__noAllowedBeatmapInfoContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__noAllowedBeatmapInfoContainer() const;

  constexpr void __set__noAllowedBeatmapInfoContainer(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __get__dlcPromoPanelModel() const;

  constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*& __get_didPressActionButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*> const& __get_didPressActionButtonEvent() const;

  constexpr void __set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*& __get_didPressOpenLevelPackButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
  __get_didPressOpenLevelPackButtonEvent() const;

  constexpr void __set_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*& __get_levelFavoriteStatusDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>*> const& __get_levelFavoriteStatusDidChangeEvent() const;

  constexpr void __set_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*& __get_didPressPracticeButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>*> const&
  __get_didPressPracticeButtonEvent() const;

  constexpr void __set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_didChangeDifficultyBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __get_didChangeDifficultyBeatmapEvent() const;

  constexpr void __set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*& __get_didChangeContentEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> const&
  __get_didChangeContentEvent() const;

  constexpr void __set_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  constexpr ::GlobalNamespace::EventBinder*& __get__ownedObjectsEventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __get__ownedObjectsEventBinder() const;

  constexpr void __set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder* value);

  constexpr ::GlobalNamespace::EventBinder*& __get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __get__eventBinder() const;

  constexpr void __set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__previewBeatmapLevel() const;

  constexpr void __set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::IBeatmapLevel* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get__pack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get__pack() const;

  constexpr void __set__pack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr bool& __get__canBuyPack();

  constexpr bool const& __get__canBuyPack() const;

  constexpr void __set__canBuyPack(bool value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get__allowedBeatmapDifficultyMask() const;

  constexpr void __set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get__notAllowedCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__notAllowedCharacteristics() const;

  constexpr void __set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr bool& __get__contentIsOwnedAndReady();

  constexpr bool const& __get__contentIsOwnedAndReady() const;

  constexpr void __set__contentIsOwnedAndReady(bool value);

  /// @brief Method add_didPressActionButtonEvent, addr 0x22b9f4c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value);

  /// @brief Method remove_didPressActionButtonEvent, addr 0x22ba804, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* value);

  /// @brief Method add_didPressOpenLevelPackButtonEvent, addr 0x22ba20c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method remove_didPressOpenLevelPackButtonEvent, addr 0x22baac4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method add_levelFavoriteStatusDidChangeEvent, addr 0x22ba2bc, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value);

  /// @brief Method remove_levelFavoriteStatusDidChangeEvent, addr 0x22bab74, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* value);

  /// @brief Method add_didPressPracticeButtonEvent, addr 0x22b9ffc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method remove_didPressPracticeButtonEvent, addr 0x22ba8b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x22ba0ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x22ba964, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method add_didChangeContentEvent, addr 0x22ba15c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method remove_didChangeContentEvent, addr 0x22baa14, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method get_selectedDifficultyBeatmap, addr 0x22b92e4, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();

  /// @brief Method get_beatmapLevel, addr 0x22c3a2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_beatmapLevel();

  /// @brief Method SetData, addr 0x22bb898, size 0x10c, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic, ::StringW playButtonText,
                      ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics);

  /// @brief Method SetData, addr 0x22bb9a4, size 0x298, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic,
                      bool canBuyPack, ::StringW playButtonText, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics);

  /// @brief Method DidActivate, addr 0x22c3ad8, size 0x388, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22c3e60, size 0x58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy, addr 0x22c3eb8, size 0x3c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshContentLevelDetailView, addr 0x22bb494, size 0x1c, virtual false, abstract: false, final false
  inline void RefreshContentLevelDetailView();

  /// @brief Method ClearSelected, addr 0x22bb4d4, size 0x1c, virtual false, abstract: false, final false
  inline void ClearSelected();

  /// @brief Method HandleDidChangeDifficultyBeatmap, addr 0x22c3ef4, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView* view, ::GlobalNamespace::IDifficultyBeatmap* beatmap);

  /// @brief Method HandleDidFavoriteToggleChange, addr 0x22c40e0, size 0x78, virtual false, abstract: false, final false
  inline void HandleDidFavoriteToggleChange(::GlobalNamespace::StandardLevelDetailView* view, ::UnityEngine::UI::Toggle* toggle);

  /// @brief Method HandleLevelLoadingUpdate, addr 0x22c4158, size 0x194, virtual false, abstract: false, final false
  inline void HandleLevelLoadingUpdate(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate levelLoadingUpdate);

  /// @brief Method BuyLevelButtonWasPressed, addr 0x22c46ec, size 0x110, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed();

  /// @brief Method BuyPackButtonWasPressed, addr 0x22c487c, size 0x178, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed();

  /// @brief Method LoadBeatmapLevelAsync, addr 0x22c4a90, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadBeatmapLevelAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OpenLevelProductStoreOrShowBuyInfo, addr 0x22c4b68, size 0x15c, virtual false, abstract: false, final false
  inline void OpenLevelProductStoreOrShowBuyInfo();

  /// @brief Method OpenLevelProductStore, addr 0x22c47fc, size 0x80, virtual false, abstract: false, final false
  inline void OpenLevelProductStore();

  /// @brief Method RefreshAvailabilityIfNeeded, addr 0x22c3a34, size 0xa4, virtual false, abstract: false, final false
  inline void RefreshAvailabilityIfNeeded();

  /// @brief Method ShowContent, addr 0x22c42ec, size 0x400, virtual false, abstract: false, final false
  /// @param errorText: ::StringW (default: u"")
  /// @param downloadingProgress: float_t (default: 0.0)
  /// @param downloadingText: ::StringW (default: u"")
  inline void ShowContent(::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType, ::StringW errorText = u"", float_t downloadingProgress = 0.0,
                          ::StringW downloadingText = u"");

  /// @brief Method ShowLoadingAndDoSomething, addr 0x22c49f4, size 0x9c, virtual false, abstract: false, final false
  inline void ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* action);

  static inline ::GlobalNamespace::StandardLevelDetailViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c4cc4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__47_0, addr 0x22c4d48, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_0();

  /// @brief Method <DidActivate>b__47_1, addr 0x22c4d6c, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_1();

  /// @brief Method <DidActivate>b__47_2, addr 0x22c4d8c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_2();

  /// @brief Method <DidActivate>b__47_3, addr 0x22c4db0, size 0x154, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_3();

  /// @brief Method <DidActivate>b__47_4, addr 0x22c4f04, size 0x1c8, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_4();

  /// @brief Method <DidActivate>b__47_5, addr 0x22c50cc, size 0x154, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_5();

  /// @brief Method <DidActivate>b__47_6, addr 0x22c5220, size 0x1a4, virtual false, abstract: false, final false
  inline void _DidActivate_b__47_6();

  /// @brief Method <BuyPackButtonWasPressed>b__56_0, addr 0x22c53c4, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _BuyPackButtonWasPressed_b__56_0(::System::Threading::CancellationToken token);

  /// @brief Method <OpenLevelProductStoreOrShowBuyInfo>b__58_0, addr 0x22c54a0, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _OpenLevelProductStoreOrShowBuyInfo_b__58_0(::System::Threading::CancellationToken token);

  /// @brief Method <OpenLevelProductStore>b__59_0, addr 0x22c5568, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _OpenLevelProductStore_b__59_0(::System::Threading::CancellationToken token);

  /// @brief Method <RefreshAvailabilityIfNeeded>b__60_0, addr 0x22c5644, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshAvailabilityIfNeeded_b__60_0(::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailViewController(StandardLevelDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailViewController(StandardLevelDetailViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailViewController();

public:
  /// @brief Field _standardLevelDetailView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailView* ____standardLevelDetailView;

  /// @brief Field _standardLevelBuyView, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelBuyView* ____standardLevelBuyView;

  /// @brief Field _standardLevelBuyInfoView, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelBuyInfoView* ____standardLevelBuyInfoView;

  /// @brief Field _loadingControl, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____loadingControl;

  /// @brief Field _noAllowedBeatmapInfoContainer, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____noAllowedBeatmapInfoContainer;

  /// @brief Field _playerDataModel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _additionalContentModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _dlcPromoPanelModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didPressActionButtonEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* ___didPressActionButtonEvent;

  /// @brief Field didPressOpenLevelPackButtonEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*>* ___didPressOpenLevelPackButtonEvent;

  /// @brief Field levelFavoriteStatusDidChangeEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, bool>* ___levelFavoriteStatusDidChangeEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field didChangeContentEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* ___didChangeContentEvent;

  /// @brief Field _ownedObjectsEventBinder, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____ownedObjectsEventBinder;

  /// @brief Field _eventBinder, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field _cancellationTokenSource, offset: 0x100, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _previewBeatmapLevel, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____previewBeatmapLevel;

  /// @brief Field _beatmapLevel, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____beatmapLevel;

  /// @brief Field _pack, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ____pack;

  /// @brief Field _canBuyPack, offset: 0x120, size: 0x1, def value: None
  bool ____canBuyPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x121, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ____notAllowedCharacteristics;

  /// @brief Field _contentIsOwnedAndReady, offset: 0x130, size: 0x1, def value: None
  bool ____contentIsOwnedAndReady;

  /// @brief Field kLoadingDataErrorNoInternetLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadingDataErrorNoInternetLocalizationKey{ u"ERROR_LOADING_DATA_NO_INTERNET_MESSAGE" };

  /// @brief Field kLoadingDataErrorLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoadingDataErrorLocalizationKey{ u"ERROR_LOADING_DATA" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelDetailView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelBuyView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____standardLevelBuyInfoView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____loadingControl) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____noAllowedBeatmapInfoContainer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____playerDataModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____additionalContentModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____beatmapLevelsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____dlcPromoPanelModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____analyticsModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressActionButtonEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressOpenLevelPackButtonEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___levelFavoriteStatusDidChangeEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didPressPracticeButtonEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didChangeDifficultyBeatmapEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ___didChangeContentEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____ownedObjectsEventBinder) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____eventBinder) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____cancellationTokenSource) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____previewBeatmapLevel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____beatmapLevel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____pack) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____canBuyPack) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____allowedBeatmapDifficultyMask) == 0x121, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____notAllowedCharacteristics) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailViewController, ____contentIsOwnedAndReady) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController__ContentType, "", "StandardLevelDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController*, "", "StandardLevelDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, "", "StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, "", "StandardLevelDetailViewController/<ShowLoadingAndDoSomething>d__62");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, "", "StandardLevelDetailViewController/<<BuyPackButtonWasPressed>b__56_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, "",
                       "StandardLevelDetailViewController/<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStore>b__59_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, "",
                       "StandardLevelDetailViewController/<<RefreshAvailabilityIfNeeded>b__60_0>d");
