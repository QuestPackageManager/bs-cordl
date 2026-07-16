#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineDebugDisplaySettings.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineDebugDisplaySettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsCommon_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsLighting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayGPUResidentDrawer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsStats_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_commonSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_commonSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684c9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_commonSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_commonSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_commonSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                             { "set_commonSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_materialSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_materialSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684c9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_materialSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_materialSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_materialSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                             { "set_materialSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_renderingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_renderingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_renderingSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_renderingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_renderingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                             { "set_renderingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_lightingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_lightingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_lightingSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_lightingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_lightingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                             { "set_lightingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_volumeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugDisplaySettingsVolume* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_volumeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_volumeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_volumeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_volumeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                                                           { "set_volumeSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_displayStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_displayStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_displayStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_displayStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_displayStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                         { "set_displayStats", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_gpuResidentDrawerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_gpuResidentDrawerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_gpuResidentDrawerSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.set_gpuResidentDrawerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(
    ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_gpuResidentDrawerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684ca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                             { "set_gpuResidentDrawerSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.get_IsPostProcessingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x684ca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x684cc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::Reset)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x684cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.UpdateDisplayStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateDisplayStats)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x684d200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "UpdateDisplayStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings.UpdateMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateMaterials)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x684d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "UpdateMaterials", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__commonSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commonSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__commonSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commonSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__commonSettings_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commonSettings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__materialSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__materialSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__materialSettings_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialSettings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__renderingSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__renderingSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__renderingSettings_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderingSettings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__lightingSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightingSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__lightingSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightingSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__lightingSettings_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightingSettings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__volumeSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__volumeSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeSettings_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__volumeSettings_k__BackingField(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeSettings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__displayStats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayStats_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__displayStats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayStats_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__displayStats_k__BackingField(
    ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayStats_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__gpuResidentDrawerSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gpuResidentDrawerSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_get__gpuResidentDrawerSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gpuResidentDrawerSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::__cordl_internal_set__gpuResidentDrawerSettings_k__BackingField(
    ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gpuResidentDrawerSettings_k__BackingField = value;
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_commonSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_commonSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_commonSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                           { "set_commonSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_materialSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_materialSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_materialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                           { "set_materialSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_renderingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_renderingSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                           { "set_renderingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_lightingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_lightingSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_lightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                           { "set_lightingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_volumeSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_volumeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_volumeSettings(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                                                         { "set_volumeSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*
UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_displayStats() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_displayStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_displayStats(
    ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                       { "set_displayStats", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_gpuResidentDrawerSettings() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "get_gpuResidentDrawerSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_gpuResidentDrawerSettings(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(),
                                                           { "set_gpuResidentDrawerSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_IsPostProcessingAllowed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateDisplayStats() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "UpdateDisplayStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateMaterials() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>(), { "UpdateMaterials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UniversalRenderPipelineDebugDisplaySettings() {}
