#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder (*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24da794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "Create",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24da7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24da7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetResult",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.SetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)(::System::Exception*)>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24da88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder.get_Task
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::*)()>(
    &::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24da8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "get_Task",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "Create",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, false>(nullptr, ___internal_method);
}
template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::Start(ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "Start",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetResult() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetResult",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "SetException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::System::Threading::Tasks::ValueTask System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "get_Task",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>::get(), "AwaitUnsafeOnCompleted",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TAwaiter>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult,
                                                                                                        bool _useBuilder) noexcept {
  this->_methodBuilder = _methodBuilder;
  this->_haveResult = _haveResult;
  this->_useBuilder = _useBuilder;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
