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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13551))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13553))
// CS Name: ::HMUI::TextSegmentedControlCell*
class CORDL_TYPE TextSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x50, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _backgroundGameObject, offset 0x58, size 0x8
  __declspec(property(get = __get__backgroundGameObject, put = __set__backgroundGameObject))::UnityEngine::GameObject* _backgroundGameObject;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(put = set_hideBackgroundImage)) bool hideBackgroundImage;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::GameObject*& __get__backgroundGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__backgroundGameObject() const;

  constexpr void __set__backgroundGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_text addr 0x2120790 size 0x24 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method get_text addr 0x212080c size 0x24 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_fontSize addr 0x2120774 size 0x1c virtual false final false
  inline void set_fontSize(float_t value);

  /// @brief Method get_fontSize addr 0x2120830 size 0x1c virtual false final false
  inline float_t get_fontSize();

  /// @brief Method set_hideBackgroundImage addr 0x21207b4 size 0x24 virtual false final false
  inline void set_hideBackgroundImage(bool value);

  /// @brief Method get_preferredWidth addr 0x21207d8 size 0x24 virtual false final false
  inline float_t get_preferredWidth();

  static inline ::HMUI::TextSegmentedControlCell* New_ctor();

  /// @brief Method .ctor addr 0x212084c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSegmentedControlCell(TextSegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSegmentedControlCell(TextSegmentedControlCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSegmentedControlCell();

public:
  /// @brief Field _text, offset: 0x50, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _backgroundGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____backgroundGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSegmentedControlCell, 0x60>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSegmentedControlCell*, "HMUI", "TextSegmentedControlCell");
