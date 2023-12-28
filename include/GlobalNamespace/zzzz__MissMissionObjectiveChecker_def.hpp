#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(MissMissionObjectiveChecker)
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissMissionObjectiveChecker);
// Type: ::MissMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5096))
// CS Name: ::MissMissionObjectiveChecker*
class CORDL_TYPE MissMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method Init addr 0x23cd194 size 0x14c virtual true final false
  inline void Init();

  /// @brief Method OnDestroy addr 0x23cd2e0 size 0x98 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasMissed addr 0x23cd378 size 0x70 virtual false final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  static inline ::GlobalNamespace::MissMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor addr 0x23cd3e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissMissionObjectiveChecker(MissMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissMissionObjectiveChecker(MissMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissMissionObjectiveChecker();

public:
  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissMissionObjectiveChecker*, "", "MissMissionObjectiveChecker");
