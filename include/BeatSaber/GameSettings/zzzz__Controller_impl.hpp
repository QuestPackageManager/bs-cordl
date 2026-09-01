#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\Controller.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::Controller.HasDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::GameSettings::Controller::*)()>(&::BeatSaber::GameSettings::Controller::HasDefaultValues)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x329395c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::Controller>(), { "HasDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
inline bool BeatSaber::GameSettings::Controller::HasDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::Controller>(), { "HasDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::Controller::Controller(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation) noexcept {
  this->position = position;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::Controller::Controller() {}
