#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Property_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Property_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Property_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Property_t);
// Dependencies OVR.OpenVR.ETrackedDeviceProperty
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_Property_t
struct CORDL_TYPE VREvent_Property_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Property_t();

  // Ctor Parameters [CppParam { name: "container", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "prop", ty: "::OVR::OpenVR::ETrackedDeviceProperty", modifiers: "", def_value:
  // None }]
  constexpr VREvent_Property_t(uint64_t container, ::OVR::OpenVR::ETrackedDeviceProperty prop) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field container, offset: 0x0, size: 0x8, def value: None
  uint64_t container;

  /// @brief Field prop, offset: 0x8, size: 0x4, def value: None
  ::OVR::OpenVR::ETrackedDeviceProperty prop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_Property_t, container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Property_t, prop) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Property_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Property_t, "OVR.OpenVR", "VREvent_Property_t");
