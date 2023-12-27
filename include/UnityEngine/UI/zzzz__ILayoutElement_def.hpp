#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILayoutElement)
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ILayoutElement);
// Type: UnityEngine.UI::ILayoutElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13084))
// CS Name: ::UnityEngine.UI::ILayoutElement*
class CORDL_TYPE ILayoutElement {
public:
  // Declarations
  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Method CalculateLayoutInputHorizontal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method get_minWidth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredWidth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_preferredWidth();

  /// @brief Method get_flexibleWidth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_minHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_minHeight();

  /// @brief Method get_preferredHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_preferredHeight();

  /// @brief Method get_flexibleHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_layoutPriority addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_layoutPriority();

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILayoutElement(ILayoutElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutElement(ILayoutElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ILayoutElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutElement*, "UnityEngine.UI", "ILayoutElement");
