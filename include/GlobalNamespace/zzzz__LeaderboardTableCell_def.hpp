#pragma once
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
// Type: ::LeaderboardTableCell
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8995)), TypeDefinitionIndex(TypeDefinitionIndex(13617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4730))
// CS Name: ::LeaderboardTableCell*
class CORDL_TYPE LeaderboardTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _rankText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText))::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _playerNameText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText))::UnityW<::TMPro::TextMeshProUGUI> _playerNameText;

  /// @brief Field _scoreText, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText))::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _fullComboText, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__fullComboText, put = __cordl_internal_set__fullComboText))::UnityW<::TMPro::TextMeshProUGUI> _fullComboText;

  /// @brief Field _normalColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field _specialScoreColor, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__specialScoreColor, put = __cordl_internal_set__specialScoreColor))::UnityEngine::Color _specialScoreColor;

  /// @brief Field _separatorImage, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__separatorImage, put = __cordl_internal_set__separatorImage))::UnityW<::UnityEngine::UI::Image> _separatorImage;

  __declspec(property(put = set_rank)) int32_t rank;

  __declspec(property(put = set_playerName))::StringW playerName;

  __declspec(property(put = set_score)) int32_t score;

  __declspec(property(put = set_showSeparator)) bool showSeparator;

  __declspec(property(put = set_showFullCombo)) bool showFullCombo;

  __declspec(property(put = set_specialScore)) bool specialScore;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerNameText() const;

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__fullComboText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__fullComboText() const;

  constexpr void __cordl_internal_set__fullComboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__specialScoreColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__specialScoreColor() const;

  constexpr void __cordl_internal_set__specialScoreColor(::UnityEngine::Color value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__separatorImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__separatorImage() const;

  constexpr void __cordl_internal_set__separatorImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method set_rank, addr 0x23d65a4, size 0x48, virtual false, abstract: false, final false
  inline void set_rank(int32_t value);

  /// @brief Method set_playerName, addr 0x23d65ec, size 0x24, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_score, addr 0x23d6610, size 0xa0, virtual false, abstract: false, final false
  inline void set_score(int32_t value);

  /// @brief Method set_showSeparator, addr 0x23d66b0, size 0x20, virtual false, abstract: false, final false
  inline void set_showSeparator(bool value);

  /// @brief Method set_showFullCombo, addr 0x23d66d0, size 0x20, virtual false, abstract: false, final false
  inline void set_showFullCombo(bool value);

  /// @brief Method set_specialScore, addr 0x23d66f0, size 0xf8, virtual false, abstract: false, final false
  inline void set_specialScore(bool value);

  static inline ::GlobalNamespace::LeaderboardTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x23d67e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardTableCell(LeaderboardTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardTableCell(LeaderboardTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardTableCell();

public:
  /// @brief Field _rankText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  /// @brief Field _playerNameText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerNameText;

  /// @brief Field _scoreText, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _fullComboText, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____fullComboText;

  /// @brief Field _normalColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _specialScoreColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____specialScoreColor;

  /// @brief Field _separatorImage, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____separatorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardTableCell, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____rankText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____playerNameText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____scoreText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____fullComboText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____normalColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____specialScoreColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableCell, ____separatorImage) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
