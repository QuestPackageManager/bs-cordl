#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0, typename T1, typename T2>
inline ::UnityEngine::Events::UnityAction_3<T0, T1, T2>* UnityEngine::Events::UnityAction_3<T0, T1, T2>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>(object, method));
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityAction_3<T0, T1, T2>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityAction_3<T0, T1, T2>::Invoke(T0 arg0, T1 arg1, T2 arg2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0, arg1, arg2);
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2> constexpr ::UnityEngine::Events::UnityAction_3<T0, T1, T2>::UnityAction_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
