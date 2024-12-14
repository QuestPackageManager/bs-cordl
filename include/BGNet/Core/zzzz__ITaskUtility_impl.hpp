#pragma once
// IWYU pragma private; include "BGNet/Core/ITaskUtility.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::BGNet::Core::ITaskUtility.Delay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::ITaskUtility::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(&::BGNet::Core::ITaskUtility::Delay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITaskUtility.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::ITaskUtility::*)(::System::Threading::Tasks::Task*)>(&::BGNet::Core::ITaskUtility::Wait)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITaskUtility.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::ITaskUtility::*)(::System::Action*, ::System::Threading::CancellationToken)>(&::BGNet::Core::ITaskUtility::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITaskUtility.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::ITaskUtility::*)(::System::Func_1<::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken)>(&::BGNet::Core::ITaskUtility::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITaskUtility.CancellationTokenWithDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (::BGNet::Core::ITaskUtility::*)(::System::TimeSpan)>(
    &::BGNet::Core::ITaskUtility::CancellationTokenWithDelay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 7));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* BGNet::Core::ITaskUtility::Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, timeSpan, cancellationToken);
}
inline void BGNet::Core::ITaskUtility::Wait(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename T> inline T BGNet::Core::ITaskUtility::Wait(::System::Threading::Tasks::Task_1<T>* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, task);
}
template <typename T1, typename T2>
inline ::System::Threading::Tasks::Task_1<T2>*
BGNet::Core::ITaskUtility::ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                        ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T2>*, false>(this, ___internal_method, task, continuation);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::ITaskUtility::Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::ITaskUtility::Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, func, cancellationToken);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::ITaskUtility::Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, func, cancellationToken);
}
inline ::System::Threading::CancellationToken BGNet::Core::ITaskUtility::CancellationTokenWithDelay(::System::TimeSpan timeSpan) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITaskUtility*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken, false>(this, ___internal_method, timeSpan);
}
