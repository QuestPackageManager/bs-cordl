#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRayTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRayTransformer_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRayTransformer.TransformRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::GlobalNamespace::OVRRayTransformer::*)(::UnityEngine::Ray)>(&::GlobalNamespace::OVRRayTransformer::TransformRay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayTransformer*>(), { ::i2c::class_of<::GlobalNamespace::OVRRayTransformer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRayTransformer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRayTransformer::*)()>(&::GlobalNamespace::OVRRayTransformer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f09d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayTransformer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Ray GlobalNamespace::OVRRayTransformer::TransformRay(::UnityEngine::Ray ray) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRayTransformer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, ray);
}
inline void GlobalNamespace::OVRRayTransformer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayTransformer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRayTransformer* GlobalNamespace::OVRRayTransformer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRayTransformer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRayTransformer::OVRRayTransformer() {}
