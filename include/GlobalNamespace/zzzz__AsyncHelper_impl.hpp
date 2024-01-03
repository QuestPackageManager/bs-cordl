#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncHelper_def.hpp"
#include "GlobalNamespace/zzzz__AsyncHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d() {}
template <typename T> constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__get_asyncTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncTask;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const& GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__get_asyncTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncTask;
}
template <typename T> constexpr void GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
template <typename T> constexpr T const& GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
template <typename T> constexpr void GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__set_result(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::_RunSync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*>::get(), "<RunSync>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>::__AsyncHelper____c__DisplayClass0_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::*)()>(
    &::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xe24eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe25048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe24cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0._RunSync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::_RunSync_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe24dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*>::get(),
                                                                               "<RunSync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::__get_asyncTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task*>*> const& GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::__get_asyncTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncTask;
}
constexpr void GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::__set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*>());
}
inline void GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::_RunSync_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*>::get(),
                                                                             "<RunSync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0::__AsyncHelper____c__DisplayClass1_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::*)()>(
    &::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xe25054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe252fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tasks", ty:
// "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::__AsyncHelper___AnyTaskTrueNonAlloc_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tasks = tasks;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2::__AsyncHelper___AnyTaskTrueNonAlloc_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper.RunSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::AsyncHelper::RunSync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe24bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper*>::get(), "RunSync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper.AnyTaskTrueNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<bool>* (*)(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*)>(&::GlobalNamespace::AsyncHelper::AnyTaskTrueNonAlloc)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe24cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper*>::get(), "AnyTaskTrueNonAlloc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline T GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* asyncTask) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper*>::get(), "RunSync",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, asyncTask);
}
inline void GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper*>::get(), "RunSync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::AsyncHelper::AnyTaskTrueNonAlloc(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper*>::get(), "AnyTaskTrueNonAlloc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, tasks);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncHelper::AsyncHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
