#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VROverlayTransformType)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayTransformType);
// Type: OVR.OpenVR::VROverlayTransformType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8569))
// CS Name: ::OVR.OpenVR::VROverlayTransformType
struct CORDL_TYPE VROverlayTransformType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VROverlayTransformType_Unwrapped
  enum struct __VROverlayTransformType_Unwrapped : int32_t {
    __E_VROverlayTransform_Absolute = static_cast<int32_t>(0x0),
    __E_VROverlayTransform_TrackedDeviceRelative = static_cast<int32_t>(0x1),
    __E_VROverlayTransform_SystemOverlay = static_cast<int32_t>(0x2),
    __E_VROverlayTransform_TrackedComponent = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VROverlayTransformType_Unwrapped() const noexcept {
    return static_cast<__VROverlayTransformType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VROverlayTransformType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayTransformType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VROverlayTransform_Absolute value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::VROverlayTransformType const VROverlayTransform_Absolute;

  /// @brief Field VROverlayTransform_TrackedDeviceRelative value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::VROverlayTransformType const VROverlayTransform_TrackedDeviceRelative;

  /// @brief Field VROverlayTransform_SystemOverlay value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::VROverlayTransformType const VROverlayTransform_SystemOverlay;

  /// @brief Field VROverlayTransform_TrackedComponent value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::VROverlayTransformType const VROverlayTransform_TrackedComponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayTransformType, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayTransformType, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayTransformType, "OVR.OpenVR", "VROverlayTransformType");
