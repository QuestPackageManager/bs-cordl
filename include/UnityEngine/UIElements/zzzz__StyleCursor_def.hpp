#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleCursor)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace System {
template <typename T> class IEquatable_1;
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
// Type: UnityEngine.UIElements::StyleCursor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7386)), TypeDefinitionIndex(TypeDefinitionIndex(6894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7378))
// CS Name: ::UnityEngine.UIElements::StyleCursor
struct CORDL_TYPE StyleCursor {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::UIElements::Cursor value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>*();

  /// @brief Method get_value addr 0x2d06354 size 0x44 virtual true final true
  inline ::UnityEngine::UIElements::Cursor get_value();

  /// @brief Method get_keyword addr 0x2d06398 size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2d063a0 size 0x10 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2d063b0 size 0x18 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::Cursor v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2d063c8 size 0x60 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleCursor lhs, ::UnityEngine::UIElements::StyleCursor rhs);

  /// @brief Method op_Implicit addr 0x2d06428 size 0x10 virtual false final false
  static inline ::UnityEngine::UIElements::StyleCursor op_Implicit___UnityEngine__UIElements__StyleCursor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method Equals addr 0x2d06438 size 0x80 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleCursor other);

  /// @brief Method Equals addr 0x2d064b8 size 0x88 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d06540 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2d06568 size 0x80 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleCursor(::UnityEngine::UIElements::Cursor m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleCursor();

  /// @brief Field m_Value, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Cursor m_Value;

  /// @brief Field m_Keyword, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleCursor, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleCursor, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleCursor, m_Keyword) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleCursor, "UnityEngine.UIElements", "StyleCursor");
