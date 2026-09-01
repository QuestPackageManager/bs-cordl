#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityEvent_4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
template <typename T0, typename T1, typename T2, typename T3> constexpr ::ArrayW<::System::Object*>& UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::__cordl_internal_get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2, typename T3>
constexpr ::ArrayW<::System::Object*> const& UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::__cordl_internal_get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2, typename T3> constexpr void UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvokeArray = value;
}
template <typename T0, typename T1, typename T2, typename T3> inline void UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2, typename T3>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, targetObjType);
}
template <typename T0, typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(this, ___internal_method, target, theFunction);
}
template <typename T0, typename T1, typename T2, typename T3> inline ::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>* UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>::UnityEvent_4() {}
