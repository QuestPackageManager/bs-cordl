#pragma once
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
template <typename T> constexpr bool& GlobalNamespace::OptionalArgument_1<T>::__get__hasValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue_k__BackingField;
}
template <typename T> constexpr bool const& GlobalNamespace::OptionalArgument_1<T>::__get__hasValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::OptionalArgument_1<T>::__set__hasValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue_k__BackingField = value;
}
template <typename T> constexpr T& GlobalNamespace::OptionalArgument_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::OptionalArgument_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::OptionalArgument_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::OptionalArgument_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "get_value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::get_isOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "get_isOptional",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "get_hasValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::set_hasValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "set_hasValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::GlobalNamespace::OptionalArgument_1<T>* GlobalNamespace::OptionalArgument_1<T>::New_ctor(::StringW name, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OptionalArgument_1<T>*>(name, description));
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::_ctor(::StringW name, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, description);
}
template <typename T> inline T GlobalNamespace::OptionalArgument_1<T>::GetValueOrDefault(T defaultValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "GetValueOrDefault",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, defaultValue);
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::TryParseWithValue(::StringW inValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "TryParseWithValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inValue);
}
template <typename T> inline ::StringW GlobalNamespace::OptionalArgument_1<T>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<T>::OptionalArgument_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
