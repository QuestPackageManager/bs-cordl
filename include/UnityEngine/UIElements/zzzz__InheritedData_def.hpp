#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InheritedData)
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct InheritedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::InheritedData);
// Type: UnityEngine.UIElements::InheritedData
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7284)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(7313)),
// TypeDefinitionIndex(TypeDefinitionIndex(6897)), TypeDefinitionIndex(TypeDefinitionIndex(15896)), TypeDefinitionIndex(TypeDefinitionIndex(6896)), TypeDefinitionIndex(TypeDefinitionIndex(6790)),
// TypeDefinitionIndex(TypeDefinitionIndex(15901))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7356)) CS Name: ::UnityEngine.UIElements::InheritedData
struct CORDL_TYPE InheritedData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*();

  /// @brief Method Copy addr 0x2e83514 size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::InheritedData Copy();

  /// @brief Method CopyFrom addr 0x2e83530 size 0x14 virtual true final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::InheritedData> other);

  /// @brief Method op_Equality addr 0x2e83544 size 0x200 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::InheritedData lhs, ::UnityEngine::UIElements::InheritedData rhs);

  /// @brief Method Equals addr 0x2e83744 size 0x4c virtual true final true
  inline bool Equals(::UnityEngine::UIElements::InheritedData other);

  /// @brief Method Equals addr 0x2e83790 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e83838 size 0x24c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "textShadow", ty:
  // "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }, CppParam { name: "unityFont", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name:
  // "unityFontDefinition", ty: "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "unityFontStyleAndWeight", ty: "::UnityEngine::FontStyle", modifiers:
  // "", def_value: None }, CppParam { name: "unityParagraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "unityTextAlign", ty:
  // "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name:
  // "unityTextOutlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "visibility", ty: "::UnityEngine::UIElements::Visibility", modifiers: "", def_value: None }, CppParam {
  // name: "whiteSpace", ty: "::UnityEngine::UIElements::WhiteSpace", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }]
  constexpr InheritedData(::UnityEngine::Color color, ::UnityEngine::UIElements::Length fontSize, ::UnityEngine::UIElements::Length letterSpacing, ::UnityEngine::UIElements::TextShadow textShadow,
                          ::UnityEngine::Font* unityFont, ::UnityEngine::UIElements::FontDefinition unityFontDefinition, ::UnityEngine::FontStyle unityFontStyleAndWeight,
                          ::UnityEngine::UIElements::Length unityParagraphSpacing, ::UnityEngine::TextAnchor unityTextAlign, ::UnityEngine::Color unityTextOutlineColor, float_t unityTextOutlineWidth,
                          ::UnityEngine::UIElements::Visibility visibility, ::UnityEngine::UIElements::WhiteSpace whiteSpace, ::UnityEngine::UIElements::Length wordSpacing) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InheritedData();

  /// @brief Field color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field fontSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length fontSize;

  /// @brief Field letterSpacing, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length letterSpacing;

  /// @brief Field textShadow, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::UIElements::TextShadow textShadow;

  /// @brief Field unityFont, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Font* unityFont;

  /// @brief Field unityFontDefinition, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::UIElements::FontDefinition unityFontDefinition;

  /// @brief Field unityFontStyleAndWeight, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::FontStyle unityFontStyleAndWeight;

  /// @brief Field unityParagraphSpacing, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length unityParagraphSpacing;

  /// @brief Field unityTextAlign, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::TextAnchor unityTextAlign;

  /// @brief Field unityTextOutlineColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color unityTextOutlineColor;

  /// @brief Field unityTextOutlineWidth, offset: 0x78, size: 0x4, def value: None
  float_t unityTextOutlineWidth;

  /// @brief Field visibility, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::UIElements::Visibility visibility;

  /// @brief Field whiteSpace, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::UIElements::WhiteSpace whiteSpace;

  /// @brief Field wordSpacing, offset: 0x84, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length wordSpacing;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InheritedData, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InheritedData, "UnityEngine.UIElements", "InheritedData");
