#pragma once
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
// Type: ::ResultObjectiveListItem
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5804))
// CS Name: ::ResultObjectiveListItem*
class CORDL_TYPE ResultObjectiveListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _icon, offset 0x18, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::UI::Image* _icon;

  /// @brief Field _iconGlow, offset 0x20, size 0x8
  __declspec(property(get = __get__iconGlow, put = __set__iconGlow))::UnityEngine::UI::Image* _iconGlow;

  /// @brief Field _titleText, offset 0x28, size 0x8
  __declspec(property(get = __get__titleText, put = __set__titleText))::TMPro::TextMeshProUGUI* _titleText;

  /// @brief Field _conditionText, offset 0x30, size 0x8
  __declspec(property(get = __get__conditionText, put = __set__conditionText))::TMPro::TextMeshProUGUI* _conditionText;

  /// @brief Field _valueText, offset 0x38, size 0x8
  __declspec(property(get = __get__valueText, put = __set__valueText))::TMPro::TextMeshProUGUI* _valueText;

  __declspec(property(put = set_iconColor))::UnityEngine::Color iconColor;

  __declspec(property(put = set_icon))::UnityEngine::Sprite* icon;

  __declspec(property(put = set_iconGlow))::UnityEngine::Sprite* iconGlow;

  __declspec(property(put = set_title))::StringW title;

  __declspec(property(put = set_conditionText))::StringW conditionText;

  __declspec(property(put = set_hideConditionText)) bool hideConditionText;

  __declspec(property(put = set_valueText))::StringW valueText;

  __declspec(property(put = set_hideValueText)) bool hideValueText;

  constexpr ::UnityEngine::UI::Image*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Image*& __get__iconGlow();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__iconGlow() const;

  constexpr void __set__iconGlow(::UnityEngine::UI::Image* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__titleText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__titleText() const;

  constexpr void __set__titleText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__conditionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__conditionText() const;

  constexpr void __set__conditionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__valueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__valueText() const;

  constexpr void __set__valueText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method set_iconColor, addr 0x22e7fc8, size 0x24, virtual false, abstract: false, final false
  inline void set_iconColor(::UnityEngine::Color value);

  /// @brief Method set_icon, addr 0x22e7fec, size 0x1c, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::Sprite* value);

  /// @brief Method set_iconGlow, addr 0x22e8008, size 0x1c, virtual false, abstract: false, final false
  inline void set_iconGlow(::UnityEngine::Sprite* value);

  /// @brief Method set_title, addr 0x22e8024, size 0x24, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method set_conditionText, addr 0x22e8048, size 0x24, virtual false, abstract: false, final false
  inline void set_conditionText(::StringW value);

  /// @brief Method set_hideConditionText, addr 0x22e806c, size 0x34, virtual false, abstract: false, final false
  inline void set_hideConditionText(bool value);

  /// @brief Method set_valueText, addr 0x22e80a0, size 0x24, virtual false, abstract: false, final false
  inline void set_valueText(::StringW value);

  /// @brief Method set_hideValueText, addr 0x22e80c4, size 0x34, virtual false, abstract: false, final false
  inline void set_hideValueText(bool value);

  static inline ::GlobalNamespace::ResultObjectiveListItem* New_ctor();

  /// @brief Method .ctor, addr 0x22e80f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultObjectiveListItem(ResultObjectiveListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultObjectiveListItem(ResultObjectiveListItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultObjectiveListItem();

public:
  /// @brief Field _icon, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____icon;

  /// @brief Field _iconGlow, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____iconGlow;

  /// @brief Field _titleText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____titleText;

  /// @brief Field _conditionText, offset: 0x30, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____conditionText;

  /// @brief Field _valueText, offset: 0x38, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____valueText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultObjectiveListItem, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____icon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____iconGlow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____titleText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____conditionText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultObjectiveListItem, ____valueText) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultObjectiveListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultObjectiveListItem*, "", "ResultObjectiveListItem");
