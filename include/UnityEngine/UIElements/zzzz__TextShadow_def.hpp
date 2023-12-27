#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextShadow)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextShadow);
// Type: UnityEngine.UIElements::TextShadow
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6790))
// CS Name: ::UnityEngine.UIElements::TextShadow
struct CORDL_TYPE TextShadow {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*();

  /// @brief Method Equals addr 0x2dba92c size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2dba9bc size 0x80 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::TextShadow other);

  /// @brief Method GetHashCode addr 0x2dbaa3c size 0xd8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2dbab14 size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  /// @brief Method op_Inequality addr 0x2dbab44 size 0x48 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  /// @brief Method ToString addr 0x2dbab8c size 0xf4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method LerpUnclamped addr 0x2dbac80 size 0x58 virtual false final false
  static inline ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t);

  // Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "blurRadius", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr TextShadow(::UnityEngine::Vector2 offset, float_t blurRadius, ::UnityEngine::Color color) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextShadow();

  /// @brief Field offset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 offset;

  /// @brief Field blurRadius, offset: 0x8, size: 0x4, def value: None
  float_t blurRadius;

  /// @brief Field color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextShadow, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
