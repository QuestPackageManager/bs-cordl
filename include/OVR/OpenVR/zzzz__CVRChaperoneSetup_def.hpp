#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRChaperoneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRChaperoneSetup)
namespace OVR::OpenVR {
struct EChaperoneConfigFile;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperoneSetup;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRChaperoneSetup);
// Type: OVR.OpenVR::CVRChaperoneSetup
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVRChaperoneSetup*
class CORDL_TYPE CVRChaperoneSetup : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0xa0
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRChaperoneSetup FnTable;

  /// @brief Method CommitWorkingCopy, addr 0x4011cd4, size 0x24, virtual false, abstract: false, final false
  inline bool CommitWorkingCopy(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method ExportLiveToBuffer, addr 0x401218c, size 0x28, virtual false, abstract: false, final false
  inline bool ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ByRef<uint32_t> pnBufferLength);

  /// @brief Method GetLiveCollisionBoundsInfo, addr 0x4011e14, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLiveCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method GetLiveCollisionBoundsTagsInfo, addr 0x4012010, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer);

  /// @brief Method GetLivePhysicalBoundsInfo, addr 0x40120e4, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLivePhysicalBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method GetLiveSeatedZeroPoseToRawTrackingPose, addr 0x4011fc0, size 0x24, virtual false, abstract: false, final false
  inline bool GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method GetWorkingCollisionBoundsInfo, addr 0x4011d6c, size 0xa8, virtual false, abstract: false, final false
  inline bool GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method GetWorkingPlayAreaRect, addr 0x4011d48, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  /// @brief Method GetWorkingPlayAreaSize, addr 0x4011d1c, size 0x2c, virtual false, abstract: false, final false
  inline bool GetWorkingPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ);

  /// @brief Method GetWorkingSeatedZeroPoseToRawTrackingPose, addr 0x4011ebc, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method GetWorkingStandingZeroPoseToRawTrackingPose, addr 0x4011ee0, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose);

  /// @brief Method ImportFromBufferToWorking, addr 0x40121b4, size 0x24, virtual false, abstract: false, final false
  inline bool ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags);

  static inline ::OVR::OpenVR::CVRChaperoneSetup* New_ctor(::System::IntPtr pInterface);

  /// @brief Method ReloadFromDisk, addr 0x4011f9c, size 0x24, virtual false, abstract: false, final false
  inline void ReloadFromDisk(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method RevertWorkingCopy, addr 0x4011cf8, size 0x24, virtual false, abstract: false, final false
  inline void RevertWorkingCopy();

  /// @brief Method SetWorkingCollisionBoundsInfo, addr 0x4011f28, size 0x2c, virtual false, abstract: false, final false
  inline void SetWorkingCollisionBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer);

  /// @brief Method SetWorkingCollisionBoundsTagsInfo, addr 0x4011fe4, size 0x2c, virtual false, abstract: false, final false
  inline void SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> pTagsBuffer);

  /// @brief Method SetWorkingPhysicalBoundsInfo, addr 0x40120b8, size 0x2c, virtual false, abstract: false, final false
  inline bool SetWorkingPhysicalBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer);

  /// @brief Method SetWorkingPlayAreaSize, addr 0x4011f04, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ);

  /// @brief Method SetWorkingSeatedZeroPoseToRawTrackingPose, addr 0x4011f54, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method SetWorkingStandingZeroPoseToRawTrackingPose, addr 0x4011f78, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose);

  constexpr ::OVR::OpenVR::IVRChaperoneSetup const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRChaperoneSetup& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRChaperoneSetup value);

  /// @brief Method .ctor, addr 0x4011bc0, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRChaperoneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRChaperoneSetup(CVRChaperoneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRChaperoneSetup(CVRChaperoneSetup const&) = delete;

  /// @brief Field FnTable, offset: 0x10, size: 0xa0, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup ___FnTable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRChaperoneSetup, 0xb0>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRChaperoneSetup, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRChaperoneSetup);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRChaperoneSetup*, "OVR.OpenVR", "CVRChaperoneSetup");
