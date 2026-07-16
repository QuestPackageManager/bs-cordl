#pragma once
// IWYU pragma private; include "GlobalNamespace/VertexPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VertexPath_Vertex::VertexPath_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 normal) noexcept {
  this->position = position;
  this->tangent = tangent;
  this->normal = normal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VertexPath_Vertex::VertexPath_Vertex() {}
//  Writing Method size for method: ::GlobalNamespace::VertexPath.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VertexPath::*)()>(&::GlobalNamespace::VertexPath::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59029fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.UpdateByBezierPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*)>(&::GlobalNamespace::VertexPath::UpdateByBezierPath)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5902ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "UpdateByBezierPath", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.TimeAtPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::TimeAtPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59034d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "TimeAtPoint", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                               ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::VertexPath::GetVertex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5903508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "GetVertex",
                                                                                 {},
                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::GetPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5903568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.SplitBezierPathIntoFixNumberOfSegments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*, int32_t)>(
    &::GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5902f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(),
                                                             { "SplitBezierPathIntoFixNumberOfSegments", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.AddVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VertexPath::*)(
    ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<float_t>, ::by_ref<::GlobalNamespace::VertexPath_Vertex>, ::by_ref<int32_t>)>(&::GlobalNamespace::VertexPath::AddVertex)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x59035a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(),
                                         { "AddVertex",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                             ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VertexPath_Vertex>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VertexPath::__cordl_internal_get_vertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr int32_t const& GlobalNamespace::VertexPath::__cordl_internal_get_vertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr void GlobalNamespace::VertexPath::__cordl_internal_set_vertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::VertexPath_Vertex>& GlobalNamespace::VertexPath::__cordl_internal_get__localVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVertices;
}
constexpr ::ArrayW<::GlobalNamespace::VertexPath_Vertex> const& GlobalNamespace::VertexPath::__cordl_internal_get__localVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVertices;
}
constexpr void GlobalNamespace::VertexPath::__cordl_internal_set__localVertices(::ArrayW<::GlobalNamespace::VertexPath_Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localVertices = value;
}
constexpr float_t& GlobalNamespace::VertexPath::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr float_t const& GlobalNamespace::VertexPath::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::VertexPath::__cordl_internal_set__length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::VertexPath::__cordl_internal_get__cumulativeLengthAtEachVertex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cumulativeLengthAtEachVertex;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::VertexPath::__cordl_internal_get__cumulativeLengthAtEachVertex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cumulativeLengthAtEachVertex;
}
constexpr void GlobalNamespace::VertexPath::__cordl_internal_set__cumulativeLengthAtEachVertex(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cumulativeLengthAtEachVertex = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::VertexPath::__cordl_internal_get__anchorVertexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorVertexMap;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::VertexPath::__cordl_internal_get__anchorVertexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorVertexMap;
}
constexpr void GlobalNamespace::VertexPath::__cordl_internal_set__anchorVertexMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorVertexMap = value;
}
inline void GlobalNamespace::VertexPath::setStaticF__back(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "_back", ::GlobalNamespace::VertexPath*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VertexPath::getStaticF__back() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_back", ::GlobalNamespace::VertexPath*>();
}
inline float_t GlobalNamespace::VertexPath::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VertexPath::_ctor(int32_t numberOfPathSegments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfPathSegments);
}
inline void GlobalNamespace::VertexPath::UpdateByBezierPath(::GlobalNamespace::BezierPath* bezierPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "UpdateByBezierPath", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bezierPath);
}
inline float_t GlobalNamespace::VertexPath::TimeAtPoint(int32_t pointIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "TimeAtPoint", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pointIndex);
}
inline void GlobalNamespace::VertexPath::GetVertex(int32_t index, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> tangent, ::by_ref<::UnityEngine::Vector3> normal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "GetVertex",
                                                                               {},
                                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, position, tangent, normal);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VertexPath::GetPoint(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline void GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath* bezierPath, int32_t numberOfVertexSegments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(),
                                                           { "SplitBezierPathIntoFixNumberOfSegments", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bezierPath, numberOfVertexSegments);
}
inline void GlobalNamespace::VertexPath::AddVertex(::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, ::by_ref<::UnityEngine::Vector3> p2, ::by_ref<::UnityEngine::Vector3> p3,
                                                   float_t t, ::by_ref<::UnityEngine::Vector3> lastRotationAxis, ::by_ref<float_t> currentPathLength,
                                                   ::by_ref<::GlobalNamespace::VertexPath_Vertex> lastVertex, ::by_ref<int32_t> vertCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VertexPath*>(),
                                       { "AddVertex",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                           ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VertexPath_Vertex>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, p2, p3, t, lastRotationAxis, currentPathLength, lastVertex, vertCount);
}
inline ::GlobalNamespace::VertexPath* GlobalNamespace::VertexPath::New_ctor(int32_t numberOfPathSegments) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VertexPath*>(numberOfPathSegments));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VertexPath::VertexPath() {}
