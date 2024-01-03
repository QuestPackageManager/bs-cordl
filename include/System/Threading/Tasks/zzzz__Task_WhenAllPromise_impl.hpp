#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise::*)(
    ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>)>(&::System::Threading::Tasks::__Task__WhenAllPromise::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2629d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::__Task__WhenAllPromise::Invoke)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x262ade8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.get_ShouldNotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise::*)()>(
    &::System::Threading::Tasks::__Task__WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x262b0b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise::*)()>(
    &::System::Threading::Tasks::__Task__WhenAllPromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262b124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                                                                               "get_InvokeMayRunArbitraryCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr System::Threading::Tasks::__Task__WhenAllPromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::__Task__WhenAllPromise::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> const& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_tasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise::__set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
inline ::System::Threading::Tasks::__Task__WhenAllPromise*
System::Threading::Tasks::__Task__WhenAllPromise::New_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise*>(tasks));
}
inline void System::Threading::Tasks::__Task__WhenAllPromise::_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::__Task__WhenAllPromise::Invoke(::System::Threading::Tasks::Task* ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                                                                             "get_InvokeMayRunArbitraryCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__Task__WhenAllPromise::__Task__WhenAllPromise() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
