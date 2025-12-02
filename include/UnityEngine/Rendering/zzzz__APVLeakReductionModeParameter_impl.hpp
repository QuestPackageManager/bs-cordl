#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/APVLeakReductionModeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::APVLeakReductionModeParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::APVLeakReductionModeParameter::*)(
    ::UnityEngine::Rendering::APVLeakReductionMode, bool)>(&::UnityEngine::Rendering::APVLeakReductionModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6579f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVLeakReductionModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::APVLeakReductionMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::APVLeakReductionModeParameter::_ctor(::UnityEngine::Rendering::APVLeakReductionMode value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::APVLeakReductionModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::APVLeakReductionMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::APVLeakReductionModeParameter* UnityEngine::Rendering::APVLeakReductionModeParameter::New_ctor(::UnityEngine::Rendering::APVLeakReductionMode value,
                                                                                                                                bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::APVLeakReductionModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter::APVLeakReductionModeParameter() {}
