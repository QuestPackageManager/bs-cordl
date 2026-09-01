#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\TriangulationDebugContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*& UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_get__tcx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcx;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* const& UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_get__tcx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcx;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_set__tcx(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tcx = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*
UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(tcx));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::TriangulationDebugContext() {}
