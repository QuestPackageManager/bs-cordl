#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestComputeShader.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestComputeShader_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionTestComputeShader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionTestComputeShader::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::OcclusionTestComputeShader::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x667b188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionTestComputeShader>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionTestComputeShader::Init(::UnityEngine::ComputeShader* cs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionTestComputeShader>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionDebugKeyword", ty:
// "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionTestComputeShader::OcclusionTestComputeShader(::UnityW<::UnityEngine::ComputeShader> cs,
                                                                                           ::UnityEngine::Rendering::LocalKeyword occlusionDebugKeyword) noexcept {
  this->cs = cs;
  this->occlusionDebugKeyword = occlusionDebugKeyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionTestComputeShader::OcclusionTestComputeShader() {}
