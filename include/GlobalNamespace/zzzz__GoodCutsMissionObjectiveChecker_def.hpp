#pragma once
// IWYU pragma private; include "GlobalNamespace\GoodCutsMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(GoodCutsMissionObjectiveChecker)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodCutsMissionObjectiveChecker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GoodCutsMissionObjectiveChecker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GoodCutsMissionObjectiveChecker*, "", "GoodCutsMissionObjectiveChecker");
// Dependencies SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: GoodCutsMissionObjectiveChecker
class CORDL_TYPE GoodCutsMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Method HandleNoteWasCut, addr 0x591a0b4, size 0x9c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method Init, addr 0x5919ed0, size 0x14c, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GoodCutsMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x591a01c, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method .ctor, addr 0x591a150, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GoodCutsMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GoodCutsMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GoodCutsMissionObjectiveChecker(GoodCutsMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GoodCutsMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GoodCutsMissionObjectiveChecker(GoodCutsMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6792 };

  /// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GoodCutsMissionObjectiveChecker, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GoodCutsMissionObjectiveChecker) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
