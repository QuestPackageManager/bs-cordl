#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\ControllerProfileSaveData.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileSaveData::*)(
    bool, ::BeatSaber::GameSettings::Controller, ::BeatSaber::GameSettings::Controller)>(&::BeatSaber::GameSettings::ControllerProfileSaveData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3293934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileSaveData*>(),
                            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_alternativeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeHandling;
}
constexpr bool const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_alternativeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeHandling;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_alternativeHandling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alternativeHandling = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftController;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftController;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_leftController(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftController = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightController;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_get_rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightController;
}
constexpr void BeatSaber::GameSettings::ControllerProfileSaveData::__cordl_internal_set_rightController(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightController = value;
}
inline void BeatSaber::GameSettings::ControllerProfileSaveData::_ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController,
                                                                      ::BeatSaber::GameSettings::Controller rightController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileSaveData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alternativeHandling, leftController, rightController);
}
inline ::BeatSaber::GameSettings::ControllerProfileSaveData*
BeatSaber::GameSettings::ControllerProfileSaveData::New_ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController, ::BeatSaber::GameSettings::Controller rightController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfileSaveData*>(alternativeHandling, leftController, rightController));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfileSaveData::ControllerProfileSaveData() {}
