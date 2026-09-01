#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\TriangulationConstraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66b0d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_set_P(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___P = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_get_Q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Q;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_get_Q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Q;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::__cordl_internal_set_Q(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Q = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::TriangulationConstraint() {}
