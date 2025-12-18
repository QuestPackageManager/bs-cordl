#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleColor)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleColor);
// Dependencies UnityEngine.Color, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleColor
struct CORDL_TYPE StyleColor {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Color value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*();

  /// @brief Method Equals, addr 0x6ac741c, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac73c4, size 0x58, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleColor other);

  /// @brief Method GetHashCode, addr 0x6ac74b0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ac752c, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac7350, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac7340, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color v);

  /// @brief Method .ctor, addr 0x6ac50d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x6ac7330, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x6ac72f8, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>* i___System__IEquatable_1___UnityEngine__UIElements__StyleColor_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__Color_();

  /// @brief Method op_Equality, addr 0x6ac735c, size 0x58, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleColor lhs, ::UnityEngine::UIElements::StyleColor rhs);

  /// @brief Method op_Implicit, addr 0x6ac50e0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x6ac73b4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::Color v);

  /// @brief Method set_keyword, addr 0x6ac7338, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x6ac7320, size 0x10, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::Color value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleColor();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers:
  // "", def_value: None }]
  constexpr StyleColor(::UnityEngine::Color m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4966 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_Value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color m_Value;

  /// @brief Field m_Keyword, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleColor, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleColor, m_Keyword) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleColor, 0x14>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleColor, "UnityEngine.UIElements", "StyleColor");
