#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSpatialAnchors)
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSpatialAnchors;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRSpatialAnchors);
// Type: OVR.OpenVR::CVRSpatialAnchors
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8551))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8578))
// CS Name: ::OVR.OpenVR::CVRSpatialAnchors*
class CORDL_TYPE CVRSpatialAnchors : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x20
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRSpatialAnchors FnTable;

  constexpr ::OVR::OpenVR::IVRSpatialAnchors& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRSpatialAnchors const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRSpatialAnchors value);

  static inline ::OVR::OpenVR::CVRSpatialAnchors* New_ctor(void* pInterface);

  /// @brief Method .ctor, addr 0x27f6020, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(void* pInterface);

  /// @brief Method CreateSpatialAnchorFromDescriptor, addr 0x27f612c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut);

  /// @brief Method CreateSpatialAnchorFromPose, addr 0x27f6154, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose,
                                                                          ByRef<uint32_t> pHandleOut);

  /// @brief Method GetSpatialAnchorPose, addr 0x27f617c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);

  /// @brief Method GetSpatialAnchorDescriptor, addr 0x27f61a0, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut);

  // Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSpatialAnchors(CVRSpatialAnchors&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSpatialAnchors(CVRSpatialAnchors const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSpatialAnchors();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x20, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSpatialAnchors, 0x30>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRSpatialAnchors, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRSpatialAnchors);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSpatialAnchors*, "OVR.OpenVR", "CVRSpatialAnchors");
