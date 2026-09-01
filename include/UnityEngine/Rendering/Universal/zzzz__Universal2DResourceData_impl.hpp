#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Universal2DResourceData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceDataBase_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Universal2DResourceData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.CheckAndGetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(
    ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>)>(&::UnityEngine::Rendering::Universal::Universal2DResourceData::CheckAndGetTextureHandle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6874fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.CheckAndSetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(
    ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>, ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::CheckAndSetTextureHandle)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68751b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "CheckAndSetTextureHandle",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>>(),
                                                                 ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_lightTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> (
    ::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(&::UnityEngine::Rendering::Universal::Universal2DResourceData::get_lightTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6875294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_lightTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_lightTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(
    ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::UnityEngine::Rendering::Universal::Universal2DResourceData::set_lightTextures)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687529c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_lightTextures", {}, { ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_normalsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::get_normalsTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68752a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_normalsTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_normalsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::set_normalsTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68753b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_normalsTexture", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_shadowTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> (
    ::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(&::UnityEngine::Rendering::Universal::Universal2DResourceData::get_shadowTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68754a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_shadowTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_shadowTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(
    ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::UnityEngine::Rendering::Universal::Universal2DResourceData::set_shadowTextures)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68754b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_shadowTextures", {}, { ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_shadowDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::get_shadowDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68754bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_shadowDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_shadowDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::set_shadowDepth)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6875574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_shadowDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_upscaleTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::get_upscaleTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68755cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_upscaleTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_upscaleTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::set_upscaleTexture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68755d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_upscaleTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.get_cameraSortingLayerTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::get_cameraSortingLayerTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6875600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_cameraSortingLayerTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.set_cameraSortingLayerTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::set_cameraSortingLayerTexture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6875608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                             { "set_cameraSortingLayerTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::Reset)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6875634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Universal2DResourceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Universal2DResourceData::*)()>(
    &::UnityEngine::Rendering::Universal::Universal2DResourceData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68759b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__lightTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTextures;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> const&
UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__lightTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTextures;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__lightTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightTextures = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__cameraNormalsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraNormalsTexture;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__cameraNormalsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraNormalsTexture;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__cameraNormalsTexture(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraNormalsTexture = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__shadowTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTextures;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> const&
UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__shadowTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTextures;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__shadowTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowTextures = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__shadowDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__shadowDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowDepth;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__shadowDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowDepth = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__upscaleTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upscaleTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__upscaleTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upscaleTexture;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__upscaleTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upscaleTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__cameraSortingLayerTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraSortingLayerTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_get__cameraSortingLayerTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraSortingLayerTexture;
}
constexpr void UnityEngine::Rendering::Universal::Universal2DResourceData::__cordl_internal_set__cameraSortingLayerTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraSortingLayerTexture = value;
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>
UnityEngine::Rendering::Universal::Universal2DResourceData::CheckAndGetTextureHandle(::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                              { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::CheckAndSetTextureHandle(::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>> handle,
                                                                                                 ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> newHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                                                         { "CheckAndSetTextureHandle",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>>(),
                                                                                             ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, newHandle);
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> UnityEngine::Rendering::Universal::Universal2DResourceData::get_lightTextures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_lightTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_lightTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                           { "set_lightTextures", {}, { ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> UnityEngine::Rendering::Universal::Universal2DResourceData::get_normalsTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_normalsTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_normalsTexture(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                           { "set_normalsTexture", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> UnityEngine::Rendering::Universal::Universal2DResourceData::get_shadowTextures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_shadowTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_shadowTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                           { "set_shadowTextures", {}, { ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::Universal2DResourceData::get_shadowDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_shadowDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_shadowDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                                                         { "set_shadowDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::Universal2DResourceData::get_upscaleTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_upscaleTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_upscaleTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                           { "set_upscaleTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::Universal2DResourceData::get_cameraSortingLayerTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { "get_cameraSortingLayerTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::set_cameraSortingLayerTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(),
                                                           { "set_cameraSortingLayerTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Universal2DResourceData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Universal2DResourceData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Universal2DResourceData* UnityEngine::Rendering::Universal::Universal2DResourceData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Universal2DResourceData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Universal2DResourceData::Universal2DResourceData() {}
