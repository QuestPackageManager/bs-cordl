#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneMonobehaviorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehaviorExtensions_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehaviorExtensions.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IStandaloneMonobehavior*, ::System::Action*)>(&::GlobalNamespace::StandaloneMonobehaviorExtensions::Dispatch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3333ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneMonobehaviorExtensions*>(),
                                                             { "Dispatch", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneMonobehavior*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehaviorExtensions.DispatchAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IStandaloneMonobehavior*, ::System::Func_1<::System::Threading::Tasks::Task*>*)>(
    &::GlobalNamespace::StandaloneMonobehaviorExtensions::DispatchAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3333f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneMonobehaviorExtensions*>(),
                            { "DispatchAsync", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneMonobehavior*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandaloneMonobehaviorExtensions::Dispatch(::GlobalNamespace::IStandaloneMonobehavior* standaloneMonoBehavior, ::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneMonobehaviorExtensions*>(),
                                                           { "Dispatch", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneMonobehavior*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, standaloneMonoBehavior, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandaloneMonobehaviorExtensions::DispatchAsync(::GlobalNamespace::IStandaloneMonobehavior* standaloneMonoBehavior,
                                                                                                          ::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneMonobehaviorExtensions*>(),
                          { "DispatchAsync", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneMonobehavior*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, standaloneMonoBehavior, action);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneMonobehaviorExtensions::StandaloneMonobehaviorExtensions() {}
