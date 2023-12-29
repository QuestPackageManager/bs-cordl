#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder (*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2382828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "Create",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2382868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2382938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "SetResult",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2382aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "SetException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.NotifySynchronizationContextOfCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2382a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(),
                                                 "NotifySynchronizationContextOfCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2382994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "get_Task",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(),
                                                                             "Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, false>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Start(ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "Start",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "AwaitUnsafeOnCompleted",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TAwaiter>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(),
                                                                             "SetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(), "SetException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(),
                                                                             "NotifySynchronizationContextOfCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>::get(),
                                                                             "get_Task", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_coreState", ty:
// "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext* m_synchronizationContext,
                                                                                              ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                                                                              ::System::Threading::Tasks::Task* m_task) noexcept {
  this->m_synchronizationContext = m_synchronizationContext;
  this->m_coreState = m_coreState;
  this->m_task = m_task;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AsyncVoidMethodBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
