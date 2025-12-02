#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/NeutralRangeReductionModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::*)(
    ::UnityEngine::Rendering::Universal::NeutralRangeReductionMode, bool)>(&::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x665fe60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::_ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*
UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::New_ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::NeutralRangeReductionModeParameter() {}
