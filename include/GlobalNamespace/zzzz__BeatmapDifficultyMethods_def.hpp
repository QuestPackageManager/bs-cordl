#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultyMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::GlobalNamespace::BeatmapDifficultyMethods*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDifficultyMethods*, "", "BeatmapDifficultyMethods");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDifficultyMethods
class CORDL_TYPE BeatmapDifficultyMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method DefaultNoteJumpMovementSpeed, addr 0x371c50c, size 0x20, virtual false, abstract: false, final false
  static inline float_t DefaultNoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method DefaultRating, addr 0x371c4bc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Name, addr 0x371c324, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW Name(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method NoteJumpMovementSpeed, addr 0x371c4d4, size 0x38, virtual false, abstract: false, final false
  static inline float_t NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, bool fastNotes);

  /// @brief Method ShortName, addr 0x371c3f0, size 0xcc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14922 };

  /// @brief Field kDefaultDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kDefaultDifficultyNjs{ static_cast<float_t>(10.0f) };

  /// @brief Field kDifficultyEasyLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyEasyLocalizationKey{ u"DIFFICULTY_EASY" };

  /// @brief Field kDifficultyEasyShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyEasyShortLocalizationKey{ u"DIFFICULTY_EASY_SHORT" };

  /// @brief Field kDifficultyExpertLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertLocalizationKey{ u"DIFFICULTY_EXPERT" };

  /// @brief Field kDifficultyExpertPlusLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertPlusLocalizationKey{ u"DIFFICULTY_EXPERT_PLUS" };

  /// @brief Field kDifficultyExpertPlusShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertPlusShortLocalizationKey{ u"DIFFICULTY_EXPERT_PLUS_SHORT" };

  /// @brief Field kDifficultyExpertShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyExpertShortLocalizationKey{ u"DIFFICULTY_EXPERT_SHORT" };

  /// @brief Field kDifficultyHardLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyHardLocalizationKey{ u"DIFFICULTY_HARD" };

  /// @brief Field kDifficultyHardShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyHardShortLocalizationKey{ u"DIFFICULTY_HARD_SHORT" };

  /// @brief Field kDifficultyNormalLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyNormalLocalizationKey{ u"DIFFICULTY_NORMAL" };

  /// @brief Field kDifficultyNormalShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyNormalShortLocalizationKey{ u"DIFFICULTY_NORMAL_SHORT" };

  /// @brief Field kDifficultyUnknownLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyUnknownLocalizationKey{ u"DIFFICULTY_UNKNOWN" };

  /// @brief Field kDifficultyUnknownShortLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDifficultyUnknownShortLocalizationKey{ u"DIFFICULTY_UNKNOWN_SHORT" };

  /// @brief Field kExpertDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kExpertDifficultyNjs{ static_cast<float_t>(12.0f) };

  /// @brief Field kExpertPlusDifficultyNjs offset 0xffffffff size 0x4
  static constexpr float_t kExpertPlusDifficultyNjs{ static_cast<float_t>(16.0f) };

  /// @brief Field kFastNotesNjs offset 0xffffffff size 0x4
  static constexpr float_t kFastNotesNjs{ static_cast<float_t>(20.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyMethods) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
