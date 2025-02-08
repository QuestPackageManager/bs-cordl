#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/TriangulationConstraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4701908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___P)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint::TriangulationConstraint() {}
