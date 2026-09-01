#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\PassRandomWriteData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassRandomWriteData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67f94d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "resource", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "preserveCounterValue", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData::PassRandomWriteData(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource,
                                                                                                                          int32_t index, bool preserveCounterValue) noexcept {
  this->resource = resource;
  this->index = index;
  this->preserveCounterValue = preserveCounterValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData::PassRandomWriteData() {}
