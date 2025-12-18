#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackgroundRepeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleBackgroundRepeat)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleBackgroundRepeat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleBackgroundRepeat);
// Dependencies UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleBackgroundRepeat
struct CORDL_TYPE StyleBackgroundRepeat {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::BackgroundRepeat value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundRepeat>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundRepeat>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundRepeat>*();

  /// @brief Method Equals, addr 0x6ac6eac, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac6e88, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleBackgroundRepeat other);

  /// @brief Method GetHashCode, addr 0x6ac6f38, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ac6f64, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac6e6c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac54f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundRepeat v);

  /// @brief Method .ctor, addr 0x6ac6e60, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundRepeat v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x6ac6e50, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x6ac6e20, size 0x24, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundRepeat get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundRepeat>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundRepeat>* i___System__IEquatable_1___UnityEngine__UIElements__StyleBackgroundRepeat_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundRepeat>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__BackgroundRepeat_();

  /// @brief Method op_Equality, addr 0x6ac6e78, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleBackgroundRepeat lhs, ::UnityEngine::UIElements::StyleBackgroundRepeat rhs);

  /// @brief Method op_Implicit, addr 0x6ac5504, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleBackgroundRepeat op_Implicit___UnityEngine__UIElements__StyleBackgroundRepeat(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method set_keyword, addr 0x6ac6e58, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x6ac6e44, size 0xc, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::BackgroundRepeat value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleBackgroundRepeat();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleBackgroundRepeat(::UnityEngine::UIElements::BackgroundRepeat m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4964 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::BackgroundRepeat m_Value;

  /// @brief Field m_Keyword, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundRepeat, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundRepeat, m_Keyword) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleBackgroundRepeat, 0xc>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleBackgroundRepeat, "UnityEngine.UIElements", "StyleBackgroundRepeat");
