#pragma once
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
template <typename T> constexpr bool& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__hasValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue_k__BackingField;
}
template <typename T> constexpr bool const& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__hasValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_set__hasValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue_k__BackingField = value;
}
template <typename T> constexpr T& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::OptionalArgument_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::get_isOptional() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "get_hasValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::set_hasValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "set_hasValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::GlobalNamespace::OptionalArgument_1<T>* GlobalNamespace::OptionalArgument_1<T>::New_ctor(::StringW name, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OptionalArgument_1<T>*>(name, description));
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::_ctor(::StringW name, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, description);
}
template <typename T> inline T GlobalNamespace::OptionalArgument_1<T>::GetValueOrDefault(T defaultValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), "GetValueOrDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, defaultValue);
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::TryParseWithValue(::StringW inValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inValue);
}
template <typename T> inline ::StringW GlobalNamespace::OptionalArgument_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionalArgument_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<T>::OptionalArgument_1() {}
