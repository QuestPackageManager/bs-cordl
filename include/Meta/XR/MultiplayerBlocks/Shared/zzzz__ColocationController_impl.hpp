#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationController_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationDebuggingOptions_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationController::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationController::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a6ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationController::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6f10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_get_ColocationReadyCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColocationReadyCallbacks;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_get_ColocationReadyCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColocationReadyCallbacks;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_set_ColocationReadyCallbacks(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ColocationReadyCallbacks = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*& Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_get_DebuggingOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebuggingOptions;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* const& Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_get_DebuggingOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebuggingOptions;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationController::__cordl_internal_set_DebuggingOptions(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebuggingOptions = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationController* Meta::XR::MultiplayerBlocks::Shared::ColocationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationController*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationController::ColocationController() {}
