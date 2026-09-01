#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassBackgroundNonLightRendererCore.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_renderer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.get_useCustomMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_useCustomMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { "get_useCustomMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.get_customMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_customMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { "get_customMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.SetCustomPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::SetCustomPropertyBlock)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5861348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                           { "SetCustomPropertyBlock", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.InitIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::InitIfNeeded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x586121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58610f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Render)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5861428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x586029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr bool& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__keepDefaultRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepDefaultRendering;
}
constexpr bool const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__keepDefaultRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepDefaultRendering;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__keepDefaultRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keepDefaultRendering = value;
}
constexpr bool& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__useCustomMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomMaterial;
}
constexpr bool const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__useCustomMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomMaterial;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__useCustomMaterial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useCustomMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__customMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__customMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMaterial;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__customMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customMaterial = value;
}
constexpr bool& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__useCustomPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomPropertyBlock;
}
constexpr bool const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__useCustomPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomPropertyBlock;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__useCustomPropertyBlock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useCustomPropertyBlock = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__customPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_get__customPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customPropertyBlock;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::__cordl_internal_set__customPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customPropertyBlock = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::setStaticF__worldSpaceCameraPosID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_worldSpaceCameraPosID", ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::getStaticF__worldSpaceCameraPosID() {
  return ::cordl_internals::getStaticField<int32_t, "_worldSpaceCameraPosID", ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>();
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>();
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_renderer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline bool GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_useCustomMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { "get_useCustomMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_customMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { "get_customMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::SetCustomPropertyBlock(::UnityEngine::MaterialPropertyBlock* bloomPropertyBlock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(),
                                                                                         { "SetCustomPropertyBlock", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bloomPropertyBlock);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::InitIfNeeded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* dest,
                                                                                ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dest, viewMatrix, projectionMatrix);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore* GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::BloomPrePassBackgroundNonLightRendererCore() {}
