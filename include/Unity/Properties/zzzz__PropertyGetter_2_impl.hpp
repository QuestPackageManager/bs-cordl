#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyGetter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Properties/zzzz__PropertyGetter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TContainer, typename TValue>
inline ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* Unity::Properties::PropertyGetter_2<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::PropertyGetter_2<TContainer, TValue>*>(object, method));
}
template <typename TContainer, typename TValue> inline void Unity::Properties::PropertyGetter_2<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyGetter_2<TContainer, TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::PropertyGetter_2<TContainer, TValue>::Invoke(ByRef<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyGetter_2<TContainer, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, container);
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>::PropertyGetter_2() {}
