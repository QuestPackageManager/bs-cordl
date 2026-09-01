#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEditorScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::*)(
    ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*)>(&::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590ddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::*)(
    ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*)>(&::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590de70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::*)(
    bool, ::StringW, bool, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>)>(
    &::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x590df30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                         { "Init",
                                           {},
                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::*)()>(&::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x590df7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::*)()>(&::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590df9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*& GlobalNamespace::BeatmapEditorScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* const& GlobalNamespace::BeatmapEditorScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::BeatmapEditorScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::BeatmapEditorScenesTransitionSetupData::add_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapEditorScenesTransitionSetupData::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::BeatmapEditorScenesTransitionSetupData::Init(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
                                                              ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goStraightToEditor, projectPath, ignoreTempFolder, startLevel);
}
inline void GlobalNamespace::BeatmapEditorScenesTransitionSetupData::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEditorScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData* GlobalNamespace::BeatmapEditorScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData::BeatmapEditorScenesTransitionSetupData() {}
