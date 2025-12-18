#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightProbeSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbeSystem)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightProbeSystem;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightProbeSystem);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightProbeSystem
struct CORDL_TYPE LightProbeSystem {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightProbeSystem_Unwrapped
  enum struct __LightProbeSystem_Unwrapped : int32_t {
    __E_LegacyLightProbes = static_cast<int32_t>(0x0),
    __E_ProbeVolumes = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightProbeSystem_Unwrapped() const noexcept {
    return static_cast<__LightProbeSystem_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeSystem();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightProbeSystem(int32_t value__) noexcept;

  /// @brief Field LegacyLightProbes value: I32(0)
  static ::UnityEngine::Rendering::Universal::LightProbeSystem const LegacyLightProbes;

  /// @brief Field ProbeVolumes value: I32(1)
  static ::UnityEngine::Rendering::Universal::LightProbeSystem const ProbeVolumes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightProbeSystem, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightProbeSystem, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightProbeSystem, "UnityEngine.Rendering.Universal", "LightProbeSystem");
