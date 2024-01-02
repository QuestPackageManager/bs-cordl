#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observer_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::Observer_1<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::System::Action_1<TValue>*& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNext;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> const& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNext;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__set_m_OnNext(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::System::Action*& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleted;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleted;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__set_m_OnCompleted(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param onCompleted: ::System::Action* (default: nullptr)
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>* UnityEngine::InputSystem::Utilities::Observer_1<TValue>::New_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(onNext, onCompleted));
}
/// @param onCompleted: ::System::Action* (default: nullptr)
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onNext, onCompleted);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>::get(),
                                                                             "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>::get(), "OnError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnNext(TValue evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>::get(), "OnNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>::Observer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
