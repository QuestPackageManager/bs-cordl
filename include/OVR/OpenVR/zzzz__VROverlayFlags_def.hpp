#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayFlags.hpp"
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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VROverlayFlags
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VROverlayFlags(int32_t value__) noexcept;

  /// @brief Field AcceptsGamepadEvents value: I32(4)
  static ::OVR::OpenVR::VROverlayFlags const AcceptsGamepadEvents;

  /// @brief Field Curved value: I32(1)
  static ::OVR::OpenVR::VROverlayFlags const Curved;

  /// @brief Field NoDashboardTab value: I32(3)
  static ::OVR::OpenVR::VROverlayFlags const NoDashboardTab;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::VROverlayFlags const None;

  /// @brief Field Panorama value: I32(12)
  static ::OVR::OpenVR::VROverlayFlags const Panorama;

  /// @brief Field RGSS4X value: I32(2)
  static ::OVR::OpenVR::VROverlayFlags const RGSS4X;

  /// @brief Field SendVRScrollEvents value: I32(6)
  static ::OVR::OpenVR::VROverlayFlags const SendVRScrollEvents;

  /// @brief Field SendVRTouchpadEvents value: I32(7)
  static ::OVR::OpenVR::VROverlayFlags const SendVRTouchpadEvents;

  /// @brief Field ShowGamepadFocus value: I32(5)
  static ::OVR::OpenVR::VROverlayFlags const ShowGamepadFocus;

  /// @brief Field ShowTouchPadScrollWheel value: I32(8)
  static ::OVR::OpenVR::VROverlayFlags const ShowTouchPadScrollWheel;

  /// @brief Field SideBySide_Crossed value: I32(11)
  static ::OVR::OpenVR::VROverlayFlags const SideBySide_Crossed;

  /// @brief Field SideBySide_Parallel value: I32(10)
  static ::OVR::OpenVR::VROverlayFlags const SideBySide_Parallel;

  /// @brief Field SortWithNonSceneOverlays value: I32(14)
  static ::OVR::OpenVR::VROverlayFlags const SortWithNonSceneOverlays;

  /// @brief Field StereoPanorama value: I32(13)
  static ::OVR::OpenVR::VROverlayFlags const StereoPanorama;

  /// @brief Field TransferOwnershipToInternalProcess value: I32(9)
  static ::OVR::OpenVR::VROverlayFlags const TransferOwnershipToInternalProcess;

  /// @brief Field VisibleInDashboard value: I32(15)
  static ::OVR::OpenVR::VROverlayFlags const VisibleInDashboard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VROverlayFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayFlags, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayFlags, "OVR.OpenVR", "VROverlayFlags");
