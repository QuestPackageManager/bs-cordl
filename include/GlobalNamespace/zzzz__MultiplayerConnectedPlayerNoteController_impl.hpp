#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerNoteController.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerNoteController::*)(bool)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59bda70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerNoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerNoteController::*)(bool)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59bda90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerNoteController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerNoteController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerConnectedPlayerNoteController::__cordl_internal_get__visualsWrapperGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualsWrapperGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerConnectedPlayerNoteController::__cordl_internal_get__visualsWrapperGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualsWrapperGo;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerNoteController::__cordl_internal_set__visualsWrapperGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visualsWrapperGo = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerNoteController::Pause(bool pause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerNoteController* GlobalNamespace::MultiplayerConnectedPlayerNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerNoteController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerNoteController::MultiplayerConnectedPlayerNoteController() {}
