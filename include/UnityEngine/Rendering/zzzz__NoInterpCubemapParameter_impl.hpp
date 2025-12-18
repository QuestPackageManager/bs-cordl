#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpCubemapParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpCubemapParameter_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpCubemapParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpCubemapParameter::*)(::UnityEngine::Cubemap*, bool)>(
    &::UnityEngine::Rendering::NoInterpCubemapParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x661701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpCubemapParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpCubemapParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::NoInterpCubemapParameter::*)()>(
    &::UnityEngine::Rendering::NoInterpCubemapParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6617080;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpCubemapParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpCubemapParameter*>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::NoInterpCubemapParameter::_ctor(::UnityEngine::Cubemap* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpCubemapParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline int32_t UnityEngine::Rendering::NoInterpCubemapParameter::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpCubemapParameter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::NoInterpCubemapParameter* UnityEngine::Rendering::NoInterpCubemapParameter::New_ctor(::UnityEngine::Cubemap* value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::NoInterpCubemapParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpCubemapParameter::NoInterpCubemapParameter() {}
