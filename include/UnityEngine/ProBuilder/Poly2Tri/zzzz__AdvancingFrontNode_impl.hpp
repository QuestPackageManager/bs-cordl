#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b30cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b30d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                                                               "get_HasNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasPrev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b30d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                                                               "get_HasPrev", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Next(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Prev(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Value(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Point(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Point)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Triangle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Triangle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Triangle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Triangle;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Triangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Triangle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(point));
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                                                             "get_HasNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                                                             "get_HasPrev", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::AdvancingFrontNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
