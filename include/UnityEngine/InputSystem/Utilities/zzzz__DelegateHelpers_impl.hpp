#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__DelegateHelpers_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DelegateHelpers.InvokeCallbacksSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>, ::StringW,
                                                                                           ::System::Object*)>(&::UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2bf5350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>::get(), "InvokeCallbacksSafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @param context: ::System::Object* (default: nullptr)
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>> callbacks,
                                                                                      ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>::get(), "InvokeCallbacksSafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, callbackName, context);
}
/// @param context: ::System::Object* (default: nullptr)
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>*>> callbacks,
                                                                                      TValue argument, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>::get(), "InvokeCallbacksSafe",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, argument, callbackName, context);
}
/// @param context: ::System::Object* (default: nullptr)
template <typename TValue1, typename TValue2>
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1, TValue2>*>> callbacks,
                                                                                      TValue1 argument1, TValue2 argument2, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>::get(), "InvokeCallbacksSafe",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get() },
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1, TValue2>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, argument1, argument2, callbackName, context);
}
/// @param context: ::System::Object* (default: nullptr)
template <typename TValue1, typename TValue2>
inline bool UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe_AnyCallbackReturnsTrue(
    ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1, TValue2, bool>*>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName,
    ::System::Object* context) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>::get(), "InvokeCallbacksSafe_AnyCallbackReturnsTrue",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get() },
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1, TValue2, bool>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callbacks, argument1, argument2, callbackName, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::DelegateHelpers::DelegateHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
