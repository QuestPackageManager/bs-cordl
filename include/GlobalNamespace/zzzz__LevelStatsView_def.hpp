#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(LevelStatsView)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class PlayerData;
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
// Type: ::LevelStatsView
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelStatsView*
class CORDL_TYPE LevelStatsView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _highScoreText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__highScoreText, put = __cordl_internal_set__highScoreText))::UnityW<::TMPro::TextMeshProUGUI> _highScoreText;

  /// @brief Field _maxComboText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__maxComboText, put = __cordl_internal_set__maxComboText))::UnityW<::TMPro::TextMeshProUGUI> _maxComboText;

  /// @brief Field _maxRankText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__maxRankText, put = __cordl_internal_set__maxRankText))::UnityW<::TMPro::TextMeshProUGUI> _maxRankText;

  /// @brief Method Hide, addr 0x266d170, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::LevelStatsView* New_ctor();

  /// @brief Method ShowStats, addr 0x266d194, size 0x18c, virtual false, abstract: false, final false
  inline void ShowStats(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::PlayerData* playerData);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__highScoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__highScoreText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maxComboText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maxComboText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maxRankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maxRankText();

  constexpr void __cordl_internal_set__highScoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__maxComboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__maxRankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x266d320, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _highScoreText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____highScoreText;

  /// @brief Field _maxComboText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maxComboText;

  /// @brief Field _maxRankText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maxRankText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelStatsView, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____highScoreText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxComboText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxRankText) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelStatsView*, "", "LevelStatsView");
