#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/SpaceWarpFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__SpaceWarpFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.get_useRightHandedNDC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::get_useRightHandedNDC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4c4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "get_useRightHandedNDC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.set_useRightHandedNDC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::set_useRightHandedNDC)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e4c4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "set_useRightHandedNDC", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e4c664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.SetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e4c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.SetAppSpacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetAppSpacePosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e4c75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.SetAppSpaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion)>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetAppSpaceRotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e4c804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetAppSpaceRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.MetaSetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetSpaceWarp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e4c6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "MetaSetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.MetaSetAppSpacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetAppSpacePosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e4c774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(),
                                                             { "MetaSetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.MetaSetAppSpaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetAppSpaceRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e4c81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(),
                                                { "MetaSetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature.Internal_SetSpaceWarpRightHandedNDC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::Internal_SetSpaceWarpRightHandedNDC)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e4c5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "Internal_SetSpaceWarpRightHandedNDC", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4c8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::__cordl_internal_get_m_UseRightHandedNDC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRightHandedNDC;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::__cordl_internal_get_m_UseRightHandedNDC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRightHandedNDC;
}
constexpr void UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::__cordl_internal_set_m_UseRightHandedNDC(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseRightHandedNDC = value;
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::get_useRightHandedNDC() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "get_useRightHandedNDC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::set_useRightHandedNDC(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "set_useRightHandedNDC", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetSpaceWarp(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, enabled);
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetAppSpacePosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position);
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SetAppSpaceRotation(::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "SetAppSpaceRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetSpaceWarp(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "MetaSetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, enabled);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetAppSpacePosition(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(),
                                                           { "MetaSetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, x, y, z);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::MetaSetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(),
                                              { "MetaSetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, x, y, z, w);
}
inline bool UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::Internal_SetSpaceWarpRightHandedNDC(bool useRightHandedNDC) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { "Internal_SetSpaceWarpRightHandedNDC", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, useRightHandedNDC);
}
inline void UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature* UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::SpaceWarpFeature::SpaceWarpFeature() {}
