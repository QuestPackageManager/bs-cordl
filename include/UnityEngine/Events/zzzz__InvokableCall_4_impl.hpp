#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_4_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_4_def.hpp"
template <typename T1, typename T2, typename T3, typename T4>
constexpr ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*& UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::__cordl_internal_get_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3, typename T4>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*> const&
UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::__cordl_internal_get_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3, typename T4>
constexpr void UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::__cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>* UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>*>(target, theFunction));
}
template <typename T1, typename T2, typename T3, typename T4>
inline void UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, theFunction);
}
template <typename T1, typename T2, typename T3, typename T4> inline void UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
template <typename T1, typename T2, typename T3, typename T4>
inline bool UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetObj, method);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>::InvokableCall_4() {}
