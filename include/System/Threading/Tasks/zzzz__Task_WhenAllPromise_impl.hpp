#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_WhenAllPromise.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Task_WhenAllPromise::*)(
    ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>)>(&::GlobalNamespace::Task_WhenAllPromise::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3e68064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Task_WhenAllPromise::*)(::System::Threading::Tasks::Task*)>(
    &::GlobalNamespace::Task_WhenAllPromise::Invoke)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x3e69134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.get_ShouldNotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Task_WhenAllPromise::*)()>(
    &::GlobalNamespace::Task_WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3e69404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Task_WhenAllPromise::*)()>(
    &::GlobalNamespace::Task_WhenAllPromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e69478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(),
                                                                               "get_InvokeMayRunArbitraryCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> const& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr void GlobalNamespace::Task_WhenAllPromise::__cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_tasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void GlobalNamespace::Task_WhenAllPromise::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
inline void GlobalNamespace::Task_WhenAllPromise::_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks);
}
inline void GlobalNamespace::Task_WhenAllPromise::Invoke(::System::Threading::Tasks::Task* ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored);
}
inline bool GlobalNamespace::Task_WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::Task_WhenAllPromise::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise*>::get(),
                                                                             "get_InvokeMayRunArbitraryCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Task_WhenAllPromise* GlobalNamespace::Task_WhenAllPromise::New_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Task_WhenAllPromise*>(tasks));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr GlobalNamespace::Task_WhenAllPromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* GlobalNamespace::Task_WhenAllPromise::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Task_WhenAllPromise::Task_WhenAllPromise() {}
