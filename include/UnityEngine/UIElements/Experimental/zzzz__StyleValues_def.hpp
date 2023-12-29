#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValues)
namespace UnityEngine::UIElements {
class StyleValueCollection;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Experimental::StyleValues);
// Type: UnityEngine.UIElements.Experimental::StyleValues
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7540))
// CS Name: ::UnityEngine.UIElements.Experimental::StyleValues
struct CORDL_TYPE StyleValues {
public:
  // Declarations
  __declspec(property(put = set_top)) float_t top;

  __declspec(property(put = set_left)) float_t left;

  __declspec(property(put = set_width)) float_t width;

  __declspec(property(put = set_height)) float_t height;

  __declspec(property(put = set_right)) float_t right;

  __declspec(property(put = set_bottom)) float_t bottom;

  __declspec(property(put = set_color))::UnityEngine::Color color;

  __declspec(property(put = set_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(put = set_unityBackgroundImageTintColor))::UnityEngine::Color unityBackgroundImageTintColor;

  __declspec(property(put = set_borderColor))::UnityEngine::Color borderColor;

  __declspec(property(put = set_marginLeft)) float_t marginLeft;

  __declspec(property(put = set_marginTop)) float_t marginTop;

  __declspec(property(put = set_marginRight)) float_t marginRight;

  __declspec(property(put = set_marginBottom)) float_t marginBottom;

  __declspec(property(put = set_paddingLeft)) float_t paddingLeft;

  __declspec(property(get = get_paddingTop, put = set_paddingTop)) float_t paddingTop;

  __declspec(property(put = set_paddingRight)) float_t paddingRight;

  __declspec(property(put = set_paddingBottom)) float_t paddingBottom;

  __declspec(property(put = set_borderLeftWidth)) float_t borderLeftWidth;

  __declspec(property(put = set_borderRightWidth)) float_t borderRightWidth;

  __declspec(property(put = set_borderTopWidth)) float_t borderTopWidth;

  __declspec(property(put = set_borderBottomWidth)) float_t borderBottomWidth;

  __declspec(property(put = set_borderTopLeftRadius)) float_t borderTopLeftRadius;

  __declspec(property(put = set_borderTopRightRadius)) float_t borderTopRightRadius;

  __declspec(property(put = set_borderBottomLeftRadius)) float_t borderBottomLeftRadius;

  __declspec(property(put = set_borderBottomRightRadius)) float_t borderBottomRightRadius;

  __declspec(property(put = set_opacity)) float_t opacity;

  __declspec(property(put = set_flexGrow)) float_t flexGrow;

  __declspec(property(put = set_flexShrink)) float_t flexShrink;

  /// @brief Method set_top addr 0x2c7d27c size 0xc virtual false final false
  inline void set_top(float_t value);

  /// @brief Method set_left addr 0x2c7d30c size 0xc virtual false final false
  inline void set_left(float_t value);

  /// @brief Method set_width addr 0x2c7d318 size 0xc virtual false final false
  inline void set_width(float_t value);

  /// @brief Method set_height addr 0x2c7d324 size 0xc virtual false final false
  inline void set_height(float_t value);

  /// @brief Method set_right addr 0x2c7d330 size 0xc virtual false final false
  inline void set_right(float_t value);

  /// @brief Method set_bottom addr 0x2c7d33c size 0xc virtual false final false
  inline void set_bottom(float_t value);

  /// @brief Method set_color addr 0x2c7d348 size 0x8 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor addr 0x2c7d3d4 size 0x8 virtual false final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_unityBackgroundImageTintColor addr 0x2c7d3dc size 0xc virtual false final false
  inline void set_unityBackgroundImageTintColor(::UnityEngine::Color value);

  /// @brief Method set_borderColor addr 0x2c7d3e8 size 0xc virtual false final false
  inline void set_borderColor(::UnityEngine::Color value);

  /// @brief Method set_marginLeft addr 0x2c7d3f4 size 0xc virtual false final false
  inline void set_marginLeft(float_t value);

  /// @brief Method set_marginTop addr 0x2c7d400 size 0xc virtual false final false
  inline void set_marginTop(float_t value);

  /// @brief Method set_marginRight addr 0x2c7d40c size 0xc virtual false final false
  inline void set_marginRight(float_t value);

  /// @brief Method set_marginBottom addr 0x2c7d418 size 0xc virtual false final false
  inline void set_marginBottom(float_t value);

  /// @brief Method set_paddingLeft addr 0x2c7d424 size 0xc virtual false final false
  inline void set_paddingLeft(float_t value);

  /// @brief Method get_paddingTop addr 0x2c7d430 size 0x3c virtual false final false
  inline float_t get_paddingTop();

  /// @brief Method set_paddingTop addr 0x2c7d4d8 size 0xc virtual false final false
  inline void set_paddingTop(float_t value);

  /// @brief Method set_paddingRight addr 0x2c7d4e4 size 0xc virtual false final false
  inline void set_paddingRight(float_t value);

  /// @brief Method set_paddingBottom addr 0x2c7d4f0 size 0xc virtual false final false
  inline void set_paddingBottom(float_t value);

  /// @brief Method set_borderLeftWidth addr 0x2c7d4fc size 0xc virtual false final false
  inline void set_borderLeftWidth(float_t value);

  /// @brief Method set_borderRightWidth addr 0x2c7d508 size 0xc virtual false final false
  inline void set_borderRightWidth(float_t value);

  /// @brief Method set_borderTopWidth addr 0x2c7d514 size 0xc virtual false final false
  inline void set_borderTopWidth(float_t value);

  /// @brief Method set_borderBottomWidth addr 0x2c7d520 size 0xc virtual false final false
  inline void set_borderBottomWidth(float_t value);

  /// @brief Method set_borderTopLeftRadius addr 0x2c7d52c size 0xc virtual false final false
  inline void set_borderTopLeftRadius(float_t value);

  /// @brief Method set_borderTopRightRadius addr 0x2c7d538 size 0xc virtual false final false
  inline void set_borderTopRightRadius(float_t value);

  /// @brief Method set_borderBottomLeftRadius addr 0x2c7d544 size 0xc virtual false final false
  inline void set_borderBottomLeftRadius(float_t value);

  /// @brief Method set_borderBottomRightRadius addr 0x2c7d550 size 0xc virtual false final false
  inline void set_borderBottomRightRadius(float_t value);

  /// @brief Method set_opacity addr 0x2c7d55c size 0xc virtual false final false
  inline void set_opacity(float_t value);

  /// @brief Method set_flexGrow addr 0x2c7d568 size 0xc virtual false final false
  inline void set_flexGrow(float_t value);

  /// @brief Method set_flexShrink addr 0x2c7d574 size 0xc virtual false final false
  inline void set_flexShrink(float_t value);

  /// @brief Method SetValue addr 0x2c7d288 size 0x84 virtual false final false
  inline void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t value);

  /// @brief Method SetValue addr 0x2c7d350 size 0x84 virtual false final false
  inline void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color value);

  /// @brief Method Values addr 0x2c7d46c size 0x6c virtual false final false
  inline ::UnityEngine::UIElements::StyleValueCollection* Values();

  // Ctor Parameters [CppParam { name: "m_StyleValues", ty: "::UnityEngine::UIElements::StyleValueCollection*", modifiers: "", def_value: None }]
  constexpr StyleValues(::UnityEngine::UIElements::StyleValueCollection* m_StyleValues) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValues();

  /// @brief Field m_StyleValues, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleValueCollection* m_StyleValues;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::StyleValues, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::StyleValues, m_StyleValues) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Experimental
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::StyleValues, "UnityEngine.UIElements.Experimental", "StyleValues");
