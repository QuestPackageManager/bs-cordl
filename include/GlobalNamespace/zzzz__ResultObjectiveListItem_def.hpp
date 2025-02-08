#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultObjectiveListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResultObjectiveListItem)
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
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultObjectiveListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultObjectiveListItem);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResultObjectiveListItem
class CORDL_TYPE ResultObjectiveListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _conditionText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionText, put = __cordl_internal_set__conditionText)) ::UnityW<::TMPro::TextMeshProUGUI> _conditionText;

  /// @brief Field _icon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image> _icon;

  /// @brief Field _iconGlow, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__iconGlow, put = __cordl_internal_set__iconGlow)) ::UnityW<::UnityEngine::UI::Image> _iconGlow;

  /// @brief Field _titleText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  /// @brief Field _valueText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__valueText, put = __cordl_internal_set__valueText)) ::UnityW<::TMPro::TextMeshProUGUI> _valueText;

  __declspec(property(put = set_conditionText)) ::StringW conditionText;

  __declspec(property(put = set_hideConditionText)) bool hideConditionText;

  __declspec(property(put = set_hideValueText)) bool hideValueText;

  __declspec(property(put = set_icon)) ::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(put = set_iconColor)) ::UnityEngine::Color iconColor;

  __declspec(property(put = set_iconGlow)) ::UnityW<::UnityEngine::Sprite> iconGlow;

  __declspec(property(put = set_title)) ::StringW title;

  __declspec(property(put = set_valueText)) ::StringW valueText;

  static inline ::GlobalNamespace::ResultObjectiveListItem* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__conditionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__conditionText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__iconGlow() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__iconGlow();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__valueText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__valueText();

  constexpr void __cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__iconGlow(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b0b814, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_conditionText, addr 0x3b0b764, size 0x24, virtual false, abstract: false, final false
  inline void set_conditionText(::StringW value);

  /// @brief Method set_hideConditionText, addr 0x3b0b788, size 0x34, virtual false, abstract: false, final false
  inline void set_hideConditionText(bool value);

  /// @brief Method set_hideValueText, addr 0x3b0b7e0, size 0x34, virtual false, abstract: false, final false
  inline void set_hideValueText(bool value);

  /// @brief Method set_icon, addr 0x3b0b708, size 0x1c, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::Sprite* value);

  /// @brief Method set_iconColor, addr 0x3b0b6e4, size 0x24, virtual false, abstract: false, final false
  inline void set_iconColor(::UnityEngine::Color value);

  /// @brief Method set_iconGlow, addr 0x3b0b724, size 0x1c, virtual false, abstract: false, final false
  inline void set_iconGlow(::UnityEngine::Sprite* value);

  /// @brief Method set_title, addr 0x3b0b740, size 0x24, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method set_valueText, addr 0x3b0b7bc, size 0x24, virtual false, abstract: false, final false
  inline void set_valueText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultObjectiveListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultObjectiveListItem(ResultObjectiveListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultObjectiveListItem(ResultObjectiveListItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5000 };

  /// @brief Field _icon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____icon;

  /// @brief Field _iconGlow, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____iconGlow;

  /// @brief Field _titleText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _conditionText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____conditionText;

  /// @brief Field _valueText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____valueText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____icon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____iconGlow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____titleText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____conditionText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____valueText) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultObjectiveListItem, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultObjectiveListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultObjectiveListItem*, "", "ResultObjectiveListItem");
