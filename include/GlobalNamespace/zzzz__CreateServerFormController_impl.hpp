#pragma once
// IWYU pragma private; include "GlobalNamespace\CreateServerFormController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormController_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController.get_formData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreateServerFormData (::GlobalNamespace::CreateServerFormController::*)()>(
    &::GlobalNamespace::CreateServerFormController::get_formData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x593e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { "get_formData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)(int32_t, bool)>(&::GlobalNamespace::CreateServerFormController::Setup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x593e908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { "Setup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateServerFormController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateServerFormController::*)()>(&::GlobalNamespace::CreateServerFormController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593e96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::CreateServerFormController::__cordl_internal_get__maxPlayersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::CreateServerFormController::__cordl_internal_get__maxPlayersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayersList;
}
constexpr void GlobalNamespace::CreateServerFormController::__cordl_internal_set__maxPlayersList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPlayersList = value;
}
constexpr bool& GlobalNamespace::CreateServerFormController::__cordl_internal_get__netDiscoverable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr bool const& GlobalNamespace::CreateServerFormController::__cordl_internal_get__netDiscoverable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDiscoverable;
}
constexpr void GlobalNamespace::CreateServerFormController::__cordl_internal_set__netDiscoverable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____netDiscoverable = value;
}
inline ::GlobalNamespace::CreateServerFormData GlobalNamespace::CreateServerFormController::get_formData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { "get_formData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateServerFormData>(this, ___internal_method);
}
inline void GlobalNamespace::CreateServerFormController::Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { "Setup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedNumberOfPlayers, netDiscoverable);
}
inline void GlobalNamespace::CreateServerFormController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreateServerFormController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateServerFormController* GlobalNamespace::CreateServerFormController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateServerFormController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateServerFormController::CreateServerFormController() {}
