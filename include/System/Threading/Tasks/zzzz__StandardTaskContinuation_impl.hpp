#pragma once
// IWYU pragma private; include "System/Threading/Tasks/StandardTaskContinuation.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__StandardTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(
    ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(
    &::System::Threading::Tasks::StandardTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3e662b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::StandardTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3e695e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_options;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_options;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_options(::System::Threading::Tasks::TaskContinuationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_options = value;
}
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_taskScheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_taskScheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_taskScheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Tasks::StandardTaskContinuation::_ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options,
                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, options, scheduler);
}
inline void System::Threading::Tasks::StandardTaskContinuation::Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completedTask, bCanInlineContinuationTask);
}
inline ::System::Threading::Tasks::StandardTaskContinuation* System::Threading::Tasks::StandardTaskContinuation::New_ctor(::System::Threading::Tasks::Task* task,
                                                                                                                          ::System::Threading::Tasks::TaskContinuationOptions options,
                                                                                                                          ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::StandardTaskContinuation*>(task, options, scheduler));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::StandardTaskContinuation::StandardTaskContinuation() {}
