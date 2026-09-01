#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectSpawnMovementData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType::BeatmapObjectSpawnMovementData_NoteJumpValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType::BeatmapObjectSpawnMovementData_NoteJumpValueType() {}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType::BeatOffset{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType::JumpDuration{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_startHalfJumpDurationInBeats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_startHalfJumpDurationInBeats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ccfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_startHalfJumpDurationInBeats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_maxHalfJumpDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_maxHalfJumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ccfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_maxHalfJumpDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58c9d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_noteLinesDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_verticalLayersDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58c9d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_verticalLayersDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ccfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_noteLinesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_centerPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ccfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_centerPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::IJumpOffsetYProvider*, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58ca6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                { "Init", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IJumpOffsetYProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetJumpingNoteSpawnData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58ca80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                                                           { "GetJumpingNoteSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleSpawnData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ObstacleSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58ca9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                                                           { "GetObstacleSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetSliderSpawnData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58cac70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "GetSliderSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetNoteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ccfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                             { "GetNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Get2DNoteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58cd104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                             { "Get2DNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58cd074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                             { "GetObstacleOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58cd13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                             { "HighestJumpPosYForLineLayerWithoutJumpOffset", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetGravityBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::GetGravityBase)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58cd044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                             { "GetGravityBase", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58cd160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                                                           { "HighestJumpPosYForLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58cae34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__centerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__centerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPos;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__centerPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerPos = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__maxHalfJumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHalfJumpDistance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__maxHalfJumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHalfJumpDistance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__maxHalfJumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHalfJumpDistance = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__startHalfJumpDurationInBeats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startHalfJumpDurationInBeats;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__startHalfJumpDurationInBeats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startHalfJumpDurationInBeats;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__startHalfJumpDurationInBeats(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startHalfJumpDurationInBeats = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__baseLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__baseLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__baseLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__upperLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__upperLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__upperLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upperLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__topLinesHighestJumpPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLinesHighestJumpPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__topLinesHighestJumpPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLinesHighestJumpPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__topLinesHighestJumpPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topLinesHighestJumpPosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__verticalObstaclePosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalObstaclePosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__verticalObstaclePosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalObstaclePosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__verticalObstaclePosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalObstaclePosY = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__obstacleTopPosY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleTopPosY;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__obstacleTopPosY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleTopPosY;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__obstacleTopPosY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleTopPosY = value;
}
constexpr int32_t& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteLinesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLinesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__noteLinesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLinesCount;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__noteLinesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLinesCount = value;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetYProvider = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__rightVec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVec;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_get__rightVec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVec;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnMovementData::__cordl_internal_set__rightVec(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightVec = value;
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_startHalfJumpDurationInBeats() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_startHalfJumpDurationInBeats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_maxHalfJumpDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_maxHalfJumpDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_noteLinesDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_verticalLayersDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_noteLinesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "get_centerPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnMovementData::Init(int32_t noteLinesCount, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider, ::UnityEngine::Vector3 rightVec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                              { "Init", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IJumpOffsetYProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteLinesCount, jumpOffsetYProvider, rightVec);
}
inline ::GlobalNamespace::NoteSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "GetJumpingNoteSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteSpawnData>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::ObstacleSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData(::GlobalNamespace::ObstacleData* obstacleData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "GetObstacleSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnData>(this, ___internal_method, obstacleData);
}
inline ::GlobalNamespace::SliderSpawnData GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData(::GlobalNamespace::SliderData* sliderData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { "GetSliderSpawnData", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnData>(this, ___internal_method, sliderData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                                                         { "GetNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                           { "Get2DNoteOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                           { "GetObstacleOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                           { "HighestJumpPosYForLineLayerWithoutJumpOffset", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::GetGravityBase(::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                           { "GetGravityBase", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, noteLineLayer, beforeJumpLineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(),
                                                                                         { "HighestJumpPosYForLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnMovementData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* GlobalNamespace::BeatmapObjectSpawnMovementData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectSpawnMovementData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData::BeatmapObjectSpawnMovementData() {}
