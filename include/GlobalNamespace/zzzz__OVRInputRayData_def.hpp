#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInputRayData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRInputRayData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInputRayData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInputRayData);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInputRayData
struct CORDL_TYPE OVRInputRayData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInputRayData();

  // Ctor Parameters [CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ActivationStrength", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "IsOverCanvas", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DistanceToCanvas", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "WorldPosition", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "WorldNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr OVRInputRayData(bool IsActive, float_t ActivationStrength, bool IsOverCanvas, float_t DistanceToCanvas, ::UnityEngine::Vector3 WorldPosition, ::UnityEngine::Vector3 WorldNormal) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field IsActive, offset: 0x0, size: 0x1, def value: None
  bool IsActive;

  /// @brief Field ActivationStrength, offset: 0x4, size: 0x4, def value: None
  float_t ActivationStrength;

  /// @brief Field IsOverCanvas, offset: 0x8, size: 0x1, def value: None
  bool IsOverCanvas;

  /// @brief Field DistanceToCanvas, offset: 0xc, size: 0x4, def value: None
  float_t DistanceToCanvas;

  /// @brief Field WorldPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 WorldPosition;

  /// @brief Field WorldNormal, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 WorldNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInputRayData, IsActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInputRayData, ActivationStrength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInputRayData, IsOverCanvas) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInputRayData, DistanceToCanvas) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInputRayData, WorldPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInputRayData, WorldNormal) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInputRayData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInputRayData, "", "OVRInputRayData");
