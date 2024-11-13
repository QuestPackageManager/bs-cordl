#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericSignal_1.hpp"
#include "GlobalNamespace/zzzz__Signal_impl.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr ::System::Action_1<T>*& GlobalNamespace::GenericSignal_1<T>::__cordl_internal_get__floatEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatEvent;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& GlobalNamespace::GenericSignal_1<T>::__cordl_internal_get__floatEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatEvent;
}
template <typename T> constexpr void GlobalNamespace::GenericSignal_1<T>::__cordl_internal_set__floatEvent(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____floatEvent, value);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Raise() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericSignal_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Raise(T f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericSignal_1<T>*>::get(), "Raise", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Subscribe(::System::Action_1<T>* foo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericSignal_1<T>*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, foo);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Unsubscribe(::System::Action_1<T>* foo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericSignal_1<T>*>::get(), "Unsubscribe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, foo);
}
template <typename T> inline ::GlobalNamespace::GenericSignal_1<T>* GlobalNamespace::GenericSignal_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GenericSignal_1<T>*>());
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericSignal_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::GenericSignal_1<T>::GenericSignal_1() {}
