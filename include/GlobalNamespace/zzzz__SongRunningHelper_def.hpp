#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SongRunningHelper)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper);
MARK_VAL_T(::GlobalNamespace::__SongRunningHelper__QueuedSongParams);
// Type: ::QueuedSongParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SongRunningHelper::QueuedSongParams
struct CORDL_TYPE __SongRunningHelper__QueuedSongParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2515bd8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                    ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData,
                    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongRunningHelper__QueuedSongParams();

  // Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "recordingToolData", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: None }, CppParam { name: "songFinishedCallback", ty:
  // "::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: None }]
  constexpr __SongRunningHelper__QueuedSongParams(
      ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW characteristic, ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData,
      ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback) noexcept;

  /// @brief Field beatmapLevel, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW characteristic;

  /// @brief Field recordingToolData, offset: 0x18, size: 0x2, def value: None
  ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData;

  /// @brief Field songFinishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongRunningHelper__QueuedSongParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, beatmapLevel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, difficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, recordingToolData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, songFinishedCallback) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongRunningHelper
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongRunningHelper*
class CORDL_TYPE SongRunningHelper : public ::System::Object {
public:
  // Declarations
  using QueuedSongParams = ::GlobalNamespace::__SongRunningHelper__QueuedSongParams;

  /// @brief Field _beatmapCharacteristics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristics,
                      put = __cordl_internal_set__beatmapCharacteristics))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristics;

  /// @brief Field _beatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels, put = __cordl_internal_set__beatmapLevels))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _current, offset 0x38, size 0x30
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current))::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> _current;

  /// @brief Field _environmentsListModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel))::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _menuTransitionsHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _playQueue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playQueue,
                      put = __cordl_internal_set__playQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* _playQueue;

  /// @brief Method EnqueueLevel, addr 0x2515598, size 0xc0, virtual false, abstract: false, final false
  inline bool EnqueueLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams queuedSongParams);

  /// @brief Method FindBeatmapLevelPackBeatmaps, addr 0x251542c, size 0x16c, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> FindBeatmapLevelPackBeatmaps(::StringW packId);

  static inline ::GlobalNamespace::SongRunningHelper* New_ctor();

  /// @brief Method StartLevel, addr 0x2515658, size 0x30c, virtual false, abstract: false, final false
  inline void StartLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams queuedSongParams);

  /// @brief Method StopAllLevels, addr 0x2515964, size 0x60, virtual false, abstract: false, final false
  inline void StopAllLevels();

  /// @brief Method StopCurrentLevel, addr 0x25159c4, size 0x1c, virtual false, abstract: false, final false
  inline void StopCurrentLevel();

  /// @brief Method <StartLevel>g__HandleLevelDidFinishCallback|9_0, addr 0x2515a5c, size 0x17c, virtual false, abstract: false, final false
  inline void _StartLevel_g__HandleLevelDidFinishCallback_9_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransition,
                                                              ::GlobalNamespace::LevelCompletionResults* results);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristics() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> const& __cordl_internal_get__current() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>& __cordl_internal_get__current();

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*& __cordl_internal_get__playQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> const& __cordl_internal_get__playQueue() const;

  constexpr void __cordl_internal_set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__current(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* value);

  /// @brief Method .ctor, addr 0x25159e0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper(SongRunningHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper(SongRunningHelper const&) = delete;

  /// @brief Field _beatmapCharacteristics, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristics;

  /// @brief Field _menuTransitionsHelper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _environmentsListModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _playQueue, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* ____playQueue;

  /// @brief Field _current, offset: 0x38, size: 0x30, def value: None
  ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapCharacteristics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____menuTransitionsHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____environmentsListModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____playQueue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____current) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper*, "", "SongRunningHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, "", "SongRunningHelper/QueuedSongParams");
