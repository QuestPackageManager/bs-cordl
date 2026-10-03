#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleScale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleScale)
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
struct Scale;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleScale;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleScale);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleScale, "UnityEngine.UIElements", "StyleScale");
// Dependencies UnityEngine.UIElements.Scale, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleScale
struct CORDL_TYPE StyleScale {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::Scale value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>*();

  /// @brief Method Equals, addr 0x710a198, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x710a134, size 0x64, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleScale other);

  /// @brief Method GetHashCode, addr 0x710a25c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x710a280, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x710a0ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x710a094, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Scale v);

  /// @brief Method .ctor, addr 0x710a0a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Scale v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x710a084, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x7109fe8, size 0x90, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Scale get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>* i___System__IEquatable_1___UnityEngine__UIElements__StyleScale_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Scale_();

  /// @brief Method op_Equality, addr 0x710a0b8, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleScale lhs, ::UnityEngine::UIElements::StyleScale rhs);

  /// @brief Method op_Implicit, addr 0x710a11c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleScale op_Implicit___UnityEngine__UIElements__StyleScale(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x710a128, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleScale op_Implicit___UnityEngine__UIElements__StyleScale(::UnityEngine::UIElements::Scale v);

  /// @brief Method set_keyword, addr 0x710a08c, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x710a078, size 0xc, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::Scale value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleScale();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Scale", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None, comment: None }]
  constexpr StyleScale(::UnityEngine::UIElements::Scale m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// [SerializeField]
  /// @brief Field m_Value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::Scale m_Value;

  /// [SerializeField]
  /// @brief Field m_Keyword, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleScale, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleScale, m_Keyword) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleScale) == 0x14, "Size mismatch!");

} // namespace UnityEngine::UIElements
