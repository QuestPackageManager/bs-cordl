#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::UnityAction_3<T1, T2, T3>*& UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__get_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1, T2, T3>*> const& UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__get_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
template <typename T1, typename T2, typename T3> constexpr void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::__set_Delegate(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::add_Delegate(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), "add_Delegate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1, T2, T3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::remove_Delegate(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), "remove_Delegate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1, T2, T3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::InvokableCall_3<T1, T2, T3>* UnityEngine::Events::InvokableCall_3<T1, T2, T3>::New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(target, theFunction));
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, theFunction);
}
template <typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::InvokableCall_3<T1, T2, T3>* UnityEngine::Events::InvokableCall_3<T1, T2, T3>::New_ctor(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* action) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>(action));
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::_ctor(::UnityEngine::Events::UnityAction_3<T1, T2, T3>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1, T2, T3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Invoke(T1 args0, T2 args1, T3 args2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args0, args1, args2);
}
template <typename T1, typename T2, typename T3> inline bool UnityEngine::Events::InvokableCall_3<T1, T2, T3>::Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1, T2, T3>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetObj, method);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::InvokableCall_3<T1, T2, T3>::InvokableCall_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
