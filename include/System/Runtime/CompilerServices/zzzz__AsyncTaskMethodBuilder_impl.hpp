#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder (*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d1be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d19cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3d19fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "get_Task",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3d19dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "SetResult",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d19ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "SetException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::setStaticF_s_cachedCompleted(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, "s_cachedCompleted",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get>(
      std::forward<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>(value));
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::getStaticF_s_cachedCompleted() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, "s_cachedCompleted",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get>();
}
inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(),
                                                                             "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, false>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Start(::ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "Start",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "AwaitUnsafeOnCompleted",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TAwaiter>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(),
                                                                             "get_Task", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(),
                                                                             "SetResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>::get(), "SetException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
// Ctor Parameters [CppParam { name: "m_builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AsyncTaskMethodBuilder(
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder) noexcept {
  this->m_builder = m_builder;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AsyncTaskMethodBuilder() {}
