#pragma once
#include "System/Threading/Tasks/zzzz__ValueTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)(
    ::System::Threading::Tasks::ValueTask)>(&::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(), ".ctor",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)()>(
    &::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24da9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                    "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)()>(
    &::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24daaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                    "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)(
    ::System::Action*)>(&::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x24dabac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                    "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)(
    ::System::Action*)>(&::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x24dad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(), "UnsafeOnCompleted",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::_ctor(::System::Threading::Tasks::ValueTask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(), ".ctor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                  "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                  "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                                  "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
inline void System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(), "UnsafeOnCompleted",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(
    ::System::Threading::Tasks::ValueTask _value) noexcept {
  this->_value = _value;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)(::System::Threading::Tasks::ValueTask)>(
    &::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter (
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)()>(&::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24da990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(), "GetAwaiter",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor(::System::Threading::Tasks::ValueTask value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(), "GetAwaiter",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask _value) noexcept {
  this->_value = _value;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
