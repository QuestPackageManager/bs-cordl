#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerSpectatingSpotPickerViewController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotPickerViewController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatorController_def.hpp"
#include "GlobalNamespace/zzzz__StepValuePicker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x59b2444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x59b2704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.HandleSpectatingSpotDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleSpectatingSpotDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b2924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(),
                                                             { "HandleSpectatingSpotDidChangeEvent", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.RefreshSpectatingSpotName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::RefreshSpectatingSpotName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59b25f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "RefreshSpectatingSpotName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.HandleIncButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleIncButtonWasPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59b2928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "HandleIncButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController.HandleDecButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleDecButtonWasPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59b2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "HandleDecButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_get__stepValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_get__stepValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepValuePicker;
}
constexpr void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_get__spectatorController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_get__spectatorController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorController;
}
constexpr void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::__cordl_internal_set__spectatorController(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectatorController = value;
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleSpectatingSpotDidChangeEvent(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(),
                                                           { "HandleSpectatingSpotDidChangeEvent", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spectatingSpot);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::RefreshSpectatingSpotName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "RefreshSpectatingSpotName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleIncButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "HandleIncButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleDecButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { "HandleDecButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController* GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::MultiplayerSpectatingSpotPickerViewController() {}
