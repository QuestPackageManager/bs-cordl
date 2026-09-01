#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\DTSweepEdgeEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66b0e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstrainedEdge;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* const& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstrainedEdge;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConstrainedEdge = value;
}
constexpr bool& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr bool const& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_set_Right(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Right = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::DTSweepEdgeEvent() {}
