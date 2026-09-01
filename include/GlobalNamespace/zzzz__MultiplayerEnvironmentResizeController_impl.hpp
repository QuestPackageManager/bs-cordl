#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerEnvironmentResizeController.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterResizeController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType::MultiplayerEnvironmentResizeController_ResizeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType::MultiplayerEnvironmentResizeController_ResizeType() {}
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType::Position{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType::Length{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData.get_resizeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType (
    ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_resizeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d78b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_resizeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData.get_offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d78bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_offset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData.get_lights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> (::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_lights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d78c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_lights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData.get_otherTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_otherTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d78cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_otherTransforms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d78d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__resizeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeType;
}
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType const& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__resizeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeType;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_set__resizeType(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resizeType = value;
}
constexpr float_t& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr float_t const& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_set__offset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lights = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__otherTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_get__otherTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTransforms;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::__cordl_internal_set__otherTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____otherTransforms = value;
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_resizeType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_resizeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType>(this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_offset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_lights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_lights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::get_otherTransforms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { "get_otherTransforms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData* GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData::MultiplayerEnvironmentResizeController_ResizeData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.get_isResizingFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d71c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "get_isResizingFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.add_resizingDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59d71cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(),
                                                                                           { "add_resizingDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.remove_resizingDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59d7278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(),
                                                                                           { "remove_resizingDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59d7324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59d74f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleEdgeDistanceFromCenterWasCalculated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d74c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(),
                                                                                           { "HandleEdgeDistanceFromCenterWasCalculated", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d74e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.TryResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d76b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "TryResize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59d76d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "Resize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d78b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__platformEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__platformEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnd;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__platformEnd(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformEnd = value;
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__resizeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeData;
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__resizeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeData;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__resizeData(::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resizeData = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__centerResizeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerResizeController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__centerResizeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerResizeController;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__centerResizeController(::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerResizeController = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__beatmapObjectSpawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnCenter;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__beatmapObjectSpawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnCenter;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectSpawnCenter = value;
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get_resizingDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resizingDidFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get_resizingDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resizingDidFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set_resizingDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resizingDidFinishEvent = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__isResizingFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isResizingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__isResizingFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isResizingFinished;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__isResizingFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isResizingFinished = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__edgeDistanceFromCenterFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeDistanceFromCenterFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__edgeDistanceFromCenterFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeDistanceFromCenterFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__edgeDistanceFromCenterFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeDistanceFromCenterFound = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__spawnCenterDistanceFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__spawnCenterDistanceFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__spawnCenterDistanceFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistanceFound = value;
}
inline bool GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "get_isResizingFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "add_resizingDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(),
                                                                                         { "remove_resizingDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(),
                                                                                         { "HandleEdgeDistanceFromCenterWasCalculated", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edgeDistanceFromCenter);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "TryResize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Resize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { "Resize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerEnvironmentResizeController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* GlobalNamespace::MultiplayerEnvironmentResizeController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerEnvironmentResizeController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController::MultiplayerEnvironmentResizeController() {}
