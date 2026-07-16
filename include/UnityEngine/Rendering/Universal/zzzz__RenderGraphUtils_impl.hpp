#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderGraphUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_get_texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_get_texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr void UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_set_texture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___texture = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_get_nameID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_get_nameID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameID;
}
constexpr void UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::__cordl_internal_set_nameID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameID = value;
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData* UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData::RenderGraphUtils_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderGraphUtils___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderGraphUtils___c::*)()>(&::UnityEngine::Rendering::Universal::RenderGraphUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderGraphUtils___c._SetGlobalTexture_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderGraphUtils___c::*)(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::RenderGraphUtils___c::_SetGlobalTexture_b__6_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(),
                                                                                           { "<SetGlobalTexture>b__6_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderGraphUtils___c::setStaticF___9(::UnityEngine::Rendering::Universal::RenderGraphUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*, "<>9", ::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(
      std::forward<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::RenderGraphUtils___c* UnityEngine::Rendering::Universal::RenderGraphUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*, "<>9", ::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils___c::setStaticF___9__6_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__6_0", ::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::RenderGraphUtils___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__6_0", ::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils___c::_SetGlobalTexture_b__6_0(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>(),
                                                                                         { "<SetGlobalTexture>b__6_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::RenderGraphUtils___c* UnityEngine::Rendering::Universal::RenderGraphUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderGraphUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderGraphUtils___c::RenderGraphUtils___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderGraphUtils.UseDBufferIfValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*, ::UnityEngine::Rendering::Universal::UniversalResourceData*)>(
    &::UnityEngine::Rendering::Universal::RenderGraphUtils::UseDBufferIfValid)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x68d2b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils*>(),
                                                                                           { "UseDBufferIfValid",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderGraphUtils.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
                                                                ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::Universal::RenderGraphUtils::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x68d230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils*>(),
                                                                                           { "SetGlobalTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderGraphUtils::setStaticF_s_SetGlobalTextureProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetGlobalTextureProfilingSampler", ::UnityEngine::Rendering::Universal::RenderGraphUtils*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::RenderGraphUtils::getStaticF_s_SetGlobalTextureProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetGlobalTextureProfilingSampler", ::UnityEngine::Rendering::Universal::RenderGraphUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils::UseDBufferIfValid(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* builder,
                                                                                   ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils*>(),
                                                                                         { "UseDBufferIfValid",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, resourceData);
}
inline void UnityEngine::Rendering::Universal::RenderGraphUtils::SetGlobalTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, int32_t nameId,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle, ::StringW passName, ::StringW file, int32_t line) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderGraphUtils*>(),
                                                                                         { "SetGlobalTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, nameId, handle, passName, file, line);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderGraphUtils::RenderGraphUtils() {}
