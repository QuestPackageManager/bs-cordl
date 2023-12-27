#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
/// @brief Convert operator to "::Polyglot::ILocalize"
template <typename T> constexpr Polyglot::LocalizedTextComponent_1<T>::operator ::Polyglot::ILocalize*() noexcept {
  return static_cast<::Polyglot::ILocalize*>(static_cast<void*>(this));
}
template <typename T> constexpr T& Polyglot::LocalizedTextComponent_1<T>::__get_localizedComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localizedComponent;
}
template <typename T> constexpr T const& Polyglot::LocalizedTextComponent_1<T>::__get_localizedComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localizedComponent;
}
template <typename T> constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_localizedComponent(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedComponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& Polyglot::LocalizedTextComponent_1<T>::__get_maintainTextAlignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maintainTextAlignment;
}
template <typename T> constexpr bool const& Polyglot::LocalizedTextComponent_1<T>::__get_maintainTextAlignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maintainTextAlignment;
}
template <typename T> constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_maintainTextAlignment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maintainTextAlignment = value;
}
template <typename T> constexpr ::StringW& Polyglot::LocalizedTextComponent_1<T>::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename T> constexpr ::StringW const& Polyglot::LocalizedTextComponent_1<T>::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename T> constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Polyglot::LocalizedTextComponent_1<T>::__get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parameters;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& Polyglot::LocalizedTextComponent_1<T>::__get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parameters;
}
template <typename T> constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_parameters(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool Polyglot::LocalizedTextComponent_1<T>::get_MaintainTextAlignment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(),
                                                                             "get_MaintainTextAlignment", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::set_MaintainTextAlignment(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "set_MaintainTextAlignment",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW Polyglot::LocalizedTextComponent_1<T>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "get_Key",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::set_Key(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "set_Key", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::List_1<::System::Object*>* Polyglot::LocalizedTextComponent_1<T>::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "get_Parameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::SetText(T component, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "SetText", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, value);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::UpdateAlignment(T component, ::Polyglot::LanguageDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "UpdateAlignment", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::LanguageDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, direction);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::OnLocalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "OnLocalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::ClearParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "ClearParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::AddParameter(::System::Object* parameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "AddParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::AddParameter(int32_t parameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "AddParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::AddParameter(float_t parameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "AddParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter);
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::AddParameter(::StringW parameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), "AddParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter);
}
template <typename T> inline ::Polyglot::LocalizedTextComponent_1<T>* Polyglot::LocalizedTextComponent_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::LocalizedTextComponent_1<T>*>());
}
template <typename T> inline void Polyglot::LocalizedTextComponent_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedTextComponent_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Polyglot::LocalizedTextComponent_1<T>::LocalizedTextComponent_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
