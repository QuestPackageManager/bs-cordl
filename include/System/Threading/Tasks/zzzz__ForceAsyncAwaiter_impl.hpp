#pragma once
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ForceAsyncAwaiter::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26221b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ForceAsyncAwaiter (::System::Threading::Tasks::ForceAsyncAwaiter::*)()>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26221bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(),
                                                                               "GetAwaiter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ForceAsyncAwaiter::*)()>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26221c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(),
                                                                               "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ForceAsyncAwaiter::*)()>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26221cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(),
                                                                               "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ForceAsyncAwaiter::*)(::System::Action*)>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26221f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "OnCompleted",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ForceAsyncAwaiter.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ForceAsyncAwaiter::*)(::System::Action*)>(
    &::System::Threading::Tasks::ForceAsyncAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2622250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "UnsafeOnCompleted",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr System::Threading::Tasks::ForceAsyncAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Threading::Tasks::ForceAsyncAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Threading::Tasks::ForceAsyncAwaiter::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::ForceAsyncAwaiter System::Threading::Tasks::ForceAsyncAwaiter::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "GetAwaiter",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ForceAsyncAwaiter, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::ForceAsyncAwaiter::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(),
                                                                             "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::ForceAsyncAwaiter::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "GetResult",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::ForceAsyncAwaiter::OnCompleted(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "OnCompleted", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void System::Threading::Tasks::ForceAsyncAwaiter::UnsafeOnCompleted(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ForceAsyncAwaiter>::get(), "UnsafeOnCompleted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Threading::Tasks::ForceAsyncAwaiter::ForceAsyncAwaiter(::System::Threading::Tasks::Task* _task) noexcept {
  this->_task = _task;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ForceAsyncAwaiter::ForceAsyncAwaiter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
