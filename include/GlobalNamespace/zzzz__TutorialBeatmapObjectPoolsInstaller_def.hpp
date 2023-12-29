#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(TutorialBeatmapObjectPoolsInstaller)
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class NoteLineConnectionController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
// Type: ::TutorialBeatmapObjectPoolsInstaller
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5494))
// CS Name: ::TutorialBeatmapObjectPoolsInstaller*
class CORDL_TYPE TutorialBeatmapObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _basicNotePrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__basicNotePrefab, put = __set__basicNotePrefab))::GlobalNamespace::TutorialNoteController* _basicNotePrefab;

  /// @brief Field _bombNotePrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__bombNotePrefab, put = __set__bombNotePrefab))::GlobalNamespace::BombNoteController* _bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__obstaclePrefab, put = __set__obstaclePrefab))::GlobalNamespace::ObstacleController* _obstaclePrefab;

  /// @brief Field _noteLineConnectionControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__noteLineConnectionControllerPrefab,
                      put = __set__noteLineConnectionControllerPrefab))::GlobalNamespace::NoteLineConnectionController* _noteLineConnectionControllerPrefab;

  constexpr ::GlobalNamespace::TutorialNoteController*& __get__basicNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialNoteController*> const& __get__basicNotePrefab() const;

  constexpr void __set__basicNotePrefab(::GlobalNamespace::TutorialNoteController* value);

  constexpr ::GlobalNamespace::BombNoteController*& __get__bombNotePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombNoteController*> const& __get__bombNotePrefab() const;

  constexpr void __set__bombNotePrefab(::GlobalNamespace::BombNoteController* value);

  constexpr ::GlobalNamespace::ObstacleController*& __get__obstaclePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& __get__obstaclePrefab() const;

  constexpr void __set__obstaclePrefab(::GlobalNamespace::ObstacleController* value);

  constexpr ::GlobalNamespace::NoteLineConnectionController*& __get__noteLineConnectionControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteLineConnectionController*> const& __get__noteLineConnectionControllerPrefab() const;

  constexpr void __set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController* value);

  /// @brief Method InstallBindings addr 0x212dddc size 0x18c virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* New_ctor();

  /// @brief Method .ctor addr 0x212df68 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialBeatmapObjectPoolsInstaller();

public:
  /// @brief Field _basicNotePrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TutorialNoteController* ____basicNotePrefab;

  /// @brief Field _bombNotePrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BombNoteController* ____bombNotePrefab;

  /// @brief Field _obstaclePrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleController* ____obstaclePrefab;

  /// @brief Field _noteLineConnectionControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NoteLineConnectionController* ____noteLineConnectionControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____basicNotePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____bombNotePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____obstaclePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, ____noteLineConnectionControllerPrefab) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
