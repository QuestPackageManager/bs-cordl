#pragma once
// IWYU pragma private; include "GlobalNamespace/PrepareLevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PrepareLevelCompletionResults)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrepareLevelCompletionResults);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrepareLevelCompletionResults
class CORDL_TYPE PrepareLevelCompletionResults : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectExecutionRatingsRecorder,
                      put = __cordl_internal_set__beatmapObjectExecutionRatingsRecorder)) ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>
      _beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _comboController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController)) ::UnityW<::GlobalNamespace::ComboController> _comboController;

  /// @brief Field _gameEnergyCounter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _gameplayModifiers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _gameplayModifiersModelSO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModelSO, put = __cordl_internal_set__gameplayModifiersModelSO)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModelSO;

  /// @brief Field _saberActivityCounter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saberActivityCounter, put = __cordl_internal_set__saberActivityCounter)) ::UnityW<::GlobalNamespace::SaberActivityCounter> _saberActivityCounter;

  /// @brief Field _scoreController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Method FillLevelCompletionResults, addr 0x3be39cc, size 0x2c8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* FillLevelCompletionResults(::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
                                                                               ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction);

  static inline ::GlobalNamespace::PrepareLevelCompletionResults* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> const& __cordl_internal_get__beatmapObjectExecutionRatingsRecorder() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>& __cordl_internal_get__beatmapObjectExecutionRatingsRecorder();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModelSO() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModelSO();

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter> const& __cordl_internal_get__saberActivityCounter() const;

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter>& __cordl_internal_get__saberActivityCounter();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__beatmapObjectExecutionRatingsRecorder(::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> value);

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__gameplayModifiersModelSO(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__saberActivityCounter(::UnityW<::GlobalNamespace::SaberActivityCounter> value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x3be3ccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrepareLevelCompletionResults();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrepareLevelCompletionResults(PrepareLevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrepareLevelCompletionResults(PrepareLevelCompletionResults const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4633 };

  /// @brief Field _gameplayModifiersModelSO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModelSO;

  /// @brief Field _saberActivityCounter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberActivityCounter> ____saberActivityCounter;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> ____beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _scoreController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _gameEnergyCounter, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _beatmapData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _audioTimeSyncController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _comboController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameplayModifiersModelSO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____saberActivityCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____beatmapObjectExecutionRatingsRecorder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____scoreController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameEnergyCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____beatmapData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____audioTimeSyncController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameplayModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____comboController) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrepareLevelCompletionResults, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrepareLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrepareLevelCompletionResults*, "", "PrepareLevelCompletionResults");
