#pragma once
// IWYU pragma private; include "GlobalNamespace/Cvar_1.hpp"
#include "GlobalNamespace/zzzz__ObservableVariable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void GlobalNamespace::Cvar_1___c<T>::setStaticF___9(::GlobalNamespace::Cvar_1___c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::Cvar_1___c<T>*, "<>9", ::GlobalNamespace::Cvar_1___c<T>*>(std::forward<::GlobalNamespace::Cvar_1___c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::Cvar_1___c<T>* GlobalNamespace::Cvar_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::Cvar_1___c<T>*, "<>9", ::GlobalNamespace::Cvar_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::Cvar_1___c<T>::setStaticF___9__4_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__4_0", ::GlobalNamespace::Cvar_1___c<T>*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Type*, bool>* GlobalNamespace::Cvar_1___c<T>::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__4_0", ::GlobalNamespace::Cvar_1___c<T>*>();
}
template <typename T> inline void GlobalNamespace::Cvar_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::Cvar_1___c<T>::_Reset_b__4_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1___c<T>*>(), { "<Reset>b__4_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template <typename T> inline ::GlobalNamespace::Cvar_1___c<T>* GlobalNamespace::Cvar_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Cvar_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Cvar_1___c<T>::Cvar_1___c() {}
template <typename T> constexpr T& GlobalNamespace::Cvar_1<T>::__cordl_internal_get__initialValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue;
}
template <typename T> constexpr T const& GlobalNamespace::Cvar_1<T>::__cordl_internal_get__initialValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue;
}
template <typename T> constexpr void GlobalNamespace::Cvar_1<T>::__cordl_internal_set__initialValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialValue = value;
}
template <typename T> inline void GlobalNamespace::Cvar_1<T>::setStaticF__cvars(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>*, "_cvars", ::GlobalNamespace::Cvar_1<T>*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>* GlobalNamespace::Cvar_1<T>::getStaticF__cvars() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>*, "_cvars", ::GlobalNamespace::Cvar_1<T>*>();
}
template <typename T> inline ::System::Collections::Generic::ICollection_1<::StringW>* GlobalNamespace::Cvar_1<T>::get_List() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1<T>*>(), { "get_List", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::Cvar_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1<T>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::Cvar_1<T>::_ctor(::StringW name, T initialValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, initialValue);
}
template <typename T> inline bool GlobalNamespace::Cvar_1<T>::TryGetValue(::StringW name, ::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1<T>*>(), { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, value);
}
template <typename T> inline bool GlobalNamespace::Cvar_1<T>::TrySetValue(::StringW name, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Cvar_1<T>*>(), { "TrySetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, value);
}
template <typename T> inline ::GlobalNamespace::Cvar_1<T>* GlobalNamespace::Cvar_1<T>::New_ctor(::StringW name, T initialValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Cvar_1<T>*>(name, initialValue));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Cvar_1<T>::Cvar_1() {}
