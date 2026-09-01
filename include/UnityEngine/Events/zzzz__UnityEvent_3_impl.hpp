#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityEvent_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
template <typename T0, typename T1, typename T2> constexpr ::ArrayW<::System::Object*>& UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2> constexpr ::ArrayW<::System::Object*> const& UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2> constexpr void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvokeArray = value;
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, targetObjType);
}
template <typename T0, typename T1, typename T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(this, ___internal_method, target, theFunction);
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::Invoke(T0 arg0, T1 arg1, T2 arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>(), { "Invoke", {}, { ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1, arg2);
}
template <typename T0, typename T1, typename T2> inline ::UnityEngine::Events::UnityEvent_3<T0, T1, T2>* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>());
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2> constexpr ::UnityEngine::Events::UnityEvent_3<T0, T1, T2>::UnityEvent_3() {}
