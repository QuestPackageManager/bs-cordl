#pragma once
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::RequiredArgument_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::RequiredArgument_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::RequiredArgument_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::RequiredArgument_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "get_value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RequiredArgument_1<T>::get_isOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "get_isOptional",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::RequiredArgument_1<T>* GlobalNamespace::RequiredArgument_1<T>::New_ctor(::StringW name, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RequiredArgument_1<T>*>(name, description));
}
template <typename T> inline void GlobalNamespace::RequiredArgument_1<T>::_ctor(::StringW name, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, description);
}
template <typename T> inline void GlobalNamespace::RequiredArgument_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RequiredArgument_1<T>::TryParseWithValue(::StringW inValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "TryParseWithValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inValue);
}
template <typename T> inline T GlobalNamespace::RequiredArgument_1<T>::op_Implicit_T(::GlobalNamespace::RequiredArgument_1<T>* requiredArgument) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RequiredArgument_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, requiredArgument);
}
template <typename T> inline ::StringW GlobalNamespace::RequiredArgument_1<T>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RequiredArgument_1<T>*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RequiredArgument_1<T>::RequiredArgument_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
