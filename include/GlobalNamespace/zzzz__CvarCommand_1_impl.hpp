#pragma once
// IWYU pragma private; include "GlobalNamespace/CvarCommand_1.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__CvarCommand_1_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::CvarCommand_1<T>::__cordl_internal_get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::CvarCommand_1<T>::__cordl_internal_get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
template <typename T> constexpr void GlobalNamespace::CvarCommand_1<T>::__cordl_internal_set__target(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____target = value;
}
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<T>*& GlobalNamespace::CvarCommand_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<T>* const& GlobalNamespace::CvarCommand_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::CvarCommand_1<T>::__cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename T> inline void GlobalNamespace::CvarCommand_1<T>::setStaticF_kTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kTypeName", ::GlobalNamespace::CvarCommand_1<T>*>(std::forward<::StringW>(value));
}
template <typename T> inline ::StringW GlobalNamespace::CvarCommand_1<T>::getStaticF_kTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "kTypeName", ::GlobalNamespace::CvarCommand_1<T>*>();
}
template <typename T> inline void GlobalNamespace::CvarCommand_1<T>::setStaticF_kCommandName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kCommandName", ::GlobalNamespace::CvarCommand_1<T>*>(std::forward<::StringW>(value));
}
template <typename T> inline ::StringW GlobalNamespace::CvarCommand_1<T>::getStaticF_kCommandName() {
  return ::cordl_internals::getStaticField<::StringW, "kCommandName", ::GlobalNamespace::CvarCommand_1<T>*>();
}
template <typename T> inline void GlobalNamespace::CvarCommand_1<T>::setStaticF_kDescription(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kDescription", ::GlobalNamespace::CvarCommand_1<T>*>(std::forward<::StringW>(value));
}
template <typename T> inline ::StringW GlobalNamespace::CvarCommand_1<T>::getStaticF_kDescription() {
  return ::cordl_internals::getStaticField<::StringW, "kDescription", ::GlobalNamespace::CvarCommand_1<T>*>();
}
template <typename T> inline ::StringW GlobalNamespace::CvarCommand_1<T>::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CvarCommand_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW GlobalNamespace::CvarCommand_1<T>::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CvarCommand_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::CvarCommand_1<T>::Initialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CvarCommand_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::CvarCommand_1<T>::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CvarCommand_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
template <typename T> inline void GlobalNamespace::CvarCommand_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CvarCommand_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::CvarCommand_1<T>* GlobalNamespace::CvarCommand_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CvarCommand_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::CvarCommand_1<T>::CvarCommand_1() {}
