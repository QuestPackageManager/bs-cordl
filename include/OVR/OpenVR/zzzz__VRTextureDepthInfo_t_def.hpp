#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRTextureDepthInfo_t)
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureDepthInfo_t);
// Type: OVR.OpenVR::VRTextureDepthInfo_t
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8646)), TypeDefinitionIndex(TypeDefinitionIndex(8650)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8661))
// CS Name: ::OVR.OpenVR::VRTextureDepthInfo_t
struct CORDL_TYPE VRTextureDepthInfo_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "handle", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "mProjection", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None },
  // CppParam { name: "vRange", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }]
  constexpr VRTextureDepthInfo_t(void* handle, ::OVR::OpenVR::HmdMatrix44_t mProjection, ::OVR::OpenVR::HmdVector2_t vRange) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextureDepthInfo_t();

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  void* handle;

  /// @brief Field mProjection, offset: 0x8, size: 0x40, def value: None
  ::OVR::OpenVR::HmdMatrix44_t mProjection;

  /// @brief Field vRange, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vRange;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureDepthInfo_t, 0x50>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureDepthInfo_t, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureDepthInfo_t, mProjection) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureDepthInfo_t, vRange) == 0x48, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureDepthInfo_t, "OVR.OpenVR", "VRTextureDepthInfo_t");
