#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReflectionProbeType);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReflectionProbeType
struct CORDL_TYPE ReflectionProbeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbeType_Unwrapped
  enum struct __ReflectionProbeType_Unwrapped : int32_t {
    __E_Cube = static_cast<int32_t>(0x0),
    __E_Card = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbeType_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbeType(int32_t value__) noexcept;

  /// @brief Field Card value: I32(1)
  static ::UnityEngine::Rendering::ReflectionProbeType const Card;

  /// @brief Field Cube value: I32(0)
  static ::UnityEngine::Rendering::ReflectionProbeType const Cube;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11198 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReflectionProbeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReflectionProbeType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeType, "UnityEngine.Rendering", "ReflectionProbeType");
