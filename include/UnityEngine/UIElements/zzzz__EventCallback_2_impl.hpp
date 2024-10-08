#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallback_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TEventType, typename TCallbackArgs>
inline ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::New_ctor(::System::Object* object,
                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(object, method));
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::Invoke(TEventType evt, TCallbackArgs userArgs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, userArgs);
}
// Ctor Parameters []
template <typename TEventType, typename TCallbackArgs> constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>::EventCallback_2() {}
