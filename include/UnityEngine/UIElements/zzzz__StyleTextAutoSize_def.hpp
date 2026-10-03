#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleTextAutoSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextAutoSize_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTextAutoSize)
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
struct TextAutoSize;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTextAutoSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTextAutoSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleTextAutoSize, "UnityEngine.UIElements", "StyleTextAutoSize");
// Dependencies UnityEngine.UIElements.StyleKeyword, UnityEngine.UIElements.TextAutoSize
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleTextAutoSize
struct CORDL_TYPE StyleTextAutoSize {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::TextAutoSize value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTextAutoSize>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextAutoSize>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextAutoSize>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextAutoSize>*();

  /// @brief Method Equals, addr 0x711b9e8, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x711b96c, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleTextAutoSize other);

  /// @brief Method GetHashCode, addr 0x711bac8, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x711baf8, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x711b8b0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x711b880, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextAutoSize v);

  /// @brief Method .ctor, addr 0x711b898, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextAutoSize v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x711b870, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x711b818, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextAutoSize get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTextAutoSize>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextAutoSize>* i___System__IEquatable_1___UnityEngine__UIElements__StyleTextAutoSize_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextAutoSize>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextAutoSize>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__TextAutoSize_();

  /// @brief Method op_Equality, addr 0x711b8c4, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleTextAutoSize lhs, ::UnityEngine::UIElements::StyleTextAutoSize rhs);

  /// @brief Method op_Implicit, addr 0x711b940, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTextAutoSize op_Implicit___UnityEngine__UIElements__StyleTextAutoSize(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x711b954, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleTextAutoSize op_Implicit___UnityEngine__UIElements__StyleTextAutoSize(::UnityEngine::UIElements::TextAutoSize v);

  /// @brief Method set_keyword, addr 0x711b878, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x711b858, size 0x18, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::TextAutoSize value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleTextAutoSize();

  // Ctor Parameters [CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Value", ty:
  // "::UnityEngine::UIElements::TextAutoSize", modifiers: "", def_value: None, comment: None }]
  constexpr StyleTextAutoSize(::UnityEngine::UIElements::StyleKeyword m_Keyword, ::UnityEngine::UIElements::TextAutoSize m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5164 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Keyword, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief Field m_Value, offset: 0x4, size: 0x14, def value: None
  ::UnityEngine::UIElements::TextAutoSize m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleTextAutoSize, m_Keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleTextAutoSize, m_Value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleTextAutoSize) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
