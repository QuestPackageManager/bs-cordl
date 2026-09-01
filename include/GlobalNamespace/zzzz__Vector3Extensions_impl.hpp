#pragma once
// IWYU pragma private; include "GlobalNamespace\Vector3Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Extensions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector3Extensions.InverseLerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::Vector3Extensions::InverseLerp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3326144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(),
                                         { "InverseLerp", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Extensions.RotatedAroundPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::Vector3Extensions::RotatedAroundPivot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3326194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(),
                            { "RotatedAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Extensions.MirrorOnYZPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Vector3Extensions::MirrorOnYZPlane)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33261f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "MirrorOnYZPlane", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Extensions.MirrorEulerAnglesOnYZPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Vector3Extensions::MirrorEulerAnglesOnYZPlane)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33261fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "MirrorEulerAnglesOnYZPlane", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Extensions.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::Vector3Extensions::Abs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3326208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "Abs", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::Vector3Extensions::InverseLerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(),
                                       { "InverseLerp", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3Extensions::RotatedAroundPivot(::UnityEngine::Vector3 vector, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 pivot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(),
                          { "RotatedAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector, rotation, pivot);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3Extensions::MirrorOnYZPlane(::UnityEngine::Vector3 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "MirrorOnYZPlane", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3Extensions::MirrorEulerAnglesOnYZPlane(::UnityEngine::Vector3 vector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "MirrorEulerAnglesOnYZPlane", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3Extensions::Abs(::by_ref<::UnityEngine::Vector3> vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Extensions*>(), { "Abs", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector3Extensions::Vector3Extensions() {}
