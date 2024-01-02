#pragma once
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::*)(
    ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*)>(&::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x262d598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::Invoke)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x262d6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(), "Invoke",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::*)()>(
    &::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262d8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(),
                                                 "get_InvokeMayRunArbitraryCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*& System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::__get__tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tasks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*> const&
System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::__get__tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tasks;
}
constexpr void System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::__set__tasks(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*
System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::New_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>(tasks));
}
inline void System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(), "Invoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
inline bool System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*>::get(),
                                               "get_InvokeMayRunArbitraryCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise::__TaskFactory__CompleteOnInvokePromise() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x262ac8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskFactory::*)(
    ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(
    &::System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x262d1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckCreationOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions)>(
    &::System::Threading::Tasks::TaskFactory::CheckCreationOptions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x262d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckCreationOptions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.StartNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::TaskFactory::*)(::System::Action*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions,
                                                ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x262d388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.StartNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::TaskFactory::*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions,
                                                ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x262d414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckFromAsyncOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions, bool)>(
    &::System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x262d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckFromAsyncOptions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CommonCWAnyLogic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* (*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*)>(
        &::System::Threading::Tasks::TaskFactory::CommonCWAnyLogic)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x262a020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CommonCWAnyLogic", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckMultiTaskContinuationOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskContinuationOptions)>(
    &::System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x262d220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckMultiTaskContinuationOptions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::TaskFactory::__get_m_defaultCancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultCancellationToken;
}
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::TaskFactory::__get_m_defaultCancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultCancellationToken;
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultCancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultCancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::TaskFactory::__get_m_defaultScheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultScheduler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> const& System::Threading::Tasks::TaskFactory::__get_m_defaultScheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultScheduler;
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_defaultScheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCreationOptions& System::Threading::Tasks::TaskFactory::__get_m_defaultCreationOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultCreationOptions;
}
constexpr ::System::Threading::Tasks::TaskCreationOptions const& System::Threading::Tasks::TaskFactory::__get_m_defaultCreationOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultCreationOptions;
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultCreationOptions = value;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::TaskFactory::__get_m_defaultContinuationOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultContinuationOptions;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::TaskFactory::__get_m_defaultContinuationOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_defaultContinuationOptions;
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_defaultContinuationOptions = value;
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskFactory*>());
}
inline void System::Threading::Tasks::TaskFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor(::System::Threading::CancellationToken cancellationToken,
                                                                                                ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                                                                ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskFactory*>(cancellationToken, creationOptions, continuationOptions, scheduler));
}
inline void System::Threading::Tasks::TaskFactory::_ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                         ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
inline void System::Threading::Tasks::TaskFactory::CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckCreationOptions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creationOptions);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::StartNew(::System::Action* action, ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                         ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, cancellationToken, creationOptions, scheduler);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::StartNew(::System::Action_1<::System::Object*>* action, ::System::Object* state,
                                                                                         ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                         ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, state, cancellationToken, creationOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory::StartNew(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken,
                                                                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                    ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, function, cancellationToken, creationOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::TaskFactory::StartNew(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "StartNew",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, function, state, cancellationToken, creationOptions, scheduler);
}
template <typename TArg1>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                                          ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "FromAsync",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, beginMethod, endMethod, arg1, state);
}
template <typename TArg1>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                                                          ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state,
                                                                                          ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "FromAsync",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, beginMethod, endMethod, arg1, state, creationOptions);
}
template <typename TArg1, typename TArg2>
inline ::System::Threading::Tasks::Task*
System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                 ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "FromAsync",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, beginMethod, endMethod, arg1, arg2, state);
}
template <typename TArg1, typename TArg2>
inline ::System::Threading::Tasks::Task*
System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                 ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state,
                                                 ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "FromAsync",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::IAsyncResult*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, beginMethod, endMethod, arg1, arg2, state, creationOptions);
}
inline void System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckFromAsyncOptions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creationOptions, hasBeginMethod);
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*
System::Threading::Tasks::TaskFactory::CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CommonCWAnyLogic", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, false>(nullptr, ___internal_method, tasks);
}
inline void System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskFactory*>::get(), "CheckMultiTaskContinuationOptions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, continuationOptions);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskFactory::TaskFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
