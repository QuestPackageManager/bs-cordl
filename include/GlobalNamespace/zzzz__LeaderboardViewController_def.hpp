#pragma once
// IWYU pragma private; include "GlobalNamespace\LeaderboardViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(LeaderboardViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardViewController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LeaderboardViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardViewController
class CORDL_TYPE LeaderboardViewController : public ::HMUI::ViewController {
public:
  // Declarations
  static inline ::GlobalNamespace::LeaderboardViewController* New_ctor();

  /// @brief Method RefreshLevelStats, addr 0x5949a44, size 0x4, virtual true, abstract: false, final false
  inline void RefreshLevelStats();

  /// @brief Method SetData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetData(::by_ref<::GlobalNamespace::BeatmapKey> previewDifficultyBeatmap);

  /// @brief Method .ctor, addr 0x5949a48, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6916 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LeaderboardViewController) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
