#pragma once
// IWYU pragma private; include "GlobalNamespace\IStandaloneMonobehavior.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStandaloneMonobehavior.WhenReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IStandaloneMonobehavior::*)(::System::Action*)>(&::GlobalNamespace::IStandaloneMonobehavior::WhenReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStandaloneMonobehavior.WhenReadyAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IStandaloneMonobehavior::*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(
    &::GlobalNamespace::IStandaloneMonobehavior::WhenReadyAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStandaloneMonobehavior.RunAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::IStandaloneMonobehavior::*)(::GlobalNamespace::IStandaloneThreadRunner*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::IStandaloneMonobehavior::RunAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStandaloneMonobehavior.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IStandaloneMonobehavior::*)()>(&::GlobalNamespace::IStandaloneMonobehavior::Stop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IStandaloneMonobehavior::WhenReady(::System::Action* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IStandaloneMonobehavior::WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IStandaloneMonobehavior::RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, runner, cancellationToken);
}
inline void GlobalNamespace::IStandaloneMonobehavior::Stop() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneMonobehavior*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
