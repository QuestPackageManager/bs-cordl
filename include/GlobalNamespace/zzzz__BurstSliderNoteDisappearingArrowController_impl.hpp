#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderNoteDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderNoteDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BurstSliderGameNoteController> (::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(
    &::GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(
    &::GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58d3064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_get__burstSliderNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_get__burstSliderNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr void GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_set__burstSliderNoteController(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burstSliderNoteController = value;
}
inline ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderNoteDisappearingArrowController::BurstSliderNoteDisappearingArrowController() {}
