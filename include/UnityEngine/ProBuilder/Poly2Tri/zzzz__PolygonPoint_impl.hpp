#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonPoint.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)(double_t, double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66a65b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint.get_Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a65c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(), { "get_Next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint.set_Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a65d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                           { "set_Next", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint.get_Previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::get_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a65d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(), { "get_Previous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint.set_Previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::*)(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::set_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a65e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                           { "set_Previous", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_get__Next_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_get__Next_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_set__Next_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Next_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_get__Previous_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Previous_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_get__Previous_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Previous_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::__cordl_internal_set__Previous_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Previous_k__BackingField = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::_ctor(double_t x, double_t y, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, index);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::get_Next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(), { "get_Next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::set_Next(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                         { "set_Next", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::get_Previous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(), { "get_Previous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::set_Previous(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(),
                                                                                         { "set_Previous", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::New_ctor(double_t x, double_t y, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(x, y, index));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint::PolygonPoint() {}
