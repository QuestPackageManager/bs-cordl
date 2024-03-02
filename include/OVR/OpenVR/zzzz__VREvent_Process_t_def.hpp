#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Process_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Process_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Process_t);
// Type: OVR.OpenVR::VREvent_Process_t
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 25, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VREvent_Process_t
struct CORDL_TYPE VREvent_Process_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Process_t();

  // Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "oldPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bForced",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr VREvent_Process_t(uint32_t pid, uint32_t oldPid, bool bForced) noexcept;

  /// @brief Field pid, offset: 0x0, size: 0x4, def value: None
  uint32_t pid;

  /// @brief Field oldPid, offset: 0x4, size: 0x4, def value: None
  uint32_t oldPid;

  /// @brief Field bForced, offset: 0x8, size: 0x1, def value: None
  bool bForced;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Process_t, 0xc>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Process_t, pid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Process_t, oldPid) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Process_t, bForced) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Process_t, "OVR.OpenVR", "VREvent_Process_t");
