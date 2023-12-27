#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider.GetPoseFromProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(
    ByRef<::UnityEngine::Pose>)>(&::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d1a058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider.TryGetPoseFromProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(ByRef<::UnityEngine::Pose>)>(
    &::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d1a07c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)()>(
    &::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1a104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider(ByRef<::UnityEngine::Pose> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), "GetPoseFromProvider",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(this, ___internal_method, output);
}
inline bool UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider(ByRef<::UnityEngine::Pose> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), "TryGetPoseFromProvider",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, output);
}
inline ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* UnityEngine::Experimental::XR::Interaction::BasePoseProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>());
}
inline void UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::BasePoseProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
