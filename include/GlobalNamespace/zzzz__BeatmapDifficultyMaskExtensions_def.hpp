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
// Type: ::BeatmapDifficultyMaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDifficultyMaskExtensions*
class CORDL_TYPE BeatmapDifficultyMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x220c650, size 0x18, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Contains, addr 0x220c668, size 0x10, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method DifferenceFrom, addr 0x220c678, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method FromMask, addr 0x220c450, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDifficulty FromMask(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method FromMaskMaybe, addr 0x220c370, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> FromMaskMaybe(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method LocalizedKey, addr 0x220c498, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ShortLocalizedKey, addr 0x220c574, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ToHexString, addr 0x220c6e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ToMask, addr 0x220c364, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMaskExtensions*, "", "BeatmapDifficultyMaskExtensions");
