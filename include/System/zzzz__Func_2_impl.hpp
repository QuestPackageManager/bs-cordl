#pragma once
// IWYU pragma private; include "System/Func_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename TResult> inline ::System::Func_2<T, TResult>* System::Func_2<T, TResult>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Func_2<T, TResult>*>(object, method));
}
template <typename T, typename TResult> inline void System::Func_2<T, TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_2<T, TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T, typename TResult> inline TResult System::Func_2<T, TResult>::Invoke(T arg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_2<T, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, arg);
}
// Ctor Parameters []
template <typename T, typename TResult> constexpr ::System::Func_2<T, TResult>::Func_2() {}
