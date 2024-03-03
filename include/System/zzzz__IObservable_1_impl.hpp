#pragma once
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template <typename T> inline ::System::IDisposable* System::IObservable_1<T>::Subscribe(::System::IObserver_1<T>* observer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IObservable_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
