#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace OVR::OpenVR {
class __IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class __IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class __IVRInput___ShowActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class __IVRInput___TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class __IVRInput___UpdateActionState;
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
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class __IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class __IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class __IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class __IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class __IVRInput___ShowActionOrigins;
}
namespace OVR::OpenVR {
class __IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class __IVRInput___TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class __IVRInput___UpdateActionState;
}
namespace OVR::OpenVR {
struct IVRInput;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetActionSetHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetAnalogActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetDigitalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetInputSourceHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetPoseActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalActionData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___SetActionManifestPath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___ShowActionOrigins);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRInput___UpdateActionState);
MARK_VAL_T(::OVR::OpenVR::IVRInput);
// Type: ::_SetActionManifestPath
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8466))
// CS Name: ::IVRInput::_SetActionManifestPath*
class CORDL_TYPE __IVRInput___SetActionManifestPath : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___SetActionManifestPath* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fadfc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27faed0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionManifestPath);

  /// @brief Method BeginInvoke, addr 0x27faee4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionManifestPath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27faf04, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___SetActionManifestPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___SetActionManifestPath(__IVRInput___SetActionManifestPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___SetActionManifestPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___SetActionManifestPath(__IVRInput___SetActionManifestPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___SetActionManifestPath();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___SetActionManifestPath, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetActionSetHandle
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8467))
// CS Name: ::IVRInput::_GetActionSetHandle*
class CORDL_TYPE __IVRInput___GetActionSetHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetActionSetHandle* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27faf2c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb004, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle);

  /// @brief Method BeginInvoke, addr 0x27fb018, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb0ac, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionSetHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetActionSetHandle(__IVRInput___GetActionSetHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionSetHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetActionSetHandle(__IVRInput___GetActionSetHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetActionSetHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionSetHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetActionHandle
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8468))
// CS Name: ::IVRInput::_GetActionHandle*
class CORDL_TYPE __IVRInput___GetActionHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetActionHandle* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb0d8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb1b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchActionName, ByRef<uint64_t> pHandle);

  /// @brief Method BeginInvoke, addr 0x27fb1c4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchActionName, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb258, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetActionHandle(__IVRInput___GetActionHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetActionHandle(__IVRInput___GetActionHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetActionHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetInputSourceHandle
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8469))
// CS Name: ::IVRInput::_GetInputSourceHandle*
class CORDL_TYPE __IVRInput___GetInputSourceHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb284, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb35c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle);

  /// @brief Method BeginInvoke, addr 0x27fb370, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb404, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetInputSourceHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetInputSourceHandle(__IVRInput___GetInputSourceHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetInputSourceHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetInputSourceHandle(__IVRInput___GetInputSourceHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetInputSourceHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetInputSourceHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_UpdateActionState
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8470))
// CS Name: ::IVRInput::_UpdateActionState*
class CORDL_TYPE __IVRInput___UpdateActionState : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___UpdateActionState* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb430, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb508, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount);

  /// @brief Method BeginInvoke, addr 0x27fb51c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb5c4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___UpdateActionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___UpdateActionState(__IVRInput___UpdateActionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___UpdateActionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___UpdateActionState(__IVRInput___UpdateActionState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___UpdateActionState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___UpdateActionState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDigitalActionData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8471))
// CS Name: ::IVRInput::_GetDigitalActionData*
class CORDL_TYPE __IVRInput___GetDigitalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetDigitalActionData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb5ec, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb6b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fb6c4, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb7c4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetDigitalActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetDigitalActionData(__IVRInput___GetDigitalActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetDigitalActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetDigitalActionData(__IVRInput___GetDigitalActionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetDigitalActionData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetDigitalActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetAnalogActionData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8472))
// CS Name: ::IVRInput::_GetAnalogActionData*
class CORDL_TYPE __IVRInput___GetAnalogActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetAnalogActionData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb7f0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fb8b4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fb8c8, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fb9c8, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetAnalogActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetAnalogActionData(__IVRInput___GetAnalogActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetAnalogActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetAnalogActionData(__IVRInput___GetAnalogActionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetAnalogActionData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetAnalogActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetPoseActionData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8473))
// CS Name: ::IVRInput::_GetPoseActionData*
class CORDL_TYPE __IVRInput___GetPoseActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetPoseActionData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fb9f4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fbab8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData,
                                             uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fbacc, size 0x160, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData,
                                             uint32_t unActionDataSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fbc2c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetPoseActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetPoseActionData(__IVRInput___GetPoseActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetPoseActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetPoseActionData(__IVRInput___GetPoseActionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetPoseActionData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetPoseActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSkeletalActionData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8474))
