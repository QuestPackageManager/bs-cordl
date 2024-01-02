#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelLoader)
namespace Zenject {
class ITickable;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5580))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLevelLoader__MultiplayerBeatmapLoaderState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotLoading value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const NotLoading;

  /// @brief Field LoadingBeatmap value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const LoadingBeatmap;

  /// @brief Field WaitingForCountdown value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const WaitingForCountdown;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5580)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5581))
// CS Name: ::MultiplayerLevelLoader*
class CORDL_TYPE MultiplayerLevelLoader : public ::System::Object {
public:
  // Declarations
  using MultiplayerBeatmapLoaderState = ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field stillDownloadingSongEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_stillDownloadingSongEvent, put = __set_stillDownloadingSongEvent))::System::Action* stillDownloadingSongEvent;

  /// @brief Field countdownFinishedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_countdownFinishedEvent,
                      put = __set_countdownFinishedEvent))::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* countdownFinishedEvent;

  /// @brief Field _loaderState, offset 0x30, size 0x4
  __declspec(property(get = __get__loaderState, put = __set__loaderState))::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState _loaderState;

  /// @brief Field _getBeatmapCancellationTokenSource, offset 0x38, size 0x8
  __declspec(property(get = __get__getBeatmapCancellationTokenSource, put = __set__getBeatmapCancellationTokenSource))::System::Threading::CancellationTokenSource* _getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset 0x40, size 0x8
  __declspec(property(get = __get__getBeatmapLevelResultTask,
                      put = __set__getBeatmapLevelResultTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* _getBeatmapLevelResultTask;

  /// @brief Field _gameplaySetupData, offset 0x48, size 0x8
  __declspec(property(get = __get__gameplaySetupData, put = __set__gameplaySetupData))::GlobalNamespace::ILevelGameplaySetupData* _gameplaySetupData;

  /// @brief Field _difficultyBeatmap, offset 0x50, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _startTime, offset 0x58, size 0x8
  __declspec(property(get = __get__startTime, put = __set__startTime)) int64_t _startTime;

  /// @brief Field _stillDownloadingCalled, offset 0x60, size 0x1
  __declspec(property(get = __get__stillDownloadingCalled, put = __set__stillDownloadingCalled)) bool _stillDownloadingCalled;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::System::Action*& __get_stillDownloadingSongEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_stillDownloadingSongEvent() const;

  constexpr void __set_stillDownloadingSongEvent(::System::Action* value);

  constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_countdownFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*> const& __get_countdownFinishedEvent() const;

  constexpr void __set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& __get__loaderState();

  constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& __get__loaderState() const;

  constexpr void __set__loaderState(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__getBeatmapCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__getBeatmapCancellationTokenSource() const;

  constexpr void __set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*& __get__getBeatmapLevelResultTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> const& __get__getBeatmapLevelResultTask() const;

  constexpr void __set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* value);

  constexpr ::GlobalNamespace::ILevelGameplaySetupData*& __get__gameplaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelGameplaySetupData*> const& __get__gameplaySetupData() const;

  constexpr void __set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr int64_t& __get__startTime();

  constexpr int64_t const& __get__startTime() const;

  constexpr void __set__startTime(int64_t value);

  constexpr bool& __get__stillDownloadingCalled();

  constexpr bool const& __get__stillDownloadingCalled() const;

  constexpr void __set__stillDownloadingCalled(bool value);

  /// @brief Method add_stillDownloadingSongEvent, addr 0x22a6bfc, size 0x9c, virtual false, abstract: false, final false
  inline void add_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Method remove_stillDownloadingSongEvent, addr 0x22a6c98, size 0x9c, virtual false, abstract: false, final false
  inline void remove_stillDownloadingSongEvent(::System::Action* value);

  /// @brief Method add_countdownFinishedEvent, addr 0x22a6d34, size 0xb0, virtual false, abstract: false, final false
  inline void add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_countdownFinishedEvent, addr 0x22a6de4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method LoadLevel, addr 0x22a6e94, size 0x1a8, virtual false, abstract: false, final false
  inline void LoadLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, int64_t initialStartTime);

  /// @brief Method SetNewStartTime, addr 0x22a703c, size 0x8, virtual false, abstract: false, final false
  inline void SetNewStartTime(int64_t newStartTime);

  /// @brief Method ClearLoading, addr 0x22a7044, size 0x34, virtual false, abstract: false, final false
  inline void ClearLoading();

  /// @brief Method Tick, addr 0x22a7078, size 0x2ec, virtual true, abstract: false, final true
  inline void Tick();

  static inline ::GlobalNamespace::MultiplayerLevelLoader* New_ctor();

  /// @brief Method .ctor, addr 0x22a7364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelLoader(MultiplayerLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelLoader(MultiplayerLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelLoader();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field stillDownloadingSongEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___stillDownloadingSongEvent;

  /// @brief Field countdownFinishedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* ___countdownFinishedEvent;

  /// @brief Field _loaderState, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState ____loaderState;

  /// @brief Field _getBeatmapCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____getBeatmapCancellationTokenSource;

  /// @brief Field _getBeatmapLevelResultTask, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* ____getBeatmapLevelResultTask;

  /// @brief Field _gameplaySetupData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ILevelGameplaySetupData* ____gameplaySetupData;

  /// @brief Field _difficultyBeatmap, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

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

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____difficultyBeatmap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____startTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelLoader, ____stillDownloadingCalled) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelLoader*, "", "MultiplayerLevelLoader");
