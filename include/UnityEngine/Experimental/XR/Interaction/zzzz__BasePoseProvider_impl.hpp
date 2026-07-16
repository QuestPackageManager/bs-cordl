#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/XR/Interaction/BasePoseProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider.GetPoseFromProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(
    ::by_ref<::UnityEngine::Pose>)>(&::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bb4850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider.TryGetPoseFromProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(::by_ref<::UnityEngine::Pose>)>(
    &::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bb4874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)()>(
    &::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb48f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider(::by_ref<::UnityEngine::Pose> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags>(this, ___internal_method, output);
}
inline bool UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider(::by_ref<::UnityEngine::Pose> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, output);
}
inline void UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* UnityEngine::Experimental::XR::Interaction::BasePoseProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::BasePoseProvider() {}
