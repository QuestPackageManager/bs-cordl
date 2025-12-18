#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackground.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleBackground)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleBackground;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleBackground);
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleBackground
struct CORDL_TYPE StyleBackground {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::Background value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>*();

  /// @brief Method Equals, addr 0x6ac6a7c, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac6a2c, size 0x50, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleBackground other);

  /// @brief Method GetHashCode, addr 0x6ac6b24, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ac6b4c, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac69bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac6954, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* v);

  /// @brief Method .ctor, addr 0x6ac5394, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac6920, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* v);

  /// @brief Method .ctor, addr 0x6ac5354, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac69cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Background v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac6988, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VectorImage* v);

  /// @brief Method .ctor, addr 0x6ac53d4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VectorImage* v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x6ac6910, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x6ac68d0, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Background get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>* i___System__IEquatable_1___UnityEngine__UIElements__StyleBackground_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Background_();

  /// @brief Method op_Equality, addr 0x6ac69dc, size 0x50, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleBackground lhs, ::UnityEngine::UIElements::StyleBackground rhs);

  /// @brief Method op_Implicit, addr 0x6ac5414, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleBackground op_Implicit___UnityEngine__UIElements__StyleBackground(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method set_keyword, addr 0x6ac6918, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x6ac6900, size 0x10, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::Background value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleBackground();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Background", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleBackground(::UnityEngine::UIElements::Background m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Value, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background m_Value;

  /// @brief Field m_Keyword, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleBackground, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleBackground, m_Keyword) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleBackground, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleBackground, "UnityEngine.UIElements", "StyleBackground");
