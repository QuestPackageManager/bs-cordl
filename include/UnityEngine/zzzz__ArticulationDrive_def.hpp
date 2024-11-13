#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationDrive.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ArticulationDriveType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ArticulationDrive)
namespace UnityEngine {
struct ArticulationDriveType;
}
// Forward declare root types
namespace UnityEngine {
struct ArticulationDrive;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationDrive);
// Type: UnityEngine::ArticulationDrive
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ArticulationDrive
struct CORDL_TYPE ArticulationDrive {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationDrive();

  // Ctor Parameters [CppParam { name: "lowerLimit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "upperLimit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "stiffness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "damping", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "forceLimit", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "target", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "targetVelocity", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "driveType", ty: "::UnityEngine::ArticulationDriveType", modifiers: "", def_value: None }]
  constexpr ArticulationDrive(float_t lowerLimit, float_t upperLimit, float_t stiffness, float_t damping, float_t forceLimit, float_t target, float_t targetVelocity,
                              ::UnityEngine::ArticulationDriveType driveType) noexcept;

  /// @brief Field lowerLimit, offset: 0x0, size: 0x4, def value: None
  float_t lowerLimit;

  /// @brief Field upperLimit, offset: 0x4, size: 0x4, def value: None
  float_t upperLimit;

  /// @brief Field stiffness, offset: 0x8, size: 0x4, def value: None
  float_t stiffness;

  /// @brief Field damping, offset: 0xc, size: 0x4, def value: None
  float_t damping;

  /// @brief Field forceLimit, offset: 0x10, size: 0x4, def value: None
  float_t forceLimit;

  /// @brief Field target, offset: 0x14, size: 0x4, def value: None
  float_t target;

  /// @brief Field targetVelocity, offset: 0x18, size: 0x4, def value: None
  float_t targetVelocity;

  /// @brief Field driveType, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::ArticulationDriveType driveType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15695 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationDrive, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, lowerLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, upperLimit) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, stiffness) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, damping) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, forceLimit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, target) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, targetVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDrive, driveType) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationDrive, "UnityEngine", "ArticulationDrive");
