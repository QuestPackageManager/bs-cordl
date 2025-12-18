#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/DepthFrameDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DepthFrameDesc)
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
struct DepthFrameDesc;
}
// Write type traits
MARK_VAL_T(::Meta::XR::EnvironmentDepth::DepthFrameDesc);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Meta::XR::EnvironmentDepth {
// Is value type: true
// CS Name: Meta.XR.EnvironmentDepth.DepthFrameDesc
struct CORDL_TYPE DepthFrameDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthFrameDesc();

  // Ctor Parameters [CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "fovLeftAngleTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovRightAngleTangent", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "fovTopAngleTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovDownAngleTangent", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }]
  constexpr DepthFrameDesc(::UnityEngine::Vector3 createPoseLocation, ::UnityEngine::Quaternion createPoseRotation, float_t fovLeftAngleTangent, float_t fovRightAngleTangent,
                           float_t fovTopAngleTangent, float_t fovDownAngleTangent, float_t nearZ, float_t farZ) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field createPoseLocation, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 createPoseLocation;

  /// @brief Field createPoseRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion createPoseRotation;

  /// @brief Field fovLeftAngleTangent, offset: 0x1c, size: 0x4, def value: None
  float_t fovLeftAngleTangent;

  /// @brief Field fovRightAngleTangent, offset: 0x20, size: 0x4, def value: None
  float_t fovRightAngleTangent;

  /// @brief Field fovTopAngleTangent, offset: 0x24, size: 0x4, def value: None
  float_t fovTopAngleTangent;

  /// @brief Field fovDownAngleTangent, offset: 0x28, size: 0x4, def value: None
  float_t fovDownAngleTangent;

  /// @brief Field nearZ, offset: 0x2c, size: 0x4, def value: None
  float_t nearZ;

  /// @brief Field farZ, offset: 0x30, size: 0x4, def value: None
  float_t farZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, createPoseLocation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, createPoseRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, fovLeftAngleTangent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, fovRightAngleTangent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, fovTopAngleTangent) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, fovDownAngleTangent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, nearZ) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::DepthFrameDesc, farZ) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::EnvironmentDepth::DepthFrameDesc, 0x34>, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::EnvironmentDepth::DepthFrameDesc, "Meta.XR.EnvironmentDepth", "DepthFrameDesc");
