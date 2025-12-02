#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DownscaleParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomDownscaleMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DownscaleParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomDownscaleMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DownscaleParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DownscaleParameter::*)(
    ::UnityEngine::Rendering::Universal::BloomDownscaleMode, bool)>(&::UnityEngine::Rendering::Universal::DownscaleParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x665425c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DownscaleParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::BloomDownscaleMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DownscaleParameter::_ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DownscaleParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::BloomDownscaleMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::DownscaleParameter* UnityEngine::Rendering::Universal::DownscaleParameter::New_ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value,
                                                                                                                                bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DownscaleParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter::DownscaleParameter() {}
