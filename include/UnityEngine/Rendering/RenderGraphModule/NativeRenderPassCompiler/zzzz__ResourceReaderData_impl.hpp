#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceReaderData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceReaderData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c2b6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData::_ctor(int32_t _passId, int32_t _inputSlot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _passId, _inputSlot);
}
// Ctor Parameters [CppParam { name: "passId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputSlot", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData::ResourceReaderData(int32_t passId, int32_t inputSlot) noexcept {
  this->passId = passId;
  this->inputSlot = inputSlot;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData::ResourceReaderData() {}
