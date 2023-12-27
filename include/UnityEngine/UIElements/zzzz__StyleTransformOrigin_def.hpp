#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTransformOrigin)
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTransformOrigin);
// Type: UnityEngine.UIElements::StyleTransformOrigin
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7300)), TypeDefinitionIndex(TypeDefinitionIndex(7317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7316))
// CS Name: ::UnityEngine.UIElements::StyleTransformOrigin
struct CORDL_TYPE StyleTransformOrigin {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::UIElements::TransformOrigin value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TransformOrigin>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleTransformOrigin>*();

  /// @brief Method get_value addr 0x2e73024 size 0x40 virtual true final true
  inline ::UnityEngine::UIElements::TransformOrigin get_value();

  /// @brief Method get_keyword addr 0x2e75500 size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2e75508 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2e75514 size 0x18 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::TransformOrigin v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2e7552c size 0x7c virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleTransformOrigin lhs, ::UnityEngine::UIElements::StyleTransformOrigin rhs);

  /// @brief Method op_Implicit addr 0x2e73220 size 0xc virtual false final false
  static inline ::UnityEngine::UIElements::StyleTransformOrigin op_Implicit___UnityEngine__UIElements__StyleTransformOrigin(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method Equals addr 0x2e75608 size 0x8c virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleTransformOrigin other);

  /// @brief Method Equals addr 0x2e75694 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e75724 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e757bc size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleTransformOrigin();

  /// @brief Field m_Value, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::UIElements::TransformOrigin m_Value;

  /// @brief Field m_Keyword, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTransformOrigin, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTransformOrigin, "UnityEngine.UIElements", "StyleTransformOrigin");
