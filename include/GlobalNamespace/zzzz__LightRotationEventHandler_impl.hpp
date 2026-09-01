#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler_InitData::*)(
    bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::LightRotationEventHandler_InitData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x598f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler_InitData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xMirrored = value;
}
constexpr bool& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yMirrored = value;
}
constexpr bool& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zMirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_xTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_xTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_yTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_yTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_zTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_get_zTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr void GlobalNamespace::LightRotationEventHandler_InitData::__cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTransform = value;
}
inline void GlobalNamespace::LightRotationEventHandler_InitData::_ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                                                                       ::UnityEngine::Transform* zTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler_InitData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform);
}
inline ::GlobalNamespace::LightRotationEventHandler_InitData* GlobalNamespace::LightRotationEventHandler_InitData::New_ctor(bool xMirrored, bool yMirrored, bool zMirrored,
                                                                                                                            ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                                                                                                                            ::UnityEngine::Transform* zTransform) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationEventHandler_InitData*>(xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationEventHandler_InitData::LightRotationEventHandler_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler::*)(
    ::GlobalNamespace::LightRotationEventHandler_InitData*, ::Tweening::SongTimeTweeningManager*)>(&::GlobalNamespace::LightRotationEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb78;
  constexpr static std::size_t addrs = 0x598f978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationEventHandler_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler::*)()>(&::GlobalNamespace::LightRotationEventHandler::Cleanup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x598f6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.HandleRotationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler::*)(::GlobalNamespace::LightRotationBeatmapEventData*)>(
    &::GlobalNamespace::LightRotationEventHandler::HandleRotationEvent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5991f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                                                           { "HandleRotationEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.ProcessAxisEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler::*)(::Tweening::FloatTween*, ::GlobalNamespace::LightRotationBeatmapEventData*)>(
    &::GlobalNamespace::LightRotationEventHandler::ProcessAxisEvent)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59937c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                { "ProcessAxisEvent", {}, { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.SetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationEventHandler::*)(float_t)>(&::GlobalNamespace::LightRotationEventHandler::SetRotation)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5993a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "SetRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.SetTweenData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Tweening::FloatTween*, float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::LightRotationEventHandler::SetTweenData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5993910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                             { "SetTweenData",
                                                               {},
                                                               { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.MaybeMirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, bool)>(&::GlobalNamespace::LightRotationEventHandler::MaybeMirror)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5993fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "MaybeMirror", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationEventHandler.ComputeTargetAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(
    &::GlobalNamespace::LightRotationEventHandler::ComputeTargetAngle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5993930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
            { "ComputeTargetAngle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*&
GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__transformMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* const&
GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__transformMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__transformMask(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformMask = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__xRotationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRotationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__xRotationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRotationTween;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__xRotationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xRotationTween = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__yRotationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRotationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__yRotationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRotationTween;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__yRotationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yRotationTween = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__zRotationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRotationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__zRotationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRotationTween;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__zRotationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zRotationTween = value;
}
constexpr bool& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xMirrored = value;
}
constexpr bool& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yMirrored = value;
}
constexpr bool& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zMirrored;
}
constexpr bool const& GlobalNamespace::LightRotationEventHandler::__cordl_internal_get__zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zMirrored;
}
constexpr void GlobalNamespace::LightRotationEventHandler::__cordl_internal_set__zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zMirrored = value;
}
inline void GlobalNamespace::LightRotationEventHandler::_ctor(::GlobalNamespace::LightRotationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationEventHandler_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, tweeningManager);
}
inline void GlobalNamespace::LightRotationEventHandler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationEventHandler::HandleRotationEvent(::GlobalNamespace::LightRotationBeatmapEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                                                         { "HandleRotationEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEventData);
}
inline void GlobalNamespace::LightRotationEventHandler::ProcessAxisEvent(::Tweening::FloatTween* rotationTween, ::GlobalNamespace::LightRotationBeatmapEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                              { "ProcessAxisEvent", {}, { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationTween, currentEventData);
}
inline void GlobalNamespace::LightRotationEventHandler::SetRotation(float_t _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "SetRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::LightRotationEventHandler::SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime,
                                                                     ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                                                         { "SetTweenData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
inline float_t GlobalNamespace::LightRotationEventHandler::MaybeMirror(float_t value, bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(), { "MaybeMirror", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, mirrored);
}
inline float_t GlobalNamespace::LightRotationEventHandler::ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount,
                                                                              ::GlobalNamespace::LightRotationDirection rotationOrientation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LightRotationEventHandler*>(),
          { "ComputeTargetAngle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, startAngle, targetAngle, loopCount, rotationOrientation);
}
inline ::GlobalNamespace::LightRotationEventHandler* GlobalNamespace::LightRotationEventHandler::New_ctor(::GlobalNamespace::LightRotationEventHandler_InitData* initData,
                                                                                                          ::Tweening::SongTimeTweeningManager* tweeningManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationEventHandler*>(initData, tweeningManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationEventHandler::LightRotationEventHandler() {}
