#pragma once
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
// Type: ::BeatmapDifficultyMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4361))
// CS Name: ::BeatmapDifficultyMethods*
class CORDL_TYPE BeatmapDifficultyMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method Name addr 0x21f4df0 size 0x9c virtual false final false
  static inline ::StringW Name(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method ShortName addr 0x21f4e8c size 0x9c virtual false final false
  static inline ::StringW ShortName(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method DefaultRating addr 0x21f4f28 size 0x28 virtual false final false
  static inline int32_t DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method NoteJumpMovementSpeed addr 0x21f4f50 size 0x28 virtual false final false
  static inline float_t NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultyMethods(BeatmapDifficultyMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultyMethods(BeatmapDifficultyMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultyMethods();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMethods*, "", "BeatmapDifficultyMethods");
