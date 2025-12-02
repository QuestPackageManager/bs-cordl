#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardTableCell)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardTableCell);
// Dependencies HMUI.TableCell, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LeaderboardTableCell
class CORDL_TYPE LeaderboardTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _fullComboText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fullComboText, put = __cordl_internal_set__fullComboText)) ::UnityW<::TMPro::TextMeshProUGUI> _fullComboText;

  /// @brief Field _normalColor, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor)) ::UnityEngine::Color _normalColor;

  /// @brief Field _playerNameText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText)) ::UnityW<::TMPro::TextMeshProUGUI> _playerNameText;

  /// @brief Field _rankText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText)) ::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _scoreText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _separatorImage, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__separatorImage, put = __cordl_internal_set__separatorImage)) ::UnityW<::UnityEngine::UI::Image> _separatorImage;

  /// @brief Field _specialScoreColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__specialScoreColor, put = __cordl_internal_set__specialScoreColor)) ::UnityEngine::Color _specialScoreColor;

  __declspec(property(put = set_playerName)) ::StringW playerName;

  __declspec(property(put = set_rank)) int32_t rank;

  __declspec(property(put = set_score)) int32_t score;

  __declspec(property(put = set_showFullCombo)) bool showFullCombo;

  __declspec(property(put = set_showSeparator)) bool showSeparator;

  __declspec(property(put = set_specialScore)) bool specialScore;

  static inline ::GlobalNamespace::LeaderboardTableCell* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__fullComboText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__fullComboText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__separatorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__separatorImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__specialScoreColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__specialScoreColor();

  constexpr void __cordl_internal_set__fullComboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__separatorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__specialScoreColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x57f27e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_playerName, addr 0x57f25dc, size 0x20, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_rank, addr 0x57f2548, size 0x94, virtual false, abstract: false, final false
  inline void set_rank(int32_t value);

  /// @brief Method set_score, addr 0x57f25fc, size 0xb0, virtual false, abstract: false, final false
  inline void set_score(int32_t value);

  /// @brief Method set_showFullCombo, addr 0x57f26c8, size 0x1c, virtual false, abstract: false, final false
  inline void set_showFullCombo(bool value);

  /// @brief Method set_showSeparator, addr 0x57f26ac, size 0x1c, virtual false, abstract: false, final false
  inline void set_showSeparator(bool value);

  /// @brief Method set_specialScore, addr 0x57f26e4, size 0x104, virtual false, abstract: false, final false
  inline void set_specialScore(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardTableCell(LeaderboardTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardTableCell(LeaderboardTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6336 };

  /// @brief Field _rankText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  /// @brief Field _playerNameText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerNameText;

  /// @brief Field _scoreText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _fullComboText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____fullComboText;

  /// @brief Field _normalColor, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _specialScoreColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____specialScoreColor;

  /// @brief Field _separatorImage, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____separatorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____rankText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____playerNameText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____scoreText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____fullComboText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____normalColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____specialScoreColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____separatorImage) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardTableCell, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
