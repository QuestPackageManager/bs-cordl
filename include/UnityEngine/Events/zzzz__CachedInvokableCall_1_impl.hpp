#pragma once
// IWYU pragma private; include "UnityEngine\Events\CachedInvokableCall_1.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_1_impl.hpp"
#include "UnityEngine/Events/zzzz__CachedInvokableCall_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename T> constexpr T& UnityEngine::Events::CachedInvokableCall_1<T>::__cordl_internal_get_m_Arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Arg1;
}
template <typename T> constexpr T const& UnityEngine::Events::CachedInvokableCall_1<T>::__cordl_internal_get_m_Arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Arg1;
}
template <typename T> constexpr void UnityEngine::Events::CachedInvokableCall_1<T>::__cordl_internal_set_m_Arg1(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Arg1 = value;
}
template <typename T> inline void UnityEngine::Events::CachedInvokableCall_1<T>::_ctor(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* theFunction, T argument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::CachedInvokableCall_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, theFunction, argument);
}
template <typename T> inline void UnityEngine::Events::CachedInvokableCall_1<T>::Invoke(::ArrayW<::System::Object*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::CachedInvokableCall_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename T> inline void UnityEngine::Events::CachedInvokableCall_1<T>::Invoke(T arg0) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::CachedInvokableCall_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
template <typename T>
inline ::UnityEngine::Events::CachedInvokableCall_1<T>* UnityEngine::Events::CachedInvokableCall_1<T>::New_ctor(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* theFunction,
                                                                                                                T argument) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::CachedInvokableCall_1<T>*>(target, theFunction, argument));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Events::CachedInvokableCall_1<T>::CachedInvokableCall_1() {}
