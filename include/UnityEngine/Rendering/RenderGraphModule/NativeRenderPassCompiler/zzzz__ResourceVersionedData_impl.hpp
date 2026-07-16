#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceVersionedData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceVersionedData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.SetWritingPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::SetWritingPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67f7790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                            { "SetWritingPass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.RegisterReadingPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RegisterReadingPass)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x67f77a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                                                             { "RegisterReadingPass",
                                                               {},
                                                               { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.RemoveReadingPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RemoveReadingPass)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x67f7934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                         { "RemoveReadingPass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::SetWritingPass(Il2CppObject* ctx, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                       int32_t passId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                          { "SetWritingPass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, h, passId);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RegisterReadingPass(Il2CppObject* ctx,
                                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                            int32_t passId, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                                                           { "RegisterReadingPass",
                                                             {},
                                                             { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, h, passId, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RemoveReadingPass(Il2CppObject* ctx,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                          int32_t passId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>(),
                          { "RemoveReadingPass", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, h, passId);
}
// Ctor Parameters [CppParam { name: "written", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "writePassId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "numReaders", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::ResourceVersionedData(bool written, int32_t writePassId, int32_t numReaders) noexcept {
  this->written = written;
  this->writePassId = writePassId;
  this->numReaders = numReaders;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::ResourceVersionedData() {}
