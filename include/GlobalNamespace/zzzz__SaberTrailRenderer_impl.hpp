#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberTrailRenderer.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberTrailRenderer_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)(float_t, float_t, int32_t, float_t)>(&::GlobalNamespace::SaberTrailRenderer::Init)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5f4eb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { ::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f4ee2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::OnValidate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f4ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f4ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f4efa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.SetTrailWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)(float_t)>(&::GlobalNamespace::SaberTrailRenderer::SetTrailWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "SetTrailWidth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.UpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)(::GlobalNamespace::TrailElementCollection*, ::UnityEngine::Color)>(
    &::GlobalNamespace::SaberTrailRenderer::UpdateMesh)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f4e49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(),
                                                             { "UpdateMesh", {}, { ::i2c::type_of<::GlobalNamespace::TrailElementCollection*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.UpdateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)(::GlobalNamespace::TrailElementCollection*, ::UnityEngine::Color)>(
    &::GlobalNamespace::SaberTrailRenderer::UpdateVertices)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5f4f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { ::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer.UpdateIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::UpdateIndices)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f4ecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "UpdateIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrailRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrailRenderer::*)()>(&::GlobalNamespace::SaberTrailRenderer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vertices = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indices;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indices;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__indices(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__uvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__uvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__uvs(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uvs = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr float_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__trailWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailWidth;
}
constexpr float_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__trailWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailWidth;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__trailWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailWidth = value;
}
constexpr float_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseTrailDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseTrailDuration;
}
constexpr float_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseTrailDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseTrailDuration;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__inverseTrailDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inverseTrailDuration = value;
}
constexpr float_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseSegmentDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseSegmentDuration;
}
constexpr float_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseSegmentDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseSegmentDuration;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__inverseSegmentDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inverseSegmentDuration = value;
}
constexpr int32_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__granularity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularity;
}
constexpr int32_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__granularity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularity;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__granularity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____granularity = value;
}
constexpr float_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseGranularity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseGranularity;
}
constexpr float_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__inverseGranularity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseGranularity;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__inverseGranularity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inverseGranularity = value;
}
constexpr float_t& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__whiteSectionMaxDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteSectionMaxDuration;
}
constexpr float_t const& GlobalNamespace::SaberTrailRenderer::__cordl_internal_get__whiteSectionMaxDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteSectionMaxDuration;
}
constexpr void GlobalNamespace::SaberTrailRenderer::__cordl_internal_set__whiteSectionMaxDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whiteSectionMaxDuration = value;
}
inline void GlobalNamespace::SaberTrailRenderer::setStaticF__bounds(::UnityEngine::Bounds value) {
  ::cordl_internals::setStaticField<::UnityEngine::Bounds, "_bounds", ::GlobalNamespace::SaberTrailRenderer*>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds GlobalNamespace::SaberTrailRenderer::getStaticF__bounds() {
  return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "_bounds", ::GlobalNamespace::SaberTrailRenderer*>();
}
inline void GlobalNamespace::SaberTrailRenderer::setStaticF__saberTravelledDistanceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_saberTravelledDistanceId", ::GlobalNamespace::SaberTrailRenderer*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SaberTrailRenderer::getStaticF__saberTravelledDistanceId() {
  return ::cordl_internals::getStaticField<int32_t, "_saberTravelledDistanceId", ::GlobalNamespace::SaberTrailRenderer*>();
}
inline void GlobalNamespace::SaberTrailRenderer::Init(float_t trailWidth, float_t trailDuration, int32_t granularity, float_t whiteSectionMaxDuration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailWidth, trailDuration, granularity, whiteSectionMaxDuration);
}
inline void GlobalNamespace::SaberTrailRenderer::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrailRenderer::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrailRenderer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrailRenderer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrailRenderer::SetTrailWidth(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "SetTrailWidth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width);
}
inline void GlobalNamespace::SaberTrailRenderer::UpdateMesh(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(),
                                                           { "UpdateMesh", {}, { ::i2c::type_of<::GlobalNamespace::TrailElementCollection*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailElementCollection, color);
}
inline void GlobalNamespace::SaberTrailRenderer::UpdateVertices(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailElementCollection, color);
}
inline void GlobalNamespace::SaberTrailRenderer::UpdateIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { "UpdateIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrailRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrailRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberTrailRenderer* GlobalNamespace::SaberTrailRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberTrailRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberTrailRenderer::SaberTrailRenderer() {}
