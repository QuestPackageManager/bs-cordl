#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnControllerHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnControllerHelpers)
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnControllerHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers);
// Type: ::BeatmapObjectSpawnControllerHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectSpawnControllerHelpers*
class CORDL_TYPE BeatmapObjectSpawnControllerHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetNoteJumpValues, addr 0x2618504, size 0x38, virtual false, abstract: false, final false
  static inline void GetNoteJumpValues(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset,
                                       ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType> noteJumpValueType, ByRef<float_t> noteJumpValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnControllerHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnControllerHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnControllerHelpers(BeatmapObjectSpawnControllerHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnControllerHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnControllerHelpers(BeatmapObjectSpawnControllerHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*, "", "BeatmapObjectSpawnControllerHelpers");
