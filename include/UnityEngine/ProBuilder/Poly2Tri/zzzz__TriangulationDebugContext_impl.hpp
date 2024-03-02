#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c1a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*& UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_get__tcx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcx;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*> const&
UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_get__tcx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcx;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::__cordl_internal_set__tcx(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tcx)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*
UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>(tcx));
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext::TriangulationDebugContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
