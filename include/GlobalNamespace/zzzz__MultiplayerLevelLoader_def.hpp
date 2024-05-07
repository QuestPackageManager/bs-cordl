#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelLoader)
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
struct __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;
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
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;
}
namespace GlobalNamespace {
class MultiplayerLevelLoader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelLoader);
// Type: ::MultiplayerBeatmapLoaderState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState
struct CORDL_TYPE __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped
  enum struct ____MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped : int32_t {
    __E_NotLoading = static_cast<int32_t>(0x0),
    __E_LoadingBeatmap = static_cast<int32_t>(0x1),
    __E_WaitingForCountdown = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped() const noexcept {
    return static_cast<____MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LoadingBeatmap value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const LoadingBeatmap;

  /// @brief Field NotLoading value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const NotLoading;

  /// @brief Field WaitingForCountdown value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const WaitingForCountdown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLevelLoader
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelLoader*
class CORDL_TYPE MultiplayerLevelLoader : public ::System::Object {
public:
  // Declarations
  using MultiplayerBeatmapLoaderState = ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;

  /// @brief Field _beatmapLevelData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData, put = __cordl_internal_set__beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _gameplaySetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupData, put = __cordl_internal_set__gameplaySetupData))::GlobalNamespace::ILevelGameplaySetupData* _gameplaySetupData;

  /// @brief Field _getBeatmapCancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__getBeatmapCancellationTokenSource,
                      put = __cordl_internal_set__getBeatmapCancellationTokenSource))::System::Threading::CancellationTokenSource* _getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getBeatmapLevelResultTask,
                      put = __cordl_internal_set__getBeatmapLevelResultTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* _getBeatmapLevelResultTask;

  /// @brief Field _loaderState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__loaderState, put = __cordl_internal_set__loaderState))::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState _loaderState;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _startTime, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) int64_t _startTime;

  /// @brief Field _stillDownloadingCalled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__stillDownloadingCalled, put = __cordl_internal_set__stillDownloadingCalled)) bool _stillDownloadingCalled;

  /// @brief Field countdownFinishedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownFinishedEvent,
                      put = __cordl_internal_set_countdownFinishedEvent))::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* countdownFinishedEvent;

  /// @brief Field stillDownloadingSongEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stillDownloadingSongEvent, put = __cordl_internal_set_stillDownloadingSongEvent))::System::Action* stillDownloadingSongEvent;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method ClearLoading, addr 0x262ed48, size 0x34, virtual false, abstract: false, final false
  inline void ClearLoading();

  /// @brief Method LoadLevel, addr 0x262ec08, size 0x138, virtual false, abstract: false, final false
  inline void LoadLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, int64_t initialStartTime);

  static inline ::GlobalNamespace::MultiplayerLevelLoader* New_ctor();

  /// @brief Method SetNewStartTime, addr 0x262ed40, size 0x8, virtual false, abstract: false, final false
  inline void SetNewStartTime(int64_t newStartTime);

  /// @brief Method Tick, addr 0x262ed7c, size 0x1f4, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __cordl_internal_get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __cordl_internal_get__beatmapLevelData() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::ILevelGameplaySetupData*& __cordl_internal_get__gameplaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelGameplaySetupData*> const& __cordl_internal_get__gameplaySetupData() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__getBeatmapCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__getBeatmapCancellationTokenSource() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*& __cordl_internal_get__getBeatmapLevelResultTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*> const& __cordl_internal_get__getBeatmapLevelResultTask() const;

  constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& __cordl_internal_get__loaderState() const;

  constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& __cordl_internal_get__loaderState();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr int64_t const& __cordl_internal_get__startTime() const;

  constexpr int64_t& __cordl_internal_get__startTime();

  constexpr bool const& __cordl_internal_get__stillDownloadingCalled() const;

  constexpr bool& __cordl_internal_get__stillDownloadingCalled();

  constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>*& __cordl_internal_get_countdownFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>*> const&
  __cordl_internal_get_countdownFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_stillDownloadingSongEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_stillDownloadingSongEvent() const;

  constexpr void __cordl_internal_set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* value);

  constexpr void __cordl_internal_set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* value);

  constexpr void __cordl_internal_set__loaderState(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__startTime(int64_t value);

  constexpr void __cordl_internal_set__stillDownloadingCalled(bool value);

  constexpr void __cordl_internal_set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  constexpr void __cordl_internal_set_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x262ef70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_countdownFinishedEvent, addr 0x262eaa8, size 0xb0, virtual false, abstract: false, final false
  inline void add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  /// @brief Method add_stillDownloadingSongEvent, addr 0x262e970, size 0x9c, virtual false, abstract: false, final false
  inline void add_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_countdownFinishedEvent, addr 0x262eb58, size 0xb0, virtual false, abstract: false, final false
  inline void remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* value);

  /// @brief Method remove_stillDownloadingSongEvent, addr 0x262ea0c, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field stillDownloadingSongEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___stillDownloadingSongEvent;

  /// @brief Field countdownFinishedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*>* ___countdownFinishedEvent;

  /// @brief Field _loaderState, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState ____loaderState;

  /// @brief Field _getBeatmapCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* ____getBeatmapLevelResultTask;

  /// @brief Field _gameplaySetupData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ILevelGameplaySetupData* ____gameplaySetupData;

  /// @brief Field _beatmapLevelData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData;

  /// @brief Field _startTime, offset: 0x58, size: 0x8, def value: None
  int64_t ____startTime;

  /// @brief Field _stillDownloadingCalled, offset: 0x60, size: 0x1, def value: None
  bool ____stillDownloadingCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelLoader, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ___stillDownloadingSongEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ___countdownFinishedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____loaderState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____getBeatmapCancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____getBeatmapLevelResultTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____gameplaySetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____beatmapLevelData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____startTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____stillDownloadingCalled) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelLoader*, "", "MultiplayerLevelLoader");
