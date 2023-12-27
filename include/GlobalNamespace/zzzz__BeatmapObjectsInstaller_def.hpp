#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(BeatmapObjectsInstaller)
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class NoteLineConnectionController;
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
// Type: ::BeatmapObjectsInstaller
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5388))
// CS Name: ::BeatmapObjectsInstaller*
class CORDL_TYPE BeatmapObjectsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _normalBasicNotePrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__normalBasicNotePrefab, put = __set__normalBasicNotePrefab))::GlobalNamespace::GameNoteController* _normalBasicNotePrefab;

  /// @brief Field _proModeNotePrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__proModeNotePrefab, put = __set__proModeNotePrefab))::GlobalNamespace::GameNoteController* _proModeNotePrefab;

  /// @brief Field _burstSliderHeadNotePrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__burstSliderHeadNotePrefab, put = __set__burstSliderHeadNotePrefab))::GlobalNamespace::GameNoteController* _burstSliderHeadNotePrefab;

  /// @brief Field _burstSliderNotePrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__burstSliderNotePrefab, put = __set__burstSliderNotePrefab))::GlobalNamespace::BurstSliderGameNoteController* _burstSliderNotePrefab;

  /// @brief Field _burstSliderFillPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__burstSliderFillPrefab, put = __set__burstSliderFillPrefab))::GlobalNamespace::BurstSliderGameNoteController* _burstSliderFillPrefab;

  /// @brief Field _bombNotePrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__bombNotePrefab, put = __set__bombNotePrefab))::GlobalNamespace::BombNoteController* _bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset 0x50, size 0x8
  __declspec(property(get = __get__obstaclePrefab, put = __set__obstaclePrefab))::GlobalNamespace::ObstacleController* _obstaclePrefab;

  /// @brief Field _sliderShortPrefab, offset 0x58, size 0x8
  __declspec(property(get = __get__sliderShortPrefab, put = __set__sliderShortPrefab))::GlobalNamespace::SliderController* _sliderShortPrefab;

  /// @brief Field _sliderMediumPrefab, offset 0x60, size 0x8
  __declspec(property(get = __get__sliderMediumPrefab, put = __set__sliderMediumPrefab))::GlobalNamespace::SliderController* _sliderMediumPrefab;

  /// @brief Field _sliderLongPrefab, offset 0x68, size 0x8
  __declspec(property(get = __get__sliderLongPrefab, put = __set__sliderLongPrefab))::GlobalNamespace::SliderController* _sliderLongPrefab;

  /// @brief Field _noteLineConnectionControllerPrefab, offset 0x70, size 0x8
  __declspec(property(get = __get__noteLineConnectionControllerPrefab,
                      put = __set__noteLineConnectionControllerPrefab))::GlobalNamespace::NoteLineConnectionController* _noteLineConnectionControllerPrefab;

  /// @brief Field _beatLinePrefab, offset 0x78, size 0x8
  __declspec(property(get = __get__beatLinePrefab, put = __set__beatLinePrefab))::GlobalNamespace::BeatLine* _beatLinePrefab;

  /// @brief Field _sceneSetupData, offset 0x80, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  constexpr ::GlobalNamespace::GameNoteController*& __get__normalBasicNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& __get__normalBasicNotePrefab() const;

  constexpr void __set__normalBasicNotePrefab(::GlobalNamespace::GameNoteController* value);

  constexpr ::GlobalNamespace::GameNoteController*& __get__proModeNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& __get__proModeNotePrefab() const;

  constexpr void __set__proModeNotePrefab(::GlobalNamespace::GameNoteController* value);

  constexpr ::GlobalNamespace::GameNoteController*& __get__burstSliderHeadNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameNoteController*> const& __get__burstSliderHeadNotePrefab() const;

  constexpr void __set__burstSliderHeadNotePrefab(::GlobalNamespace::GameNoteController* value);

  constexpr ::GlobalNamespace::BurstSliderGameNoteController*& __get__burstSliderNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> const& __get__burstSliderNotePrefab() const;

  constexpr void __set__burstSliderNotePrefab(::GlobalNamespace::BurstSliderGameNoteController* value);

  constexpr ::GlobalNamespace::BurstSliderGameNoteController*& __get__burstSliderFillPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> const& __get__burstSliderFillPrefab() const;

  constexpr void __set__burstSliderFillPrefab(::GlobalNamespace::BurstSliderGameNoteController* value);

  constexpr ::GlobalNamespace::BombNoteController*& __get__bombNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombNoteController*> const& __get__bombNotePrefab() const;

  constexpr void __set__bombNotePrefab(::GlobalNamespace::BombNoteController* value);

  constexpr ::GlobalNamespace::ObstacleController*& __get__obstaclePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& __get__obstaclePrefab() const;

  constexpr void __set__obstaclePrefab(::GlobalNamespace::ObstacleController* value);

  constexpr ::GlobalNamespace::SliderController*& __get__sliderShortPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& __get__sliderShortPrefab() const;

  constexpr void __set__sliderShortPrefab(::GlobalNamespace::SliderController* value);

  constexpr ::GlobalNamespace::SliderController*& __get__sliderMediumPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& __get__sliderMediumPrefab() const;

  constexpr void __set__sliderMediumPrefab(::GlobalNamespace::SliderController* value);

  constexpr ::GlobalNamespace::SliderController*& __get__sliderLongPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& __get__sliderLongPrefab() const;

  constexpr void __set__sliderLongPrefab(::GlobalNamespace::SliderController* value);

  constexpr ::GlobalNamespace::NoteLineConnectionController*& __get__noteLineConnectionControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteLineConnectionController*> const& __get__noteLineConnectionControllerPrefab() const;

  constexpr void __set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController* value);

  constexpr ::GlobalNamespace::BeatLine*& __get__beatLinePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLine*> const& __get__beatLinePrefab() const;

  constexpr void __set__beatLinePrefab(::GlobalNamespace::BeatLine* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method InstallBindings addr 0x226f0c0 size 0x4d4 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BeatmapObjectsInstaller* New_ctor();

  /// @brief Method .ctor addr 0x226f594 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInstaller(BeatmapObjectsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInstaller(BeatmapObjectsInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInstaller();

public:
  /// @brief Field _normalBasicNotePrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameNoteController* ____normalBasicNotePrefab;

  /// @brief Field _proModeNotePrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameNoteController* ____proModeNotePrefab;

  /// @brief Field _burstSliderHeadNotePrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameNoteController* ____burstSliderHeadNotePrefab;

  /// @brief Field _burstSliderNotePrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BurstSliderGameNoteController* ____burstSliderNotePrefab;

  /// @brief Field _burstSliderFillPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BurstSliderGameNoteController* ____burstSliderFillPrefab;

  /// @brief Field _bombNotePrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BombNoteController* ____bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleController* ____obstaclePrefab;

  /// @brief Field _sliderShortPrefab, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::SliderController* ____sliderShortPrefab;

  /// @brief Field _sliderMediumPrefab, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SliderController* ____sliderMediumPrefab;

  /// @brief Field _sliderLongPrefab, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::SliderController* ____sliderLongPrefab;

  /// @brief Field _noteLineConnectionControllerPrefab, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::NoteLineConnectionController* ____noteLineConnectionControllerPrefab;

  /// @brief Field _beatLinePrefab, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatLine* ____beatLinePrefab;

  /// @brief Field _sceneSetupData, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInstaller, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInstaller*, "", "BeatmapObjectsInstaller");
