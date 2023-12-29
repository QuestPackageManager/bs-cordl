#pragma once
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
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleLength);
// Type: UnityEngine.UIElements::StyleLength
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(7386))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7384))
// CS Name: ::UnityEngine.UIElements::StyleLength
struct CORDL_TYPE StyleLength {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::UIElements::Length value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>*();

  /// @brief Method get_value addr 0x2d077b0 size 0x18 virtual true final true
  inline ::UnityEngine::UIElements::Length get_value();

  /// @brief Method get_keyword addr 0x2d077c8 size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2d077d0 size 0x2c virtual false final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor addr 0x2d07844 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2d07824 size 0x20 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::Length v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2d07870 size 0x38 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleLength lhs, ::UnityEngine::UIElements::StyleLength rhs);

  /// @brief Method op_Implicit addr 0x2d078d0 size 0xc virtual false final false
  static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit addr 0x2d078dc size 0x28 virtual false final false
  static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(float_t v);

  /// @brief Method Equals addr 0x2d07904 size 0x40 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleLength other);

  /// @brief Method Equals addr 0x2d07944 size 0xa4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d079e8 size 0x30 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2d07a40 size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleLength(::UnityEngine::UIElements::Length m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleLength();

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Value;

  /// @brief Field m_Keyword, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleLength, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleLength, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleLength, m_Keyword) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleLength, "UnityEngine.UIElements", "StyleLength");
