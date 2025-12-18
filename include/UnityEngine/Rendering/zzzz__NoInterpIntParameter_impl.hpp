#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpIntParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpIntParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpIntParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpIntParameter::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::NoInterpIntParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x661579c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::NoInterpIntParameter::_ctor(int32_t value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpIntParameter* UnityEngine::Rendering::NoInterpIntParameter::New_ctor(int32_t value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::NoInterpIntParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpIntParameter::NoInterpIntParameter() {}
