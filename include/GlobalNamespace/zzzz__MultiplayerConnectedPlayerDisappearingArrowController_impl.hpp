#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> (
    ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59bd81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>&
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_get__gameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_get__gameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameNoteController = value;
}
inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::MultiplayerConnectedPlayerDisappearingArrowController() {}
