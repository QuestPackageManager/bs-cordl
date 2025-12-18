#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdFilterExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelOrPackIdFilterExtensions
class CORDL_TYPE BeatmapLevelOrPackIdFilterExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldAllowEmpty, addr 0x3650c48, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldAllowEmpty(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  /// @brief Method ShouldAllowLevels, addr 0x3650c34, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldAllowLevels(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  /// @brief Method ShouldAllowPacks, addr 0x3650c20, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*, "", "BeatmapLevelOrPackIdFilterExtensions");
