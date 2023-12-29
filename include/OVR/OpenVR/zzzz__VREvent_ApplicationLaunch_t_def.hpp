#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_ApplicationLaunch_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ApplicationLaunch_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_ApplicationLaunch_t);
// Type: OVR.OpenVR::VREvent_ApplicationLaunch_t
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9451))
// CS Name: ::OVR.OpenVR::VREvent_ApplicationLaunch_t
struct CORDL_TYPE VREvent_ApplicationLaunch_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VREvent_ApplicationLaunch_t(uint32_t pid, uint32_t unArgsHandle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_ApplicationLaunch_t();

  /// @brief Field pid, offset: 0x0, size: 0x4, def value: None
  uint32_t pid;

  /// @brief Field unArgsHandle, offset: 0x4, size: 0x4, def value: None
  uint32_t unArgsHandle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_ApplicationLaunch_t, 0x8>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_ApplicationLaunch_t, pid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_ApplicationLaunch_t, unArgsHandle) == 0x4, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ApplicationLaunch_t, "OVR.OpenVR", "VREvent_ApplicationLaunch_t");
