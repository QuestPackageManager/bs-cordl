#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrQuaternionf.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6826520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6826534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, z, w);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quaternion);
}
// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Z", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::XrQuaternionf(float_t X, float_t Y, float_t Z, float_t W) noexcept {
  this->X = X;
  this->Y = Y;
  this->Z = Z;
  this->W = W;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::XrQuaternionf() {}
