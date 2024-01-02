#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__QueueUserWorkItemCallback_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(
    ::System::Threading::WaitCallback*, ::System::Object*, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::Threading::QueueUserWorkItemCallback::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x261c2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)()>(
    &::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x261c3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261c484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.WaitCallback_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::QueueUserWorkItemCallback::WaitCallback_Context)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x261c488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), "WaitCallback_Context",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::QueueUserWorkItemCallback::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::Threading::WaitCallback*& System::Threading::QueueUserWorkItemCallback::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> const& System::Threading::QueueUserWorkItemCallback::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_callback(::System::Threading::WaitCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::QueueUserWorkItemCallback::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Threading::QueueUserWorkItemCallback::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::QueueUserWorkItemCallback::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::QueueUserWorkItemCallback::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::QueueUserWorkItemCallback::setStaticF_ccb(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::QueueUserWorkItemCallback::getStaticF_ccb() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "ccb",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get>();
}
inline ::System::Threading::QueueUserWorkItemCallback* System::Threading::QueueUserWorkItemCallback::New_ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj,
                                                                                                              bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::QueueUserWorkItemCallback*>(waitCallback, stateObj, compressStack, stackMark));
}
inline void System::Threading::QueueUserWorkItemCallback::_ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj, bool compressStack,
                                                                ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, waitCallback, stateObj, compressStack, stackMark);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                                                                             "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tae);
}
inline void System::Threading::QueueUserWorkItemCallback::WaitCallback_Context(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(), "WaitCallback_Context",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::Threading::QueueUserWorkItemCallback::QueueUserWorkItemCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
