#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassAttachment.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, bool, int32_t,
    int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c282c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::_ctor(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
    ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, bool memoryless, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, loadAction, storeAction, memoryless, mipLevel, depthSlice);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loadAction",
// ty: "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "storeAction", ty:
// "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::NativePassAttachment(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle,
                                                                                                                            ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                                                                                                            ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                                                                                            bool memoryless, int32_t mipLevel, int32_t depthSlice) noexcept {
  this->handle = handle;
  this->loadAction = loadAction;
  this->storeAction = storeAction;
  this->memoryless = memoryless;
  this->mipLevel = mipLevel;
  this->depthSlice = depthSlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::NativePassAttachment() {}
