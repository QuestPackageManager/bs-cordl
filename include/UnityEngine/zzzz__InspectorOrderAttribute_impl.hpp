#pragma once
// IWYU pragma private; include "UnityEngine\InspectorOrderAttribute.hpp"
#include "UnityEngine/zzzz__InspectorSortDirection_impl.hpp"
#include "UnityEngine/zzzz__InspectorSort_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorOrderAttribute_def.hpp"
#include "UnityEngine/zzzz__InspectorSortDirection_def.hpp"
#include "UnityEngine/zzzz__InspectorSort_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorOrderAttribute.get_m_inspectorSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InspectorSort (::UnityEngine::InspectorOrderAttribute::*)()>(&::UnityEngine::InspectorOrderAttribute::get_m_inspectorSort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae3c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorOrderAttribute*>(), { "get_m_inspectorSort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InspectorOrderAttribute.get_m_sortDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InspectorSortDirection (::UnityEngine::InspectorOrderAttribute::*)()>(
    &::UnityEngine::InspectorOrderAttribute::get_m_sortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae3c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorOrderAttribute*>(), { "get_m_sortDirection", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InspectorSort& UnityEngine::InspectorOrderAttribute::__cordl_internal_get__m_inspectorSort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_inspectorSort_k__BackingField;
}
constexpr ::UnityEngine::InspectorSort const& UnityEngine::InspectorOrderAttribute::__cordl_internal_get__m_inspectorSort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_inspectorSort_k__BackingField;
}
constexpr void UnityEngine::InspectorOrderAttribute::__cordl_internal_set__m_inspectorSort_k__BackingField(::UnityEngine::InspectorSort value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____m_inspectorSort_k__BackingField = value;
}
constexpr ::UnityEngine::InspectorSortDirection& UnityEngine::InspectorOrderAttribute::__cordl_internal_get__m_sortDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_sortDirection_k__BackingField;
}
constexpr ::UnityEngine::InspectorSortDirection const& UnityEngine::InspectorOrderAttribute::__cordl_internal_get__m_sortDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_sortDirection_k__BackingField;
}
constexpr void UnityEngine::InspectorOrderAttribute::__cordl_internal_set__m_sortDirection_k__BackingField(::UnityEngine::InspectorSortDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____m_sortDirection_k__BackingField = value;
}
inline ::UnityEngine::InspectorSort UnityEngine::InspectorOrderAttribute::get_m_inspectorSort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorOrderAttribute*>(), { "get_m_inspectorSort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InspectorSort>(this, ___internal_method);
}
inline ::UnityEngine::InspectorSortDirection UnityEngine::InspectorOrderAttribute::get_m_sortDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorOrderAttribute*>(), { "get_m_sortDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InspectorSortDirection>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorOrderAttribute::InspectorOrderAttribute() {}
