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
struct __SongRunningHelper__QueuedSongParams;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(5962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5382))
// CS Name: ::SongRunningHelper::QueuedSongParams
struct CORDL_TYPE __SongRunningHelper__QueuedSongParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x226eefc, size 0x18, virtual false, abstract: false, final false
  /// @param songFinishedCallback: ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* (default: nullptr)
  inline void _ctor(::GlobalNamespace::IBeatmapLevel* beatmapLevel, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                    ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData,
                    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback = nullptr);

  // Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "recordingToolData", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: None }, CppParam { name: "songFinishedCallback", ty:
  // "::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: None }]
  constexpr __SongRunningHelper__QueuedSongParams(
      ::GlobalNamespace::IBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW characteristic, ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData,
      ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongRunningHelper__QueuedSongParams();

  /// @brief Field beatmapLevel, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* beatmapLevel;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW characteristic;

  /// @brief Field recordingToolData, offset: 0x18, size: 0x2, def value: None
  ::GlobalNamespace::__RecordingToolManager__SetupData recordingToolData;

  /// @brief Field songFinishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback;

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
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5382)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4780 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5383)) CS Name: ::SongRunningHelper*
class CORDL_TYPE SongRunningHelper : public ::System::Object {
public:
  // Declarations
  using QueuedSongParams = ::GlobalNamespace::__SongRunningHelper__QueuedSongParams;

  /// @brief Field _beatmapCharacteristics, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristics, put = __set__beatmapCharacteristics))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristics;

  /// @brief Field _menuTransitionsHelper, offset 0x18, size 0x8
  __declspec(property(get = __get__menuTransitionsHelper, put = __set__menuTransitionsHelper))::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _beatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapLevels, put = __set__beatmapLevels))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _playQueue, offset 0x28, size 0x8
  __declspec(property(get = __get__playQueue, put = __set__playQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* _playQueue;

  /// @brief Field _current, offset 0x30, size 0x30
  __declspec(property(get = __get__current, put = __set__current))::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> _current;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __get__beatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __get__beatmapCharacteristics() const;

  constexpr void __set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get__menuTransitionsHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get__menuTransitionsHelper() const;

  constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevels() const;

  constexpr void __set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*& __get__playQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> const& __get__playQueue() const;

  constexpr void __set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* value);

  constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>& __get__current();

  constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> const& __get__current() const;

  constexpr void __set__current(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> value);

  /// @brief Method FindBeatmapLevelPackBeatmaps, addr 0x226e390, size 0x4f4, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::IBeatmapLevel*, ::Array<::GlobalNamespace::IBeatmapLevel*>*> FindBeatmapLevelPackBeatmaps(::StringW packId);

  /// @brief Method EnqueueLevel, addr 0x226e884, size 0xb8, virtual false, abstract: false, final false
  inline void EnqueueLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams queuedSongParams);

  /// @brief Method StartLevel, addr 0x226e93c, size 0x350, virtual false, abstract: false, final false
  inline void StartLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams queuedSongParams);

  /// @brief Method StopAllLevels, addr 0x226ec8c, size 0x60, virtual false, abstract: false, final false
  inline void StopAllLevels();

  /// @brief Method StopCurrentLevel, addr 0x226ecec, size 0x1c, virtual false, abstract: false, final false
  inline void StopCurrentLevel();

  static inline ::GlobalNamespace::SongRunningHelper* New_ctor();

  /// @brief Method .ctor, addr 0x226ed08, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <StartLevel>g__HandleLevelDidFinishCallback|8_0, addr 0x226ed84, size 0x178, virtual false, abstract: false, final false
  inline void _StartLevel_g__HandleLevelDidFinishCallback_8_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransition,
                                                              ::GlobalNamespace::LevelCompletionResults* results);

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper(SongRunningHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper(SongRunningHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper();

public:
  /// @brief Field _beatmapCharacteristics, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristics;

  /// @brief Field _menuTransitionsHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _playQueue, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* ____playQueue;

  /// @brief Field _current, offset: 0x30, size: 0x30, def value: None
  ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapCharacteristics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____menuTransitionsHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____playQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____current) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper*, "", "SongRunningHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, "", "SongRunningHelper/QueuedSongParams");
