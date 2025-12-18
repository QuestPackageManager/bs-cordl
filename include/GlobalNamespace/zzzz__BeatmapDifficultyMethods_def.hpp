#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultyMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyMethods)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultyMethods);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDifficultyMethods
class CORDL_TYPE BeatmapDifficultyMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method DefaultNoteJumpMovementSpeed, addr 0x3621ce4, size 0x20, virtual false, abstract: false, final false
  static inline float_t DefaultNoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method DefaultRating, addr 0x3621c94, size 0x18, virtual false, abstract: false, final false
  static inline int32_t DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Name, addr 0x3621afc, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW Name(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method NoteJumpMovementSpeed, addr 0x3621cac, size 0x38, virtual false, abstract: false, final false
  static inline float_t NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, bool fastNotes);

  /// @brief Method ShortName, addr 0x3621bc8, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW ShortName(::GlobalNamespace::BeatmapDifficulty difficulty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultyMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultyMethods(BeatmapDifficultyMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultyMethods(BeatmapDifficultyMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14918 };

  /// @brief Field kDefaultDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kDefaultDifficultyNjs{ static_cast<float_t>(10.0f) };

  /// @brief Field kExpertDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kExpertDifficultyNjs{ static_cast<float_t>(12.0f) };

  /// @brief Field kExpertPlusDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kExpertPlusDifficultyNjs{ static_cast<float_t>(16.0f) };

  /// @brief Field kFastNotesNjs offset 0xffffffff size 0x4
  static constexpr float_t kFastNotesNjs{ static_cast<float_t>(20.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMethods*, "", "BeatmapDifficultyMethods");
