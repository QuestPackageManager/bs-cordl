#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
template <typename TValue> constexpr ::System::IDisposable*& UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::__cordl_internal_get_subscription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subscription;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const&
UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::__cordl_internal_get_subscription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subscription;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::__cordl_internal_set_subscription(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subscription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>* UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>*>());
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::_CallOnce_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>*>::get(),
                                               "<CallOnce>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>::__Observable____c__DisplayClass6_0_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::Observable.ForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* (*)(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*,
                                                                                      ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Utilities::Observable::ForDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x30438e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "ForDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
template <typename TValue>
inline ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::Observable::Where(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "Where",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValue, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TValue>*, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource, typename TResult>
inline ::System::IObservable_1<TResult>* UnityEngine::InputSystem::Utilities::Observable::Select(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, TResult>* filter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "Select",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TResult>*, false>(nullptr, ___internal_method, source, filter);
}
template <typename TSource, typename TResult>
inline ::System::IObservable_1<TResult>* UnityEngine::InputSystem::Utilities::Observable::SelectMany(::System::IObservable_1<TSource>* source,
                                                                                                     ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "SelectMany",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TResult>*, false>(nullptr, ___internal_method, source, filter);
}
template <typename TValue> inline ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::Observable::Take(::System::IObservable_1<TValue>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "Take",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TValue>*, false>(nullptr, ___internal_method, source, count);
}
inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::Observable::ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "ForDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, false>(nullptr, ___internal_method, source, device);
}
template <typename TDevice>
inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::Observable::ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "ForDevice",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, false>(nullptr, ___internal_method, source);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::Observable::CallOnce(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "CallOnce",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(nullptr, ___internal_method, source, action);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::Observable::Call(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Observable*>::get(), "Call",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(nullptr, ___internal_method, source, action);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::Observable::Observable() {}
