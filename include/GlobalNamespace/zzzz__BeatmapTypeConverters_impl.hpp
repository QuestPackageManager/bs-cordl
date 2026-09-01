#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapTypeConverters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapTypeConverters_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ColorType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__TransitionType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertNoteColorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertNoteColorType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37157c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertNoteColorType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertNoteColorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (*)(::BeatmapSaveDataCommon::NoteColorType)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertNoteColorType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37157dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteColorType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertEnvironmentColorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::BeatmapSaveDataCommon::EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertEnvironmentColorType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37157f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertEnvironmentColorType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::EnvironmentColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertLightAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightAxis (*)(::BeatmapSaveDataCommon::Axis)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertLightAxis)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3715804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertLightAxis", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::Axis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EaseType (*)(::BeatmapSaveDataCommon::EaseType)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertEaseType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3715818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertEaseType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertNoteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37158f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteLineLayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertObstacleLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertObstacleLineLayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x371590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertObstacleLineLayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertNoteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (*)(::BeatmapSaveDataCommon::NoteLineLayer)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x371591c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteLineLayer", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertSliderDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderData_Type (*)(::BeatmapSaveDataVersion3::SliderType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertSliderDataType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3715930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertSliderDataType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::SliderType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertLightRotationDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightRotationDirection (*)(::BeatmapSaveDataCommon::RotationDirection)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertLightRotationDirection)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x371593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertLightRotationDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::RotationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertBasicBeatmapEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BasicBeatmapEventType (*)(::BeatmapSaveDataCommon::BeatmapEventType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertBasicBeatmapEventType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3715950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertBasicBeatmapEventType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType (*)(::BeatmapSaveDataCommon::DistributionParamType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertDistributionParamType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3715954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                             { "ConvertDistributionParamType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertNoteCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (*)(::BeatmapSaveDataCommon::NoteCutDirection)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertNoteCutDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3715964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertNoteCutDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertSliderMidAnchorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderMidAnchorMode (*)(::BeatmapSaveDataCommon::SliderMidAnchorMode)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertSliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3715974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertSliderMidAnchorMode", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::SliderMidAnchorMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertOffsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OffsetDirection (*)(::BeatmapSaveDataCommon::OffsetDirection)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertOffsetDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3715988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                           { "ConvertOffsetDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::OffsetDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertTransitionTypeToExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatmapSaveDataVersion3::TransitionType)>(&::GlobalNamespace::BeatmapTypeConverters::ConvertTransitionTypeToExtension)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37159a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                             { "ConvertTransitionTypeToExtension", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapTypeConverters.ConvertTransitionTypeToEaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EaseType (*)(::BeatmapSaveDataVersion3::TransitionType)>(
    &::GlobalNamespace::BeatmapTypeConverters::ConvertTransitionTypeToEaseType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37159b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertTransitionTypeToEaseType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorType GlobalNamespace::BeatmapTypeConverters::ConvertNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType noteType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertNoteColorType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(nullptr, ___internal_method, noteType);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::BeatmapTypeConverters::ConvertNoteColorType(::BeatmapSaveDataCommon::NoteColorType noteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteColorType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(nullptr, ___internal_method, noteType);
}
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapTypeConverters::ConvertEnvironmentColorType(::BeatmapSaveDataCommon::EnvironmentColorType environmentColorType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertEnvironmentColorType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::EnvironmentColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType>(nullptr, ___internal_method, environmentColorType);
}
inline ::GlobalNamespace::LightAxis GlobalNamespace::BeatmapTypeConverters::ConvertLightAxis(::BeatmapSaveDataCommon::Axis axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertLightAxis", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::Axis>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightAxis>(nullptr, ___internal_method, axis);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::BeatmapTypeConverters::ConvertEaseType(::BeatmapSaveDataCommon::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertEaseType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType>(nullptr, ___internal_method, easeType);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::BeatmapTypeConverters::ConvertNoteLineLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteLineLayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(nullptr, ___internal_method, layer);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::BeatmapTypeConverters::ConvertObstacleLineLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertObstacleLineLayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(nullptr, ___internal_method, layer);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::BeatmapTypeConverters::ConvertNoteLineLayer(::BeatmapSaveDataCommon::NoteLineLayer layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertNoteLineLayer", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(nullptr, ___internal_method, layer);
}
inline ::GlobalNamespace::SliderData_Type GlobalNamespace::BeatmapTypeConverters::ConvertSliderDataType(::BeatmapSaveDataVersion3::SliderType sliderType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertSliderDataType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::SliderType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData_Type>(nullptr, ___internal_method, sliderType);
}
inline ::GlobalNamespace::LightRotationDirection GlobalNamespace::BeatmapTypeConverters::ConvertLightRotationDirection(::BeatmapSaveDataCommon::RotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertLightRotationDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::RotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationDirection>(nullptr, ___internal_method, rotationDirection);
}
inline ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BeatmapTypeConverters::ConvertBasicBeatmapEventType(::BeatmapSaveDataCommon::BeatmapEventType beatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertBasicBeatmapEventType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType>(nullptr, ___internal_method, beatmapEventType);
}
inline ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType
GlobalNamespace::BeatmapTypeConverters::ConvertDistributionParamType(::BeatmapSaveDataCommon::DistributionParamType distributionParamType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(), { "ConvertDistributionParamType", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(nullptr, ___internal_method, distributionParamType);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::BeatmapTypeConverters::ConvertNoteCutDirection(::BeatmapSaveDataCommon::NoteCutDirection noteCutDirection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertNoteCutDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(nullptr, ___internal_method, noteCutDirection);
}
inline ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::BeatmapTypeConverters::ConvertSliderMidAnchorMode(::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertSliderMidAnchorMode", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::SliderMidAnchorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode>(nullptr, ___internal_method, sliderMidAnchorMode);
}
inline ::GlobalNamespace::OffsetDirection GlobalNamespace::BeatmapTypeConverters::ConvertOffsetDirection(::BeatmapSaveDataCommon::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertOffsetDirection", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection>(nullptr, ___internal_method, offsetDirection);
}
inline bool GlobalNamespace::BeatmapTypeConverters::ConvertTransitionTypeToExtension(::BeatmapSaveDataVersion3::TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertTransitionTypeToExtension", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transitionType);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::BeatmapTypeConverters::ConvertTransitionTypeToEaseType(::BeatmapSaveDataVersion3::TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapTypeConverters*>(),
                                                                                         { "ConvertTransitionTypeToEaseType", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType>(nullptr, ___internal_method, transitionType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapTypeConverters::BeatmapTypeConverters() {}
