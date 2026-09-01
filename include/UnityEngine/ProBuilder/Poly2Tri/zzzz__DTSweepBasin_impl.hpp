#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\DTSweepBasin.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepBasin_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66b0d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftNode;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftNode;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_set_leftNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftNode = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_bottomNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomNode;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_bottomNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomNode;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_set_bottomNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomNode = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_rightNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightNode;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_rightNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightNode;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_set_rightNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightNode = value;
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_set_width(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr bool& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftHighest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHighest;
}
constexpr bool const& UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftHighest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHighest;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::__cordl_internal_set_leftHighest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHighest = value;
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::DTSweepBasin() {}
