#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRInput)
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRInputError;
}
namespace OVR::OpenVR {
struct EVRSkeletalMotionRange;
}
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRInput;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRInput*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRInput*, "OVR.OpenVR", "CVRInput");
// Dependencies OVR.OpenVR.IVRInput, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRInput
class CORDL_TYPE CVRInput : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x90
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRInput FnTable;

  /// @brief Method DecompressSkeletalBoneData, addr 0x5e45538, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError DecompressSkeletalBoneData(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                 ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray);

  /// @brief Method GetActionHandle, addr 0x5e453e8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetActionHandle(::StringW pchActionName, ::by_ref<uint64_t> pHandle);

  /// @brief Method GetActionOrigins, addr 0x5e45584, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t> originsOut);

  /// @brief Method GetActionSetHandle, addr 0x5e453c4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetActionSetHandle(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle);

  /// @brief Method GetAnalogActionData, addr 0x5e4547c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetAnalogActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetDigitalActionData, addr 0x5e4545c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetDigitalActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetInputSourceHandle, addr 0x5e4540c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetInputSourceHandle(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle);

  /// @brief Method GetOriginLocalizedName, addr 0x5e455b0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize);

  /// @brief Method GetOriginTrackedDeviceInfo, addr 0x5e455d0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetOriginTrackedDeviceInfo(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize);

  /// @brief Method GetPoseActionData, addr 0x5e4549c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                        ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalActionData, addr 0x5e454bc, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalBoneData, addr 0x5e454dc, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                          ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalBoneDataCompressed, addr 0x5e4550c, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                    ::System::IntPtr pvCompressedData, uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize,
                                                                    uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::CVRInput* New_ctor(::System::IntPtr pInterface);

  /// @brief Method SetActionManifestPath, addr 0x5e453a4, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError SetActionManifestPath(::StringW pchActionManifestPath);

  /// @brief Method ShowActionOrigins, addr 0x5e455f0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle);

  /// @brief Method ShowBindingsForActionSet, addr 0x5e45610, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint64_t originToHighlight);

  /// @brief Method TriggerHapticVibrationAction, addr 0x5e45564, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude,
                                                                   uint64_t ulRestrictToDevice);

  /// @brief Method UpdateActionState, addr 0x5e45430, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t);

  constexpr ::OVR::OpenVR::IVRInput const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRInput& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRInput value);

  /// @brief Method .ctor, addr 0x5e452a4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRInput(CVRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRInput(CVRInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8365 };

  /// @brief Field FnTable, offset: 0x10, size: 0x90, def value: None
  ::OVR::OpenVR::IVRInput ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRInput, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRInput) == 0xa0, "Size mismatch!");

} // namespace OVR::OpenVR
