#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintInputProducer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintInputProducer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintInput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintInputProducer.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderDebugPrintInput (*)()>(
    &::UnityEngine::Rendering::ShaderDebugPrintInputProducer::Get)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6550fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderDebugPrintInputProducer*>::get(),
                                                                               "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ShaderDebugPrintInput UnityEngine::Rendering::ShaderDebugPrintInputProducer::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderDebugPrintInputProducer*>::get(),
                                                                             "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderDebugPrintInput, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderDebugPrintInputProducer::ShaderDebugPrintInputProducer() {}
