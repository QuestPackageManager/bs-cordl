#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackedDeviceClass)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackedDeviceClass);
// Type: OVR.OpenVR::ETrackedDeviceClass
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9353))
// CS Name: ::OVR.OpenVR::ETrackedDeviceClass
struct CORDL_TYPE ETrackedDeviceClass {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ETrackedDeviceClass_Unwrapped
  enum struct __ETrackedDeviceClass_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_HMD = static_cast<int32_t>(0x1),
    __E_Controller = static_cast<int32_t>(0x2),
    __E_GenericTracker = static_cast<int32_t>(0x3),
    __E_TrackingReference = static_cast<int32_t>(0x4),
    __E_DisplayRedirect = static_cast<int32_t>(0x5),
    __E_Max = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ETrackedDeviceClass_Unwrapped() const noexcept {
    return static_cast<__ETrackedDeviceClass_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETrackedDeviceClass(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETrackedDeviceClass();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::ETrackedDeviceClass const Invalid;

  /// @brief Field HMD value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ETrackedDeviceClass const HMD;

  /// @brief Field Controller value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::ETrackedDeviceClass const Controller;

  /// @brief Field GenericTracker value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::ETrackedDeviceClass const GenericTracker;

  /// @brief Field TrackingReference value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::ETrackedDeviceClass const TrackingReference;

  /// @brief Field DisplayRedirect value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::ETrackedDeviceClass const DisplayRedirect;

  /// @brief Field Max value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::ETrackedDeviceClass const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackedDeviceClass, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::ETrackedDeviceClass, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceClass, "OVR.OpenVR", "ETrackedDeviceClass");
