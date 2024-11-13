#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextComponent_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
template <typename T> constexpr BGLib::Polyglot::LocalizedTextComponent_1<T>::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
template <typename T> constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::LocalizedTextComponent_1<T>::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
template <typename T> constexpr T& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_localizedComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedComponent;
}
template <typename T> constexpr T const& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_localizedComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedComponent;
}
template <typename T> constexpr void BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_set_localizedComponent(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___localizedComponent, value);
}
template <typename T> constexpr bool& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_maintainTextAlignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainTextAlignment;
}
template <typename T> constexpr bool const& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_maintainTextAlignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainTextAlignment;
}
template <typename T> constexpr void BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_set_maintainTextAlignment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainTextAlignment = value;
}
template <typename T> constexpr ::StringW& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename T> constexpr ::StringW const& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename T> constexpr void BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___key, value);
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::System::Object*>*& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
template <typename T> constexpr void BGLib::Polyglot::LocalizedTextComponent_1<T>::__cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___parameters, value);
}
template <typename T> inline bool BGLib::Polyglot::LocalizedTextComponent_1<T>::get_MaintainTextAlignment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(),
                                                                             "get_MaintainTextAlignment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::StringW BGLib::Polyglot::LocalizedTextComponent_1<T>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::set_Key(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::List_1<::System::Object*>* BGLib::Polyglot::LocalizedTextComponent_1<T>::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(),
                                                                             "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::SetText(T component, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, value);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::UpdateAlignment(T component, ::BGLib::Polyglot::LanguageDirection direction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, direction);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), "OnLocalize", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localization);
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::ClearParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(),
                                                                             "ClearParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::Polyglot::LocalizedTextComponent_1<T>* BGLib::Polyglot::LocalizedTextComponent_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>());
}
template <typename T> inline void BGLib::Polyglot::LocalizedTextComponent_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizedTextComponent_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::Polyglot::LocalizedTextComponent_1<T>::LocalizedTextComponent_1() {}
