#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleTranslate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTranslate)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTranslate);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.IStyleValue`1<T>, UnityEngine.UIElements.StyleKeyword, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleTranslate
struct CORDL_TYPE StyleTranslate {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityEngine::UIElements::Translate value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>*();

  /// @brief Method Equals, addr 0x4a841e0, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a8419c, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleTranslate other);

  /// @brief Method GetHashCode, addr 0x4a84280, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a842a4, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a840d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x4a8408c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Translate v);

  /// @brief Method .ctor, addr 0x4a840b8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Translate v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a84084, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a83f9c, size 0xcc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Translate get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>* i___System__IEquatable_1___UnityEngine__UIElements__StyleTranslate_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Translate_();

  /// @brief Method op_Equality, addr 0x4a840e0, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleTranslate lhs, ::UnityEngine::UIElements::StyleTranslate rhs);

  /// @brief Method op_Implicit, addr 0x4a84174, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTranslate op_Implicit___UnityEngine__UIElements__StyleTranslate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x4a84184, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTranslate op_Implicit___UnityEngine__UIElements__StyleTranslate(::UnityEngine::UIElements::Translate v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleTranslate();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Translate", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleTranslate(::UnityEngine::UIElements::Translate m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6103 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_Value, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Translate m_Value;

  /// @brief Field m_Keyword, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleTranslate, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTranslate, m_Keyword) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTranslate, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTranslate, "UnityEngine.UIElements", "StyleTranslate");
