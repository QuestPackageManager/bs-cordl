#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskToApm_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskToApm_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::*)(
    ::System::Threading::Tasks::Task*, ::System::Object*, bool)>(&::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2620fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult.System_IAsyncResult_get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2621224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                                 "System.IAsyncResult.get_AsyncState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult.System_IAsyncResult_get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                                 "System.IAsyncResult.get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult.System_IAsyncResult_get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2621234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                                 "System.IAsyncResult.get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult.System_IAsyncResult_get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x262124c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                                 "System.IAsyncResult.get_AsyncWaitHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
constexpr void System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__set_Task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__set__state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get__completedSynchronously() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completedSynchronously;
}
constexpr bool const& System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__get__completedSynchronously() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completedSynchronously;
}
constexpr void System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__set__completedSynchronously(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____completedSynchronously = value;
}
inline ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult* System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::New_ctor(::System::Threading::Tasks::Task* task,
                                                                                                                                                ::System::Object* state, bool completedSynchronously) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>(task, state, completedSynchronously));
}
inline void System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::_ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, state, completedSynchronously);
}
inline ::System::Object* System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                               "System.IAsyncResult.get_AsyncState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                               "System.IAsyncResult.get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                               "System.IAsyncResult.get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*>::get(),
                                               "System.IAsyncResult.get_AsyncWaitHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult::__TaskToApm__TaskWrapperAsyncResult() {}
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::*)()>(
    &::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26211e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0._InvokeCallbackWhenTaskCompletes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::*)()>(
    &::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::_InvokeCallbackWhenTaskCompletes_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26212f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*>::get(),
                                                 "<InvokeCallbackWhenTaskCompletes>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::AsyncCallback*& System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__set_callback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IAsyncResult*& System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__get_asyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::IAsyncResult*> const& System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__get_asyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr void System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__set_asyncResult(::System::IAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0* System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*>());
}
inline void System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::_InvokeCallbackWhenTaskCompletes_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*>::get(),
                                               "<InvokeCallbackWhenTaskCompletes>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0::__TaskToApm____c__DisplayClass3_0() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Threading::Tasks::TaskToApm::Begin)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2620e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "Begin", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Threading::Tasks::TaskToApm::End)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26210f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "End", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.InvokeCallbackWhenTaskCompletes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*)>(
    &::System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2621000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "InvokeCallbackWhenTaskCompletes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IAsyncResult* System::Threading::Tasks::TaskToApm::Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "Begin", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(nullptr, ___internal_method, task, callback, state);
}
inline void System::Threading::Tasks::TaskToApm::End(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "End", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
template <typename TResult> inline TResult System::Threading::Tasks::TaskToApm::End(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "End",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(nullptr, ___internal_method, asyncResult);
}
inline void System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskToApm*>::get(), "InvokeCallbackWhenTaskCompletes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, antecedent, callback, asyncResult);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskToApm::TaskToApm() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
