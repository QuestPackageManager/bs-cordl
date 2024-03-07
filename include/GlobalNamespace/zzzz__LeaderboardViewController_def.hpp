#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(LeaderboardViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardViewController);
// Type: ::LeaderboardViewController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardViewController*
class CORDL_TYPE LeaderboardViewController : public ::HMUI::ViewController {
public:
  // Declarations
  static inline ::GlobalNamespace::LeaderboardViewController* New_ctor();

  /// @brief Method RefreshLevelStats, addr 0x241c208, size 0x4, virtual true, abstract: false, final false
  inline void RefreshLevelStats();

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetData(ByRef<::GlobalNamespace::BeatmapKey> previewDifficultyBeatmap);

  /// @brief Method .ctor, addr 0x241c20c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardViewController(LeaderboardViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardViewController(LeaderboardViewController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardViewController, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
