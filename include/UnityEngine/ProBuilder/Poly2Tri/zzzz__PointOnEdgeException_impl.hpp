#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\PointOnEdgeException.hpp"
#include "System/zzzz__NotImplementedException_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointOnEdgeException_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::*)(
    ::StringW, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66afd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_A(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___A = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_B(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___B = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_C(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                           ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, a, b, c);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException* UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::New_ctor(::StringW message,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>(message, a, b, c));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::PointOnEdgeException() {}
