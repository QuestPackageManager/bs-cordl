#pragma once
// IWYU pragma private; include "BGNet/Core/DefaultTaskUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/zzzz__DefaultTaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Delay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::DefaultTaskUtility::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::DefaultTaskUtility::Delay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3340e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(),
                                                             { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.CancellationTokenWithDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::BGNet::Core::DefaultTaskUtility::*)(::System::TimeSpan)>(
    &::BGNet::Core::DefaultTaskUtility::CancellationTokenWithDelay)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3340f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "CancellationTokenWithDelay", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::DefaultTaskUtility::*)(::System::Threading::Tasks::Task*)>(&::BGNet::Core::DefaultTaskUtility::Wait)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3340f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Wait", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::DefaultTaskUtility::*)(::System::Action*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::DefaultTaskUtility::Run)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3340f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::DefaultTaskUtility::*)(::System::Func_1<::System::Threading::Tasks::Task*>*, ::System::Threading::CancellationToken)>(&::BGNet::Core::DefaultTaskUtility::Run)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3340ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(),
                                                { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::DefaultTaskUtility._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::DefaultTaskUtility::*)()>(&::BGNet::Core::DefaultTaskUtility::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3341068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGNet::Core::DefaultTaskUtility::setStaticF_instance(::BGNet::Core::DefaultTaskUtility* value) {
  ::cordl_internals::setStaticField<::BGNet::Core::DefaultTaskUtility*, "instance", ::BGNet::Core::DefaultTaskUtility*>(std::forward<::BGNet::Core::DefaultTaskUtility*>(value));
}
inline ::BGNet::Core::DefaultTaskUtility* BGNet::Core::DefaultTaskUtility::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::BGNet::Core::DefaultTaskUtility*, "instance", ::BGNet::Core::DefaultTaskUtility*>();
}
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Delay", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, timeSpan, cancellationToken);
}
inline ::System::Threading::CancellationToken BGNet::Core::DefaultTaskUtility::CancellationTokenWithDelay(::System::TimeSpan timeSpan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "CancellationTokenWithDelay", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method, timeSpan);
}
inline void BGNet::Core::DefaultTaskUtility::Wait(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Wait", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename T> inline T BGNet::Core::DefaultTaskUtility::Wait(::System::Threading::Tasks::Task_1<T>* task) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Wait", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, task);
}
template <typename T1, typename T2>
inline ::System::Threading::Tasks::Task_1<T2>*
BGNet::Core::DefaultTaskUtility::ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                              ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(),
                                                           { "ContinueWith",
                                                             { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                             { ::i2c::type_of<::System::Threading::Tasks::Task_1<T1>*>(),
                                                               ::i2c::type_of<::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T2>*>(this, ___internal_method, task, continuation);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { "Run", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::DefaultTaskUtility::Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(),
                                              { "Run", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, func, cancellationToken);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::DefaultTaskUtility::Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(),
                                                           { "Run", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, func, cancellationToken);
}
inline void BGNet::Core::DefaultTaskUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTaskUtility*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGNet::Core::DefaultTaskUtility* BGNet::Core::DefaultTaskUtility::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Core::DefaultTaskUtility*>());
}
/// @brief Convert operator to "::BGNet::Core::ITaskUtility"
constexpr BGNet::Core::DefaultTaskUtility::operator ::BGNet::Core::ITaskUtility*() noexcept {
  return static_cast<::BGNet::Core::ITaskUtility*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::ITaskUtility"
constexpr ::BGNet::Core::ITaskUtility* BGNet::Core::DefaultTaskUtility::i___BGNet__Core__ITaskUtility() noexcept {
  return static_cast<::BGNet::Core::ITaskUtility*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGNet::Core::DefaultTaskUtility::DefaultTaskUtility() {}
