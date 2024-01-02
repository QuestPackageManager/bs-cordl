#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Screenshot_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Screenshot_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Screenshot_t);
// Type: OVR.OpenVR::VREvent_Screenshot_t
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8680))
// CS Name: ::OVR.OpenVR::VREvent_Screenshot_t
struct CORDL_TYPE VREvent_Screenshot_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VREvent_Screenshot_t(uint32_t handle, uint32_t type) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Screenshot_t();

  /// @brief Field handle, offset: 0x0, size: 0x4, def value: None
  uint32_t handle;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  uint32_t type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Screenshot_t, 0x8>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Screenshot_t, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Screenshot_t, type) == 0x4, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Screenshot_t, "OVR.OpenVR", "VREvent_Screenshot_t");
