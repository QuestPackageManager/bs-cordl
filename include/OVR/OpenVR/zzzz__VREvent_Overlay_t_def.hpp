#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Overlay_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Overlay_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Overlay_t);
// Type: OVR.OpenVR::VREvent_Overlay_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VREvent_Overlay_t
struct CORDL_TYPE VREvent_Overlay_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Overlay_t();

  // Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_Overlay_t(uint64_t overlayHandle, uint64_t devicePath) noexcept;

  /// @brief Field overlayHandle, offset: 0x0, size: 0x8, def value: None
  uint64_t overlayHandle;

  /// @brief Field devicePath, offset: 0x8, size: 0x8, def value: None
  uint64_t devicePath;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Overlay_t, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Overlay_t, overlayHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Overlay_t, devicePath) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Overlay_t, "OVR.OpenVR", "VREvent_Overlay_t");
