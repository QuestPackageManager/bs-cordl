#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumValue_1_def.hpp"
template <typename T> constexpr ::StringW& Newtonsoft::Json::Utilities::EnumValue_1<T>::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
template <typename T> constexpr ::StringW const& Newtonsoft::Json::Utilities::EnumValue_1<T>::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
template <typename T> constexpr void Newtonsoft::Json::Utilities::EnumValue_1<T>::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Newtonsoft::Json::Utilities::EnumValue_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& Newtonsoft::Json::Utilities::EnumValue_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void Newtonsoft::Json::Utilities::EnumValue_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::StringW Newtonsoft::Json::Utilities::EnumValue_1<T>::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::EnumValue_1<T>*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline T Newtonsoft::Json::Utilities::EnumValue_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::EnumValue_1<T>*>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::EnumValue_1<T>* Newtonsoft::Json::Utilities::EnumValue_1<T>::New_ctor(::StringW name, T value) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::EnumValue_1<T>*>(name, value));
}
template <typename T> inline void Newtonsoft::Json::Utilities::EnumValue_1<T>::_ctor(::StringW name, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::EnumValue_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::EnumValue_1<T>::EnumValue_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
