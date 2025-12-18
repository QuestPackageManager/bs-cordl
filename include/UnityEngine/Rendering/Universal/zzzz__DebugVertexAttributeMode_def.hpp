#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugVertexAttributeMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugVertexAttributeMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugVertexAttributeMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugVertexAttributeMode
struct CORDL_TYPE DebugVertexAttributeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugVertexAttributeMode_Unwrapped
  enum struct __DebugVertexAttributeMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Texcoord0 = static_cast<int32_t>(0x1),
    __E_Texcoord1 = static_cast<int32_t>(0x2),
    __E_Texcoord2 = static_cast<int32_t>(0x3),
    __E_Texcoord3 = static_cast<int32_t>(0x4),
    __E_Color = static_cast<int32_t>(0x5),
    __E_Tangent = static_cast<int32_t>(0x6),
    __E_Normal = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugVertexAttributeMode_Unwrapped() const noexcept {
    return static_cast<__DebugVertexAttributeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugVertexAttributeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugVertexAttributeMode(int32_t value__) noexcept;

  /// @brief Field Color value: I32(5)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Color;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const None;

  /// @brief Field Normal value: I32(7)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Normal;

  /// @brief Field Tangent value: I32(6)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Tangent;

  /// @brief Field Texcoord0 value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Texcoord0;

  /// @brief Field Texcoord1 value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Texcoord1;

  /// @brief Field Texcoord2 value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Texcoord2;

  /// @brief Field Texcoord3 value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const Texcoord3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugVertexAttributeMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode, "UnityEngine.Rendering.Universal", "DebugVertexAttributeMode");
