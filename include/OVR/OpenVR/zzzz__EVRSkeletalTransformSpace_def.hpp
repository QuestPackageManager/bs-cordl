#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSkeletalTransformSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSkeletalTransformSpace)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSkeletalTransformSpace);
// Type: OVR.OpenVR::EVRSkeletalTransformSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRSkeletalTransformSpace
struct CORDL_TYPE EVRSkeletalTransformSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRSkeletalTransformSpace_Unwrapped
  enum struct __EVRSkeletalTransformSpace_Unwrapped : int32_t {
    __E_Model = static_cast<int32_t>(0x0),
    __E_Parent = static_cast<int32_t>(0x1),
    __E_Additive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRSkeletalTransformSpace_Unwrapped() const noexcept {
    return static_cast<__EVRSkeletalTransformSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRSkeletalTransformSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRSkeletalTransformSpace(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Additive value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRSkeletalTransformSpace const Additive;

  /// @brief Field Model value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRSkeletalTransformSpace const Model;

  /// @brief Field Parent value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRSkeletalTransformSpace const Parent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSkeletalTransformSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRSkeletalTransformSpace, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSkeletalTransformSpace, "OVR.OpenVR", "EVRSkeletalTransformSpace");