// CS Name: ::IVRInput::_GetSkeletalActionData*
class CORDL_TYPE __IVRInput___GetSkeletalActionData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fbc58, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fbd1c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fbd30, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fbe30, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalActionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetSkeletalActionData(__IVRInput___GetSkeletalActionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalActionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetSkeletalActionData(__IVRInput___GetSkeletalActionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetSkeletalActionData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalActionData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSkeletalBoneData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8475))
// CS Name: ::IVRInput::_GetSkeletalBoneData*
class CORDL_TYPE __IVRInput___GetSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fbe5c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fbf20, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fbf34, size 0x130, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                             ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fc064, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetSkeletalBoneData(__IVRInput___GetSkeletalBoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetSkeletalBoneData(__IVRInput___GetSkeletalBoneData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetSkeletalBoneData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSkeletalBoneDataCompressed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8476))
// CS Name: ::IVRInput::_GetSkeletalBoneDataCompressed*
class CORDL_TYPE __IVRInput___GetSkeletalBoneDataCompressed : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc08c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fc150, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, void* pvCompressedData,
                                             uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fc168, size 0x170, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, void* pvCompressedData,
                                             uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fc2d8, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint32_t> punRequiredCompressedSize, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetSkeletalBoneDataCompressed(__IVRInput___GetSkeletalBoneDataCompressed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetSkeletalBoneDataCompressed(__IVRInput___GetSkeletalBoneDataCompressed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetSkeletalBoneDataCompressed();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_DecompressSkeletalBoneData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8477))
// CS Name: ::IVRInput::_DecompressSkeletalBoneData*
class CORDL_TYPE __IVRInput___DecompressSkeletalBoneData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc304, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fc3c8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(void* pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount);

  /// @brief Method BeginInvoke, addr 0x27fc3dc, size 0x104, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                             ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>> pTransformArray, uint32_t unTransformArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fc4e0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___DecompressSkeletalBoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___DecompressSkeletalBoneData(__IVRInput___DecompressSkeletalBoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___DecompressSkeletalBoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___DecompressSkeletalBoneData(__IVRInput___DecompressSkeletalBoneData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___DecompressSkeletalBoneData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_TriggerHapticVibrationAction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8478))
// CS Name: ::IVRInput::_TriggerHapticVibrationAction*
class CORDL_TYPE __IVRInput___TriggerHapticVibrationAction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc50c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fc5d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice);

  /// @brief Method BeginInvoke, addr 0x27fc5e4, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fc6f0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___TriggerHapticVibrationAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___TriggerHapticVibrationAction(__IVRInput___TriggerHapticVibrationAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___TriggerHapticVibrationAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___TriggerHapticVibrationAction(__IVRInput___TriggerHapticVibrationAction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___TriggerHapticVibrationAction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetActionOrigins
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8479))
// CS Name: ::IVRInput::_GetActionOrigins*
class CORDL_TYPE __IVRInput___GetActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetActionOrigins* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc718, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fc7dc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut, uint32_t originOutCount);

  /// @brief Method BeginInvoke, addr 0x27fc7f0, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t, ::Array<uint64_t>*>> originsOut, uint32_t originOutCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fc8c0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionOrigins", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetActionOrigins(__IVRInput___GetActionOrigins&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetActionOrigins", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetActionOrigins(__IVRInput___GetActionOrigins const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetActionOrigins();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetActionOrigins, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOriginLocalizedName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8480))
// CS Name: ::IVRInput::_GetOriginLocalizedName*
class CORDL_TYPE __IVRInput___GetOriginLocalizedName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fc8e8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fc9ac, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize);

  /// @brief Method BeginInvoke, addr 0x27fc9c0, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fca7c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginLocalizedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetOriginLocalizedName(__IVRInput___GetOriginLocalizedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginLocalizedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetOriginLocalizedName(__IVRInput___GetOriginLocalizedName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetOriginLocalizedName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetOriginLocalizedName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOriginTrackedDeviceInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8481))
