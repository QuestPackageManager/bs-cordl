#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityEvent_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
template <typename T0, typename T1> constexpr ::ArrayW<::System::Object*>& UnityEngine::Events::UnityEvent_2<T0, T1>::__cordl_internal_get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1> constexpr ::ArrayW<::System::Object*> const& UnityEngine::Events::UnityEvent_2<T0, T1>::__cordl_internal_get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1> constexpr void UnityEngine::Events::UnityEvent_2<T0, T1>::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvokeArray = value;
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityEvent_2<T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityEvent_2<T0, T1>::AddListener(::UnityEngine::Events::UnityAction_2<T0, T1>* call) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), { "AddListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_2<T0, T1>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityEvent_2<T0, T1>::RemoveListener(::UnityEngine::Events::UnityAction_2<T0, T1>* call) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(),
                                                                                         { "RemoveListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_2<T0, T1>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
template <typename T0, typename T1> inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_2<T0, T1>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, targetObjType);
}
template <typename T0, typename T1>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_2<T0, T1>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(this, ___internal_method, target, theFunction);
}
template <typename T0, typename T1> inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_2<T0, T1>::GetDelegate(::UnityEngine::Events::UnityAction_2<T0, T1>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), { "GetDelegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_2<T0, T1>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(nullptr, ___internal_method, action);
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityEvent_2<T0, T1>::Invoke(T0 arg0, T1 arg1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_2<T0, T1>*>(), { "Invoke", {}, { ::i2c::type_of<T0>(), ::i2c::type_of<T1>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1);
}
template <typename T0, typename T1> inline ::UnityEngine::Events::UnityEvent_2<T0, T1>* UnityEngine::Events::UnityEvent_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityEvent_2<T0, T1>*>());
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::UnityEngine::Events::UnityEvent_2<T0, T1>::UnityEvent_2() {}
