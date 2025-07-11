#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleRotate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleRotate)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleRotate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleRotate);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.IStyleValue`1<T>, UnityEngine.UIElements.Rotate, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleRotate
struct CORDL_TYPE StyleRotate {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityEngine::UIElements::Rotate value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>*();

  /// @brief Method Equals, addr 0x4a86298, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a8621c, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleRotate other);

  /// @brief Method GetHashCode, addr 0x4a86328, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a8634c, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a86188, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x4a86198, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Rotate v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a86180, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a86064, size 0x11c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Rotate get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>* i___System__IEquatable_1___UnityEngine__UIElements__StyleRotate_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Rotate_();

  /// @brief Method op_Equality, addr 0x4a861b0, size 0x5c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleRotate lhs, ::UnityEngine::UIElements::StyleRotate rhs);

  /// @brief Method op_Implicit, addr 0x4a8620c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleRotate op_Implicit___UnityEngine__UIElements__StyleRotate(::UnityEngine::UIElements::StyleKeyword keyword);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleRotate();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleRotate(::UnityEngine::UIElements::Rotate m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6106 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_Value, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Rotate m_Value;

  /// @brief Field m_Keyword, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleRotate, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRotate, m_Keyword) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleRotate, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleRotate, "UnityEngine.UIElements", "StyleRotate");
