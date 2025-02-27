#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleFont.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleFont)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleFont;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleFont);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.IStyleValue`1<T>, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleFont
struct CORDL_TYPE StyleFont {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityW<::UnityEngine::Font> value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>*();

  /// @brief Method Equals, addr 0x4a9211c, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a92108, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleFont other);

  /// @brief Method GetHashCode, addr 0x4a92198, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a92230, size 0x80, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a9205c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Font* v);

  /// @brief Method .ctor, addr 0x4a92068, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Font* v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a92054, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a9203c, size 0x18, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Font> get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>* i___System__IEquatable_1___UnityEngine__UIElements__StyleFont_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>* i___UnityEngine__UIElements__IStyleValue_1___UnityW___UnityEngine__Font__();

  /// @brief Method op_Equality, addr 0x4a92074, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleFont lhs, ::UnityEngine::UIElements::StyleFont rhs);

  /// @brief Method op_Implicit, addr 0x4a92100, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleFont op_Implicit___UnityEngine__UIElements__StyleFont(::UnityEngine::Font* v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleFont();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword",
  // modifiers: "", def_value: None }]
  constexpr StyleFont(::UnityW<::UnityEngine::Font> m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> m_Value;

  /// @brief Field m_Keyword, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleFont, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleFont, m_Keyword) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleFont, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleFont, "UnityEngine.UIElements", "StyleFont");
