#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeGridLayout.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeGridLayout_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeGridLayout.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeGridLayout::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>*, int32_t,
                                                                                                        int32_t)>(&::GlobalNamespace::CompositeGridLayout::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598db04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeGridLayout*>(), { ::i2c::class_of<::GlobalNamespace::CompositeGridLayout*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeGridLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeGridLayout::*)()>(&::GlobalNamespace::CompositeGridLayout::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x598db08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeGridLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns;
}
constexpr int32_t const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__columns(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columns = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columnStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columnStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnStep;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__columnStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnStep = value;
}
constexpr bool& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columnsFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsFromCenter;
}
constexpr bool const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__columnsFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsFromCenter;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__columnsFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnsFromCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__rowStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__rowStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowStep;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__rowStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowStep = value;
}
constexpr bool& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__rowsFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsFromCenter;
}
constexpr bool const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__rowsFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsFromCenter;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__rowsFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowsFromCenter = value;
}
constexpr bool& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__alternateOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateOrder;
}
constexpr bool const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__alternateOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateOrder;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__alternateOrder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternateOrder = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__defaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CompositeGridLayout::__cordl_internal_get__defaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr void GlobalNamespace::CompositeGridLayout::__cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultRotation = value;
}
inline void GlobalNamespace::CompositeGridLayout::Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements,
                                                        int32_t sameIdElements) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompositeGridLayout*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTransforms, numberOfElements, sameIdElements);
}
inline void GlobalNamespace::CompositeGridLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeGridLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeGridLayout* GlobalNamespace::CompositeGridLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeGridLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeGridLayout::CompositeGridLayout() {}
