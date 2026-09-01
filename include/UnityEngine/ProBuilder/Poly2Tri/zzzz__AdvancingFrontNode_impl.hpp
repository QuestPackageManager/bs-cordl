#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\AdvancingFrontNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66ad5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66ad5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), { "get_HasNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasPrev
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66ad604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), { "get_HasPrev", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Next(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Next = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Prev(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Prev = value;
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Value(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Point;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Point(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Point = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Triangle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Triangle;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Triangle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Triangle;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Triangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Triangle = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), { "get_HasNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), { "get_HasPrev", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(point));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::AdvancingFrontNode() {}
