#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\DelegateHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__DelegateHelpers_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DelegateHelpers.InvokeCallbacksSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>, ::Unity::Profiling::ProfilerMarker, ::StringW,
                                                                ::System::Object*)>(&::UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x65011e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                             { "InvokeCallbacksSafe",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>>(),
                                                                 ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>> callbacks,
                                                                                      ::Unity::Profiling::ProfilerMarker marker, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                           { "InvokeCallbacksSafe",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>>>(),
                                                               ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, marker, callbackName, context);
}
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>*>> callbacks,
                                                                                      TValue argument, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                           { "InvokeCallbacksSafe",
                                                             { ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<TValue>*>>>(),
                                                               ::i2c::type_of<TValue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, argument, callbackName, context);
}
template <typename TValue1, typename TValue2>
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1, TValue2>*>> callbacks,
                                                                                      TValue1 argument1, TValue2 argument2, ::Unity::Profiling::ProfilerMarker marker, ::StringW callbackName,
                                                                                      ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                       { "InvokeCallbacksSafe",
                                         { ::i2c::class_of<TValue1>(), ::i2c::class_of<TValue2>() },
                                         { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<TValue1, TValue2>*>>>(), ::i2c::type_of<TValue1>(),
                                           ::i2c::type_of<TValue2>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue1>(), ::i2c::class_of<TValue2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, argument1, argument2, marker, callbackName, context);
}
template <typename TValue1, typename TValue2>
inline bool UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe_AnyCallbackReturnsTrue(
    ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1, TValue2, bool>*>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName,
    ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                           { "InvokeCallbacksSafe_AnyCallbackReturnsTrue",
                                                             { ::i2c::class_of<TValue1>(), ::i2c::class_of<TValue2>() },
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<TValue1, TValue2, bool>*>>>(),
                                                               ::i2c::type_of<TValue1>(), ::i2c::type_of<TValue2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue1>(), ::i2c::class_of<TValue2>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbacks, argument1, argument2, callbackName, context);
}
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe_AndInvokeReturnedActions(
    ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_2<TValue, ::System::Action*>*>> callbacks, TValue argument, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                           { "InvokeCallbacksSafe_AndInvokeReturnedActions",
                                                             { ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_2<TValue, ::System::Action*>*>>>(),
                                                               ::i2c::type_of<TValue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacks, argument, callbackName, context);
}
template <typename TValue, typename TReturn>
inline bool UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe_AnyCallbackReturnsObject(
    ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_2<TValue, TReturn>*>> callbacks, TValue argument, ::StringW callbackName, ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DelegateHelpers*>(),
                                                           { "InvokeCallbacksSafe_AnyCallbackReturnsObject",
                                                             { ::i2c::class_of<TValue>(), ::i2c::class_of<TReturn>() },
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_2<TValue, TReturn>*>>>(),
                                                               ::i2c::type_of<TValue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TReturn>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbacks, argument, callbackName, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::DelegateHelpers::DelegateHelpers() {}
