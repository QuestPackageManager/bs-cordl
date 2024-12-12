#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(BeatmapObjectsInstaller)
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectsInstaller
class CORDL_TYPE BeatmapObjectsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _beatLinePrefab, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLinePrefab, put = __cordl_internal_set__beatLinePrefab)) ::UnityW<::GlobalNamespace::BeatLine> _beatLinePrefab;

  /// @brief Field _bombNotePrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePrefab, put = __cordl_internal_set__bombNotePrefab)) ::UnityW<::GlobalNamespace::BombNoteController> _bombNotePrefab;

  /// @brief Field _burstSliderHeadNotePrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadNotePrefab, put = __cordl_internal_set__burstSliderHeadNotePrefab)) ::UnityW<::GlobalNamespace::GameNoteController>
      _burstSliderHeadNotePrefab;

  /// @brief Field _burstSliderNotePrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderNotePrefab, put = __cordl_internal_set__burstSliderNotePrefab)) ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>
      _burstSliderNotePrefab;

  /// @brief Field _normalBasicNotePrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalBasicNotePrefab, put = __cordl_internal_set__normalBasicNotePrefab)) ::UnityW<::GlobalNamespace::GameNoteController> _normalBasicNotePrefab;

  /// @brief Field _obstaclePrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePrefab, put = __cordl_internal_set__obstaclePrefab)) ::UnityW<::GlobalNamespace::ObstacleController> _obstaclePrefab;

  /// @brief Field _proModeNotePrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__proModeNotePrefab, put = __cordl_internal_set__proModeNotePrefab)) ::UnityW<::GlobalNamespace::GameNoteController> _proModeNotePrefab;

  /// @brief Field _sceneSetupData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _sliderLongPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderLongPrefab, put = __cordl_internal_set__sliderLongPrefab)) ::UnityW<::GlobalNamespace::SliderController> _sliderLongPrefab;

  /// @brief Field _sliderMediumPrefab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMediumPrefab, put = __cordl_internal_set__sliderMediumPrefab)) ::UnityW<::GlobalNamespace::SliderController> _sliderMediumPrefab;

  /// @brief Field _sliderShortPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderShortPrefab, put = __cordl_internal_set__sliderShortPrefab)) ::UnityW<::GlobalNamespace::SliderController> _sliderShortPrefab;

  /// @brief Method InstallBindings, addr 0x3bef448, size 0x420, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BeatmapObjectsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatLine> const& __cordl_internal_get__beatLinePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatLine>& __cordl_internal_get__beatLinePrefab();

  constexpr ::UnityW<::GlobalNamespace::BombNoteController> const& __cordl_internal_get__bombNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BombNoteController>& __cordl_internal_get__bombNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& __cordl_internal_get__burstSliderHeadNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameNoteController>& __cordl_internal_get__burstSliderHeadNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& __cordl_internal_get__burstSliderNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& __cordl_internal_get__burstSliderNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& __cordl_internal_get__normalBasicNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameNoteController>& __cordl_internal_get__normalBasicNotePrefab();

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get__obstaclePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get__obstaclePrefab();

  constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& __cordl_internal_get__proModeNotePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameNoteController>& __cordl_internal_get__proModeNotePrefab();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get__sliderLongPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get__sliderLongPrefab();

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get__sliderMediumPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get__sliderMediumPrefab();

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get__sliderShortPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get__sliderShortPrefab();

  constexpr void __cordl_internal_set__beatLinePrefab(::UnityW<::GlobalNamespace::BeatLine> value);

  constexpr void __cordl_internal_set__bombNotePrefab(::UnityW<::GlobalNamespace::BombNoteController> value);

  constexpr void __cordl_internal_set__burstSliderHeadNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value);

  constexpr void __cordl_internal_set__burstSliderNotePrefab(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value);

  constexpr void __cordl_internal_set__normalBasicNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value);

  constexpr void __cordl_internal_set__obstaclePrefab(::UnityW<::GlobalNamespace::ObstacleController> value);

  constexpr void __cordl_internal_set__proModeNotePrefab(::UnityW<::GlobalNamespace::GameNoteController> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__sliderLongPrefab(::UnityW<::GlobalNamespace::SliderController> value);

  constexpr void __cordl_internal_set__sliderMediumPrefab(::UnityW<::GlobalNamespace::SliderController> value);

  constexpr void __cordl_internal_set__sliderShortPrefab(::UnityW<::GlobalNamespace::SliderController> value);

  /// @brief Method .ctor, addr 0x3bef868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInstaller(BeatmapObjectsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInstaller(BeatmapObjectsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4714 };

  /// @brief Field _normalBasicNotePrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameNoteController> ____normalBasicNotePrefab;

  /// @brief Field _proModeNotePrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameNoteController> ____proModeNotePrefab;

  /// @brief Field _burstSliderHeadNotePrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameNoteController> ____burstSliderHeadNotePrefab;

  /// @brief Field _burstSliderNotePrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> ____burstSliderNotePrefab;

  /// @brief Field _bombNotePrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BombNoteController> ____bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> ____obstaclePrefab;

  /// @brief Field _sliderShortPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderController> ____sliderShortPrefab;

  /// @brief Field _sliderMediumPrefab, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderController> ____sliderMediumPrefab;

  /// @brief Field _sliderLongPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderController> ____sliderLongPrefab;

  /// @brief Field _beatLinePrefab, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatLine> ____beatLinePrefab;

  /// @brief Field _sceneSetupData, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____normalBasicNotePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____proModeNotePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____burstSliderHeadNotePrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____burstSliderNotePrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____bombNotePrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____obstaclePrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____sliderShortPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____sliderMediumPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____sliderLongPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____beatLinePrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInstaller, ____sceneSetupData) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInstaller, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInstaller*, "", "BeatmapObjectsInstaller");
