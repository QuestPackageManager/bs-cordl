#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetActionHandle*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetActionOrigins*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetActionSetHandle*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetAnalogActionData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetDigitalActionData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetInputSourceHandle*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetOriginLocalizedName*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetPoseActionData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetSkeletalActionData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetSkeletalBoneData*);
MARK_REF_T(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*);
MARK_REF_T(::OVR::OpenVR::IVRInput__SetActionManifestPath*);
MARK_REF_T(::OVR::OpenVR::IVRInput__ShowActionOrigins*);
MARK_REF_T(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*);
MARK_REF_T(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*);
MARK_REF_T(::OVR::OpenVR::IVRInput__UpdateActionState*);
MARK_VAL_T(::OVR::OpenVR::IVRInput);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetActionOrigins*, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetInputSourceHandle*, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetOriginLocalizedName*, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetSkeletalActionData*, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__ShowActionOrigins*, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput__UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRInput, "OVR.OpenVR", "IVRInput");
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_SetActionManifestPath
class CORDL_TYPE IVRInput__SetActionManifestPath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40728, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionManifestPath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40748, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40714, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionManifestPath);

  static inline ::OVR::OpenVR::IVRInput__SetActionManifestPath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e40698, size 0x7c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__SetActionManifestPath) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionSetHandle
class CORDL_TYPE IVRInput__GetActionSetHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40800, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40858, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e407ec, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetActionSetHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e4076c, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetActionSetHandle) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionHandle
class CORDL_TYPE IVRInput__GetActionHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40910, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionName, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40968, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e408fc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionName, ::by_ref<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetActionHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e4087c, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetActionHandle) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetInputSourceHandle
class CORDL_TYPE IVRInput__GetInputSourceHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40a20, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40a78, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<uint64_t> pHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40a0c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle);

  static inline ::OVR::OpenVR::IVRInput__GetInputSourceHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e4098c, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetInputSourceHandle) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_UpdateActionState
class CORDL_TYPE IVRInput__UpdateActionState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40b30, size 0x74, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40ba4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40b1c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount);

  static inline ::OVR::OpenVR::IVRInput__UpdateActionState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e40a9c, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__UpdateActionState) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetDigitalActionData
class CORDL_TYPE IVRInput__GetDigitalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40c48, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40d24, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40c34, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetDigitalActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e40bc8, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetDigitalActionData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetAnalogActionData
class CORDL_TYPE IVRInput__GetAnalogActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40dc8, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e40ea4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40db4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetAnalogActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e40d48, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetAnalogActionData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetPoseActionData
class CORDL_TYPE IVRInput__GetPoseActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e40f48, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                             ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e4106c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e40f34, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                             ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetPoseActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e40ec8, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetPoseActionData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalActionData
class CORDL_TYPE IVRInput__GetSkeletalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41110, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e411ec, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e410fc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalActionData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41090, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetSkeletalActionData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalBoneData
class CORDL_TYPE IVRInput__GetSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41290, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e4139c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e4127c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41210, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetSkeletalBoneData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed
class CORDL_TYPE IVRInput__GetSkeletalBoneDataCompressed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41444, size 0x134, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::System::IntPtr pvCompressedData, uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e41578, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<uint32_t> punRequiredCompressedSize, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e4142c, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ::System::IntPtr pvCompressedData, uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e413c0, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetSkeletalBoneDataCompressed) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_DecompressSkeletalBoneData
class CORDL_TYPE IVRInput__DecompressSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e4161c, size 0xe0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize, ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e416fc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e41608, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize, ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ::by_ref<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount);

  static inline ::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e4159c, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__DecompressSkeletalBoneData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
class CORDL_TYPE IVRInput__TriggerHapticVibrationAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e417a0, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e4186c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e4178c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice);

  static inline ::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41720, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8352 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__TriggerHapticVibrationAction) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetActionOrigins
class CORDL_TYPE IVRInput__GetActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41910, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::by_ref<::ArrayW<uint64_t>> originsOut, uint32_t originOutCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e419a4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e418fc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::by_ref<::ArrayW<uint64_t>> originsOut, uint32_t originOutCount);

  static inline ::OVR::OpenVR::IVRInput__GetActionOrigins* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41890, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetActionOrigins) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetOriginLocalizedName
class CORDL_TYPE IVRInput__GetOriginLocalizedName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41a48, size 0x80, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e41ac8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e41a34, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize);

  static inline ::OVR::OpenVR::IVRInput__GetOriginLocalizedName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e419c8, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetOriginLocalizedName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
class CORDL_TYPE IVRInput__GetOriginTrackedDeviceInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41b6c, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e41c30, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e41b58, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize);

  static inline ::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41aec, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__GetOriginTrackedDeviceInfo) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_ShowActionOrigins
class CORDL_TYPE IVRInput__ShowActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41cd4, size 0x70, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e41d44, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e41cc0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle);

  static inline ::OVR::OpenVR::IVRInput__ShowActionOrigins* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41c54, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8356 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__ShowActionOrigins) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
class CORDL_TYPE IVRInput__ShowBindingsForActionSet : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e41dfc, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e41e8c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e41de8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::by_ref<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight);

  static inline ::OVR::OpenVR::IVRInput__ShowBindingsForActionSet* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e41d68, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRInput__ShowBindingsForActionSet) == 0x80, "Size mismatch!");

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8358 };

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

static_assert(sizeof(::OVR::OpenVR::IVRInput) == 0x90, "Size mismatch!");

} // namespace OVR::OpenVR
