#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugProbeShadingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugProbeShadingMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugProbeShadingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugProbeShadingMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugProbeShadingMode
struct CORDL_TYPE DebugProbeShadingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugProbeShadingMode_Unwrapped
  enum struct __DebugProbeShadingMode_Unwrapped : int32_t {
    __E_SH = static_cast<int32_t>(0x0),
    __E_SHL0 = static_cast<int32_t>(0x1),
    __E_SHL0L1 = static_cast<int32_t>(0x2),
    __E_Validity = static_cast<int32_t>(0x3),
    __E_ValidityOverDilationThreshold = static_cast<int32_t>(0x4),
    __E_RenderingLayerMasks = static_cast<int32_t>(0x5),
    __E_InvalidatedByAdjustmentVolumes = static_cast<int32_t>(0x6),
    __E_Size = static_cast<int32_t>(0x7),
    __E_SkyOcclusionSH = static_cast<int32_t>(0x8),
    __E_SkyDirection = static_cast<int32_t>(0x9),
    __E_ProbeOcclusion = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugProbeShadingMode_Unwrapped() const noexcept {
    return static_cast<__DebugProbeShadingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugProbeShadingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugProbeShadingMode(int32_t value__) noexcept;

  /// @brief Field InvalidatedByAdjustmentVolumes value: I32(6)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const InvalidatedByAdjustmentVolumes;

  /// @brief Field ProbeOcclusion value: I32(10)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const ProbeOcclusion;

  /// @brief Field RenderingLayerMasks value: I32(5)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const RenderingLayerMasks;

  /// @brief Field SH value: I32(0)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const SH;

  /// @brief Field SHL0 value: I32(1)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const SHL0;

  /// @brief Field SHL0L1 value: I32(2)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const SHL0L1;

  /// @brief Field Size value: I32(7)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const Size;

  /// @brief Field SkyDirection value: I32(9)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const SkyDirection;

  /// @brief Field SkyOcclusionSH value: I32(8)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const SkyOcclusionSH;

  /// @brief Field Validity value: I32(3)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const Validity;

  /// @brief Field ValidityOverDilationThreshold value: I32(4)
  static ::UnityEngine::Rendering::DebugProbeShadingMode const ValidityOverDilationThreshold;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugProbeShadingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugProbeShadingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugProbeShadingMode, "UnityEngine.Rendering", "DebugProbeShadingMode");
