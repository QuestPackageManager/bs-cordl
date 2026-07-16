#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/Telemetry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__Telemetry_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__BuildingBlock_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__InstallationRoutineCheckpoint_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::Telemetry.AddBlockInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker, ::Meta::XR::BuildingBlocks::BuildingBlock*)>(
    &::Meta::XR::BuildingBlocks::Telemetry::AddBlockInfo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a315ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                                { "AddBlockInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::BuildingBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::Telemetry.AddBlockVariantInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker, ::Meta::XR::BuildingBlocks::BuildingBlock*)>(
    &::Meta::XR::BuildingBlocks::Telemetry::AddBlockVariantInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a39c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                         { "AddBlockVariantInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::BuildingBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::Telemetry.AddInstallationRoutineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker, ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*)>(
    &::Meta::XR::BuildingBlocks::Telemetry::AddInstallationRoutineInfo)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a39d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
            { "AddInstallationRoutineInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::Telemetry.AddSceneInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker, ::UnityEngine::SceneManagement::Scene)>(
    &::Meta::XR::BuildingBlocks::Telemetry::AddSceneInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a3a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                                { "AddSceneInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::BuildingBlocks::Telemetry::AddBlockInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::Meta::XR::BuildingBlocks::BuildingBlock* block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                              { "AddBlockInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::BuildingBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker, block);
}
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::BuildingBlocks::Telemetry::AddBlockVariantInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::Meta::XR::BuildingBlocks::BuildingBlock* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                       { "AddBlockVariantInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::BuildingBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker, block);
}
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::BuildingBlocks::Telemetry::AddInstallationRoutineInfo(::GlobalNamespace::OVRTelemetryMarker marker,
                                                                                                             ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* checkpoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
          { "AddInstallationRoutineInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker, checkpoint);
}
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::BuildingBlocks::Telemetry::AddSceneInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::Telemetry*>(),
                                              { "AddSceneInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker, scene);
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::Telemetry::Telemetry() {}
