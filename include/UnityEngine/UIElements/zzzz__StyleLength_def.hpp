#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleLength.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleLength)
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
struct Length;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleLength);
// Dependencies UnityEngine.UIElements.Length, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleLength
struct CORDL_TYPE StyleLength {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::Length value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>*();

  /// @brief Method Equals, addr 0x6ac811c, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac80e0, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleLength other);

  /// @brief Method GetHashCode, addr 0x6ac81c0, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ac81f0, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac8068, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac8048, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length v);

  /// @brief Method .ctor, addr 0x6ac4f3c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x6ac8020, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method get_keyword, addr 0x6ac7fe4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x6ac7f9c, size 0x28, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Length get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>* i___System__IEquatable_1___UnityEngine__UIElements__StyleLength_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Length_();

  /// @brief Method op_Equality, addr 0x6ac8074, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleLength lhs, ::UnityEngine::UIElements::StyleLength rhs);

  /// @brief Method op_Implicit, addr 0x6ac4f5c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x6ac80cc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(::UnityEngine::UIElements::Length v);

  /// @brief Method op_Implicit, addr 0x6ac80a8, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(float_t v);

  /// @brief Method set_keyword, addr 0x6ac7fec, size 0x34, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x6ac7fc4, size 0x20, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::Length value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleLength();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleLength(::UnityEngine::UIElements::Length m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Value;

  /// @brief Field m_Keyword, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleLength, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleLength, m_Keyword) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleLength, 0xc>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleLength, "UnityEngine.UIElements", "StyleLength");
