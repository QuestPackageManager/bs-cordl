#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PrepareLevelCompletionResults)
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GameEnergyCounter;
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
// Type: ::PrepareLevelCompletionResults
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5273))
// CS Name: ::PrepareLevelCompletionResults*
class CORDL_TYPE PrepareLevelCompletionResults : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifiersModelSO, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiersModelSO, put = __set__gameplayModifiersModelSO))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModelSO;

  /// @brief Field _saberActivityCounter, offset 0x20, size 0x8
  __declspec(property(get = __get__saberActivityCounter, put = __set__saberActivityCounter))::GlobalNamespace::SaberActivityCounter* _saberActivityCounter;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectExecutionRatingsRecorder,
                      put = __set__beatmapObjectExecutionRatingsRecorder))::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* _beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _scoreController, offset 0x30, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _gameEnergyCounter, offset 0x38, size 0x8
  __declspec(property(get = __get__gameEnergyCounter, put = __set__gameEnergyCounter))::GlobalNamespace::GameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _beatmapData, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _comboController, offset 0x58, size 0x8
  __declspec(property(get = __get__comboController, put = __set__comboController))::GlobalNamespace::ComboController* _comboController;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModelSO();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModelSO() const;

  constexpr void __set__gameplayModifiersModelSO(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::SaberActivityCounter*& __get__saberActivityCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> const& __get__saberActivityCounter() const;

  constexpr void __set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter* value);

  constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*& __get__beatmapObjectExecutionRatingsRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*> const& __get__beatmapObjectExecutionRatingsRecorder() const;

  constexpr void __set__beatmapObjectExecutionRatingsRecorder(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* value);

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::GlobalNamespace::GameEnergyCounter*& __get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> const& __get__gameEnergyCounter() const;

  constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::ComboController*& __get__comboController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> const& __get__comboController() const;

  constexpr void __set__comboController(::GlobalNamespace::ComboController* value);

  /// @brief Method FillLevelCompletionResults, addr 0x22607b8, size 0x250, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* FillLevelCompletionResults(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
                                                                               ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction);

  static inline ::GlobalNamespace::PrepareLevelCompletionResults* New_ctor();

  /// @brief Method .ctor, addr 0x2260a40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrepareLevelCompletionResults(PrepareLevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrepareLevelCompletionResults(PrepareLevelCompletionResults const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrepareLevelCompletionResults();

public:
  /// @brief Field _gameplayModifiersModelSO, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModelSO;

  /// @brief Field _saberActivityCounter, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SaberActivityCounter* ____saberActivityCounter;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* ____beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _scoreController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _gameEnergyCounter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _beatmapData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _comboController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ComboController* ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrepareLevelCompletionResults, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameplayModifiersModelSO) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____saberActivityCounter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____beatmapObjectExecutionRatingsRecorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____scoreController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameEnergyCounter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____beatmapData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrepareLevelCompletionResults, ____comboController) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrepareLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrepareLevelCompletionResults*, "", "PrepareLevelCompletionResults");
