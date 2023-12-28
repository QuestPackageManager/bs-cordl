#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__TweenRunner_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__TweenRunner_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template <typename T> constexpr UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::System::Object*& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get_tweenInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweenInfo;
}
template <typename T> constexpr T const& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get_tweenInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweenInfo;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__set_tweenInfo(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweenInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get__elapsedTime_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
template <typename T> constexpr float_t const& UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__get__elapsedTime_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__set__elapsedTime_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__2 = value;
}
template <typename T> inline ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>* UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>(__1__state));
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>::__TweenRunner_1___Start_d__2() {}
template <typename T> constexpr ::UnityEngine::MonoBehaviour*& UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__get_m_CoroutineContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoroutineContainer;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> const& UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__get_m_CoroutineContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoroutineContainer;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__set_m_CoroutineContainer(::UnityEngine::MonoBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CoroutineContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::IEnumerator*& UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__get_m_Tween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tween;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__get_m_Tween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tween;
}
template <typename T> constexpr void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::__set_m_Tween(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Tween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::Start(T tweenInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>::get(), "Start",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, tweenInfo);
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::Init(::UnityEngine::MonoBehaviour* coroutineContainer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coroutineContainer);
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::StartTween(T info) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>::get(), "StartTween",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info);
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::StopTween() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>::get(),
                                                                             "StopTween", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>* UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>());
}
template <typename T> inline void UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>::TweenRunner_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
