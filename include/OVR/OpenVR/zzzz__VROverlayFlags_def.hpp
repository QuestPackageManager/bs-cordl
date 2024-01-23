#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VROverlayFlags)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayFlags;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayFlags);
// Type: OVR.OpenVR::VROverlayFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8626))
// CS Name: ::OVR.OpenVR::VROverlayFlags
struct CORDL_TYPE VROverlayFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VROverlayFlags_Unwrapped
  enum struct __VROverlayFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Curved = static_cast<int32_t>(0x1),
    __E_RGSS4X = static_cast<int32_t>(0x2),
    __E_NoDashboardTab = static_cast<int32_t>(0x3),
    __E_AcceptsGamepadEvents = static_cast<int32_t>(0x4),
    __E_ShowGamepadFocus = static_cast<int32_t>(0x5),
    __E_SendVRScrollEvents = static_cast<int32_t>(0x6),
    __E_SendVRTouchpadEvents = static_cast<int32_t>(0x7),
    __E_ShowTouchPadScrollWheel = static_cast<int32_t>(0x8),
    __E_TransferOwnershipToInternalProcess = static_cast<int32_t>(0x9),
    __E_SideBySide_Parallel = static_cast<int32_t>(0xa),
    __E_SideBySide_Crossed = static_cast<int32_t>(0xb),
    __E_Panorama = static_cast<int32_t>(0xc),
    __E_StereoPanorama = static_cast<int32_t>(0xd),
    __E_SortWithNonSceneOverlays = static_cast<int32_t>(0xe),
    __E_VisibleInDashboard = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VROverlayFlags_Unwrapped() const noexcept {
    return static_cast<__VROverlayFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VROverlayFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::VROverlayFlags const None;

  /// @brief Field Curved value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::VROverlayFlags const Curved;

  /// @brief Field RGSS4X value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::VROverlayFlags const RGSS4X;

  /// @brief Field NoDashboardTab value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::VROverlayFlags const NoDashboardTab;

  /// @brief Field AcceptsGamepadEvents value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::VROverlayFlags const AcceptsGamepadEvents;

  /// @brief Field ShowGamepadFocus value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::VROverlayFlags const ShowGamepadFocus;

  /// @brief Field SendVRScrollEvents value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::VROverlayFlags const SendVRScrollEvents;

  /// @brief Field SendVRTouchpadEvents value: static_cast<int32_t>(0x7)
  static ::OVR::OpenVR::VROverlayFlags const SendVRTouchpadEvents;

  /// @brief Field ShowTouchPadScrollWheel value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::VROverlayFlags const ShowTouchPadScrollWheel;

  /// @brief Field TransferOwnershipToInternalProcess value: static_cast<int32_t>(0x9)
  static ::OVR::OpenVR::VROverlayFlags const TransferOwnershipToInternalProcess;

  /// @brief Field SideBySide_Parallel value: static_cast<int32_t>(0xa)
  static ::OVR::OpenVR::VROverlayFlags const SideBySide_Parallel;

  /// @brief Field SideBySide_Crossed value: static_cast<int32_t>(0xb)
  static ::OVR::OpenVR::VROverlayFlags const SideBySide_Crossed;

  /// @brief Field Panorama value: static_cast<int32_t>(0xc)
  static ::OVR::OpenVR::VROverlayFlags const Panorama;

  /// @brief Field StereoPanorama value: static_cast<int32_t>(0xd)
  static ::OVR::OpenVR::VROverlayFlags const StereoPanorama;

  /// @brief Field SortWithNonSceneOverlays value: static_cast<int32_t>(0xe)
  static ::OVR::OpenVR::VROverlayFlags const SortWithNonSceneOverlays;

  /// @brief Field VisibleInDashboard value: static_cast<int32_t>(0xf)
  static ::OVR::OpenVR::VROverlayFlags const VisibleInDashboard;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayFlags, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayFlags, "OVR.OpenVR", "VROverlayFlags");
