#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTranslate)
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
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTranslate);
// Type: UnityEngine.UIElements::StyleTranslate
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7300)), TypeDefinitionIndex(TypeDefinitionIndex(7302))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7291))
// CS Name: ::UnityEngine.UIElements::StyleTranslate
struct CORDL_TYPE StyleTranslate {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::UIElements::Translate value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>*();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Translate>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Translate_();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleTranslate>* i___System__IEquatable_1___UnityEngine__UIElements__StyleTranslate_();

  /// @brief Method get_value, addr 0x2e6f32c, size 0x44, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Translate get_value();

  /// @brief Method get_keyword, addr 0x2e6f370, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor, addr 0x2e6f378, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Translate v);

  /// @brief Method .ctor, addr 0x2e6f3b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x2e6f3a0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Translate v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality, addr 0x2e6f3c8, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleTranslate lhs, ::UnityEngine::UIElements::StyleTranslate rhs);

  /// @brief Method op_Implicit, addr 0x2e6f4d8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTranslate op_Implicit___UnityEngine__UIElements__StyleTranslate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x2e6f4e8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTranslate op_Implicit___UnityEngine__UIElements__StyleTranslate(::UnityEngine::UIElements::Translate v);

  /// @brief Method Equals, addr 0x2e6f500, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleTranslate other);

  /// @brief Method Equals, addr 0x2e6f544, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2e6f5e4, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2e6f67c, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Translate", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleTranslate(::UnityEngine::UIElements::Translate m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleTranslate();

  /// @brief Field m_Value, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Translate m_Value;

  /// @brief Field m_Keyword, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTranslate, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTranslate, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTranslate, m_Keyword) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTranslate, "UnityEngine.UIElements", "StyleTranslate");
