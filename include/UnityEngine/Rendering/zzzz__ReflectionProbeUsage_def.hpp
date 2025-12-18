#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeUsage)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReflectionProbeUsage);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReflectionProbeUsage
struct CORDL_TYPE ReflectionProbeUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbeUsage_Unwrapped
  enum struct __ReflectionProbeUsage_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_BlendProbes = static_cast<int32_t>(0x1),
    __E_BlendProbesAndSkybox = static_cast<int32_t>(0x2),
    __E_Simple = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbeUsage_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbeUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbeUsage(int32_t value__) noexcept;

  /// @brief Field BlendProbes value: I32(1)
  static ::UnityEngine::Rendering::ReflectionProbeUsage const BlendProbes;

  /// @brief Field BlendProbesAndSkybox value: I32(2)
  static ::UnityEngine::Rendering::ReflectionProbeUsage const BlendProbesAndSkybox;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Rendering::ReflectionProbeUsage const Off;

  /// @brief Field Simple value: I32(3)
  static ::UnityEngine::Rendering::ReflectionProbeUsage const Simple;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReflectionProbeUsage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReflectionProbeUsage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeUsage, "UnityEngine.Rendering", "ReflectionProbeUsage");
