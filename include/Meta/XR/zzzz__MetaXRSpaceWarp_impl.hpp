#pragma once
// IWYU pragma private; include "Meta\XR\MetaXRSpaceWarp.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXRSpaceWarp_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.SetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXRSpaceWarp::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e50694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.SetAppSpacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t)>(&::Meta::XR::MetaXRSpaceWarp::SetAppSpacePosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e50714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.SetAppSpaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Meta::XR::MetaXRSpaceWarp::SetAppSpaceRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e507a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(),
                                                { "SetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.MetaSetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXRSpaceWarp::MetaSetSpaceWarp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e50698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "MetaSetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.MetaSetAppSpacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t)>(&::Meta::XR::MetaXRSpaceWarp::MetaSetAppSpacePosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e50718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "MetaSetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp.MetaSetAppSpaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Meta::XR::MetaXRSpaceWarp::MetaSetAppSpaceRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e507ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(),
                                                { "MetaSetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSpaceWarp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRSpaceWarp::*)()>(&::Meta::XR::MetaXRSpaceWarp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e50844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::MetaXRSpaceWarp::SetSpaceWarp(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void Meta::XR::MetaXRSpaceWarp::SetAppSpacePosition(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void Meta::XR::MetaXRSpaceWarp::SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(),
                                              { "SetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z, w);
}
inline void Meta::XR::MetaXRSpaceWarp::MetaSetSpaceWarp(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "MetaSetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void Meta::XR::MetaXRSpaceWarp::MetaSetAppSpacePosition(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { "MetaSetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void Meta::XR::MetaXRSpaceWarp::MetaSetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(),
                                              { "MetaSetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z, w);
}
inline void Meta::XR::MetaXRSpaceWarp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSpaceWarp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MetaXRSpaceWarp* Meta::XR::MetaXRSpaceWarp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MetaXRSpaceWarp*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXRSpaceWarp::MetaXRSpaceWarp() {}
