#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSpatialAnchors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSpatialAnchors)
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSpatialAnchors;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRSpatialAnchors*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRSpatialAnchors*, "OVR.OpenVR", "CVRSpatialAnchors");
// Dependencies OVR.OpenVR.IVRSpatialAnchors, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSpatialAnchors
class CORDL_TYPE CVRSpatialAnchors : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRSpatialAnchors FnTable;

  /// @brief Method CreateSpatialAnchorFromDescriptor, addr 0x5e458d8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ::by_ref<uint32_t> pHandleOut);

  /// @brief Method CreateSpatialAnchorFromPose, addr 0x5e458fc, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPose,
                                                                          ::by_ref<uint32_t> pHandleOut);

  /// @brief Method GetSpatialAnchorDescriptor, addr 0x5e45940, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ::by_ref<uint32_t> punDescriptorBufferLenInOut);

  /// @brief Method GetSpatialAnchorPose, addr 0x5e45920, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);

  static inline ::OVR::OpenVR::CVRSpatialAnchors* New_ctor(::System::IntPtr pInterface);

  constexpr ::OVR::OpenVR::IVRSpatialAnchors const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRSpatialAnchors& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRSpatialAnchors value);

  /// @brief Method .ctor, addr 0x5e457e4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSpatialAnchors();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSpatialAnchors(CVRSpatialAnchors&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSpatialAnchors(CVRSpatialAnchors const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8367 };

  /// @brief Field FnTable, offset: 0x10, size: 0x20, def value: None
  ::OVR::OpenVR::IVRSpatialAnchors ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRSpatialAnchors, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRSpatialAnchors) == 0x30, "Size mismatch!");

} // namespace OVR::OpenVR
