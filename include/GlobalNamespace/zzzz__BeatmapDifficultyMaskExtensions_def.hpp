#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultyMaskExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyMaskExtensions)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyMaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDifficultyMaskExtensions
class CORDL_TYPE BeatmapDifficultyMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x3192680, size 0x18, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Contains, addr 0x3192698, size 0x10, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method DifferenceFrom, addr 0x31926a8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method FromMask, addr 0x3192420, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDifficulty FromMask(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method FromMaskMaybe, addr 0x3192374, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> FromMaskMaybe(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method LocalizedKey, addr 0x3192468, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ShortLocalizedKey, addr 0x3192574, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ToHexString, addr 0x31926d8, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ToMask, addr 0x3192368, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDifficultyMask ToMask(::GlobalNamespace::BeatmapDifficulty difficulty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultyMaskExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMaskExtensions*, "", "BeatmapDifficultyMaskExtensions");
