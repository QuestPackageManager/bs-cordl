#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassInputData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassInputData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c26f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> resource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resource);
}
// Ctor Parameters [CppParam { name: "resource", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData::PassInputData(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource) noexcept {
  this->resource = resource;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData::PassInputData() {}
