#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_t_Packed)
namespace OVR::OpenVR {
struct VREvent_Data_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_t_Packed);
// Type: OVR.OpenVR::VREvent_t_Packed
// SizeInfo { instance_size: 44, native_size: 44, calculated_instance_size: 44, calculated_native_size: 60, minimum_alignment: 4, natural_alignment: 8, packing: Some(4), specified_packing: Some(4) }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8586))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8637))
// CS Name: ::OVR.OpenVR::VREvent_t_Packed
#pragma pack(push, 4)
struct CORDL_TYPE VREvent_t_Packed {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2803f04, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::OVR::OpenVR::VREvent_t unpacked);

  /// @brief Method Unpack, addr 0x27fe880, size 0x20, virtual false, abstract: false, final false
  inline void Unpack(ByRef<::OVR::OpenVR::VREvent_t> unpacked);

  // Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: None }]
  constexpr VREvent_t_Packed(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_t_Packed();

  /// @brief Field eventType, offset: 0x0, size: 0x4, def value: None
  uint32_t eventType;

  /// @brief Field trackedDeviceIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t trackedDeviceIndex;

  /// @brief Field eventAgeSeconds, offset: 0x8, size: 0x4, def value: None
  float_t eventAgeSeconds;

  /// @brief Field data, offset: 0xc, size: 0x20, def value: None
  ::OVR::OpenVR::VREvent_Data_t data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_t_Packed, 0x2c>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t_Packed, eventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t_Packed, trackedDeviceIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t_Packed, eventAgeSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t_Packed, data) == 0xc, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_t_Packed, "OVR.OpenVR", "VREvent_t_Packed");
