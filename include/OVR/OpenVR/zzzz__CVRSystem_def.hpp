#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSystem)
namespace OVR::OpenVR {
struct CVRSystem_GetControllerStateUnion;
}
namespace OVR::OpenVR {
struct CVRSystem_GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct CVRSystem_PollNextEventUnion;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStatePacked;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class CVRSystem__PollNextEventPacked;
}
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRButtonId;
}
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
namespace OVR::OpenVR {
struct EVREventType;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerState;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEvent;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
struct VREvent_t;
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
class CVRSystem;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStatePacked;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class CVRSystem__PollNextEventPacked;
}
namespace OVR::OpenVR {
struct CVRSystem_GetControllerStateUnion;
}
namespace OVR::OpenVR {
struct CVRSystem_GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct CVRSystem_PollNextEventUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRSystem);
MARK_REF_PTR_T(::OVR::OpenVR::CVRSystem__GetControllerStatePacked);
MARK_REF_PTR_T(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked);
MARK_REF_PTR_T(::OVR::OpenVR::CVRSystem__PollNextEventPacked);
MARK_VAL_T(::OVR::OpenVR::CVRSystem_GetControllerStateUnion);
MARK_VAL_T(::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion);
MARK_VAL_T(::OVR::OpenVR::CVRSystem_PollNextEventUnion);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_PollNextEventPacked
class CORDL_TYPE CVRSystem__PollNextEventPacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2e9b8, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2ea64, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2e9a4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::CVRSystem__PollNextEventPacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2e924, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem__PollNextEventPacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__PollNextEventPacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSystem__PollNextEventPacked(CVRSystem__PollNextEventPacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__PollNextEventPacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSystem__PollNextEventPacked(CVRSystem__PollNextEventPacked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem__PollNextEventPacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/PollNextEventUnion
struct CORDL_TYPE CVRSystem_PollNextEventUnion {
public:
  // Declarations
  /// @brief Field pPollNextEvent, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextEvent, put = __cordl_internal_set_pPollNextEvent)) ::OVR::OpenVR::IVRSystem__PollNextEvent* pPollNextEvent;

  /// @brief Field pPollNextEventPacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextEventPacked, put = __cordl_internal_set_pPollNextEventPacked)) ::OVR::OpenVR::CVRSystem__PollNextEventPacked* pPollNextEventPacked;

  constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent* const& __cordl_internal_get_pPollNextEvent() const;

  constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent*& __cordl_internal_get_pPollNextEvent();

  constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked* const& __cordl_internal_get_pPollNextEventPacked() const;

  constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked*& __cordl_internal_get_pPollNextEventPacked();

  constexpr void __cordl_internal_set_pPollNextEvent(::OVR::OpenVR::IVRSystem__PollNextEvent* value);

  constexpr void __cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::CVRSystem__PollNextEventPacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem_PollNextEventUnion();

  // Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "", def_value: None }, CppParam { name: "pPollNextEventPacked", ty:
  // "::OVR::OpenVR::CVRSystem__PollNextEventPacked*", modifiers: "", def_value: None }]
  constexpr CVRSystem_PollNextEventUnion(::OVR::OpenVR::IVRSystem__PollNextEvent* pPollNextEvent, ::OVR::OpenVR::CVRSystem__PollNextEventPacked* pPollNextEventPacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextEvent_padding[0x0];
      /// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__PollNextEvent* ___pPollNextEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextEvent_padding_forAlignment[0x0];
      /// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__PollNextEvent* ___pPollNextEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextEventPacked_padding[0x0];
      /// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__PollNextEventPacked* ___pPollNextEventPacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextEventPacked_padding_forAlignment[0x0];
      /// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__PollNextEventPacked* ___pPollNextEventPacked_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8348 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem_PollNextEventUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_GetControllerStatePacked
class CORDL_TYPE CVRSystem__GetControllerStatePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2eb08, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2ebc8, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2eaf4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize);

  static inline ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2ea88, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem__GetControllerStatePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStatePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSystem__GetControllerStatePacked(CVRSystem__GetControllerStatePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStatePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSystem__GetControllerStatePacked(CVRSystem__GetControllerStatePacked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem__GetControllerStatePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/GetControllerStateUnion
struct CORDL_TYPE CVRSystem_GetControllerStateUnion {
public:
  // Declarations
  /// @brief Field pGetControllerState, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerState, put = __cordl_internal_set_pGetControllerState)) ::OVR::OpenVR::IVRSystem__GetControllerState* pGetControllerState;

  /// @brief Field pGetControllerStatePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStatePacked,
                      put = __cordl_internal_set_pGetControllerStatePacked)) ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* pGetControllerStatePacked;

  constexpr ::OVR::OpenVR::IVRSystem__GetControllerState* const& __cordl_internal_get_pGetControllerState() const;

  constexpr ::OVR::OpenVR::IVRSystem__GetControllerState*& __cordl_internal_get_pGetControllerState();

  constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* const& __cordl_internal_get_pGetControllerStatePacked() const;

  constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*& __cordl_internal_get_pGetControllerStatePacked();

  constexpr void __cordl_internal_set_pGetControllerState(::OVR::OpenVR::IVRSystem__GetControllerState* value);

  constexpr void __cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::CVRSystem__GetControllerStatePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem_GetControllerStateUnion();

  // Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "", def_value: None }, CppParam { name: "pGetControllerStatePacked", ty:
  // "::OVR::OpenVR::CVRSystem__GetControllerStatePacked*", modifiers: "", def_value: None }]
  constexpr CVRSystem_GetControllerStateUnion(::OVR::OpenVR::IVRSystem__GetControllerState* pGetControllerState,
                                              ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* pGetControllerStatePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerState_padding[0x0];
      /// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__GetControllerState* ___pGetControllerState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerState_padding_forAlignment[0x0];
      /// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__GetControllerState* ___pGetControllerState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStatePacked_padding[0x0];
      /// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* ___pGetControllerStatePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStatePacked_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* ___pGetControllerStatePacked_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8350 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem_GetControllerStateUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_GetControllerStateWithPosePacked
class CORDL_TYPE CVRSystem__GetControllerStateWithPosePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2ec6c, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                             uint32_t unControllerStateSize, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2ed8c, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2ec58, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                     uint32_t unControllerStateSize, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2ebec, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem__GetControllerStateWithPosePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStateWithPosePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSystem__GetControllerStateWithPosePacked(CVRSystem__GetControllerStateWithPosePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStateWithPosePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSystem__GetControllerStateWithPosePacked(CVRSystem__GetControllerStateWithPosePacked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/GetControllerStateWithPoseUnion
struct CORDL_TYPE CVRSystem_GetControllerStateWithPoseUnion {
public:
  // Declarations
  /// @brief Field pGetControllerStateWithPose, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStateWithPose,
                      put = __cordl_internal_set_pGetControllerStateWithPose)) ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* pGetControllerStateWithPose;

  /// @brief Field pGetControllerStateWithPosePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStateWithPosePacked,
                      put = __cordl_internal_set_pGetControllerStateWithPosePacked)) ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;

  constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* const& __cordl_internal_get_pGetControllerStateWithPose() const;

  constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*& __cordl_internal_get_pGetControllerStateWithPose();

  constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* const& __cordl_internal_get_pGetControllerStateWithPosePacked() const;

  constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*& __cordl_internal_get_pGetControllerStateWithPosePacked();

  constexpr void __cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* value);

  constexpr void __cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem_GetControllerStateWithPoseUnion();

  // Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: None }, CppParam { name:
  // "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*", modifiers: "", def_value: None }]
  constexpr CVRSystem_GetControllerStateWithPoseUnion(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* pGetControllerStateWithPose,
                                                      ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStateWithPose_padding[0x0];
      /// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* ___pGetControllerStateWithPose;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStateWithPose_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* ___pGetControllerStateWithPose_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStateWithPosePacked_padding[0x0];
      /// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* ___pGetControllerStateWithPosePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStateWithPosePacked_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* ___pGetControllerStateWithPosePacked_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8352 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies OVR.OpenVR.IVRSystem, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem
class CORDL_TYPE CVRSystem : public ::System::Object {
public:
  // Declarations
  using GetControllerStateUnion = ::OVR::OpenVR::CVRSystem_GetControllerStateUnion;

  using GetControllerStateWithPoseUnion = ::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion;

  using PollNextEventUnion = ::OVR::OpenVR::CVRSystem_PollNextEventUnion;

  using _GetControllerStatePacked = ::OVR::OpenVR::CVRSystem__GetControllerStatePacked;

  using _GetControllerStateWithPosePacked = ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked;

  using _PollNextEventPacked = ::OVR::OpenVR::CVRSystem__PollNextEventPacked;

  /// @brief Field FnTable, offset 0x10, size 0x178
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRSystem FnTable;

  /// @brief Method AcknowledgeQuit_Exiting, addr 0x5c2e8e4, size 0x20, virtual false, abstract: false, final false
  inline void AcknowledgeQuit_Exiting();

  /// @brief Method AcknowledgeQuit_UserPrompt, addr 0x5c2e904, size 0x20, virtual false, abstract: false, final false
  inline void AcknowledgeQuit_UserPrompt();

  /// @brief Method ApplyTransform, addr 0x5c2de78, size 0x20, virtual false, abstract: false, final false
  inline void ApplyTransform(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform);

  /// @brief Method ComputeDistortion, addr 0x5c2dc10, size 0x20, virtual false, abstract: false, final false
  inline bool ComputeDistortion(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates);

  /// @brief Method DriverDebugRequest, addr 0x5c2e8a4, size 0x20, virtual false, abstract: false, final false
  inline uint32_t DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize);

  /// @brief Method GetArrayTrackedDeviceProperty, addr 0x5c2dfe0, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                                ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetBoolTrackedDeviceProperty, addr 0x5c2df18, size 0x20, virtual false, abstract: false, final false
  inline bool GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetButtonIdNameFromEnum, addr 0x5c2e70c, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetButtonIdNameFromEnum(::OVR::OpenVR::EVRButtonId eButtonId);

  /// @brief Method GetControllerAxisTypeNameFromEnum, addr 0x5c2e798, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetControllerAxisTypeNameFromEnum(::OVR::OpenVR::EVRControllerAxisType eAxisType);

  /// @brief Method GetControllerRoleForTrackedDeviceIndex, addr 0x5c2deb8, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex);

  /// @brief Method GetControllerState, addr 0x5c2e300, size 0x1a4, virtual false, abstract: false, final false
  inline bool GetControllerState(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize);

  /// @brief Method GetControllerStateWithPose, addr 0x5c2e524, size 0x1c8, virtual false, abstract: false, final false
  inline bool GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                         uint32_t unControllerStateSize, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  /// @brief Method GetD3D9AdapterIndex, addr 0x5c2dca0, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetD3D9AdapterIndex();

  /// @brief Method GetDXGIOutputInfo, addr 0x5c2dcc0, size 0x24, virtual false, abstract: false, final false
  inline void GetDXGIOutputInfo(::ByRef<int32_t> pnAdapterIndex);

  /// @brief Method GetDeviceToAbsoluteTrackingPose, addr 0x5c2dd4c, size 0x2c, virtual false, abstract: false, final false
  inline void GetDeviceToAbsoluteTrackingPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                              ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pTrackedDevicePoseArray);

  /// @brief Method GetEventTypeNameFromEnum, addr 0x5c2e254, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetEventTypeNameFromEnum(::OVR::OpenVR::EVREventType eType);

  /// @brief Method GetEyeToHeadTransform, addr 0x5c2dc30, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetEyeToHeadTransform(::OVR::OpenVR::EVREye eEye);

  /// @brief Method GetFloatTrackedDeviceProperty, addr 0x5c2df38, size 0x20, virtual false, abstract: false, final false
  inline float_t GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetHiddenAreaMesh, addr 0x5c2e2e0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t GetHiddenAreaMesh(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type);

  /// @brief Method GetInt32TrackedDeviceProperty, addr 0x5c2df58, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetMatrix34TrackedDeviceProperty, addr 0x5c2df98, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetOutputDevice, addr 0x5c2dce4, size 0x24, virtual false, abstract: false, final false
  inline void GetOutputDevice(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);

  /// @brief Method GetProjectionMatrix, addr 0x5c2db98, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t GetProjectionMatrix(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ);

  /// @brief Method GetProjectionRaw, addr 0x5c2dbe0, size 0x30, virtual false, abstract: false, final false
  inline void GetProjectionRaw(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom);

  /// @brief Method GetPropErrorNameFromEnum, addr 0x5c2e020, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError error);

  /// @brief Method GetRawZeroPoseToStandingAbsoluteTrackingPose, addr 0x5c2dde0, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose();

  /// @brief Method GetRecommendedRenderTargetSize, addr 0x5c2db70, size 0x28, virtual false, abstract: false, final false
  inline void GetRecommendedRenderTargetSize(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  /// @brief Method GetSeatedZeroPoseToStandingAbsoluteTrackingPose, addr 0x5c2dd98, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose();

  /// @brief Method GetSortedTrackedDeviceIndicesOfClass, addr 0x5c2de28, size 0x30, virtual false, abstract: false, final false
  inline uint32_t GetSortedTrackedDeviceIndicesOfClass(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t, ::Array<uint32_t>*> punTrackedDeviceIndexArray,
                                                       uint32_t unRelativeToTrackedDeviceIndex);

  /// @brief Method GetStringTrackedDeviceProperty, addr 0x5c2e000, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                 ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetTimeSinceLastVsync, addr 0x5c2dc78, size 0x28, virtual false, abstract: false, final false
  inline bool GetTimeSinceLastVsync(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter);

  /// @brief Method GetTrackedDeviceActivityLevel, addr 0x5c2de58, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint32_t unDeviceId);

  /// @brief Method GetTrackedDeviceClass, addr 0x5c2ded8, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass GetTrackedDeviceClass(uint32_t unDeviceIndex);

  /// @brief Method GetTrackedDeviceIndexForControllerRole, addr 0x5c2de98, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetTrackedDeviceIndexForControllerRole(::OVR::OpenVR::ETrackedControllerRole unDeviceType);

  /// @brief Method GetUint64TrackedDeviceProperty, addr 0x5c2df78, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method IsDisplayOnDesktop, addr 0x5c2dd08, size 0x20, virtual false, abstract: false, final false
  inline bool IsDisplayOnDesktop();

  /// @brief Method IsInputAvailable, addr 0x5c2e824, size 0x20, virtual false, abstract: false, final false
  inline bool IsInputAvailable();

  /// @brief Method IsSteamVRDrawingControllers, addr 0x5c2e844, size 0x20, virtual false, abstract: false, final false
  inline bool IsSteamVRDrawingControllers();

  /// @brief Method IsTrackedDeviceConnected, addr 0x5c2def8, size 0x20, virtual false, abstract: false, final false
  inline bool IsTrackedDeviceConnected(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::CVRSystem* New_ctor(::System::IntPtr pInterface);

  /// @brief Method PerformFirmwareUpdate, addr 0x5c2e8c4, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError PerformFirmwareUpdate(uint32_t unDeviceIndex);

  /// @brief Method PollNextEvent, addr 0x5c2e0ac, size 0x168, virtual false, abstract: false, final false
  inline bool PollNextEvent(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  /// @brief Method PollNextEventWithPose, addr 0x5c2e234, size 0x20, virtual false, abstract: false, final false
  inline bool PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                    ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  /// @brief Method ResetSeatedZeroPose, addr 0x5c2dd78, size 0x20, virtual false, abstract: false, final false
  inline void ResetSeatedZeroPose();

  /// @brief Method SetDisplayVisibility, addr 0x5c2dd28, size 0x24, virtual false, abstract: false, final false
  inline bool SetDisplayVisibility(bool bIsVisibleOnDesktop);

  /// @brief Method ShouldApplicationPause, addr 0x5c2e864, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldApplicationPause();

  /// @brief Method ShouldApplicationReduceRenderingWork, addr 0x5c2e884, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldApplicationReduceRenderingWork();

  /// @brief Method TriggerHapticPulse, addr 0x5c2e6ec, size 0x20, virtual false, abstract: false, final false
  inline void TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec);

  constexpr ::OVR::OpenVR::IVRSystem const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRSystem& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRSystem value);

  /// @brief Method .ctor, addr 0x5c2da70, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSystem(CVRSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSystem(CVRSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8353 };

  /// @brief Field FnTable, offset: 0x10, size: 0x178, def value: None
  ::OVR::OpenVR::IVRSystem ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRSystem, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem, 0x188>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRSystem);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem*, "OVR.OpenVR", "CVRSystem");
NEED_NO_BOX(::OVR::OpenVR::CVRSystem__GetControllerStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem__GetControllerStatePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStatePacked");
NEED_NO_BOX(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStateWithPosePacked");
NEED_NO_BOX(::OVR::OpenVR::CVRSystem__PollNextEventPacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem__PollNextEventPacked*, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem_GetControllerStateUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateUnion");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateWithPoseUnion");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem_PollNextEventUnion, "OVR.OpenVR", "CVRSystem/PollNextEventUnion");
