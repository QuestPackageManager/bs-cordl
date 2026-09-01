#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRInput.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputOriginInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRInput::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRInput::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e474cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.SetActionManifestPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW)>(&::OVR::OpenVR::CVRInput::SetActionManifestPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e475cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "SetActionManifestPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionSetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ::by_ref<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionSetHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e475ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetActionSetHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ::by_ref<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e47610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetActionHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetInputSourceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ::by_ref<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetInputSourceHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e47634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetInputSourceHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.UpdateActionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint32_t)>(
    &::OVR::OpenVR::CVRInput::UpdateActionState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e47658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "UpdateActionState", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetDigitalActionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::GetDigitalActionData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e47684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetDigitalActionData",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputDigitalActionData_t>>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetAnalogActionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::GetAnalogActionData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e476a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetAnalogActionData",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputAnalogActionData_t>>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetPoseActionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::by_ref<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetPoseActionData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e476c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                             { "GetPoseActionData",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::InputPoseActionData_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalActionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::GetSkeletalActionData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e476e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetSkeletalActionData",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalBoneData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e47704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                { "GetSkeletalBoneData",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalTransformSpace>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalMotionRange>(),
                                                    ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneDataCompressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>, uint64_t)>(
    &::OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e47734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                { "GetSkeletalBoneDataCompressed",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalTransformSpace>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalMotionRange>(),
                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.DecompressSkeletalBoneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>)>(&::OVR::OpenVR::CVRInput::DecompressSkeletalBoneData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e47760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                             { "DecompressSkeletalBoneData",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>>(),
                                                                 ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.TriggerHapticVibrationAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::TriggerHapticVibrationAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4778c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "TriggerHapticVibrationAction",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionOrigins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t, ::ArrayW<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionOrigins)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e477ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                             { "GetActionOrigins", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginLocalizedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRInput::GetOriginLocalizedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e477d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                { "GetOriginLocalizedName", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginTrackedDeviceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::by_ref<::OVR::OpenVR::InputOriginInfo_t>, uint32_t)>(
    &::OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e477f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                            { "GetOriginTrackedDeviceInfo", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputOriginInfo_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowActionOrigins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t)>(&::OVR::OpenVR::CVRInput::ShowActionOrigins)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e47818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "ShowActionOrigins", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowBindingsForActionSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint32_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::ShowBindingsForActionSet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e47838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                            { "ShowBindingsForActionSet", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRInput& OVR::OpenVR::CVRInput::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRInput const& OVR::OpenVR::CVRInput::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRInput::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRInput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRInput::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::SetActionManifestPath(::StringW pchActionManifestPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "SetActionManifestPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionManifestPath);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionSetHandle(::StringW pchActionSetName, ::by_ref<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetActionSetHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionSetName, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionHandle(::StringW pchActionName, ::by_ref<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetActionHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchActionName, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetInputSourceHandle(::StringW pchInputSourcePath, ::by_ref<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetInputSourceHandle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pchInputSourcePath, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "UpdateActionState", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetDigitalActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetDigitalActionData",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputDigitalActionData_t>>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetAnalogActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                               uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
          { "GetAnalogActionData", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputAnalogActionData_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                             ::by_ref<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                           { "GetPoseActionData",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::InputPoseActionData_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalActionData(uint64_t action, ::by_ref<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                 uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetSkeletalActionData",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputSkeletalActionData_t>>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                               ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray,
                                                                               uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                              { "GetSkeletalBoneData",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalTransformSpace>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalMotionRange>(),
                                                  ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                         ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData,
                                                                                         uint32_t unCompressedSize, ::by_ref<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                              { "GetSkeletalBoneDataCompressed",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalTransformSpace>(), ::i2c::type_of<::OVR::OpenVR::EVRSkeletalMotionRange>(),
                                                  ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize,
                                                                           punRequiredCompressedSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::DecompressSkeletalBoneData(::System::IntPtr pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                                      ::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                                      ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                                           { "DecompressSkeletalBoneData",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRSkeletalTransformSpace>>(),
                                                               ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude,
                                                                                        uint64_t ulRestrictToDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "TriggerHapticVibrationAction",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t> originsOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "GetActionOrigins", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                                              { "GetOriginLocalizedName", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, origin, pchNameArray, unNameArraySize);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo(uint64_t origin, ::by_ref<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                          { "GetOriginTrackedDeviceInfo", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::InputOriginInfo_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(), { "ShowActionOrigins", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, actionSetHandle, ulActionHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                                                    uint64_t originToHighlight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRInput*>(),
                          { "ShowBindingsForActionSet", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, originToHighlight);
}
inline ::OVR::OpenVR::CVRInput* OVR::OpenVR::CVRInput::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRInput*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRInput::CVRInput() {}
