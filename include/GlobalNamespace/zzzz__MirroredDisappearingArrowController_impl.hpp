#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MirroredGameNoteController> (::GlobalNamespace::MirroredDisappearingArrowController::*)()>(
    &::GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d4924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredDisappearingArrowController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MirroredDisappearingArrowController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredDisappearingArrowController::*)()>(&::GlobalNamespace::MirroredDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58d492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredDisappearingArrowController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_get__mirroredGameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_get__mirroredGameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr void GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_set__mirroredGameNoteController(::UnityW<::GlobalNamespace::MirroredGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredGameNoteController = value;
}
inline ::UnityW<::GlobalNamespace::MirroredGameNoteController> GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredDisappearingArrowController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MirroredGameNoteController>>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredDisappearingArrowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredDisappearingArrowController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredDisappearingArrowController* GlobalNamespace::MirroredDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredDisappearingArrowController::MirroredDisappearingArrowController() {}
