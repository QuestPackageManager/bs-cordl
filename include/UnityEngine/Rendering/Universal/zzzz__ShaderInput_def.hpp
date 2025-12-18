#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInput)
namespace UnityEngine::Rendering::Universal {
struct ShaderInput_LightData;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderInput_ShadowData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderInput;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderInput_LightData;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderInput_ShadowData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderInput);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShaderInput_LightData);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShaderInput_ShadowData);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShaderInput/ShadowData
struct CORDL_TYPE ShaderInput_ShadowData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInput_ShadowData();

  // Ctor Parameters [CppParam { name: "worldToShadowMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "shadowParams", ty: "::UnityEngine::Vector4",
  // modifiers: "", def_value: None }]
  constexpr ShaderInput_ShadowData(::UnityEngine::Matrix4x4 worldToShadowMatrix, ::UnityEngine::Vector4 shadowParams) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23130 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field worldToShadowMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 worldToShadowMatrix;

  /// @brief Field shadowParams, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 shadowParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_ShadowData, worldToShadowMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_ShadowData, shadowParams) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderInput_ShadowData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShaderInput/LightData
struct CORDL_TYPE ShaderInput_LightData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInput_LightData();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "spotDirection", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }, CppParam { name: "occlusionProbeChannels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ShaderInput_LightData(::UnityEngine::Vector4 position, ::UnityEngine::Vector4 color, ::UnityEngine::Vector4 attenuation, ::UnityEngine::Vector4 spotDirection,
                                  ::UnityEngine::Vector4 occlusionProbeChannels, uint32_t layerMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23131 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  /// @brief Field position, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 position;

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 color;

  /// @brief Field attenuation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 attenuation;

  /// @brief Field spotDirection, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 spotDirection;

  /// @brief Field occlusionProbeChannels, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 occlusionProbeChannels;

  /// @brief Field layerMask, offset: 0x50, size: 0x4, def value: None
  uint32_t layerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, attenuation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, spotDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, occlusionProbeChannels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderInput_LightData, layerMask) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderInput_LightData, 0x54>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderInput
class CORDL_TYPE ShaderInput : public ::System::Object {
public:
  // Declarations
  using LightData = ::UnityEngine::Rendering::Universal::ShaderInput_LightData;

  using ShadowData = ::UnityEngine::Rendering::Universal::ShaderInput_ShadowData;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInput(ShaderInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInput(ShaderInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderInput*, "UnityEngine.Rendering.Universal", "ShaderInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderInput_LightData, "UnityEngine.Rendering.Universal", "ShaderInput/LightData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderInput_ShadowData, "UnityEngine.Rendering.Universal", "ShaderInput/ShadowData");
