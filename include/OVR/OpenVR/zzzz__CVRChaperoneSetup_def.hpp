#pragma once
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
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EChaperoneConfigFile;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperoneSetup;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRChaperoneSetup);
// Type: OVR.OpenVR::CVRChaperoneSetup
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8563))
// CS Name: ::OVR.OpenVR::CVRChaperoneSetup*
class CORDL_TYPE CVRChaperoneSetup : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0xa0
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRChaperoneSetup FnTable;

  constexpr ::OVR::OpenVR::IVRChaperoneSetup& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRChaperoneSetup const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRChaperoneSetup value);

  static inline ::OVR::OpenVR::CVRChaperoneSetup* New_ctor(void* pInterface);

  /// @brief Method .ctor, addr 0x27f2b44, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(void* pInterface);

  /// @brief Method CommitWorkingCopy, addr 0x27f2c58, size 0x24, virtual false, abstract: false, final false
  inline bool CommitWorkingCopy(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method RevertWorkingCopy, addr 0x27f2c7c, size 0x24, virtual false, abstract: false, final false
  inline void RevertWorkingCopy();

  /// @brief Method GetWorkingPlayAreaSize, addr 0x27f2ca0, size 0x2c, virtual false, abstract: false, final false
  inline bool GetWorkingPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ);

  /// @brief Method GetWorkingPlayAreaRect, addr 0x27f2ccc, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  /// @brief Method GetWorkingCollisionBoundsInfo, addr 0x27f2cf0, size 0xa8, virtual false, abstract: false, final false
  inline bool GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method GetLiveCollisionBoundsInfo, addr 0x27f2d98, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLiveCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method GetWorkingSeatedZeroPoseToRawTrackingPose, addr 0x27f2e40, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method GetWorkingStandingZeroPoseToRawTrackingPose, addr 0x27f2e64, size 0x24, virtual false, abstract: false, final false
  inline bool GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose);

  /// @brief Method SetWorkingPlayAreaSize, addr 0x27f2e88, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ);

  /// @brief Method SetWorkingCollisionBoundsInfo, addr 0x27f2eac, size 0x2c, virtual false, abstract: false, final false
  inline void SetWorkingCollisionBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer);

  /// @brief Method SetWorkingSeatedZeroPoseToRawTrackingPose, addr 0x27f2ed8, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method SetWorkingStandingZeroPoseToRawTrackingPose, addr 0x27f2efc, size 0x24, virtual false, abstract: false, final false
  inline void SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose);

  /// @brief Method ReloadFromDisk, addr 0x27f2f20, size 0x24, virtual false, abstract: false, final false
  inline void ReloadFromDisk(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method GetLiveSeatedZeroPoseToRawTrackingPose, addr 0x27f2f44, size 0x24, virtual false, abstract: false, final false
  inline bool GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method SetWorkingCollisionBoundsTagsInfo, addr 0x27f2f68, size 0x2c, virtual false, abstract: false, final false
  inline void SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> pTagsBuffer);

  /// @brief Method GetLiveCollisionBoundsTagsInfo, addr 0x27f2f94, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer);

  /// @brief Method SetWorkingPhysicalBoundsInfo, addr 0x27f303c, size 0x2c, virtual false, abstract: false, final false
  inline bool SetWorkingPhysicalBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer);

  /// @brief Method GetLivePhysicalBoundsInfo, addr 0x27f3068, size 0xa8, virtual false, abstract: false, final false
  inline bool GetLivePhysicalBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer);

  /// @brief Method ExportLiveToBuffer, addr 0x27f3110, size 0x28, virtual false, abstract: false, final false
  inline bool ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ByRef<uint32_t> pnBufferLength);

  /// @brief Method ImportFromBufferToWorking, addr 0x27f3138, size 0x24, virtual false, abstract: false, final false
  inline bool ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags);

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRChaperoneSetup(CVRChaperoneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRChaperoneSetup(CVRChaperoneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRChaperoneSetup();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0xa0, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRChaperoneSetup, 0xb0>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRChaperoneSetup, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRChaperoneSetup);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRChaperoneSetup*, "OVR.OpenVR", "CVRChaperoneSetup");
