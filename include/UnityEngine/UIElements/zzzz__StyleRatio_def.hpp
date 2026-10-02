#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleRatio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Ratio_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleRatio)
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
struct Ratio;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleRatio;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleRatio);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleRatio, "UnityEngine.UIElements", "StyleRatio");
// Dependencies UnityEngine.UIElements.Ratio, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleRatio
struct CORDL_TYPE StyleRatio {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::Ratio value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleRatio>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleRatio>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Ratio>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Ratio>*();

  /// @brief Method Auto, addr 0x71099b8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleRatio Auto();

  /// @brief Method Equals, addr 0x7109a9c, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7109a4c, size 0x50, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleRatio other);

  /// @brief Method GetHashCode, addr 0x7109b50, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAuto, addr 0x71099c4, size 0x10, virtual false, abstract: false, final false
  inline bool IsAuto();

  /// @brief Method ToString, addr 0x7109b74, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x71099ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x7105364, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Ratio value);

  /// @brief Method .ctor, addr 0x71099a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Ratio value, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x710998c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x7109964, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Ratio get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleRatio>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleRatio>* i___System__IEquatable_1___UnityEngine__UIElements__StyleRatio_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Ratio>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Ratio>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Ratio_();

  /// @brief Method op_Equality, addr 0x7109a00, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleRatio lhs, ::UnityEngine::UIElements::StyleRatio rhs);

  /// @brief Method op_Implicit, addr 0x71099e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Ratio op_Implicit___UnityEngine__UIElements__Ratio(::UnityEngine::UIElements::StyleRatio value);

  /// @brief Method op_Implicit, addr 0x71099dc, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleRatio op_Implicit___UnityEngine__UIElements__StyleRatio(::UnityEngine::UIElements::Ratio value);

  /// @brief Method op_Implicit, addr 0x7105370, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleRatio op_Implicit___UnityEngine__UIElements__StyleRatio(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method op_Implicit, addr 0x71099d4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleRatio op_Implicit___UnityEngine__UIElements__StyleRatio(float_t value);

  /// @brief Method set_keyword, addr 0x7109994, size 0xc, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x7109980, size 0xc, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::Ratio value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleRatio();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Ratio", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None, comment: None }]
  constexpr StyleRatio(::UnityEngine::UIElements::Ratio m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5047 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::Ratio m_Value;

  /// @brief Field m_Keyword, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleRatio, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRatio, m_Keyword) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleRatio) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
