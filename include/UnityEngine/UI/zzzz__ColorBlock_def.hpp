#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBlock)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ColorBlock;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::ColorBlock);
// Type: UnityEngine.UI::ColorBlock
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13023))
// CS Name: ::UnityEngine.UI::ColorBlock
struct CORDL_TYPE ColorBlock {
public:
  // Declarations
  /// @brief Field defaultColorBlock, offset 0xffffffff, size 0x58
  static __declspec(property(get = getStaticF_defaultColorBlock, put = setStaticF_defaultColorBlock))::UnityEngine::UI::ColorBlock defaultColorBlock;

  __declspec(property(get = get_normalColor, put = set_normalColor))::UnityEngine::Color normalColor;

  __declspec(property(get = get_highlightedColor, put = set_highlightedColor))::UnityEngine::Color highlightedColor;

  __declspec(property(get = get_pressedColor, put = set_pressedColor))::UnityEngine::Color pressedColor;

  __declspec(property(get = get_selectedColor, put = set_selectedColor))::UnityEngine::Color selectedColor;

  __declspec(property(get = get_disabledColor, put = set_disabledColor))::UnityEngine::Color disabledColor;

  __declspec(property(get = get_colorMultiplier, put = set_colorMultiplier)) float_t colorMultiplier;

  __declspec(property(get = get_fadeDuration, put = set_fadeDuration)) float_t fadeDuration;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::ColorBlock>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UI::ColorBlock>*();

  static inline void setStaticF_defaultColorBlock(::UnityEngine::UI::ColorBlock value);

  static inline ::UnityEngine::UI::ColorBlock getStaticF_defaultColorBlock();

  /// @brief Method get_normalColor, addr 0x2d52e14, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_normalColor();

  /// @brief Method set_normalColor, addr 0x2d52e20, size 0xc, virtual false, abstract: false, final false
  inline void set_normalColor(::UnityEngine::Color value);

  /// @brief Method get_highlightedColor, addr 0x2d52e2c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_highlightedColor();

  /// @brief Method set_highlightedColor, addr 0x2d52e38, size 0xc, virtual false, abstract: false, final false
  inline void set_highlightedColor(::UnityEngine::Color value);

  /// @brief Method get_pressedColor, addr 0x2d52e44, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_pressedColor();

  /// @brief Method set_pressedColor, addr 0x2d52e50, size 0xc, virtual false, abstract: false, final false
  inline void set_pressedColor(::UnityEngine::Color value);

  /// @brief Method get_selectedColor, addr 0x2d52e5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedColor();

  /// @brief Method set_selectedColor, addr 0x2d52e68, size 0xc, virtual false, abstract: false, final false
  inline void set_selectedColor(::UnityEngine::Color value);

  /// @brief Method get_disabledColor, addr 0x2d52e74, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_disabledColor();

  /// @brief Method set_disabledColor, addr 0x2d52e80, size 0xc, virtual false, abstract: false, final false
  inline void set_disabledColor(::UnityEngine::Color value);

  /// @brief Method get_colorMultiplier, addr 0x2d52e8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorMultiplier();

  /// @brief Method set_colorMultiplier, addr 0x2d52e94, size 0x8, virtual false, abstract: false, final false
  inline void set_colorMultiplier(float_t value);

  /// @brief Method get_fadeDuration, addr 0x2d52e9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fadeDuration();

  /// @brief Method set_fadeDuration, addr 0x2d52ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_fadeDuration(float_t value);

  /// @brief Method Equals, addr 0x2d52f28, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2d52fb8, size 0x124, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UI::ColorBlock other);

  /// @brief Method op_Equality, addr 0x2d530dc, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UI::ColorBlock point1, ::UnityEngine::UI::ColorBlock point2);

  /// @brief Method op_Inequality, addr 0x2d53110, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UI::ColorBlock point1, ::UnityEngine::UI::ColorBlock point2);

  /// @brief Method GetHashCode, addr 0x2d53148, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_NormalColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_HighlightedColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }, CppParam { name: "m_PressedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_SelectedColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }, CppParam { name: "m_DisabledColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMultiplier", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_FadeDuration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ColorBlock(::UnityEngine::Color m_NormalColor, ::UnityEngine::Color m_HighlightedColor, ::UnityEngine::Color m_PressedColor, ::UnityEngine::Color m_SelectedColor,
                       ::UnityEngine::Color m_DisabledColor, float_t m_ColorMultiplier, float_t m_FadeDuration) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBlock();

  /// @brief Field m_NormalColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color m_NormalColor;

  /// @brief Field m_HighlightedColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color m_HighlightedColor;

  /// @brief Field m_PressedColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color m_PressedColor;

  /// @brief Field m_SelectedColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color m_SelectedColor;

  /// @brief Field m_DisabledColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color m_DisabledColor;

  /// @brief Field m_ColorMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t m_ColorMultiplier;

  /// @brief Field m_FadeDuration, offset: 0x54, size: 0x4, def value: None
  float_t m_FadeDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ColorBlock, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_NormalColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_HighlightedColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_PressedColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_SelectedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_DisabledColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_ColorMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ColorBlock, m_FadeDuration) == 0x54, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ColorBlock, "UnityEngine.UI", "ColorBlock");
