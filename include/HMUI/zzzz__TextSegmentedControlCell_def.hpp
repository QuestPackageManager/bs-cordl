#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextSegmentedControlCell)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControlCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextSegmentedControlCell);
// Type: HMUI::TextSegmentedControlCell
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TextSegmentedControlCell*
class CORDL_TYPE TextSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
  // Declarations
  /// @brief Field _backgroundGameObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundGameObject, put = __cordl_internal_set__backgroundGameObject))::UnityW<::UnityEngine::GameObject> _backgroundGameObject;

  /// @brief Field _text, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(put = set_hideBackgroundImage)) bool hideBackgroundImage;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  static inline ::HMUI::TextSegmentedControlCell* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__backgroundGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__backgroundGameObject();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__backgroundGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x24029b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fontSize, addr 0x2402998, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_fontSize();

  /// @brief Method get_preferredWidth, addr 0x2402940, size 0x24, virtual false, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_text, addr 0x2402974, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_fontSize, addr 0x24028dc, size 0x1c, virtual false, abstract: false, final false
  inline void set_fontSize(float_t value);

  /// @brief Method set_hideBackgroundImage, addr 0x240291c, size 0x24, virtual false, abstract: false, final false
  inline void set_hideBackgroundImage(bool value);

  /// @brief Method set_text, addr 0x24028f8, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSegmentedControlCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSegmentedControlCell(TextSegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSegmentedControlCell(TextSegmentedControlCell const&) = delete;

  /// @brief Field _text, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _backgroundGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____backgroundGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSegmentedControlCell, 0x60>, "Size mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControlCell, ____text) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControlCell, ____backgroundGameObject) == 0x58, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSegmentedControlCell*, "HMUI", "TextSegmentedControlCell");
