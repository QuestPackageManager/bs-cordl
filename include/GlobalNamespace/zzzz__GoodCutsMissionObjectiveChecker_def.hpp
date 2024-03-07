#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::GoodCutsMissionObjectiveChecker);
// Type: ::GoodCutsMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GoodCutsMissionObjectiveChecker*
class CORDL_TYPE GoodCutsMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Method HandleNoteWasCut, addr 0x24c0000, size 0x8c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method Init, addr 0x24bfe1c, size 0x14c, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GoodCutsMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x24bff68, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method .ctor, addr 0x24c008c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GoodCutsMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodCutsMissionObjectiveChecker, ____beatmapObjectManager) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GoodCutsMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GoodCutsMissionObjectiveChecker*, "", "GoodCutsMissionObjectiveChecker");
