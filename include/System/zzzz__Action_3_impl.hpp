#pragma once
// IWYU pragma private; include "System/Action_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3> inline ::System::Action_3<T1, T2, T3>* System::Action_3<T1, T2, T3>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Action_3<T1, T2, T3>*>(object, method));
}
template <typename T1, typename T2, typename T3> inline void System::Action_3<T1, T2, T3>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_3<T1, T2, T3>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3> inline void System::Action_3<T1, T2, T3>::Invoke(T1 arg1, T2 arg2, T3 arg3) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_3<T1, T2, T3>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2, arg3);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::System::Action_3<T1, T2, T3>::Action_3() {}
