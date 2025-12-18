#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InheritedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InheritedData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct InheritedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::InheritedData);
// Dependencies UnityEngine.Color, UnityEngine.FontStyle, UnityEngine.TextAnchor, UnityEngine.TextGeneratorType, UnityEngine.UIElements.EditorTextRenderingMode, UnityEngine.UIElements.FontDefinition,
// UnityEngine.UIElements.Length, UnityEngine.UIElements.TextShadow, UnityEngine.UIElements.Visibility, UnityEngine.UIElements.WhiteSpace
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.InheritedData
struct CORDL_TYPE InheritedData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*();

  /// @brief Method Copy, addr 0x6ac2788, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::InheritedData Copy();

  /// @brief Method CopyFrom, addr 0x6ac2798, size 0x8, virtual true, abstract: false, final true
  inline void CopyFrom(::ByRef<::UnityEngine::UIElements::InheritedData> other);

  /// @brief Method Equals, addr 0x6ac2a94, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac2a48, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::InheritedData other);

  /// @brief Method GetHashCode, addr 0x6ac2b38, size 0x2b4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>* i___System__IEquatable_1___UnityEngine__UIElements__InheritedData_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__InheritedData_();

  /// @brief Method op_Equality, addr 0x6ac27a0, size 0x288, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::InheritedData lhs, ::UnityEngine::UIElements::InheritedData rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InheritedData();

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "textShadow", ty:
  // "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }, CppParam { name: "unityEditorTextRenderingMode", ty: "::UnityEngine::UIElements::EditorTextRenderingMode", modifiers:
  // "", def_value: None }, CppParam { name: "unityFont", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None }, CppParam { name: "unityFontDefinition", ty:
  // "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "unityFontStyleAndWeight", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None },
  // CppParam { name: "unityParagraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "unityTextAlign", ty: "::UnityEngine::TextAnchor", modifiers:
  // "", def_value: None }, CppParam { name: "unityTextGenerator", ty: "::UnityEngine::TextGeneratorType", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineColor", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "visibility", ty:
  // "::UnityEngine::UIElements::Visibility", modifiers: "", def_value: None }, CppParam { name: "whiteSpace", ty: "::UnityEngine::UIElements::WhiteSpace", modifiers: "", def_value: None }, CppParam {
  // name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
  constexpr InheritedData(::UnityEngine::Color color, ::UnityEngine::UIElements::Length fontSize, ::UnityEngine::UIElements::Length letterSpacing, ::UnityEngine::UIElements::TextShadow textShadow,
                          ::UnityEngine::UIElements::EditorTextRenderingMode unityEditorTextRenderingMode, ::UnityW<::UnityEngine::Font> unityFont,
                          ::UnityEngine::UIElements::FontDefinition unityFontDefinition, ::UnityEngine::FontStyle unityFontStyleAndWeight, ::UnityEngine::UIElements::Length unityParagraphSpacing,
                          ::UnityEngine::TextAnchor unityTextAlign, ::UnityEngine::TextGeneratorType unityTextGenerator, ::UnityEngine::Color unityTextOutlineColor, float_t unityTextOutlineWidth,
                          ::UnityEngine::UIElements::Visibility visibility, ::UnityEngine::UIElements::WhiteSpace whiteSpace, ::UnityEngine::UIElements::Length wordSpacing) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field fontSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length fontSize;

  /// @brief Field letterSpacing, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length letterSpacing;

  /// @brief Field textShadow, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::UIElements::TextShadow textShadow;

  /// @brief Field unityEditorTextRenderingMode, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::UIElements::EditorTextRenderingMode unityEditorTextRenderingMode;

  /// @brief Field unityFont, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> unityFont;

  /// @brief Field unityFontDefinition, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::UIElements::FontDefinition unityFontDefinition;

  /// @brief Field unityFontStyleAndWeight, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::FontStyle unityFontStyleAndWeight;

  /// @brief Field unityParagraphSpacing, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length unityParagraphSpacing;

  /// @brief Field unityTextAlign, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::TextAnchor unityTextAlign;

  /// @brief Field unityTextGenerator, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::TextGeneratorType unityTextGenerator;

  /// @brief Field unityTextOutlineColor, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Color unityTextOutlineColor;

  /// @brief Field unityTextOutlineWidth, offset: 0x7c, size: 0x4, def value: None
  float_t unityTextOutlineWidth;

  /// @brief Field visibility, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::UIElements::Visibility visibility;

  /// @brief Field whiteSpace, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::UIElements::WhiteSpace whiteSpace;

  /// @brief Field wordSpacing, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length wordSpacing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::InheritedData, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, fontSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, letterSpacing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, textShadow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityEditorTextRenderingMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityFont) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityFontDefinition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityFontStyleAndWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityParagraphSpacing) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityTextAlign) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityTextGenerator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityTextOutlineColor) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, unityTextOutlineWidth) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, visibility) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, whiteSpace) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InheritedData, wordSpacing) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InheritedData, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InheritedData, "UnityEngine.UIElements", "InheritedData");
