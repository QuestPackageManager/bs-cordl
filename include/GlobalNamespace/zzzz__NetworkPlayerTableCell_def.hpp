#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkPlayerTableCell)
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerTableCell);
// Type: ::NetworkPlayerTableCell
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 193, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkPlayerTableCell*
class CORDL_TYPE NetworkPlayerTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage))::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _highlightImage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage))::UnityW<::UnityEngine::UI::Image> _highlightImage;

  /// @brief Field _isMe, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__isMe, put = __cordl_internal_set__isMe)) bool _isMe;

  /// @brief Field _partyLeaderIcon, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__partyLeaderIcon, put = __cordl_internal_set__partyLeaderIcon))::UnityW<::UnityEngine::UI::Image> _partyLeaderIcon;

  /// @brief Field _playerNameText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText))::UnityW<::TMPro::TextMeshProUGUI> _playerNameText;

  /// @brief Field _privateIcon, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__privateIcon, put = __cordl_internal_set__privateIcon))::UnityW<::UnityEngine::UI::Image> _privateIcon;

  /// @brief Field _separator, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__separator, put = __cordl_internal_set__separator))::UnityW<::UnityEngine::GameObject> _separator;

  /// @brief Field _spectateIcon, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__spectateIcon, put = __cordl_internal_set__spectateIcon))::UnityW<::UnityEngine::UI::Image> _spectateIcon;

  /// @brief Field _textColorMe, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__textColorMe, put = __cordl_internal_set__textColorMe))::UnityEngine::Color _textColorMe;

  /// @brief Field _textColorNormal, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get__textColorNormal, put = __cordl_internal_set__textColorNormal))::UnityEngine::Color _textColorNormal;

  /// @brief Field _textColorSelected, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get__textColorSelected, put = __cordl_internal_set__textColorSelected))::UnityEngine::Color _textColorSelected;

  __declspec(property(get = get_activeColor))::UnityEngine::Color activeColor;

  __declspec(property(get = get_showSeparator, put = set_showSeparator)) bool showSeparator;

  /// @brief Method HighlightDidChange, addr 0x23abdcc, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::NetworkPlayerTableCell* New_ctor();

  /// @brief Method RefreshVisuals, addr 0x23abbb4, size 0x214, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x23abdc8, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method SetData, addr 0x23aaef4, size 0x9c, virtual false, abstract: false, final false
  inline void SetData(::StringW userName, bool isOpenParty, bool wantsToPlayNextLevel, bool isMyPartyOwner, bool isMe);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr bool const& __cordl_internal_get__isMe() const;

  constexpr bool& __cordl_internal_get__isMe();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__partyLeaderIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__partyLeaderIcon();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__privateIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__privateIcon();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__separator() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__separator();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__spectateIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__spectateIcon();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__textColorMe() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__textColorMe();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__textColorNormal() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__textColorNormal();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__textColorSelected() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__textColorSelected();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__isMe(bool value);

  constexpr void __cordl_internal_set__partyLeaderIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__privateIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__separator(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__spectateIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__textColorMe(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__textColorNormal(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__textColorSelected(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x23abe2c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeColor, addr 0x23abdd0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_activeColor();

  /// @brief Method get_showSeparator, addr 0x23abb98, size 0x1c, virtual false, abstract: false, final false
  inline bool get_showSeparator();

  /// @brief Method set_showSeparator, addr 0x23aaf90, size 0x2c, virtual false, abstract: false, final false
  inline void set_showSeparator(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerTableCell(NetworkPlayerTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerTableCell(NetworkPlayerTableCell const&) = delete;

  /// @brief Field _playerNameText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerNameText;

  /// @brief Field _separator, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____separator;

  /// @brief Field _privateIcon, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____privateIcon;

  /// @brief Field _spectateIcon, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____spectateIcon;

  /// @brief Field _partyLeaderIcon, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____partyLeaderIcon;

  /// @brief Field _bgImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  /// @brief Field _textColorNormal, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ____textColorNormal;

  /// @brief Field _textColorMe, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____textColorMe;

  /// @brief Field _textColorSelected, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color ____textColorSelected;

  /// @brief Field _isMe, offset: 0xc0, size: 0x1, def value: None
  bool ____isMe;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerTableCell, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____playerNameText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____separator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____privateIcon) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____spectateIcon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____partyLeaderIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____bgImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____highlightImage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____textColorNormal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____textColorMe) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____textColorSelected) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerTableCell, ____isMe) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerTableCell*, "", "NetworkPlayerTableCell");
