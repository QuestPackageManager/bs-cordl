#pragma once
#include "OVR/OpenVR/zzzz__IVRInput_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__InputOriginInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRInput::*)(void*)>(&::OVR::OpenVR::CVRInput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27f5a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.SetActionManifestPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW)>(
    &::OVR::OpenVR::CVRInput::SetActionManifestPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "SetActionManifestPath", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionSetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRInput::GetActionSetHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27f5ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionSetHandle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27f5bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionHandle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetInputSourceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRInput::GetInputSourceHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27f5bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetInputSourceHandle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.UpdateActionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    ::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>, uint32_t)>(&::OVR::OpenVR::CVRInput::UpdateActionState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f5c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "UpdateActionState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetDigitalActionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetDigitalActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetDigitalActionData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputDigitalActionData_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetAnalogActionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetAnalogActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetAnalogActionData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputAnalogActionData_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetPoseActionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetPoseActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetPoseActionData", std::vector<Il2CppClass*>{},
            ::std::vector<Il2CppType const*>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputPoseActionData_t>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalActionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalActionData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputSkeletalActionData_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>, uint64_t)>(
    &::OVR::OpenVR::CVRInput::GetSkeletalBoneData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27f5cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalBoneData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneDataCompressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, void*, uint32_t, ByRef<uint32_t>, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f5d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalBoneDataCompressed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.DecompressSkeletalBoneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    void*, uint32_t, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>)>(
    &::OVR::OpenVR::CVRInput::DecompressSkeletalBoneData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f5d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "DecompressSkeletalBoneData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.TriggerHapticVibrationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::TriggerHapticVibrationAction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "TriggerHapticVibrationAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionOrigins
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t, ::ArrayW<uint64_t, ::Array<uint64_t>*>)>(&::OVR::OpenVR::CVRInput::GetActionOrigins)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f5d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionOrigins", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginLocalizedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRInput::GetOriginLocalizedName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetOriginLocalizedName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginTrackedDeviceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputOriginInfo_t>, uint32_t)>(&::OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetOriginTrackedDeviceInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputOriginInfo_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowActionOrigins
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t)>(
    &::OVR::OpenVR::CVRInput::ShowActionOrigins)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "ShowActionOrigins", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowBindingsForActionSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(
    ::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::ShowBindingsForActionSet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27f5e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "ShowBindingsForActionSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRInput& OVR::OpenVR::CVRInput::__get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRInput const& OVR::OpenVR::CVRInput::__get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRInput::__set_FnTable(::OVR::OpenVR::IVRInput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline ::OVR::OpenVR::CVRInput* OVR::OpenVR::CVRInput::New_ctor(void* pInterface) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::CVRInput*>(pInterface));
}
inline void OVR::OpenVR::CVRInput::_ctor(void* pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::SetActionManifestPath(::StringW pchActionManifestPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "SetActionManifestPath", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionManifestPath);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionSetHandle(::StringW pchActionSetName, ByRef<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionSetHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionSetName, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionHandle(::StringW pchActionName, ByRef<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchActionName, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetInputSourceHandle(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetInputSourceHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pchInputSourcePath, pHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*> pSets,
                                                                             uint32_t unSizeOfVRSelectedActionSet_t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "UpdateActionState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetDigitalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetDigitalActionData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputDigitalActionData_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetAnalogActionData(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize,
                                                                               uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetAnalogActionData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputAnalogActionData_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                                             ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetPoseActionData", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputPoseActionData_t>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize,
                                                                                  ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize,
                                                                                 uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalActionData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputSkeletalActionData_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                               ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                               ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*> pTransformArray,
                                                                               uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalBoneData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace,
                                                                                         ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, void* pvCompressedData, uint32_t unCompressedSize,
                                                                                         ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetSkeletalBoneDataCompressed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize,
                                                                                  punRequiredCompressedSize, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::DecompressSkeletalBoneData(void* pvCompressedBuffer, uint32_t unCompressedBufferSize,
                                                                                      ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                                      ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*> pTransformArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "DecompressSkeletalBoneData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude,
                                                                                        uint64_t ulRestrictToDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "TriggerHapticVibrationAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t, ::Array<uint64_t>*> originsOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetActionOrigins", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, actionSetHandle, digitalActionHandle, originsOut);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetOriginLocalizedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, origin, pchNameArray, unNameArraySize);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "GetOriginTrackedDeviceInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputOriginInfo_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, origin, pOriginInfo, unOriginInfoSize);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "ShowActionOrigins", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, actionSetHandle, ulActionHandle);
}
inline ::OVR::OpenVR::EVRInputError OVR::OpenVR::CVRInput::ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*> pSets,
                                                                                    uint32_t unSizeOfVRSelectedActionSet_t, uint64_t originToHighlight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput*>::get(), "ShowBindingsForActionSet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(this, ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, originToHighlight);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRInput::CVRInput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
