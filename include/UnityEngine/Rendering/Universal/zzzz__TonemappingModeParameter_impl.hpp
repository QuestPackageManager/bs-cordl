#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TonemappingModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TonemappingModeParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TonemappingModeParameter::*)(
    ::UnityEngine::Rendering::Universal::TonemappingMode, bool)>(&::UnityEngine::Rendering::Universal::TonemappingModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66c7988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TonemappingMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TonemappingModeParameter::_ctor(::UnityEngine::Rendering::Universal::TonemappingMode value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TonemappingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::TonemappingModeParameter* UnityEngine::Rendering::Universal::TonemappingModeParameter::New_ctor(::UnityEngine::Rendering::Universal::TonemappingMode value,
                                                                                                                                            bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter::TonemappingModeParameter() {}
