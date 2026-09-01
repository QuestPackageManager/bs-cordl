#pragma once
// IWYU pragma private; include "GlobalNamespace\LightTranslationEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler_InitData::*)(
    bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
    ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::LightTranslationEventHandler_InitData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5990800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler_InitData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zMirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTransform = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_xTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_xDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_xDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_yTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_yDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_yDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_zTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_get_zDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler_InitData::__cordl_internal_set_zDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zDistributionLimits = value;
}
inline void GlobalNamespace::LightTranslationEventHandler_InitData::_ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                                                                          ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits,
                                                                          ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                          ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler_InitData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                              ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                              ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits, xDistributionLimits,
                                                   yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
inline ::GlobalNamespace::LightTranslationEventHandler_InitData*
GlobalNamespace::LightTranslationEventHandler_InitData::New_ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                                                                 ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits,
                                                                 ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits,
                                                                 ::UnityEngine::Vector2 zDistributionLimits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightTranslationEventHandler_InitData*>(xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform,
                                                                                                                     xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits,
                                                                                                                     zTranslationLimits, zDistributionLimits));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationEventHandler_InitData::LightTranslationEventHandler_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler::*)(
    ::GlobalNamespace::LightTranslationEventHandler_InitData*, ::Tweening::SongTimeTweeningManager*)>(&::GlobalNamespace::LightTranslationEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb9c;
  constexpr static std::size_t addrs = 0x5990830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationEventHandler_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler::*)()>(&::GlobalNamespace::LightTranslationEventHandler::Cleanup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x598f75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.HandleTranslationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler::*)(::GlobalNamespace::LightTranslationBeatmapEventData*)>(
    &::GlobalNamespace::LightTranslationEventHandler::HandleTranslationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59920bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                             { "HandleTranslationEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.ProcessAxisEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler::*)(::Tweening::FloatTween*, ::GlobalNamespace::LightTranslationBeatmapEventData*,
                                                                                                                 ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationEventHandler::ProcessAxisEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5993fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                             { "ProcessAxisEvent",
                                                               {},
                                                               { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.SetTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationEventHandler::*)(float_t)>(&::GlobalNamespace::LightTranslationEventHandler::SetTranslation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59941b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(), { "SetTranslation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.SetTweenData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Tweening::FloatTween*, float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::LightTranslationEventHandler::SetTweenData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5994190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                             { "SetTweenData",
                                                               {},
                                                               { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationEventHandler.ComputeTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationEventHandler::ComputeTranslation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5994144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                            { "ComputeTranslation",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*&
GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__transformMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* const&
GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__transformMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__transformMask(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformMask = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__xTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xTranslationTween = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__yTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yTranslationTween = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__zTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zTranslationTween = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__xTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__xDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__yTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__yDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__zTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__zDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zDistributionLimits = value;
}
constexpr bool& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationEventHandler::__cordl_internal_get__zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zMirrored;
}
constexpr void GlobalNamespace::LightTranslationEventHandler::__cordl_internal_set__zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zMirrored = value;
}
inline void GlobalNamespace::LightTranslationEventHandler::_ctor(::GlobalNamespace::LightTranslationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationEventHandler_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, tweeningManager);
}
inline void GlobalNamespace::LightTranslationEventHandler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationEventHandler::HandleTranslationEvent(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                           { "HandleTranslationEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEventData);
}
inline void GlobalNamespace::LightTranslationEventHandler::ProcessAxisEvent(::Tweening::FloatTween* translationTween, ::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData,
                                                                            ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits, bool mirrored) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                           { "ProcessAxisEvent",
                                                             {},
                                                             { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translationTween, currentEventData, translationLimits, distributionLimits, mirrored);
}
inline void GlobalNamespace::LightTranslationEventHandler::SetTranslation(float_t _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(), { "SetTranslation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::LightTranslationEventHandler::SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime,
                                                                        ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                                                         { "SetTweenData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Tweening::FloatTween*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
inline float_t GlobalNamespace::LightTranslationEventHandler::ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution,
                                                                                 ::UnityEngine::Vector2 distributionLimits, bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                          { "ComputeTranslation",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, translation, translationLimits, distribution, distributionLimits, mirrored);
}
inline ::GlobalNamespace::LightTranslationEventHandler* GlobalNamespace::LightTranslationEventHandler::New_ctor(::GlobalNamespace::LightTranslationEventHandler_InitData* initData,
                                                                                                                ::Tweening::SongTimeTweeningManager* tweeningManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightTranslationEventHandler*>(initData, tweeningManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationEventHandler::LightTranslationEventHandler() {}
