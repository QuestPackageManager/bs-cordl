#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweepEdgeEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a5a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstrainedEdge;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*> const&
UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstrainedEdge;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConstrainedEdge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>());
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent::DTSweepEdgeEvent() {}
