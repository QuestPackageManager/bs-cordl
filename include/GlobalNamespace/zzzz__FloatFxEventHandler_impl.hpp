#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxEventHandler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxEventHandler_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxEventHandler_InitData::*)(::Tweening::SongTimeTweeningManager*, ::System::Action_1<float_t>*)>(
    &::GlobalNamespace::FloatFxEventHandler_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59915d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler_InitData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_get_tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_get_tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr void GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_set_tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tweeningManager = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_get_setValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setValue;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_get_setValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setValue;
}
constexpr void GlobalNamespace::FloatFxEventHandler_InitData::__cordl_internal_set_setValue(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setValue = value;
}
inline void GlobalNamespace::FloatFxEventHandler_InitData::_ctor(::Tweening::SongTimeTweeningManager* tweeningManager, ::System::Action_1<float_t>* setValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler_InitData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweeningManager, setValue);
}
inline ::GlobalNamespace::FloatFxEventHandler_InitData* GlobalNamespace::FloatFxEventHandler_InitData::New_ctor(::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                                ::System::Action_1<float_t>* setValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxEventHandler_InitData*>(tweeningManager, setValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxEventHandler_InitData::FloatFxEventHandler_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::FloatFxEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxEventHandler::*)(::GlobalNamespace::FloatFxEventHandler_InitData*)>(
    &::GlobalNamespace::FloatFxEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59915dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxEventHandler_InitData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxEventHandler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxEventHandler::*)()>(&::GlobalNamespace::FloatFxEventHandler::Cleanup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x598f778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxEventHandler.HandleFloatFxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxEventHandler::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::FloatFxEventHandler::HandleFloatFxEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59922b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { "HandleFloatFxEvent", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::FloatFxEventHandler::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__setValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setValue;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__setValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setValue;
}
constexpr void GlobalNamespace::FloatFxEventHandler::__cordl_internal_set__setValue(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setValue = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::FloatFxEventHandler::__cordl_internal_get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::FloatFxEventHandler::__cordl_internal_set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatTween = value;
}
inline void GlobalNamespace::FloatFxEventHandler::_ctor(::GlobalNamespace::FloatFxEventHandler_InitData* initData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxEventHandler_InitData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData);
}
inline void GlobalNamespace::FloatFxEventHandler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxEventHandler::HandleFloatFxEvent(::GlobalNamespace::FloatFxBeatmapEventData* currentEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxEventHandler*>(), { "HandleFloatFxEvent", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEventData);
}
inline ::GlobalNamespace::FloatFxEventHandler* GlobalNamespace::FloatFxEventHandler::New_ctor(::GlobalNamespace::FloatFxEventHandler_InitData* initData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxEventHandler*>(initData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxEventHandler::FloatFxEventHandler() {}
