#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector4_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRBoneTransform_t)
namespace OVR::OpenVR {
struct HmdVector4_t;
}
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRBoneTransform_t);
// Type: OVR.OpenVR::VRBoneTransform_t
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8648)), TypeDefinitionIndex(TypeDefinitionIndex(8652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8699))
// CS Name: ::OVR.OpenVR::VRBoneTransform_t
struct CORDL_TYPE VRBoneTransform_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "position", ty: "::OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::OVR::OpenVR::HmdQuaternionf_t",
  // modifiers: "", def_value: None }]
  constexpr VRBoneTransform_t(::OVR::OpenVR::HmdVector4_t position, ::OVR::OpenVR::HmdQuaternionf_t orientation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRBoneTransform_t();

  /// @brief Field position, offset: 0x0, size: 0x10, def value: None
  ::OVR::OpenVR::HmdVector4_t position;

  /// @brief Field orientation, offset: 0x10, size: 0x10, def value: None
  ::OVR::OpenVR::HmdQuaternionf_t orientation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRBoneTransform_t, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRBoneTransform_t, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRBoneTransform_t, orientation) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
