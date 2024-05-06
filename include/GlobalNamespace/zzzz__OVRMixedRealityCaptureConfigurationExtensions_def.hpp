#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureConfigurationExtensions)
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfigurationExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions);
// Type: ::OVRMixedRealityCaptureConfigurationExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMixedRealityCaptureConfigurationExtensions*
class CORDL_TYPE OVRMixedRealityCaptureConfigurationExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyTo, addr 0x2b85fb4, size 0x4, virtual false, abstract: false, final false
  static inline void ApplyTo(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* source);

  /// @brief Method ReadFrom, addr 0x2b85fb8, size 0x1428, virtual false, abstract: false, final false
  static inline void ReadFrom(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* dest, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* source);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureConfigurationExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureConfigurationExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedRealityCaptureConfigurationExtensions(OVRMixedRealityCaptureConfigurationExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureConfigurationExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureConfigurationExtensions(OVRMixedRealityCaptureConfigurationExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureConfigurationExtensions*, "", "OVRMixedRealityCaptureConfigurationExtensions");
