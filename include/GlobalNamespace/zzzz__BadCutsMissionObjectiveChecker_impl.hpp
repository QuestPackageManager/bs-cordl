#pragma once
// IWYU pragma private; include "GlobalNamespace\BadCutsMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__BadCutsMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BadCutsMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadCutsMissionObjectiveChecker::*)()>(&::GlobalNamespace::BadCutsMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5919198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), { ::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadCutsMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadCutsMissionObjectiveChecker::*)()>(&::GlobalNamespace::BadCutsMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59192c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadCutsMissionObjectiveChecker.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadCutsMissionObjectiveChecker::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::BadCutsMissionObjectiveChecker::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x591935c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadCutsMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadCutsMissionObjectiveChecker::*)()>(&::GlobalNamespace::BadCutsMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59193fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BadCutsMissionObjectiveChecker::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::BadCutsMissionObjectiveChecker::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BadCutsMissionObjectiveChecker::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
inline void GlobalNamespace::BadCutsMissionObjectiveChecker::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BadCutsMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BadCutsMissionObjectiveChecker::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::BadCutsMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BadCutsMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BadCutsMissionObjectiveChecker* GlobalNamespace::BadCutsMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BadCutsMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BadCutsMissionObjectiveChecker::BadCutsMissionObjectiveChecker() {}
