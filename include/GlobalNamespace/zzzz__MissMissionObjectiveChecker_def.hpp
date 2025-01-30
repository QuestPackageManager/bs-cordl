#pragma once
// IWYU pragma private; include "GlobalNamespace/MissMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(MissMissionObjectiveChecker)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissMissionObjectiveChecker);
// Dependencies SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissMissionObjectiveChecker
class CORDL_TYPE MissMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Method HandleNoteWasMissed, addr 0x3bb6918, size 0x70, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method Init, addr 0x3bb6744, size 0x144, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MissMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb6888, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method .ctor, addr 0x3bb6988, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissMissionObjectiveChecker(MissMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissMissionObjectiveChecker(MissMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4473 };

  /// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissMissionObjectiveChecker, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissMissionObjectiveChecker, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissMissionObjectiveChecker*, "", "MissMissionObjectiveChecker");
