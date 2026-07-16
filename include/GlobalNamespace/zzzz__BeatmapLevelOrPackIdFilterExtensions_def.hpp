#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdFilterExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelOrPackIdFilterExtensions)
namespace GlobalNamespace {
struct BeatmapLevelOrPackIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelOrPackIdFilterExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*, "", "BeatmapLevelOrPackIdFilterExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelOrPackIdFilterExtensions
class CORDL_TYPE BeatmapLevelOrPackIdFilterExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldAllowEmpty, addr 0x3749eb4, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldAllowEmpty(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  /// @brief Method ShouldAllowLevels, addr 0x3749ea0, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldAllowLevels(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  /// @brief Method ShouldAllowPacks, addr 0x3749e8c, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldAllowPacks(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelOrPackIdFilterExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackIdFilterExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelOrPackIdFilterExtensions(BeatmapLevelOrPackIdFilterExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackIdFilterExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelOrPackIdFilterExtensions(BeatmapLevelOrPackIdFilterExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
