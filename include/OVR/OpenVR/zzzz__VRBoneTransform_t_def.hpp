#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector4_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRBoneTransform_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRBoneTransform_t);
// Dependencies OVR.OpenVR.HmdQuaternionf_t, OVR.OpenVR.HmdVector4_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VRBoneTransform_t
struct CORDL_TYPE VRBoneTransform_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRBoneTransform_t();

  // Ctor Parameters [CppParam { name: "position", ty: "::OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::OVR::OpenVR::HmdQuaternionf_t",
  // modifiers: "", def_value: None }]
  constexpr VRBoneTransform_t(::OVR::OpenVR::HmdVector4_t position, ::OVR::OpenVR::HmdQuaternionf_t orientation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field position, offset: 0x0, size: 0x10, def value: None
  ::OVR::OpenVR::HmdVector4_t position;

  /// @brief Field orientation, offset: 0x10, size: 0x10, def value: None
  ::OVR::OpenVR::HmdQuaternionf_t orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VRBoneTransform_t, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRBoneTransform_t, orientation) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRBoneTransform_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
