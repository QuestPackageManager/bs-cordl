#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelStartController.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILevelStartController.add_levelDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&::GlobalNamespace::ILevelStartController::add_levelDidStartEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), { ::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILevelStartController.remove_levelDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILevelStartController::*)(::System::Action*)>(&::GlobalNamespace::ILevelStartController::remove_levelDidStartEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), { ::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ILevelStartController::add_levelDidStartEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ILevelStartController::remove_levelDidStartEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelStartController*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
