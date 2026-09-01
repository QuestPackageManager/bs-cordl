#pragma once
// IWYU pragma private; include "GlobalNamespace\NoPostProcessMainEffectSO.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__NoPostProcessMainEffectSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.get_hasPostProcessEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&::GlobalNamespace::NoPostProcessMainEffectSO::get_hasPostProcessEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f45b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&::GlobalNamespace::NoPostProcessMainEffectSO::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f45b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&::GlobalNamespace::NoPostProcessMainEffectSO::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f45e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.PreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)(::UnityEngine::Rendering::IBaseCommandBuffer*)>(
    &::GlobalNamespace::NoPostProcessMainEffectSO::PreRender)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f45e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.PostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)(::UnityEngine::Rendering::RasterCommandBuffer*, float_t)>(
    &::GlobalNamespace::NoPostProcessMainEffectSO::PostRender)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f45ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.InitTriangleMeshIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&::GlobalNamespace::NoPostProcessMainEffectSO::InitTriangleMeshIfNeeded)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f45c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "InitTriangleMeshIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO.CreateFullScreenTriangleVertexPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(float_t)>(&::GlobalNamespace::NoPostProcessMainEffectSO::CreateFullScreenTriangleVertexPosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f46010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "CreateFullScreenTriangleVertexPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPostProcessMainEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPostProcessMainEffectSO::*)()>(&::GlobalNamespace::NoPostProcessMainEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f460c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__fadeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__fadeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeShader;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__fadeShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__setAlphaShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__setAlphaShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaShader;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__setAlphaShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaShader = value;
}
constexpr float_t& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__baseColorBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr float_t const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__baseColorBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__baseColorBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoost = value;
}
constexpr float_t& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr float_t const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__baseColorBoostThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoostThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__fadeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__fadeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeMaterial;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__fadeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__setAlphaMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__setAlphaMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaMaterial;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__setAlphaMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaMaterial = value;
}
constexpr bool& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get_clearScreenAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearScreenAlpha;
}
constexpr bool const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get_clearScreenAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearScreenAlpha;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set_clearScreenAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearScreenAlpha = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__propertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__propertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyBlock;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyBlock = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__triangleMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_get__triangleMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMesh;
}
constexpr void GlobalNamespace::NoPostProcessMainEffectSO::__cordl_internal_set__triangleMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triangleMesh = value;
}
inline bool GlobalNamespace::NoPostProcessMainEffectSO::get_hasPostProcessEffect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::PostRender(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t fade) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, fade);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::InitTriangleMeshIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "InitTriangleMeshIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::NoPostProcessMainEffectSO::CreateFullScreenTriangleVertexPosition(float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { "CreateFullScreenTriangleVertexPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, z);
}
inline void GlobalNamespace::NoPostProcessMainEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPostProcessMainEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoPostProcessMainEffectSO* GlobalNamespace::NoPostProcessMainEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoPostProcessMainEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoPostProcessMainEffectSO::NoPostProcessMainEffectSO() {}
