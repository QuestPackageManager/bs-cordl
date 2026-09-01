#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\TextureAccess.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureAccess_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureAccess::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureAccess::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67e2e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::TextureAccess::_ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, flags, mipLevel, depthSlice);
}
// Ctor Parameters [CppParam { name: "textureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipLevel", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::UnityEngine::Rendering::RenderGraphModule::AccessFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess::TextureAccess(::UnityEngine::Rendering::RenderGraphModule::TextureHandle textureHandle, int32_t mipLevel, int32_t depthSlice,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) noexcept {
  this->textureHandle = textureHandle;
  this->mipLevel = mipLevel;
  this->depthSlice = depthSlice;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess::TextureAccess() {}
