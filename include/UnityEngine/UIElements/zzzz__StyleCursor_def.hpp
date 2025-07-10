#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleCursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleCursor)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleCursor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleCursor);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.Cursor, UnityEngine.UIElements.IStyleValue`1<T>, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleCursor
struct CORDL_TYPE StyleCursor {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityEngine::UIElements::Cursor value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>*();

  /// @brief Method Equals, addr 0x4a855b4, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a85534, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleCursor other);

  /// @brief Method GetHashCode, addr 0x4a8563c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a85664, size 0x80, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a8549c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x4a854ac, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Cursor v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a85494, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a85454, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Cursor get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>* i___System__IEquatable_1___UnityEngine__UIElements__StyleCursor_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Cursor_();

  /// @brief Method op_Equality, addr 0x4a854c4, size 0x60, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleCursor lhs, ::UnityEngine::UIElements::StyleCursor rhs);

  /// @brief Method op_Implicit, addr 0x4a85524, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleCursor op_Implicit___UnityEngine__UIElements__StyleCursor(::UnityEngine::UIElements::StyleKeyword keyword);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleCursor();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleCursor(::UnityEngine::UIElements::Cursor m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Value, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Cursor m_Value;

  /// @brief Field m_Keyword, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleCursor, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleCursor, m_Keyword) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleCursor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleCursor, "UnityEngine.UIElements", "StyleCursor");
