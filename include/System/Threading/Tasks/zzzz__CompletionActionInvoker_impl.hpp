#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CompletionActionInvoker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__CompletionActionInvoker_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)(
    ::System::Threading::Tasks::ITaskCompletionAction*, ::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::CompletionActionInvoker::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3e0462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ITaskCompletionAction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)()>(
    &::System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3e07dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker.MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::Tasks::CompletionActionInvoker::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e07e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(), "MarkAborted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::Tasks::CompletionActionInvoker::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Threading::Tasks::CompletionActionInvoker::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::ITaskCompletionAction*& System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_get_m_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::ITaskCompletionAction*> const& System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_get_m_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_set_m_action(::System::Threading::Tasks::ITaskCompletionAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_get_m_completingTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completingTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_get_m_completingTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_completingTask;
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__cordl_internal_set_m_completingTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_completingTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::CompletionActionInvoker* System::Threading::Tasks::CompletionActionInvoker::New_ctor(::System::Threading::Tasks::ITaskCompletionAction* action,
                                                                                                                        ::System::Threading::Tasks::Task* completingTask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::CompletionActionInvoker*>(action, completingTask));
}
inline void System::Threading::Tasks::CompletionActionInvoker::_ctor(::System::Threading::Tasks::ITaskCompletionAction* action, ::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ITaskCompletionAction*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, completingTask);
}
inline void System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                                               "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::CompletionActionInvoker::MarkAborted(::System::Threading::ThreadAbortException* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(), "MarkAborted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::CompletionActionInvoker::CompletionActionInvoker() {}
