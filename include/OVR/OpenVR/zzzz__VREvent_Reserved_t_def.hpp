#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Reserved_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Reserved_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Reserved_t);
// Type: OVR.OpenVR::VREvent_Reserved_t
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VREvent_Reserved_t
struct CORDL_TYPE VREvent_Reserved_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Reserved_t();

  // Ctor Parameters [CppParam { name: "reserved0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "reserved2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved3", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_Reserved_t(uint64_t reserved0, uint64_t reserved1, uint64_t reserved2, uint64_t reserved3) noexcept;

  /// @brief Field reserved0, offset: 0x0, size: 0x8, def value: None
  uint64_t reserved0;

  /// @brief Field reserved1, offset: 0x8, size: 0x8, def value: None
  uint64_t reserved1;

  /// @brief Field reserved2, offset: 0x10, size: 0x8, def value: None
  uint64_t reserved2;

  /// @brief Field reserved3, offset: 0x18, size: 0x8, def value: None
  uint64_t reserved3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Reserved_t, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Reserved_t, reserved0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Reserved_t, reserved1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Reserved_t, reserved2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Reserved_t, reserved3) == 0x18, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Reserved_t, "OVR.OpenVR", "VREvent_Reserved_t");
