#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelStatsView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LevelStatsView)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelStatsView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelStatsView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelStatsView
class CORDL_TYPE LevelStatsView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _highScoreText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__highScoreText, put = __cordl_internal_set__highScoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _highScoreText;

  /// @brief Field _maxComboText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__maxComboText, put = __cordl_internal_set__maxComboText)) ::UnityW<::TMPro::TextMeshProUGUI> _maxComboText;

  /// @brief Field _maxRankText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__maxRankText, put = __cordl_internal_set__maxRankText)) ::UnityW<::TMPro::TextMeshProUGUI> _maxRankText;

  /// @brief Method Hide, addr 0x3b04288, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::LevelStatsView* New_ctor();

  /// @brief Method ShowStats, addr 0x3b042ac, size 0x2c, virtual false, abstract: false, final false
  inline void ShowStats(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::PlayerData* playerData);

  /// @brief Method ShowStats, addr 0x3b042d8, size 0x170, virtual false, abstract: false, final false
  inline void ShowStats(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__highScoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__highScoreText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maxComboText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maxComboText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maxRankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maxRankText();

  constexpr void __cordl_internal_set__highScoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__maxComboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__maxRankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b04448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelStatsView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelStatsView(LevelStatsView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelStatsView(LevelStatsView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4988 };

  /// @brief Field _highScoreText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____highScoreText;

  /// @brief Field _maxComboText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maxComboText;

  /// @brief Field _maxRankText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maxRankText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____highScoreText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxComboText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxRankText) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelStatsView, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelStatsView*, "", "LevelStatsView");
