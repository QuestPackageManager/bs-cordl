#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureCurveParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurveParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurveParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::TextureCurveParameter::*)(::UnityEngine::Rendering::TextureCurve*, bool)>(
    &::UnityEngine::Rendering::TextureCurveParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x661176c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureCurveParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureCurve*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurveParameter.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::TextureCurveParameter::*)()>(
    &::UnityEngine::Rendering::TextureCurveParameter::Release)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66117d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureCurveParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureCurveParameter*>::get(), 11));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::TextureCurveParameter::_ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureCurveParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::TextureCurve*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::TextureCurveParameter::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureCurveParameter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureCurveParameter* UnityEngine::Rendering::TextureCurveParameter::New_ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::TextureCurveParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureCurveParameter::TextureCurveParameter() {}
