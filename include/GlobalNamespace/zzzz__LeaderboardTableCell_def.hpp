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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5427))
// CS Name: ::LeaderboardTableCell*
class CORDL_TYPE LeaderboardTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _rankText, offset 0x58, size 0x8
  __declspec(property(get = __get__rankText, put = __set__rankText))::TMPro::TextMeshProUGUI* _rankText;

  /// @brief Field _playerNameText, offset 0x60, size 0x8
  __declspec(property(get = __get__playerNameText, put = __set__playerNameText))::TMPro::TextMeshProUGUI* _playerNameText;

  /// @brief Field _scoreText, offset 0x68, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _fullComboText, offset 0x70, size 0x8
  __declspec(property(get = __get__fullComboText, put = __set__fullComboText))::TMPro::TextMeshProUGUI* _fullComboText;

  /// @brief Field _normalColor, offset 0x78, size 0x10
  __declspec(property(get = __get__normalColor, put = __set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field _specialScoreColor, offset 0x88, size 0x10
  __declspec(property(get = __get__specialScoreColor, put = __set__specialScoreColor))::UnityEngine::Color _specialScoreColor;

  /// @brief Field _separatorImage, offset 0x98, size 0x8
  __declspec(property(get = __get__separatorImage, put = __set__separatorImage))::UnityEngine::UI::Image* _separatorImage;

  __declspec(property(put = set_rank)) int32_t rank;

  __declspec(property(put = set_playerName))::StringW playerName;

  __declspec(property(put = set_score)) int32_t score;

  __declspec(property(put = set_showSeparator)) bool showSeparator;

  __declspec(property(put = set_showFullCombo)) bool showFullCombo;

  __declspec(property(put = set_specialScore)) bool specialScore;

  constexpr ::TMPro::TextMeshProUGUI*& __get__rankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__rankText() const;

  constexpr void __set__rankText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__playerNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playerNameText() const;

  constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__fullComboText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__fullComboText() const;

  constexpr void __set__fullComboText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Color& __get__normalColor();

  constexpr ::UnityEngine::Color const& __get__normalColor() const;

  constexpr void __set__normalColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__specialScoreColor();

  constexpr ::UnityEngine::Color const& __get__specialScoreColor() const;

  constexpr void __set__specialScoreColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::UI::Image*& __get__separatorImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__separatorImage() const;

  constexpr void __set__separatorImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_rank addr 0x227aa18 size 0x48 virtual false final false
  inline void set_rank(int32_t value);

  /// @brief Method set_playerName addr 0x227aa60 size 0x24 virtual false final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_score addr 0x227aa84 size 0xa0 virtual false final false
  inline void set_score(int32_t value);

  /// @brief Method set_showSeparator addr 0x227ab24 size 0x20 virtual false final false
  inline void set_showSeparator(bool value);

  /// @brief Method set_showFullCombo addr 0x227ab44 size 0x20 virtual false final false
  inline void set_showFullCombo(bool value);

  /// @brief Method set_specialScore addr 0x227ab64 size 0xf8 virtual false final false
  inline void set_specialScore(bool value);

  static inline ::GlobalNamespace::LeaderboardTableCell* New_ctor();

  /// @brief Method .ctor addr 0x227ac5c size 0x8 virtual false final false
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
  ::TMPro::TextMeshProUGUI* ____rankText;

  /// @brief Field _playerNameText, offset: 0x60, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playerNameText;

  /// @brief Field _scoreText, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _fullComboText, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____fullComboText;

  /// @brief Field _normalColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _specialScoreColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____specialScoreColor;

  /// @brief Field _separatorImage, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____separatorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardTableCell, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
