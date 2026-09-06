#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCall_3.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::UnityAction_3<T1, T2, T3>*& UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__cordl_internal_get_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3>
constexpr ::UnityEngine::Events::UnityAction_3<T1, T2, T3>* const& UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__cordl_internal_get_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3>
constexpr void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Delegate = value;
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, theFunction);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Invoke(::ArrayW<::System::Object*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Invoke(T1 args0, T2 args1, T3 args2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(),
                                                                                         { "Invoke", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args0, args1, args2);
}
template <typename T1, typename T2, typename T3> inline bool UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetObj, method);
}
template <typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::InvokableCall_3<T1, T2, T3>* UnityEngine::Events::InvokableCall_3<T1, T2, T3>::New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(target, theFunction));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::InvokableCall_3<T1, T2, T3>::InvokableCall_3() {}
