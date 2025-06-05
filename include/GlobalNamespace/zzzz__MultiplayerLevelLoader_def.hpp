#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelLoader)
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct MultiplayerLevelLoader_MultiplayerBeatmapLoaderState;
}
namespace GlobalNamespace {
struct MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerLevelLoader_MultiplayerBeatmapLoaderState;
}
namespace GlobalNamespace {
class MultiplayerLevelLoader;
}
namespace GlobalNamespace {
struct MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelLoader);
MARK_VAL_T(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLevelLoader/MultiplayerBeatmapLoaderState
struct CORDL_TYPE MultiplayerLevelLoader_MultiplayerBeatmapLoaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLevelLoader_MultiplayerBeatmapLoaderState_Unwrapped
  enum struct __MultiplayerLevelLoader_MultiplayerBeatmapLoaderState_Unwrapped : int32_t {
    __E_NotLoading = static_cast<int32_t>(0x0),
    __E_LoadingBeatmap = static_cast<int32_t>(0x1),
    __E_WaitingForCountdown = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLevelLoader_MultiplayerBeatmapLoaderState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLevelLoader_MultiplayerBeatmapLoaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelLoader_MultiplayerBeatmapLoaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLevelLoader_MultiplayerBeatmapLoaderState(int32_t value__) noexcept;

  /// @brief Field LoadingBeatmap value: I32(1)
  static ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState const LoadingBeatmap;

  /// @brief Field NotLoading value: I32(0)
  static ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState const NotLoading;

  /// @brief Field WaitingForCountdown value: I32(2)
  static ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState const WaitingForCountdown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLevelLoader/<LoadBeatmapLevelDataAsync>d__21
struct CORDL_TYPE MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c0f380, size 0x4d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c0f850, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MultiplayerLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "gameplaySetupData", ty: "::GlobalNamespace::ILevelGameplaySetupData*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder,
                                                                    ::GlobalNamespace::MultiplayerLevelLoader* __4__this, ::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelLoader* __4__this;

  /// @brief Field gameplaySetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, gameplaySetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerLevelLoader::MultiplayerBeatmapLoaderState, System.Object, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLevelLoader
class CORDL_TYPE MultiplayerLevelLoader : public ::System::Object {
public:
  // Declarations
  using MultiplayerBeatmapLoaderState = ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState;

  using _LoadBeatmapLevelDataAsync_d__21 = ::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21;

  /// @brief Field _beatmapLevelData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData, put = __cordl_internal_set__beatmapLevelData)) ::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _gameplaySetupData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupData, put = __cordl_internal_set__gameplaySetupData)) ::GlobalNamespace::ILevelGameplaySetupData* _gameplaySetupData;

  /// @brief Field _getBeatmapCancellationTokenSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getBeatmapCancellationTokenSource,
                      put = __cordl_internal_set__getBeatmapCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__getBeatmapLevelResultTask,
                      put = __cordl_internal_set__getBeatmapLevelResultTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* _getBeatmapLevelResultTask;

  /// @brief Field _loaderState, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__loaderState, put = __cordl_internal_set__loaderState)) ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState _loaderState;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _startTime, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) int64_t _startTime;

  /// @brief Field _stillDownloadingCalled, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__stillDownloadingCalled, put = __cordl_internal_set__stillDownloadingCalled)) bool _stillDownloadingCalled;

  /// @brief Field countdownFinishedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownFinishedEvent,
                      put =
                          __cordl_internal_set_countdownFinishedEvent)) ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* countdownFinishedEvent;

  /// @brief Field stillDownloadingSongEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stillDownloadingSongEvent, put = __cordl_internal_set_stillDownloadingSongEvent)) ::System::Action* stillDownloadingSongEvent;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method ClearLoading, addr 0x3c0f148, size 0x34, virtual false, abstract: false, final false
  inline void ClearLoading();

  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x3c0f048, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* LoadBeatmapLevelDataAsync(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData);

  /// @brief Method LoadLevel, addr 0x3c0efb8, size 0x90, virtual false, abstract: false, final false
  inline void LoadLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, int64_t initialStartTime);

  static inline ::GlobalNamespace::MultiplayerLevelLoader* New_ctor();

  /// @brief Method SetNewStartTime, addr 0x3c0f140, size 0x8, virtual false, abstract: false, final false
  inline void SetNewStartTime(int64_t newStartTime);

  /// @brief Method Tick, addr 0x3c0f17c, size 0x1fc, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::GlobalNamespace::IBeatmapLevelData* const& __cordl_internal_get__beatmapLevelData() const;

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __cordl_internal_get__beatmapLevelData();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::ILevelGameplaySetupData* const& __cordl_internal_get__gameplaySetupData() const;

  constexpr ::GlobalNamespace::ILevelGameplaySetupData*& __cordl_internal_get__gameplaySetupData();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__getBeatmapCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__getBeatmapCancellationTokenSource();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* const& __cordl_internal_get__getBeatmapLevelResultTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*& __cordl_internal_get__getBeatmapLevelResultTask();

  constexpr ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState const& __cordl_internal_get__loaderState() const;

  constexpr ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState& __cordl_internal_get__loaderState();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr int64_t const& __cordl_internal_get__startTime() const;

  constexpr int64_t& __cordl_internal_get__startTime();

  constexpr bool const& __cordl_internal_get__stillDownloadingCalled() const;

  constexpr bool& __cordl_internal_get__stillDownloadingCalled();

  constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* const& __cordl_internal_get_countdownFinishedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>*& __cordl_internal_get_countdownFinishedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_stillDownloadingSongEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_stillDownloadingSongEvent();

  constexpr void __cordl_internal_set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* value);

  constexpr void __cordl_internal_set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* value);

  constexpr void __cordl_internal_set__loaderState(::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__startTime(int64_t value);

  constexpr void __cordl_internal_set__stillDownloadingCalled(bool value);

  constexpr void __cordl_internal_set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  constexpr void __cordl_internal_set_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3c0f378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_countdownFinishedEvent, addr 0x3c0ee58, size 0xb0, virtual false, abstract: false, final false
  inline void add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  /// @brief Method add_stillDownloadingSongEvent, addr 0x3c0ed20, size 0x9c, virtual false, abstract: false, final false
  inline void add_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_countdownFinishedEvent, addr 0x3c0ef08, size 0xb0, virtual false, abstract: false, final false
  inline void remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  /// @brief Method remove_stillDownloadingSongEvent, addr 0x3c0edbc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_stillDownloadingSongEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelLoader(MultiplayerLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelLoader(MultiplayerLevelLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4844 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field stillDownloadingSongEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___stillDownloadingSongEvent;

  /// @brief Field countdownFinishedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* ___countdownFinishedEvent;

  /// @brief Field _loaderState, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState ____loaderState;

  /// @brief Field _getBeatmapCancellationTokenSource, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* ____getBeatmapLevelResultTask;

  /// @brief Field _gameplaySetupData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ILevelGameplaySetupData* ____gameplaySetupData;

  /// @brief Field _beatmapLevelData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData;

  /// @brief Field _startTime, offset: 0x60, size: 0x8, def value: None
  int64_t ____startTime;

  /// @brief Field _stillDownloadingCalled, offset: 0x68, size: 0x1, def value: None
  bool ____stillDownloadingCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____beatmapLevelsEntitlementModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ___stillDownloadingSongEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ___countdownFinishedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____loaderState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____getBeatmapCancellationTokenSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____getBeatmapLevelResultTask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____gameplaySetupData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____beatmapLevelData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____startTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____stillDownloadingCalled) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelLoader, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelLoader_MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelLoader*, "", "MultiplayerLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelLoader__LoadBeatmapLevelDataAsync_d__21, "", "MultiplayerLevelLoader/<LoadBeatmapLevelDataAsync>d__21");
