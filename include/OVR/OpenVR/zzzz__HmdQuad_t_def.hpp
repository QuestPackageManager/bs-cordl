#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdQuad_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuad_t)
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuad_t);
// Type: OVR.OpenVR::HmdQuad_t
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::HmdQuad_t
struct CORDL_TYPE HmdQuad_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdQuad_t();

  // Ctor Parameters [CppParam { name: "vCorners0", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners1", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "",
  // def_value: None }, CppParam { name: "vCorners2", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners3", ty: "::OVR::OpenVR::HmdVector3_t", modifiers:
  // "", def_value: None }]
  constexpr HmdQuad_t(::OVR::OpenVR::HmdVector3_t vCorners0, ::OVR::OpenVR::HmdVector3_t vCorners1, ::OVR::OpenVR::HmdVector3_t vCorners2, ::OVR::OpenVR::HmdVector3_t vCorners3) noexcept;

  /// @brief Field vCorners0, offset: 0x0, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vCorners0;

  /// @brief Field vCorners1, offset: 0xc, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vCorners1;

  /// @brief Field vCorners2, offset: 0x18, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vCorners2;

  /// @brief Field vCorners3, offset: 0x24, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vCorners3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuad_t, 0x30>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuad_t, vCorners0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuad_t, vCorners1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuad_t, vCorners2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuad_t, vCorners3) == 0x24, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuad_t, "OVR.OpenVR", "HmdQuad_t");
