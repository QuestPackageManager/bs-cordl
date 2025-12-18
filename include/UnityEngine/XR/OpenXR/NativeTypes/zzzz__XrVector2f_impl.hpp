#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector2f.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector2f_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68264f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68264f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor(float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::_ctor(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::XrVector2f(float_t X, float_t Y) noexcept {
  this->X = X;
  this->Y = Y;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f::XrVector2f() {}
