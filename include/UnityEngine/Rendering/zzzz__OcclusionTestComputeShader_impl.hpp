#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\OcclusionTestComputeShader.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestComputeShader_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionTestComputeShader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OcclusionTestComputeShader::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::OcclusionTestComputeShader::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68322f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionTestComputeShader>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionTestComputeShader::Init(::UnityEngine::ComputeShader* cs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionTestComputeShader>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
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
