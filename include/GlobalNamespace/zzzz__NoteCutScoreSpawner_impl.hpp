#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutScoreSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5989d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5989e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.HandleScoringForNoteStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)(::GlobalNamespace::ScoringElement*)>(
    &::GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5989f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "HandleScoringForNoteStarted", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598a000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner>& GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_get__flyingScoreSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreSpawner;
}
constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner> const& GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_get__flyingScoreSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreSpawner;
}
constexpr void GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_set__flyingScoreSpawner(::UnityW<::GlobalNamespace::FlyingScoreSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flyingScoreSpawner = value;
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::NoteCutScoreSpawner::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreController = value;
}
inline void GlobalNamespace::NoteCutScoreSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutScoreSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted(::GlobalNamespace::ScoringElement* scoringElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { "HandleScoringForNoteStarted", {}, { ::i2c::type_of<::GlobalNamespace::ScoringElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoringElement);
}
inline void GlobalNamespace::NoteCutScoreSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutScoreSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutScoreSpawner* GlobalNamespace::NoteCutScoreSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutScoreSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutScoreSpawner::NoteCutScoreSpawner() {}
