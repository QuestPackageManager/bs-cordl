#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectSpawnControllerHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnControllerHelpers)
namespace GlobalNamespace {
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnControllerHelpers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers*, "", "BeatmapObjectSpawnControllerHelpers");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnControllerHelpers
class CORDL_TYPE BeatmapObjectSpawnControllerHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetNoteJumpValues, addr 0x58cae78, size 0x34, virtual false, abstract: false, final false
  static inline void GetNoteJumpValues(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset,
                                       ::by_ref<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType> noteJumpValueType, ::by_ref<float_t> noteJumpValue);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnControllerHelpers) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
