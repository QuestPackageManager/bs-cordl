#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayServerFiniteStateMachineFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachineFactory_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachineFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerFiniteStateMachine* (*)(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b2c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachineFactory*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GameplayServerFiniteStateMachine*
GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachineFactory*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerFiniteStateMachine*>(nullptr, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachineFactory::GameplayServerFiniteStateMachineFactory() {}