// CS Name: ::IVRInput::_GetOriginTrackedDeviceInfo*
class CORDL_TYPE __IVRInput___GetOriginTrackedDeviceInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fcaa4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fcb68, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize);

  /// @brief Method BeginInvoke, addr 0x27fcb7c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fcc64, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___GetOriginTrackedDeviceInfo(__IVRInput___GetOriginTrackedDeviceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___GetOriginTrackedDeviceInfo(__IVRInput___GetOriginTrackedDeviceInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___GetOriginTrackedDeviceInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowActionOrigins
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8482))
// CS Name: ::IVRInput::_ShowActionOrigins*
class CORDL_TYPE __IVRInput___ShowActionOrigins : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___ShowActionOrigins* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fcc90, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fcd54, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle);

  /// @brief Method BeginInvoke, addr 0x27fcd68, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fce00, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowActionOrigins", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___ShowActionOrigins(__IVRInput___ShowActionOrigins&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowActionOrigins", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___ShowActionOrigins(__IVRInput___ShowActionOrigins const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___ShowActionOrigins();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___ShowActionOrigins, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowBindingsForActionSet
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8483))
// CS Name: ::IVRInput::_ShowBindingsForActionSet*
class CORDL_TYPE __IVRInput___ShowBindingsForActionSet : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27fce28, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27fcf00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, uint64_t originToHighlight);

  /// @brief Method BeginInvoke, addr 0x27fcf14, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                             uint32_t unSetCount, uint64_t originToHighlight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27fcfe8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowBindingsForActionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRInput___ShowBindingsForActionSet(__IVRInput___ShowBindingsForActionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRInput___ShowBindingsForActionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRInput___ShowBindingsForActionSet(__IVRInput___ShowBindingsForActionSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRInput___ShowBindingsForActionSet();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRInput
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8484))
// CS Name: ::OVR.OpenVR::IVRInput
struct CORDL_TYPE IVRInput {
public:
  // Declarations
  using _ShowBindingsForActionSet = ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet;

  using _ShowActionOrigins = ::OVR::OpenVR::__IVRInput___ShowActionOrigins;

  using _GetOriginTrackedDeviceInfo = ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo;

  using _GetOriginLocalizedName = ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName;

  using _GetActionOrigins = ::OVR::OpenVR::__IVRInput___GetActionOrigins;

  using _TriggerHapticVibrationAction = ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction;

  using _DecompressSkeletalBoneData = ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData;

  using _GetSkeletalBoneDataCompressed = ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed;

  using _GetSkeletalBoneData = ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData;

  using _GetSkeletalActionData = ::OVR::OpenVR::__IVRInput___GetSkeletalActionData;

  using _GetPoseActionData = ::OVR::OpenVR::__IVRInput___GetPoseActionData;

  using _GetAnalogActionData = ::OVR::OpenVR::__IVRInput___GetAnalogActionData;

  using _GetDigitalActionData = ::OVR::OpenVR::__IVRInput___GetDigitalActionData;

  using _UpdateActionState = ::OVR::OpenVR::__IVRInput___UpdateActionState;

  using _GetInputSourceHandle = ::OVR::OpenVR::__IVRInput___GetInputSourceHandle;

  using _GetActionHandle = ::OVR::OpenVR::__IVRInput___GetActionHandle;

  using _GetActionSetHandle = ::OVR::OpenVR::__IVRInput___GetActionSetHandle;

  using _SetActionManifestPath = ::OVR::OpenVR::__IVRInput___SetActionManifestPath;

  // Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "::OVR::OpenVR::__IVRInput___SetActionManifestPath*", modifiers: "", def_value: None }, CppParam { name: "GetActionSetHandle", ty:
  // "::OVR::OpenVR::__IVRInput___GetActionSetHandle*", modifiers: "", def_value: None }, CppParam { name: "GetActionHandle", ty: "::OVR::OpenVR::__IVRInput___GetActionHandle*", modifiers: "",
  // def_value: None }, CppParam { name: "GetInputSourceHandle", ty: "::OVR::OpenVR::__IVRInput___GetInputSourceHandle*", modifiers: "", def_value: None }, CppParam { name: "UpdateActionState", ty:
  // "::OVR::OpenVR::__IVRInput___UpdateActionState*", modifiers: "", def_value: None }, CppParam { name: "GetDigitalActionData", ty: "::OVR::OpenVR::__IVRInput___GetDigitalActionData*", modifiers:
  // "", def_value: None }, CppParam { name: "GetAnalogActionData", ty: "::OVR::OpenVR::__IVRInput___GetAnalogActionData*", modifiers: "", def_value: None }, CppParam { name: "GetPoseActionData", ty:
  // "::OVR::OpenVR::__IVRInput___GetPoseActionData*", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalActionData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalActionData*", modifiers:
  // "", def_value: None }, CppParam { name: "GetSkeletalBoneData", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name:
  // "GetSkeletalBoneDataCompressed", ty: "::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*", modifiers: "", def_value: None }, CppParam { name: "DecompressSkeletalBoneData", ty:
  // "::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticVibrationAction", ty:
  // "::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*", modifiers: "", def_value: None }, CppParam { name: "GetActionOrigins", ty: "::OVR::OpenVR::__IVRInput___GetActionOrigins*", modifiers:
  // "", def_value: None }, CppParam { name: "GetOriginLocalizedName", ty: "::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOriginTrackedDeviceInfo", ty: "::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*", modifiers: "", def_value: None }, CppParam { name: "ShowActionOrigins", ty:
  // "::OVR::OpenVR::__IVRInput___ShowActionOrigins*", modifiers: "", def_value: None }, CppParam { name: "ShowBindingsForActionSet", ty: "::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*",
  // modifiers: "", def_value: None }]
  constexpr IVRInput(::OVR::OpenVR::__IVRInput___SetActionManifestPath* SetActionManifestPath, ::OVR::OpenVR::__IVRInput___GetActionSetHandle* GetActionSetHandle,
                     ::OVR::OpenVR::__IVRInput___GetActionHandle* GetActionHandle, ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* GetInputSourceHandle,
                     ::OVR::OpenVR::__IVRInput___UpdateActionState* UpdateActionState, ::OVR::OpenVR::__IVRInput___GetDigitalActionData* GetDigitalActionData,
                     ::OVR::OpenVR::__IVRInput___GetAnalogActionData* GetAnalogActionData, ::OVR::OpenVR::__IVRInput___GetPoseActionData* GetPoseActionData,
                     ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* GetSkeletalActionData, ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* GetSkeletalBoneData,
                     ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed, ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* DecompressSkeletalBoneData,
                     ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* TriggerHapticVibrationAction, ::OVR::OpenVR::__IVRInput___GetActionOrigins* GetActionOrigins,
                     ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* GetOriginLocalizedName, ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo,
                     ::OVR::OpenVR::__IVRInput___ShowActionOrigins* ShowActionOrigins, ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* ShowBindingsForActionSet) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRInput();

  /// @brief Field SetActionManifestPath, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___SetActionManifestPath* SetActionManifestPath;

  /// @brief Field GetActionSetHandle, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetActionSetHandle* GetActionSetHandle;

  /// @brief Field GetActionHandle, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetActionHandle* GetActionHandle;

  /// @brief Field GetInputSourceHandle, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetInputSourceHandle* GetInputSourceHandle;

  /// @brief Field UpdateActionState, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___UpdateActionState* UpdateActionState;

  /// @brief Field GetDigitalActionData, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetDigitalActionData* GetDigitalActionData;

  /// @brief Field GetAnalogActionData, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetAnalogActionData* GetAnalogActionData;

  /// @brief Field GetPoseActionData, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetPoseActionData* GetPoseActionData;

  /// @brief Field GetSkeletalActionData, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetSkeletalActionData* GetSkeletalActionData;

  /// @brief Field GetSkeletalBoneData, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetSkeletalBoneData* GetSkeletalBoneData;

  /// @brief Field GetSkeletalBoneDataCompressed, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed* GetSkeletalBoneDataCompressed;

  /// @brief Field DecompressSkeletalBoneData, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData* DecompressSkeletalBoneData;

  /// @brief Field TriggerHapticVibrationAction, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction* TriggerHapticVibrationAction;

  /// @brief Field GetActionOrigins, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetActionOrigins* GetActionOrigins;

  /// @brief Field GetOriginLocalizedName, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetOriginLocalizedName* GetOriginLocalizedName;

  /// @brief Field GetOriginTrackedDeviceInfo, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo* GetOriginTrackedDeviceInfo;

  /// @brief Field ShowActionOrigins, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___ShowActionOrigins* ShowActionOrigins;

  /// @brief Field ShowBindingsForActionSet, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet* ShowBindingsForActionSet;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRInput, 0x90>, "Size mismatch!");

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

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___DecompressSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionOrigins*, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetActionSetHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetActionSetHandle*, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetAnalogActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetDigitalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetInputSourceHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetInputSourceHandle*, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetOriginLocalizedName*, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetPoseActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalActionData*, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___GetSkeletalBoneDataCompressed*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___SetActionManifestPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___ShowActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___ShowActionOrigins*, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
NEED_NO_BOX(::OVR::OpenVR::__IVRInput___UpdateActionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRInput___UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput, "OVR.OpenVR", "IVRInput");
