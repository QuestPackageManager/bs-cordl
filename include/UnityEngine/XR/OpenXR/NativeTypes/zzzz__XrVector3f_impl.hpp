#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector3f.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6826500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6826510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, z);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::_ctor(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Z", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::XrVector3f(float_t X, float_t Y, float_t Z) noexcept {
  this->X = X;
  this->Y = Y;
  this->Z = Z;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f::XrVector3f() {}
