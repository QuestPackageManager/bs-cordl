#pragma once
// IWYU pragma private; include "GlobalNamespace\ProModeTrailingCollidersController.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProModeTrailingCollidersController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(&::GlobalNamespace::ProModeTrailingCollidersController::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58d8888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(&::GlobalNamespace::ProModeTrailingCollidersController::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58d8928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.HandleNoteDidMoveInJumpPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(
    &::GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58d8a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "HandleNoteDidMoveInJumpPhase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(&::GlobalNamespace::ProModeTrailingCollidersController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d8b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__mainSmallCuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSmallCuttableBySaber;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__mainSmallCuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSmallCuttableBySaber;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_set__mainSmallCuttableBySaber(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainSmallCuttableBySaber = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__trailingSmallCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailingSmallCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> const& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__trailingSmallCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailingSmallCuttableBySaberList;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_set__trailingSmallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailingSmallCuttableBySaberList = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteMovement>& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__noteMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__noteMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteMovement = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline void GlobalNamespace::ProModeTrailingCollidersController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProModeTrailingCollidersController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { "HandleNoteDidMoveInJumpPhase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProModeTrailingCollidersController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProModeTrailingCollidersController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProModeTrailingCollidersController* GlobalNamespace::ProModeTrailingCollidersController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProModeTrailingCollidersController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProModeTrailingCollidersController::ProModeTrailingCollidersController() {}
