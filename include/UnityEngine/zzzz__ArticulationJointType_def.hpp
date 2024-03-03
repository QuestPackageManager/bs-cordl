#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationJointType)
// Forward declare root types
namespace UnityEngine {
struct ArticulationJointType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationJointType);
// Type: UnityEngine::ArticulationJointType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ArticulationJointType
struct CORDL_TYPE ArticulationJointType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ArticulationJointType_Unwrapped
  enum struct __ArticulationJointType_Unwrapped : int32_t {
    __E_FixedJoint = static_cast<int32_t>(0x0),
    __E_PrismaticJoint = static_cast<int32_t>(0x1),
    __E_RevoluteJoint = static_cast<int32_t>(0x2),
    __E_SphericalJoint = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ArticulationJointType_Unwrapped() const noexcept {
    return static_cast<__ArticulationJointType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationJointType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArticulationJointType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FixedJoint value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ArticulationJointType const FixedJoint;

  /// @brief Field PrismaticJoint value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ArticulationJointType const PrismaticJoint;

  /// @brief Field RevoluteJoint value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ArticulationJointType const RevoluteJoint;

  /// @brief Field SphericalJoint value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ArticulationJointType const SphericalJoint;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationJointType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationJointType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationJointType, "UnityEngine", "ArticulationJointType");
