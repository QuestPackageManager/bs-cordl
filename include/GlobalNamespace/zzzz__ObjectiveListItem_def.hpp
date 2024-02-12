#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectiveListItem)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveListItem);
// Type: ::ObjectiveListItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5098))
// CS Name: ::ObjectiveListItem*
class CORDL_TYPE ObjectiveListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _titleText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText))::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  /// @brief Field _conditionText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionText, put = __cordl_internal_set__conditionText))::UnityW<::TMPro::TextMeshProUGUI> _conditionText;

  __declspec(property(put = set_title))::StringW title;

  __declspec(property(put = set_conditionText))::StringW conditionText;

  __declspec(property(put = set_hideCondition)) bool hideCondition;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__conditionText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__conditionText() const;

  constexpr void __cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method set_title, addr 0x2316860, size 0x24, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method set_conditionText, addr 0x2316884, size 0x24, virtual false, abstract: false, final false
  inline void set_conditionText(::StringW value);

  /// @brief Method set_hideCondition, addr 0x23168a8, size 0x34, virtual false, abstract: false, final false
  inline void set_hideCondition(bool value);

  static inline ::GlobalNamespace::ObjectiveListItem* New_ctor();

  /// @brief Method .ctor, addr 0x23168dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectiveListItem(ObjectiveListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectiveListItem(ObjectiveListItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectiveListItem();

public:
  /// @brief Field _titleText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _conditionText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____conditionText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveListItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectiveListItem, ____titleText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectiveListItem, ____conditionText) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItem*, "", "ObjectiveListItem");
