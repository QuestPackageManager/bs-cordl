#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSystem)
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
namespace OVR::OpenVR {
struct __CVRSystem__GetControllerStateUnion;
}
namespace OVR::OpenVR {
struct __CVRSystem__GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct __CVRSystem__PollNextEventUnion;
}
namespace OVR::OpenVR {
class __CVRSystem___GetControllerStatePacked;
}
namespace OVR::OpenVR {
class __CVRSystem___GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class __CVRSystem___PollNextEventPacked;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class __IVRSystem___PollNextEvent;
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
class __CVRSystem___GetControllerStatePacked;
}
namespace OVR::OpenVR {
class __CVRSystem___GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class __CVRSystem___PollNextEventPacked;
}
namespace OVR::OpenVR {
struct __CVRSystem__GetControllerStateUnion;
}
namespace OVR::OpenVR {
struct __CVRSystem__GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct __CVRSystem__PollNextEventUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRSystem);
MARK_REF_PTR_T(::OVR::OpenVR::__CVRSystem___GetControllerStatePacked);
MARK_REF_PTR_T(::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked);
MARK_REF_PTR_T(::OVR::OpenVR::__CVRSystem___PollNextEventPacked);
MARK_VAL_T(::OVR::OpenVR::__CVRSystem__GetControllerStateUnion);
MARK_VAL_T(::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion);
MARK_VAL_T(::OVR::OpenVR::__CVRSystem__PollNextEventUnion);
// Type: ::_PollNextEventPacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::CVRSystem::_PollNextEventPacked*
class CORDL_TYPE __CVRSystem___PollNextEventPacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bfa95c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bfaa14, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bfa948, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bfa870, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem___PollNextEventPacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___PollNextEventPacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVRSystem___PollNextEventPacked(__CVRSystem___PollNextEventPacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___PollNextEventPacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVRSystem___PollNextEventPacked(__CVRSystem___PollNextEventPacked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem___PollNextEventPacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::PollNextEventUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::CVRSystem::PollNextEventUnion
struct CORDL_TYPE __CVRSystem__PollNextEventUnion {
public:
  // Declarations
  /// @brief Field pPollNextEvent, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextEvent, put = __cordl_internal_set_pPollNextEvent))::OVR::OpenVR::__IVRSystem___PollNextEvent* pPollNextEvent;

  /// @brief Field pPollNextEventPacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextEventPacked, put = __cordl_internal_set_pPollNextEventPacked))::OVR::OpenVR::__CVRSystem___PollNextEventPacked* pPollNextEventPacked;

  constexpr ::OVR::OpenVR::__IVRSystem___PollNextEvent*& __cordl_internal_get_pPollNextEvent();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___PollNextEvent*> const& __cordl_internal_get_pPollNextEvent() const;

  constexpr ::OVR::OpenVR::__CVRSystem___PollNextEventPacked*& __cordl_internal_get_pPollNextEventPacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*> const& __cordl_internal_get_pPollNextEventPacked() const;

  constexpr void __cordl_internal_set_pPollNextEvent(::OVR::OpenVR::__IVRSystem___PollNextEvent* value);

  constexpr void __cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::__CVRSystem___PollNextEventPacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem__PollNextEventUnion();

  // Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::__IVRSystem___PollNextEvent*", modifiers: "", def_value: None }, CppParam { name: "pPollNextEventPacked", ty:
  // "::OVR::OpenVR::__CVRSystem___PollNextEventPacked*", modifiers: "", def_value: None }]
  constexpr __CVRSystem__PollNextEventUnion(::OVR::OpenVR::__IVRSystem___PollNextEvent* pPollNextEvent, ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* pPollNextEventPacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextEvent_padding[0x0];
      /// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___PollNextEvent* ___pPollNextEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextEvent_padding_forAlignment[0x0];
      /// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___PollNextEvent* ___pPollNextEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextEventPacked_padding[0x0];
      /// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* ___pPollNextEventPacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextEventPacked_padding_forAlignment[0x0];
      /// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* ___pPollNextEventPacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem__PollNextEventUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerStatePacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::CVRSystem::_GetControllerStatePacked*
class CORDL_TYPE __CVRSystem___GetControllerStatePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bfab18, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bfabe4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bfab04, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize);

  static inline ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bfaa40, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem___GetControllerStatePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___GetControllerStatePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVRSystem___GetControllerStatePacked(__CVRSystem___GetControllerStatePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___GetControllerStatePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVRSystem___GetControllerStatePacked(__CVRSystem___GetControllerStatePacked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::GetControllerStateUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::CVRSystem::GetControllerStateUnion
struct CORDL_TYPE __CVRSystem__GetControllerStateUnion {
public:
  // Declarations
  /// @brief Field pGetControllerState, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerState, put = __cordl_internal_set_pGetControllerState))::OVR::OpenVR::__IVRSystem___GetControllerState* pGetControllerState;

  /// @brief Field pGetControllerStatePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStatePacked,
                      put = __cordl_internal_set_pGetControllerStatePacked))::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* pGetControllerStatePacked;

  constexpr ::OVR::OpenVR::__IVRSystem___GetControllerState*& __cordl_internal_get_pGetControllerState();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___GetControllerState*> const& __cordl_internal_get_pGetControllerState() const;

  constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*& __cordl_internal_get_pGetControllerStatePacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*> const& __cordl_internal_get_pGetControllerStatePacked() const;

  constexpr void __cordl_internal_set_pGetControllerState(::OVR::OpenVR::__IVRSystem___GetControllerState* value);

  constexpr void __cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem__GetControllerStateUnion();

  // Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::__IVRSystem___GetControllerState*", modifiers: "", def_value: None }, CppParam { name: "pGetControllerStatePacked",
  // ty: "::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*", modifiers: "", def_value: None }]
  constexpr __CVRSystem__GetControllerStateUnion(::OVR::OpenVR::__IVRSystem___GetControllerState* pGetControllerState,
                                                 ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* pGetControllerStatePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerState_padding[0x0];
      /// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___GetControllerState* ___pGetControllerState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerState_padding_forAlignment[0x0];
      /// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___GetControllerState* ___pGetControllerState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStatePacked_padding[0x0];
      /// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* ___pGetControllerStatePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStatePacked_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* ___pGetControllerStatePacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem__GetControllerStateUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerStateWithPosePacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::CVRSystem::_GetControllerStateWithPosePacked*
class CORDL_TYPE __CVRSystem___GetControllerStateWithPosePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bface8, size 0x134, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                             uint32_t unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bfae1c, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bfacd4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                     uint32_t unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bfac10, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem___GetControllerStateWithPosePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___GetControllerStateWithPosePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVRSystem___GetControllerStateWithPosePacked(__CVRSystem___GetControllerStateWithPosePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVRSystem___GetControllerStateWithPosePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVRSystem___GetControllerStateWithPosePacked(__CVRSystem___GetControllerStateWithPosePacked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::GetControllerStateWithPoseUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::CVRSystem::GetControllerStateWithPoseUnion
struct CORDL_TYPE __CVRSystem__GetControllerStateWithPoseUnion {
public:
  // Declarations
  /// @brief Field pGetControllerStateWithPose, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStateWithPose,
                      put = __cordl_internal_set_pGetControllerStateWithPose))::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* pGetControllerStateWithPose;

  /// @brief Field pGetControllerStateWithPosePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetControllerStateWithPosePacked,
                      put = __cordl_internal_set_pGetControllerStateWithPosePacked))::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;

  constexpr ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*& __cordl_internal_get_pGetControllerStateWithPose();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*> const& __cordl_internal_get_pGetControllerStateWithPose() const;

  constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*& __cordl_internal_get_pGetControllerStateWithPosePacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*> const& __cordl_internal_get_pGetControllerStateWithPosePacked() const;

  constexpr void __cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* value);

  constexpr void __cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRSystem__GetControllerStateWithPoseUnion();

  // Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*", modifiers: "", def_value: None }, CppParam { name:
  // "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*", modifiers: "", def_value: None }]
  constexpr __CVRSystem__GetControllerStateWithPoseUnion(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* pGetControllerStateWithPose,
                                                         ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStateWithPose_padding[0x0];
      /// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* ___pGetControllerStateWithPose;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStateWithPose_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* ___pGetControllerStateWithPose_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetControllerStateWithPosePacked_padding[0x0];
      /// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* ___pGetControllerStateWithPosePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetControllerStateWithPosePacked_padding_forAlignment[0x0];
      /// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* ___pGetControllerStateWithPosePacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::CVRSystem
// SizeInfo { instance_size: 392, native_size: -1, calculated_instance_size: 392, calculated_native_size: 392, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVRSystem*
class CORDL_TYPE CVRSystem : public ::System::Object {
public:
  // Declarations
  using GetControllerStateUnion = ::OVR::OpenVR::__CVRSystem__GetControllerStateUnion;

  using GetControllerStateWithPoseUnion = ::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion;

  using PollNextEventUnion = ::OVR::OpenVR::__CVRSystem__PollNextEventUnion;

  using _GetControllerStatePacked = ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked;

  using _GetControllerStateWithPosePacked = ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked;

  using _PollNextEventPacked = ::OVR::OpenVR::__CVRSystem___PollNextEventPacked;

  /// @brief Field FnTable, offset 0x10, size 0x178
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable))::OVR::OpenVR::IVRSystem FnTable;

  /// @brief Method AcknowledgeQuit_Exiting, addr 0x2bfa828, size 0x24, virtual false, abstract: false, final false
  inline void AcknowledgeQuit_Exiting();

  /// @brief Method AcknowledgeQuit_UserPrompt, addr 0x2bfa84c, size 0x24, virtual false, abstract: false, final false
  inline void AcknowledgeQuit_UserPrompt();

  /// @brief Method ApplyTransform, addr 0x2bf9d74, size 0x24, virtual false, abstract: false, final false
  inline void ApplyTransform(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform);

  /// @brief Method ComputeDistortion, addr 0x2bf9ae8, size 0x24, virtual false, abstract: false, final false
  inline bool ComputeDistortion(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates);

  /// @brief Method DriverDebugRequest, addr 0x2bfa7e0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize);

  /// @brief Method GetArrayTrackedDeviceProperty, addr 0x2bf9f00, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                                ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetBoolTrackedDeviceProperty, addr 0x2bf9e28, size 0x24, virtual false, abstract: false, final false
  inline bool GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetButtonIdNameFromEnum, addr 0x2bfa648, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetButtonIdNameFromEnum(::OVR::OpenVR::EVRButtonId eButtonId);

  /// @brief Method GetControllerAxisTypeNameFromEnum, addr 0x2bfa6cc, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetControllerAxisTypeNameFromEnum(::OVR::OpenVR::EVRControllerAxisType eAxisType);

  /// @brief Method GetControllerRoleForTrackedDeviceIndex, addr 0x2bf9dbc, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex);

  /// @brief Method GetControllerState, addr 0x2bfa22c, size 0x1ac, virtual false, abstract: false, final false
  inline bool GetControllerState(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize);

  /// @brief Method GetControllerStateWithPose, addr 0x2bfa458, size 0x1cc, virtual false, abstract: false, final false
  inline bool GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                         uint32_t unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  /// @brief Method GetD3D9AdapterIndex, addr 0x2bf9b80, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetD3D9AdapterIndex();

  /// @brief Method GetDXGIOutputInfo, addr 0x2bf9ba4, size 0x28, virtual false, abstract: false, final false
  inline void GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex);

  /// @brief Method GetDeviceToAbsoluteTrackingPose, addr 0x2bf9c40, size 0x2c, virtual false, abstract: false, final false
  inline void GetDeviceToAbsoluteTrackingPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                              ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pTrackedDevicePoseArray);

  /// @brief Method GetEventTypeNameFromEnum, addr 0x2bfa184, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetEventTypeNameFromEnum(::OVR::OpenVR::EVREventType eType);

  /// @brief Method GetEyeToHeadTransform, addr 0x2bf9b0c, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetEyeToHeadTransform(::OVR::OpenVR::EVREye eEye);

  /// @brief Method GetFloatTrackedDeviceProperty, addr 0x2bf9e4c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetHiddenAreaMesh, addr 0x2bfa208, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t GetHiddenAreaMesh(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type);

  /// @brief Method GetInt32TrackedDeviceProperty, addr 0x2bf9e70, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetMatrix34TrackedDeviceProperty, addr 0x2bf9eb8, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetOutputDevice, addr 0x2bf9bcc, size 0x28, virtual false, abstract: false, final false
  inline void GetOutputDevice(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);

  /// @brief Method GetProjectionMatrix, addr 0x2bf9a6c, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t GetProjectionMatrix(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ);

  /// @brief Method GetProjectionRaw, addr 0x2bf9ab4, size 0x34, virtual false, abstract: false, final false
  inline void GetProjectionRaw(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom);

  /// @brief Method GetPropErrorNameFromEnum, addr 0x2bf9f48, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError error);

  /// @brief Method GetRawZeroPoseToStandingAbsoluteTrackingPose, addr 0x2bf9cd8, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose();

  /// @brief Method GetRecommendedRenderTargetSize, addr 0x2bf9a40, size 0x2c, virtual false, abstract: false, final false
  inline void GetRecommendedRenderTargetSize(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  /// @brief Method GetSeatedZeroPoseToStandingAbsoluteTrackingPose, addr 0x2bf9c90, size 0x48, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose();

  /// @brief Method GetSortedTrackedDeviceIndicesOfClass, addr 0x2bf9d20, size 0x30, virtual false, abstract: false, final false
  inline uint32_t GetSortedTrackedDeviceIndicesOfClass(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t, ::Array<uint32_t>*> punTrackedDeviceIndexArray,
                                                       uint32_t unRelativeToTrackedDeviceIndex);

  /// @brief Method GetStringTrackedDeviceProperty, addr 0x2bf9f24, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                 ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method GetTimeSinceLastVsync, addr 0x2bf9b54, size 0x2c, virtual false, abstract: false, final false
  inline bool GetTimeSinceLastVsync(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter);

  /// @brief Method GetTrackedDeviceActivityLevel, addr 0x2bf9d50, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint32_t unDeviceId);

  /// @brief Method GetTrackedDeviceClass, addr 0x2bf9de0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass GetTrackedDeviceClass(uint32_t unDeviceIndex);

  /// @brief Method GetTrackedDeviceIndexForControllerRole, addr 0x2bf9d98, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetTrackedDeviceIndexForControllerRole(::OVR::OpenVR::ETrackedControllerRole unDeviceType);

  /// @brief Method GetUint64TrackedDeviceProperty, addr 0x2bf9e94, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  /// @brief Method IsDisplayOnDesktop, addr 0x2bf9bf4, size 0x24, virtual false, abstract: false, final false
  inline bool IsDisplayOnDesktop();

  /// @brief Method IsInputAvailable, addr 0x2bfa750, size 0x24, virtual false, abstract: false, final false
  inline bool IsInputAvailable();

  /// @brief Method IsSteamVRDrawingControllers, addr 0x2bfa774, size 0x24, virtual false, abstract: false, final false
  inline bool IsSteamVRDrawingControllers();

  /// @brief Method IsTrackedDeviceConnected, addr 0x2bf9e04, size 0x24, virtual false, abstract: false, final false
  inline bool IsTrackedDeviceConnected(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::CVRSystem* New_ctor(::System::IntPtr pInterface);

  /// @brief Method PerformFirmwareUpdate, addr 0x2bfa804, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError PerformFirmwareUpdate(uint32_t unDeviceIndex);

  /// @brief Method PollNextEvent, addr 0x2bf9fcc, size 0x174, virtual false, abstract: false, final false
  inline bool PollNextEvent(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  /// @brief Method PollNextEventWithPose, addr 0x2bfa160, size 0x24, virtual false, abstract: false, final false
  inline bool PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                    ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  /// @brief Method ResetSeatedZeroPose, addr 0x2bf9c6c, size 0x24, virtual false, abstract: false, final false
  inline void ResetSeatedZeroPose();

  /// @brief Method SetDisplayVisibility, addr 0x2bf9c18, size 0x28, virtual false, abstract: false, final false
  inline bool SetDisplayVisibility(bool bIsVisibleOnDesktop);

  /// @brief Method ShouldApplicationPause, addr 0x2bfa798, size 0x24, virtual false, abstract: false, final false
  inline bool ShouldApplicationPause();

  /// @brief Method ShouldApplicationReduceRenderingWork, addr 0x2bfa7bc, size 0x24, virtual false, abstract: false, final false
  inline bool ShouldApplicationReduceRenderingWork();

  /// @brief Method TriggerHapticPulse, addr 0x2bfa624, size 0x24, virtual false, abstract: false, final false
  inline void TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec);

  constexpr ::OVR::OpenVR::IVRSystem const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRSystem& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRSystem value);

  /// @brief Method .ctor, addr 0x2bf992c, size 0x114, virtual false, abstract: false, final false
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

  /// @brief Field FnTable, offset: 0x10, size: 0x178, def value: None
  ::OVR::OpenVR::IVRSystem ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSystem, 0x188>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRSystem, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRSystem);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSystem*, "OVR.OpenVR", "CVRSystem");
NEED_NO_BOX(::OVR::OpenVR::__CVRSystem___GetControllerStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStatePacked");
NEED_NO_BOX(::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStateWithPosePacked");
NEED_NO_BOX(::OVR::OpenVR::__CVRSystem___PollNextEventPacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem___PollNextEventPacked*, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem__GetControllerStateUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateUnion");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateWithPoseUnion");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRSystem__PollNextEventUnion, "OVR.OpenVR", "CVRSystem/PollNextEventUnion");
