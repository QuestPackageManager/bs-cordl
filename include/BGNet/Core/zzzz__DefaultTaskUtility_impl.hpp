#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/zzzz__DefaultTaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Delay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::DefaultTaskUtility::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(&::BGNet::Core::DefaultTaskUtility::Delay)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe5df40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Delay", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.CancellationTokenWithDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (::BGNet::Core::DefaultTaskUtility::*)(::System::TimeSpan)>(
    &::BGNet::Core::DefaultTaskUtility::CancellationTokenWithDelay)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe5dfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "CancellationTokenWithDelay",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::DefaultTaskUtility::*)(::System::Threading::Tasks::Task*)>(
    &::BGNet::Core::DefaultTaskUtility::Wait)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe5e010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::DefaultTaskUtility::*)(::System::Action*, ::System::Threading::CancellationToken)>(&::BGNet::Core::DefaultTaskUtility::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe5e028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Run", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::DefaultTaskUtility::*)(::System::Func_1<::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken)>(&::BGNet::Core::DefaultTaskUtility::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe5e090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Run", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::DefaultTaskUtility::*)()>(&::BGNet::Core::DefaultTaskUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5e0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::ITaskUtility"
constexpr BGNet::Core::DefaultTaskUtility::operator ::BGNet::Core::ITaskUtility*() noexcept {
  return static_cast<::BGNet::Core::ITaskUtility*>(static_cast<void*>(this));
}
inline void BGNet::Core::DefaultTaskUtility::setStaticF_instance(::BGNet::Core::DefaultTaskUtility* value) {
  ::cordl_internals::setStaticField<::BGNet::Core::DefaultTaskUtility*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get>(
      std::forward<::BGNet::Core::DefaultTaskUtility*>(value));
}
inline ::BGNet::Core::DefaultTaskUtility* BGNet::Core::DefaultTaskUtility::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::BGNet::Core::DefaultTaskUtility*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get>();
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Delay", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, timeSpan, cancellationToken);
}
inline ::System::Threading::CancellationToken BGNet::Core::DefaultTaskUtility::CancellationTokenWithDelay(::System::TimeSpan timeSpan) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "CancellationTokenWithDelay",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken, false>(this, ___internal_method, timeSpan);
}
inline void BGNet::Core::DefaultTaskUtility::Wait(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename T> inline T BGNet::Core::DefaultTaskUtility::Wait(::System::Threading::Tasks::Task_1<T>* task) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Wait",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, task);
}
template <typename T1, typename T2>
inline ::System::Threading::Tasks::Task_1<T2>*
BGNet::Core::DefaultTaskUtility::ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                              ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "ContinueWith",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T1>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T2>*, false>(this, ___internal_method, task, continuation);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Run", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Run", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, func, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::DefaultTaskUtility::Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), "Run",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, func, cancellationToken);
}
inline ::BGNet::Core::DefaultTaskUtility* BGNet::Core::DefaultTaskUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::DefaultTaskUtility*>());
}
inline void BGNet::Core::DefaultTaskUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTaskUtility*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::DefaultTaskUtility::DefaultTaskUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
