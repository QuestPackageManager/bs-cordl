#pragma once
// IWYU pragma private; include "GlobalNamespace/DisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameNoteController> (::GlobalNamespace::DisappearingArrowController::*)()>(
    &::GlobalNamespace::DisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d3964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisappearingArrowController*>(), { ::i2c::class_of<::GlobalNamespace::DisappearingArrowController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisappearingArrowController::*)()>(&::GlobalNamespace::DisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58d396c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisappearingArrowController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameNoteController>& GlobalNamespace::DisappearingArrowController::__cordl_internal_get__gameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr ::UnityW<::GlobalNamespace::GameNoteController> const& GlobalNamespace::DisappearingArrowController::__cordl_internal_get__gameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr void GlobalNamespace::DisappearingArrowController::__cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::GameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameNoteController = value;
}
inline ::UnityW<::GlobalNamespace::GameNoteController> GlobalNamespace::DisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DisappearingArrowController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameNoteController>>(this, ___internal_method);
}
inline void GlobalNamespace::DisappearingArrowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisappearingArrowController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisappearingArrowController* GlobalNamespace::DisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisappearingArrowController::DisappearingArrowController() {}
