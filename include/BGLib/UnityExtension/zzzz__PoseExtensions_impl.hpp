#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/PoseExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__PoseExtensions_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::PoseExtensions.InterpolateTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose, float_t)>(&::BGLib::UnityExtension::PoseExtensions::InterpolateTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3326c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(),
                                                             { "InterpolateTo", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::PoseExtensions.Invert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::BGLib::UnityExtension::PoseExtensions::Invert)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3326ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(), { "Invert", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::PoseExtensions.LerpTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose, float_t)>(&::BGLib::UnityExtension::PoseExtensions::LerpTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3326d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(),
                                                             { "LerpTo", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::PoseExtensions.MirrorController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::BGLib::UnityExtension::PoseExtensions::MirrorController)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3326de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(), { "MirrorController", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BGLib::UnityExtension::PoseExtensions::InterpolateTo(::UnityEngine::Pose a, ::UnityEngine::Pose b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(),
                                                           { "InterpolateTo", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Pose BGLib::UnityExtension::PoseExtensions::Invert(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(), { "Invert", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Pose BGLib::UnityExtension::PoseExtensions::LerpTo(::UnityEngine::Pose a, ::UnityEngine::Pose b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(),
                                                           { "LerpTo", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Pose BGLib::UnityExtension::PoseExtensions::MirrorController(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::PoseExtensions*>(), { "MirrorController", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::PoseExtensions::PoseExtensions() {}
