#pragma once
// IWYU pragma private; include "UnityEngine/InspectorOrderAttribute.hpp"
#include "UnityEngine/zzzz__InspectorSortDirection_impl.hpp"
#include "UnityEngine/zzzz__InspectorSort_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorOrderAttribute_def.hpp"
#include "UnityEngine/zzzz__InspectorSortDirection_def.hpp"
#include "UnityEngine/zzzz__InspectorSort_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorOrderAttribute.get_m_inspectorSort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InspectorSort (::UnityEngine::InspectorOrderAttribute::*)()>(
    &::UnityEngine::InspectorOrderAttribute::get_m_inspectorSort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x484a358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorOrderAttribute*>::get(),
                                                                               "get_m_inspectorSort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InspectorOrderAttribute.get_m_sortDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InspectorSortDirection (::UnityEngine::InspectorOrderAttribute::*)()>(
    &::UnityEngine::InspectorOrderAttribute::get_m_sortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x484a360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorOrderAttribute*>::get(),
                                                                               "get_m_sortDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorOrderAttribute*>::get(),
                                                                             "get_m_inspectorSort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InspectorSort, false>(this, ___internal_method);
}
inline ::UnityEngine::InspectorSortDirection UnityEngine::InspectorOrderAttribute::get_m_sortDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorOrderAttribute*>::get(),
                                                                             "get_m_sortDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InspectorSortDirection, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorOrderAttribute::InspectorOrderAttribute() {}
