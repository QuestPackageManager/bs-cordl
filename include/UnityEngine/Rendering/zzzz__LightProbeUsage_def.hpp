#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightProbeUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbeUsage)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LightProbeUsage);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LightProbeUsage
struct CORDL_TYPE LightProbeUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightProbeUsage_Unwrapped
  enum struct __LightProbeUsage_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_BlendProbes = static_cast<int32_t>(0x1),
    __E_UseProxyVolume = static_cast<int32_t>(0x2),
    __E_CustomProvided = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightProbeUsage_Unwrapped() const noexcept {
    return static_cast<__LightProbeUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightProbeUsage(int32_t value__) noexcept;

  /// @brief Field BlendProbes value: I32(1)
  static ::UnityEngine::Rendering::LightProbeUsage const BlendProbes;

  /// @brief Field CustomProvided value: I32(4)
  static ::UnityEngine::Rendering::LightProbeUsage const CustomProvided;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::Rendering::LightProbeUsage const Off;

  /// @brief Field UseProxyVolume value: I32(2)
  static ::UnityEngine::Rendering::LightProbeUsage const UseProxyVolume;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11207 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LightProbeUsage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LightProbeUsage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightProbeUsage, "UnityEngine.Rendering", "LightProbeUsage");
