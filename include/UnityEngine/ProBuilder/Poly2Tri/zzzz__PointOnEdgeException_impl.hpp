#pragma once
#include "System/zzzz__NotImplementedException_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointOnEdgeException_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::*)(
    ::StringW, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x305fd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_A(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_B(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___B)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::__cordl_internal_set_C(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___C)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException* UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::New_ctor(::StringW message,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b,
                                                                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>(message, a, b, c));
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::_ctor(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                           ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, a, b, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::PointOnEdgeException() {}
