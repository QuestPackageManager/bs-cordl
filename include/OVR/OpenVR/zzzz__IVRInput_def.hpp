#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRInput)
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
class IVRInput__DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class IVRInput__GetActionHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetActionOrigins;
}
namespace OVR::OpenVR {
class IVRInput__GetActionSetHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetAnalogActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetDigitalActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetInputSourceHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class IVRInput__GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class IVRInput__GetPoseActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class IVRInput__SetActionManifestPath;
}
namespace OVR::OpenVR {
class IVRInput__ShowActionOrigins;
}
namespace OVR::OpenVR {
class IVRInput__ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class IVRInput__TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class IVRInput__UpdateActionState;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRInput__DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class IVRInput__GetActionHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetActionOrigins;
}
namespace OVR::OpenVR {
class IVRInput__GetActionSetHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetAnalogActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetDigitalActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetInputSourceHandle;
}
namespace OVR::OpenVR {
class IVRInput__GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class IVRInput__GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class IVRInput__GetPoseActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalActionData;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class IVRInput__GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class IVRInput__SetActionManifestPath;
}
namespace OVR::OpenVR {
class IVRInput__ShowActionOrigins;
}
namespace OVR::OpenVR {
class IVRInput__ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class IVRInput__TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class IVRInput__UpdateActionState;
}
namespace OVR::OpenVR {
struct IVRInput;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetActionHandle);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetActionSetHandle);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetAnalogActionData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetDigitalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetInputSourceHandle);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetOriginLocalizedName);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetPoseActionData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetSkeletalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__SetActionManifestPath);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__ShowActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction);
MARK_REF_PTR_T(::OVR::OpenVR::IVRInput__UpdateActionState);
MARK_VAL_T(::OVR::OpenVR::IVRInput);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_SetActionManifestPath
class CORDL_TYPE IVRInput__SetActionManifestPath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406e784, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionManifestPath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406e7a4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406e770, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionManifestPath);

  static inline ::OVR::OpenVR::IVRInput__SetActionManifestPath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406e6d4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__SetActionManifestPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__SetActionManifestPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__SetActionManifestPath(IVRInput__SetActionManifestPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__SetActionManifestPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__SetActionManifestPath(IVRInput__SetActionManifestPath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__SetActionManifestPath, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionSetHandle
class CORDL_TYPE IVRInput__GetActionSetHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406e880, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionSetName, ::ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406e914, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406e86c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionSetName, ::ByRef<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetActionSetHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406e7cc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetActionSetHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionSetHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetActionSetHandle(IVRInput__GetActionSetHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionSetHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetActionSetHandle(IVRInput__GetActionSetHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetActionSetHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionHandle
class CORDL_TYPE IVRInput__GetActionHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406e9f4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionName, ::ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406ea88, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406e9e0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionName, ::ByRef<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetActionHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406e940, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetActionHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetActionHandle(IVRInput__GetActionHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetActionHandle(IVRInput__GetActionHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetActionHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetInputSourceHandle
class CORDL_TYPE IVRInput__GetInputSourceHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406eb68, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchInputSourcePath, ::ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406ebfc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406eb54, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchInputSourcePath, ::ByRef<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetInputSourceHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406eab4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetInputSourceHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetInputSourceHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetInputSourceHandle(IVRInput__GetInputSourceHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetInputSourceHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetInputSourceHandle(IVRInput__GetInputSourceHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetInputSourceHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_UpdateActionState
class CORDL_TYPE IVRInput__UpdateActionState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406ecdc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406ed84, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406ecc8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount);

  static inline ::OVR::OpenVR::IVRInput__UpdateActionState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406ec28, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__UpdateActionState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__UpdateActionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__UpdateActionState(IVRInput__UpdateActionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__UpdateActionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__UpdateActionState(IVRInput__UpdateActionState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__UpdateActionState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetDigitalActionData
class CORDL_TYPE IVRInput__GetDigitalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406ee4c, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406ef54, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406ee38, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetDigitalActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406edac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetDigitalActionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetDigitalActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetDigitalActionData(IVRInput__GetDigitalActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetDigitalActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetDigitalActionData(IVRInput__GetDigitalActionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetDigitalActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetAnalogActionData
class CORDL_TYPE IVRInput__GetAnalogActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406f020, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406f128, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406f00c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetAnalogActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406ef80, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetAnalogActionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetAnalogActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetAnalogActionData(IVRInput__GetAnalogActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetAnalogActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetAnalogActionData(IVRInput__GetAnalogActionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8846 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetAnalogActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetPoseActionData
class CORDL_TYPE IVRInput__GetPoseActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406f1f4, size 0x16c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                             ::ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406f360, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406f1e0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                             ::ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetPoseActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406f154, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetPoseActionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetPoseActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetPoseActionData(IVRInput__GetPoseActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetPoseActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetPoseActionData(IVRInput__GetPoseActionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetPoseActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalActionData
class CORDL_TYPE IVRInput__GetSkeletalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406f42c, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406f534, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406f418, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406f38c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetSkeletalActionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetSkeletalActionData(IVRInput__GetSkeletalActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetSkeletalActionData(IVRInput__GetSkeletalActionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetSkeletalActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalBoneData
class CORDL_TYPE IVRInput__GetSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406f600, size 0x13c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406f73c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406f5ec, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406f560, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetSkeletalBoneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalBoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetSkeletalBoneData(IVRInput__GetSkeletalBoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalBoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetSkeletalBoneData(IVRInput__GetSkeletalBoneData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed
class CORDL_TYPE IVRInput__GetSkeletalBoneDataCompressed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406f808, size 0x178, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::System::IntPtr pvCompressedData, uint32_t unCompressedSize, ::ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406f980, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<uint32_t> punRequiredCompressedSize, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406f7f0, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::System::IntPtr pvCompressedData, uint32_t unCompressedSize, ::ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406f764, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetSkeletalBoneDataCompressed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalBoneDataCompressed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetSkeletalBoneDataCompressed(IVRInput__GetSkeletalBoneDataCompressed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetSkeletalBoneDataCompressed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetSkeletalBoneDataCompressed(IVRInput__GetSkeletalBoneDataCompressed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_DecompressSkeletalBoneData
class CORDL_TYPE IVRInput__DecompressSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406fa4c, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize, ::ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406fb58, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406fa38, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize, ::ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount);

  static inline ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406f9ac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__DecompressSkeletalBoneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__DecompressSkeletalBoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__DecompressSkeletalBoneData(IVRInput__DecompressSkeletalBoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__DecompressSkeletalBoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__DecompressSkeletalBoneData(IVRInput__DecompressSkeletalBoneData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
class CORDL_TYPE IVRInput__TriggerHapticVibrationAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406fc24, size 0x118, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406fd3c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406fc10, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406fb84, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__TriggerHapticVibrationAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__TriggerHapticVibrationAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__TriggerHapticVibrationAction(IVRInput__TriggerHapticVibrationAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__TriggerHapticVibrationAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__TriggerHapticVibrationAction(IVRInput__TriggerHapticVibrationAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionOrigins
class CORDL_TYPE IVRInput__GetActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406fe04, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut, uint32_t originOutCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406fedc, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406fdf0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut, uint32_t originOutCount);

  static inline ::OVR::OpenVR::IVRInput__GetActionOrigins* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406fd64, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetActionOrigins();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionOrigins", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetActionOrigins(IVRInput__GetActionOrigins&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetActionOrigins", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetActionOrigins(IVRInput__GetActionOrigins const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetActionOrigins, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetOriginLocalizedName
class CORDL_TYPE IVRInput__GetOriginLocalizedName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406ffa4, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070064, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406ff90, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize);

  static inline ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406ff04, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetOriginLocalizedName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetOriginLocalizedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetOriginLocalizedName(IVRInput__GetOriginLocalizedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetOriginLocalizedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetOriginLocalizedName(IVRInput__GetOriginLocalizedName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetOriginLocalizedName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
class CORDL_TYPE IVRInput__GetOriginTrackedDeviceInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407012c, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ::ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070218, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070118, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ::ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize);

  static inline ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407008c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__GetOriginTrackedDeviceInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetOriginTrackedDeviceInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__GetOriginTrackedDeviceInfo(IVRInput__GetOriginTrackedDeviceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__GetOriginTrackedDeviceInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__GetOriginTrackedDeviceInfo(IVRInput__GetOriginTrackedDeviceInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_ShowActionOrigins
class CORDL_TYPE IVRInput__ShowActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40702e4, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070380, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40702d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle);

  static inline ::OVR::OpenVR::IVRInput__ShowActionOrigins* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4070244, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__ShowActionOrigins();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__ShowActionOrigins", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__ShowActionOrigins(IVRInput__ShowActionOrigins&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__ShowActionOrigins", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__ShowActionOrigins(IVRInput__ShowActionOrigins const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__ShowActionOrigins, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
class CORDL_TYPE IVRInput__ShowBindingsForActionSet : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407045c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, uint64_t originToHighlight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070534, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070448, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, uint64_t originToHighlight);

  static inline ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40703a8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput__ShowBindingsForActionSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__ShowBindingsForActionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInput__ShowBindingsForActionSet(IVRInput__ShowBindingsForActionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInput__ShowBindingsForActionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInput__ShowBindingsForActionSet(IVRInput__ShowBindingsForActionSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput__ShowBindingsForActionSet, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRInput
struct CORDL_TYPE IVRInput {
public:
  // Declarations
  using _DecompressSkeletalBoneData = ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData;

  using _GetActionHandle = ::OVR::OpenVR::IVRInput__GetActionHandle;

  using _GetActionOrigins = ::OVR::OpenVR::IVRInput__GetActionOrigins;

  using _GetActionSetHandle = ::OVR::OpenVR::IVRInput__GetActionSetHandle;

  using _GetAnalogActionData = ::OVR::OpenVR::IVRInput__GetAnalogActionData;

  using _GetDigitalActionData = ::OVR::OpenVR::IVRInput__GetDigitalActionData;

  using _GetInputSourceHandle = ::OVR::OpenVR::IVRInput__GetInputSourceHandle;

  using _GetOriginLocalizedName = ::OVR::OpenVR::IVRInput__GetOriginLocalizedName;

  using _GetOriginTrackedDeviceInfo = ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo;

  using _GetPoseActionData = ::OVR::OpenVR::IVRInput__GetPoseActionData;

  using _GetSkeletalActionData = ::OVR::OpenVR::IVRInput__GetSkeletalActionData;

  using _GetSkeletalBoneData = ::OVR::OpenVR::IVRInput__GetSkeletalBoneData;

  using _GetSkeletalBoneDataCompressed = ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed;

  using _SetActionManifestPath = ::OVR::OpenVR::IVRInput__SetActionManifestPath;

  using _ShowActionOrigins = ::OVR::OpenVR::IVRInput__ShowActionOrigins;

  using _ShowBindingsForActionSet = ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet;

  using _TriggerHapticVibrationAction = ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction;

  using _UpdateActionState = ::OVR::OpenVR::IVRInput__UpdateActionState;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput();

  // Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "::OVR::OpenVR::IVRInput__SetActionManifestPath*", modifiers: "", def_value: None }, CppParam { name: "GetActionSetHandle", ty:
  // "::OVR::OpenVR::IVRInput__GetActionSetHandle*", modifiers: "", def_value: None }, CppParam { name: "GetActionHandle", ty: "::OVR::OpenVR::IVRInput__GetActionHandle*", modifiers: "", def_value:
  // None }, CppParam { name: "GetInputSourceHandle", ty: "::OVR::OpenVR::IVRInput__GetInputSourceHandle*", modifiers: "", def_value: None }, CppParam { name: "UpdateActionState", ty:
  // "::OVR::OpenVR::IVRInput__UpdateActionState*", modifiers: "", def_value: None }, CppParam { name: "GetDigitalActionData", ty: "::OVR::OpenVR::IVRInput__GetDigitalActionData*", modifiers: "",
  // def_value: None }, CppParam { name: "GetAnalogActionData", ty: "::OVR::OpenVR::IVRInput__GetAnalogActionData*", modifiers: "", def_value: None }, CppParam { name: "GetPoseActionData", ty:
  // "::OVR::OpenVR::IVRInput__GetPoseActionData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalActionData", ty: "::OVR::OpenVR::IVRInput__GetSkeletalActionData*", modifiers: "",
  // def_value: None }, CppParam { name: "GetSkeletalBoneData", ty: "::OVR::OpenVR::IVRInput__GetSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalBoneDataCompressed",
  // ty: "::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*", modifiers: "", def_value: None }, CppParam { name: "DecompressSkeletalBoneData", ty:
  // "::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticVibrationAction", ty:
  // "::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*", modifiers: "", def_value: None }, CppParam { name: "GetActionOrigins", ty: "::OVR::OpenVR::IVRInput__GetActionOrigins*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOriginLocalizedName", ty: "::OVR::OpenVR::IVRInput__GetOriginLocalizedName*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOriginTrackedDeviceInfo", ty: "::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*", modifiers: "", def_value: None }, CppParam { name: "ShowActionOrigins", ty:
  // "::OVR::OpenVR::IVRInput__ShowActionOrigins*", modifiers: "", def_value: None }, CppParam { name: "ShowBindingsForActionSet", ty: "::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*", modifiers:
  // "", def_value: None }]
  constexpr IVRInput(::OVR::OpenVR::IVRInput__SetActionManifestPath* SetActionManifestPath, ::OVR::OpenVR::IVRInput__GetActionSetHandle* GetActionSetHandle,
                     ::OVR::OpenVR::IVRInput__GetActionHandle* GetActionHandle, ::OVR::OpenVR::IVRInput__GetInputSourceHandle* GetInputSourceHandle,
                     ::OVR::OpenVR::IVRInput__UpdateActionState* UpdateActionState, ::OVR::OpenVR::IVRInput__GetDigitalActionData* GetDigitalActionData,
                     ::OVR::OpenVR::IVRInput__GetAnalogActionData* GetAnalogActionData, ::OVR::OpenVR::IVRInput__GetPoseActionData* GetPoseActionData,
                     ::OVR::OpenVR::IVRInput__GetSkeletalActionData* GetSkeletalActionData, ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* GetSkeletalBoneData,
                     ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed, ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* DecompressSkeletalBoneData,
                     ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* TriggerHapticVibrationAction, ::OVR::OpenVR::IVRInput__GetActionOrigins* GetActionOrigins,
                     ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* GetOriginLocalizedName, ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo,
                     ::OVR::OpenVR::IVRInput__ShowActionOrigins* ShowActionOrigins, ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* ShowBindingsForActionSet) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field SetActionManifestPath, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__SetActionManifestPath* SetActionManifestPath;

  /// @brief Field GetActionSetHandle, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetActionSetHandle* GetActionSetHandle;

  /// @brief Field GetActionHandle, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetActionHandle* GetActionHandle;

  /// @brief Field GetInputSourceHandle, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetInputSourceHandle* GetInputSourceHandle;

  /// @brief Field UpdateActionState, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__UpdateActionState* UpdateActionState;

  /// @brief Field GetDigitalActionData, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetDigitalActionData* GetDigitalActionData;

  /// @brief Field GetAnalogActionData, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetAnalogActionData* GetAnalogActionData;

  /// @brief Field GetPoseActionData, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetPoseActionData* GetPoseActionData;

  /// @brief Field GetSkeletalActionData, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetSkeletalActionData* GetSkeletalActionData;

  /// @brief Field GetSkeletalBoneData, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* GetSkeletalBoneData;

  /// @brief Field GetSkeletalBoneDataCompressed, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed;

  /// @brief Field DecompressSkeletalBoneData, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* DecompressSkeletalBoneData;

  /// @brief Field TriggerHapticVibrationAction, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* TriggerHapticVibrationAction;

  /// @brief Field GetActionOrigins, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetActionOrigins* GetActionOrigins;

  /// @brief Field GetOriginLocalizedName, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* GetOriginLocalizedName;

  /// @brief Field GetOriginTrackedDeviceInfo, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo;

  /// @brief Field ShowActionOrigins, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__ShowActionOrigins* ShowActionOrigins;

  /// @brief Field ShowBindingsForActionSet, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* ShowBindingsForActionSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRInput, SetActionManifestPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetActionSetHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetActionHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetInputSourceHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, UpdateActionState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetDigitalActionData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetAnalogActionData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetPoseActionData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetSkeletalActionData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetSkeletalBoneData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetSkeletalBoneDataCompressed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, DecompressSkeletalBoneData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, TriggerHapticVibrationAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetActionOrigins) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetOriginLocalizedName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, GetOriginTrackedDeviceInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, ShowActionOrigins) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRInput, ShowBindingsForActionSet) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput, 0x90>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetActionHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetActionOrigins*, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetActionSetHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetAnalogActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetDigitalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetInputSourceHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetInputSourceHandle*, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetOriginLocalizedName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetOriginLocalizedName*, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetPoseActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetSkeletalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetSkeletalActionData*, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__SetActionManifestPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__ShowActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__ShowActionOrigins*, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
NEED_NO_BOX(::OVR::OpenVR::IVRInput__UpdateActionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput__UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput, "OVR.OpenVR", "IVRInput");
