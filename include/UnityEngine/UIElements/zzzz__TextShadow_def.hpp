#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextShadow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
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
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextShadow);
// Dependencies System.IEquatable`1<T>, UnityEngine.Color, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextShadow
struct CORDL_TYPE TextShadow {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*();

  /// @brief Method Equals, addr 0x4a9b554, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a9b5e4, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TextShadow other);

  /// @brief Method GetHashCode, addr 0x4a9b660, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LerpUnclamped, addr 0x4a9b8a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t);

  /// @brief Method ToString, addr 0x4a9b7b0, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>* i___System__IEquatable_1___UnityEngine__UIElements__TextShadow_();

  /// @brief Method op_Equality, addr 0x4a9b738, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  /// @brief Method op_Inequality, addr 0x4a9b768, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextShadow();

  // Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "blurRadius", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr TextShadow(::UnityEngine::Vector2 offset, float_t blurRadius, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6208 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field offset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 offset;

  /// @brief Field blurRadius, offset: 0x8, size: 0x4, def value: None
  float_t blurRadius;

  /// @brief Field color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextShadow, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextShadow, blurRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextShadow, color) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextShadow, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
