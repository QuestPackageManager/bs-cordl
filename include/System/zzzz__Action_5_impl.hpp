#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_5<T1, T2, T3, T4, T5>* System::Action_5<T1, T2, T3, T4, T5>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Action_5<T1, T2, T3, T4, T5>*>(object, method));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void System::Action_5<T1, T2, T3, T4, T5>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_5<T1, T2, T3, T4, T5>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void System::Action_5<T1, T2, T3, T4, T5>::Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_5<T1, T2, T3, T4, T5>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5> constexpr ::System::Action_5<T1, T2, T3, T4, T5>::Action_5() {}
