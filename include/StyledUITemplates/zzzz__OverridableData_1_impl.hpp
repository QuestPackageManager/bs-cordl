#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableData_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
template <typename T> constexpr bool& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__override() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
template <typename T> constexpr bool const& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__override() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
template <typename T> constexpr void StyledUITemplates::OverridableData_1<T>::__cordl_internal_set__override(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____override = value;
}
template <typename T> constexpr T& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr T const& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void StyledUITemplates::OverridableData_1<T>::__cordl_internal_set__data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool StyledUITemplates::OverridableData_1<T>::get_overrideEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableData_1<T>*>::get(),
                                                                             "get_overrideEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::set_overrideEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableData_1<T>*>::get(), "set_overrideEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T StyledUITemplates::OverridableData_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableData_1<T>*>::get(), "get_data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::set_data(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableData_1<T>*>::get(), "set_data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StyledUITemplates::OverridableData_1<T>* StyledUITemplates::OverridableData_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::StyledUITemplates::OverridableData_1<T>*>());
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableData_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::StyledUITemplates::OverridableData_1<T>::OverridableData_1() {}
