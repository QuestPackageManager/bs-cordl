#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(
    &::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(
    &::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(
    &::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 2));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_Posef (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4040ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_RootPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::GlobalNamespace::OVRPlugin_Posef)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4040f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_RootPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Posef>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_RootScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(float_t)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_RootScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneRotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> (
    ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_BoneRotations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneRotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(
    ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*>)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_BoneRotations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_IsDataValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4040f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4040f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneTranslations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> (
    ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_BoneTranslations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneTranslations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(
    ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_BoneTranslations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                               "get_SkeletonChangedCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(int32_t)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4040f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_SkeletonChangedCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Posef GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_RootPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Posef, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose(::GlobalNamespace::OVRPlugin_Posef value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_RootPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Posef>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_RootScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_RootScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_BoneRotations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_BoneRotations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_IsDataValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_IsDataValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_IsDataHighConfidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_BoneTranslations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_BoneTranslations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(),
                                                                             "get_SkeletonChangedCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>::get(), "set_SkeletonChangedCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RootScale_k__BackingField", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BoneRotations_k__BackingField", ty:
// "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_BoneTranslations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData(
    ::GlobalNamespace::OVRPlugin_Posef _RootPose_k__BackingField, float_t _RootScale_k__BackingField,
    ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> _BoneRotations_k__BackingField, bool _IsDataValid_k__BackingField,
    bool _IsDataHighConfidence_k__BackingField, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> _BoneTranslations_k__BackingField,
    int32_t _SkeletonChangedCount_k__BackingField) noexcept {
  this->_RootPose_k__BackingField = _RootPose_k__BackingField;
  this->_RootScale_k__BackingField = _RootScale_k__BackingField;
  this->_BoneRotations_k__BackingField = _BoneRotations_k__BackingField;
  this->_IsDataValid_k__BackingField = _IsDataValid_k__BackingField;
  this->_IsDataHighConfidence_k__BackingField = _IsDataHighConfidence_k__BackingField;
  this->_BoneTranslations_k__BackingField = _BoneTranslations_k__BackingField;
  this->_SkeletonChangedCount_k__BackingField = _SkeletonChangedCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType::OVRSkeleton_SkeletonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType::OVRSkeleton_SkeletonType() {}
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::HandRight{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::Body{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_BoneId::OVRSkeleton_BoneId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_BoneId::OVRSkeleton_BoneId() {}
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Invalid{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_WristRoot{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_ForearmStub{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb0{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb1{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb2{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb3{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index1{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index2{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index3{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle1{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle2{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle3{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring1{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring2{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring3{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky0{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky1{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky2{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky3{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_MaxSkinnable{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_ThumbTip{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_IndexTip{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_MiddleTip{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_RingTip{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_PinkyTip{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_End{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Root{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Hips{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineLower{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineMiddle{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineUpper{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Chest{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Neck{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Head{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftShoulder{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftScapula{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftArmUpper{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftArmLower{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandWristTwist{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightShoulder{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightScapula{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightArmUpper{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightArmLower{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandWristTwist{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandPalm{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandWrist{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbMetacarpal{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbProximal{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbDistal{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbTip{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexMetacarpal{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexProximal{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexIntermediate{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexDistal{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexTip{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleMetacarpal{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleProximal{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleIntermediate{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleDistal{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleTip{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingMetacarpal{ static_cast<int32_t>(0x22) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingProximal{ static_cast<int32_t>(0x23) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingIntermediate{ static_cast<int32_t>(0x24) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingDistal{ static_cast<int32_t>(0x25) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingTip{ static_cast<int32_t>(0x26) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleMetacarpal{ static_cast<int32_t>(0x27) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleProximal{ static_cast<int32_t>(0x28) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleIntermediate{ static_cast<int32_t>(0x29) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleDistal{ static_cast<int32_t>(0x2a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleTip{ static_cast<int32_t>(0x2b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandPalm{ static_cast<int32_t>(0x2c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandWrist{ static_cast<int32_t>(0x2d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbMetacarpal{ static_cast<int32_t>(0x2e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbProximal{ static_cast<int32_t>(0x2f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbDistal{ static_cast<int32_t>(0x30) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbTip{ static_cast<int32_t>(0x31) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexMetacarpal{ static_cast<int32_t>(0x32) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexProximal{ static_cast<int32_t>(0x33) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexIntermediate{ static_cast<int32_t>(0x34) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexDistal{ static_cast<int32_t>(0x35) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexTip{ static_cast<int32_t>(0x36) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleMetacarpal{ static_cast<int32_t>(0x37) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleProximal{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleIntermediate{ static_cast<int32_t>(0x39) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleDistal{ static_cast<int32_t>(0x3a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleTip{ static_cast<int32_t>(0x3b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingMetacarpal{ static_cast<int32_t>(0x3c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingProximal{ static_cast<int32_t>(0x3d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingIntermediate{ static_cast<int32_t>(0x3e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingDistal{ static_cast<int32_t>(0x3f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingTip{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleMetacarpal{ static_cast<int32_t>(0x41) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleProximal{ static_cast<int32_t>(0x42) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleIntermediate{ static_cast<int32_t>(0x43) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleDistal{ static_cast<int32_t>(0x44) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleTip{ static_cast<int32_t>(0x45) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_End{ static_cast<int32_t>(0x46) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Max{ static_cast<int32_t>(0x46) };
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_IsInitialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x403e878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_IsDataValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x403e88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                               "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x403e8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Bones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_Bones",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Bones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(
    &::GlobalNamespace::OVRSkeleton::set_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_Bones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_BindPoses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_BindPoses",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_BindPoses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(
    &::GlobalNamespace::OVRSkeleton::set_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_BindPoses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Capsules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_Capsules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Capsules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*)>(&::GlobalNamespace::OVRSkeleton::set_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_Capsules", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::GetSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetSkeletonType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(
    &::GlobalNamespace::OVRSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e8e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsValidBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRSkeleton::IsValidBone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x403e8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsValidBone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_BoneId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                               "get_SkeletonChangedCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(int32_t)>(&::GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403e960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_SkeletonChangedCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x403e968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SearchSkeletonDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x403eb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                               "SearchSkeletonDataProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x403ec9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.ShouldInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::ShouldInitialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x403ed3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "ShouldInitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Initialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x403ee00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetBoneTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403fc7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBones)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x403fc84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBindPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBindPose)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x403eea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "InitializeBindPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeCapsules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeCapsules)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x403f3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "InitializeCapsules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404077c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.UpdateSkeleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::UpdateSkeleton)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x4040780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "UpdateSkeleton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::FixedUpdate)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x4040b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentStartBoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4040e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentStartBoneId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentEndBoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4040e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentEndBoneId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentMaxSkinnableBoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4040e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                               "GetCurrentMaxSkinnableBoneId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumBones)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4040e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentNumBones",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumSkinnableBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4040ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                               "GetCurrentNumSkinnableBones", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.BoneLabelFromBoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::OVRSkeleton_SkeletonType, ::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x404024c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "BoneLabelFromBoneId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_BoneId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsBodySkeleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsBodySkeleton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4040768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsBodySkeleton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsHandSkeleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsHandSkeleton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x403ee94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsHandSkeleton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4040ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonType;
}
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonType;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skeletonType = value;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootPose;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootPose;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootPose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRootPose = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootScale;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootScale;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRootScale = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enablePhysicsCapsules;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enablePhysicsCapsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__enablePhysicsCapsules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enablePhysicsCapsules = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyBoneTranslations;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyBoneTranslations;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__applyBoneTranslations(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyBoneTranslations = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bonesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bonesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bonesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bonesGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPosesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPosesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPosesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindPosesGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsulesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsulesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsulesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capsulesGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bones;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPoses;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPoses;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindPoses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsules;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capsules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeleton;
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2 const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeleton;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeleton(::GlobalNamespace::OVRPlugin_Skeleton2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skeleton = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristFixupRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristFixupRotation;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set_wristFixupRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wristFixupRotation = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInitialized_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bones_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bones_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Bones_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindPoses_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindPoses_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BindPoses_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Capsules_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Capsules_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Capsules_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkeletonChangedCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkeletonChangedCount_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SkeletonChangedCount_k__BackingField = value;
}
inline bool GlobalNamespace::OVRSkeleton::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_IsInitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_IsDataValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsDataValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_IsDataHighConfidence",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_IsDataHighConfidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_Bones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_Bones",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_Bones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_BindPoses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_BindPoses",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_BindPoses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* GlobalNamespace::OVRSkeleton::get_Capsules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_Capsules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_Capsules", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton::GetSkeletonType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetSkeletonType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool GlobalNamespace::OVRSkeleton::IsValidBone(::GlobalNamespace::OVRSkeleton_BoneId bone) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsValidBone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_BoneId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bone);
}
inline int32_t GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "get_SkeletonChangedCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "set_SkeletonChangedCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSkeleton::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                             "SearchSkeletonDataProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton::ShouldInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "ShouldInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRSkeleton::GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId boneId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBones() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBindPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "InitializeBindPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeCapsules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "InitializeCapsules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::UpdateSkeleton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "UpdateSkeleton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentStartBoneId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentEndBoneId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                             "GetCurrentMaxSkinnableBoneId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "GetCurrentNumBones",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(),
                                                                             "GetCurrentNumSkinnableBones", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType, ::GlobalNamespace::OVRSkeleton_BoneId boneId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "BoneLabelFromBoneId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_BoneId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, skeletonType, boneId);
}
inline bool GlobalNamespace::OVRSkeleton::IsBodySkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsBodySkeleton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline bool GlobalNamespace::OVRSkeleton::IsHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), "IsHandSkeleton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton_SkeletonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::OVRSkeleton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeleton*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton* GlobalNamespace::OVRSkeleton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSkeleton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton::OVRSkeleton() {}
