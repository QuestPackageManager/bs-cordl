#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapSelectionView)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSelectionView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapSelectionView
class CORDL_TYPE BeatmapSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _levelBar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _noLevelText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noLevelText, put = __cordl_internal_set__noLevelText)) ::UnityW<::TMPro::TextMeshProUGUI> _noLevelText;

  static inline ::GlobalNamespace::BeatmapSelectionView* New_ctor();

  /// @brief Method SetBeatmap, addr 0x3aff098, size 0xb4, virtual true, abstract: false, final false
  inline void SetBeatmap(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__noLevelText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__noLevelText();

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__noLevelText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3aff178, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSelectionView(BeatmapSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSelectionView(BeatmapSelectionView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4970 };

  /// @brief Field _levelBar, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _noLevelText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____noLevelText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapSelectionView, ____levelBar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapSelectionView, ____noLevelText) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSelectionView, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
