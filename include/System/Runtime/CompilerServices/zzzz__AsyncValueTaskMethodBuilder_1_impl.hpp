#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename TResult>
inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>, false>(nullptr, ___internal_method);
}
template<typename TResult>
template<typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Start(::ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                    "Start",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template<typename TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template<typename TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "SetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template<typename TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "SetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template<typename TResult>
inline ::System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "get_Task",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>, false>(this, ___internal_method);
}
template<typename TResult>
template<typename TAwaiter,typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AwaitUnsafeOnCompleted(::ByRef<TAwaiter>  awaiter, ::ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                    "AwaitUnsafeOnCompleted",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TAwaiter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  _methodBuilder, TResult  _result, bool  _haveResult, bool  _useBuilder) noexcept  {
this->_methodBuilder = _methodBuilder;
this->_result = _result;
this->_haveResult = _haveResult;
this->_useBuilder = _useBuilder;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AsyncValueTaskMethodBuilder_1()   {
}
