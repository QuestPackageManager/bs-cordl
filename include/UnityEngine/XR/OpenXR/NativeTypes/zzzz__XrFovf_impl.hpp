#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFovf.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFovf_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrFovf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrFovf::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrFovf::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3db98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFovf>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrFovf::_ctor(float_t angleLeft, float_t angleRight, float_t angleUp, float_t angleDown) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrFovf>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, angleLeft, angleRight, angleUp, angleDown);
}
// Ctor Parameters [CppParam { name: "AngleLeft", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngleRight", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "AngleUp", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngleDown", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFovf::XrFovf(float_t AngleLeft, float_t AngleRight, float_t AngleUp, float_t AngleDown) noexcept {
  this->AngleLeft = AngleLeft;
  this->AngleRight = AngleRight;
  this->AngleUp = AngleUp;
  this->AngleDown = AngleDown;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrFovf::XrFovf() {}
