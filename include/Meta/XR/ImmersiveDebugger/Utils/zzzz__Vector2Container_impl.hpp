#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/Vector2Container.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__Vector2Container_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::Vector2Container._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::Vector2Container::*)()>(&::Meta::XR::ImmersiveDebugger::Utils::Vector2Container::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a46b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::Vector2Container*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::Vector2Container::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::Vector2Container*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::Vector2Container* Meta::XR::ImmersiveDebugger::Utils::Vector2Container::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Utils::Vector2Container*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::Vector2Container::Vector2Container() {}
