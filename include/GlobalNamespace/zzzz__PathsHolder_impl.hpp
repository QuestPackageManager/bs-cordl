#pragma once
// IWYU pragma private; include "GlobalNamespace/PathsHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PathsHolder_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_bezierPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BezierPath* (::GlobalNamespace::PathsHolder::*)()>(&::GlobalNamespace::PathsHolder::get_bezierPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59028cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "get_bezierPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.get_vertexPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VertexPath* (::GlobalNamespace::PathsHolder::*)()>(&::GlobalNamespace::PathsHolder::get_vertexPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59028d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "get_vertexPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathsHolder::*)(int32_t, bool)>(&::GlobalNamespace::PathsHolder::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59028dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathsHolder.UpdateVertexPathByBezierPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathsHolder::*)()>(&::GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5902f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "UpdateVertexPathByBezierPath", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BezierPath*& GlobalNamespace::PathsHolder::__cordl_internal_get__bezierPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr ::GlobalNamespace::BezierPath* const& GlobalNamespace::PathsHolder::__cordl_internal_get__bezierPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierPath;
}
constexpr void GlobalNamespace::PathsHolder::__cordl_internal_set__bezierPath(::GlobalNamespace::BezierPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bezierPath = value;
}
constexpr ::GlobalNamespace::VertexPath*& GlobalNamespace::PathsHolder::__cordl_internal_get__vertexPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr ::GlobalNamespace::VertexPath* const& GlobalNamespace::PathsHolder::__cordl_internal_get__vertexPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexPath;
}
constexpr void GlobalNamespace::PathsHolder::__cordl_internal_set__vertexPath(::GlobalNamespace::VertexPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vertexPath = value;
}
inline ::GlobalNamespace::BezierPath* GlobalNamespace::PathsHolder::get_bezierPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "get_bezierPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierPath*>(this, ___internal_method);
}
inline ::GlobalNamespace::VertexPath* GlobalNamespace::PathsHolder::get_vertexPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "get_vertexPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VertexPath*>(this, ___internal_method);
}
inline void GlobalNamespace::PathsHolder::_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfFixedVertexPathSegments, updateVertexPath);
}
inline void GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PathsHolder*>(), { "UpdateVertexPathByBezierPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PathsHolder* GlobalNamespace::PathsHolder::New_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PathsHolder*>(numberOfFixedVertexPathSegments, updateVertexPath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PathsHolder::PathsHolder() {}
