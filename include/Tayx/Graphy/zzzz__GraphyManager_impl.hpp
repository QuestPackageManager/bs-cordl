#pragma once
// IWYU pragma private; include "Tayx\Graphy\GraphyManager.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FFTWindow_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "Tayx/Graphy/Advanced/zzzz__G_AdvancedData_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioManager_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsManager_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamManager_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_Mode::GraphyManager_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_Mode::GraphyManager_Mode() {}
constexpr ::Tayx::Graphy::GraphyManager_Mode Tayx::Graphy::GraphyManager_Mode::FULL{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_Mode Tayx::Graphy::GraphyManager_Mode::LIGHT{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_ModuleType::GraphyManager_ModuleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_ModuleType::GraphyManager_ModuleType() {}
constexpr ::Tayx::Graphy::GraphyManager_ModuleType Tayx::Graphy::GraphyManager_ModuleType::FPS{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleType Tayx::Graphy::GraphyManager_ModuleType::RAM{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleType Tayx::Graphy::GraphyManager_ModuleType::AUDIO{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleType Tayx::Graphy::GraphyManager_ModuleType::ADVANCED{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_ModuleState::GraphyManager_ModuleState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_ModuleState::GraphyManager_ModuleState() {}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager_ModuleState::FULL{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager_ModuleState::TEXT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager_ModuleState::BASIC{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager_ModuleState::BACKGROUND{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager_ModuleState::OFF{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition::GraphyManager_ModulePosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition::GraphyManager_ModulePosition() {}
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager_ModulePosition::TOP_RIGHT{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager_ModulePosition::TOP_LEFT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager_ModulePosition::BOTTOM_RIGHT{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager_ModulePosition::BOTTOM_LEFT{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager_ModulePosition::FREE{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener::GraphyManager_LookForAudioListener(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener::GraphyManager_LookForAudioListener() {}
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener Tayx::Graphy::GraphyManager_LookForAudioListener::ALWAYS{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener Tayx::Graphy::GraphyManager_LookForAudioListener::ON_SCENE_LOAD{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener Tayx::Graphy::GraphyManager_LookForAudioListener::NEVER{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset::GraphyManager_ModulePreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset::GraphyManager_ModulePreset() {}
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_BASIC{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_TEXT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_TEXT_RAM_TEXT{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_TEXT{ static_cast<int32_t>(0x4) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_FULL{ static_cast<int32_t>(0x5) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_TEXT_RAM_TEXT_AUDIO_TEXT{ static_cast<int32_t>(0x6) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_TEXT_AUDIO_TEXT{ static_cast<int32_t>(0x7) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_FULL_AUDIO_TEXT{ static_cast<int32_t>(0x8) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL{ static_cast<int32_t>(0x9) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL{ static_cast<int32_t>(0xa) };
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset Tayx::Graphy::GraphyManager_ModulePreset::FPS_BASIC_ADVANCED_FULL{ static_cast<int32_t>(0xb) };
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6438040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphyMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_Mode (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6438174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GraphyMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphyMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_Mode)>(&::Tayx::Graphy::GraphyManager::set_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GraphyMode", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_Mode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_EnableOnStartup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_EnableOnStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64381c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_EnableOnStartup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_KeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64381cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_KeepAlive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Background
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64381d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_Background", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_Background
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::set_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64381dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_Background", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_BackgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64381e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_BackgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_BackgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64381f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_BackgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphModulePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GraphModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64381fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GraphModulePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphModulePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModulePosition)>(
    &::Tayx::Graphy::GraphyManager::set_GraphModulePosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6438204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GraphModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6438b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsModuleState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleState)>(&::Tayx::Graphy::GraphyManager::set_FpsModuleState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6438d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GoodFPSColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GoodFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6438f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CautionFPSColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CautionFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CriticalFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CriticalFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6438f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CriticalFPSColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CriticalFPSColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_CriticalFPSColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CriticalFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6438fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GoodFPSThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6438fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GoodFPSThreshold", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6438fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CautionFPSThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6438fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CautionFPSThreshold", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6438fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsGraphResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6438ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsTextUpdateRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CurrentFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CurrentFPS)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CurrentFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AverageFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AverageFPS)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x643904c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AverageFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MinFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MinFPS)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MinFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxFPS)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MaxFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64390a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamModuleState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleState)>(&::Tayx::Graphy::GraphyManager::set_RamModuleState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64390a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643921c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AllocatedRamColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AllocatedRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_AllocatedRamColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6439228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AllocatedRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_ReservedRamColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_ReservedRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_ReservedRamColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64393a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_ReservedRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64393c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MonoRamColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_MonoRamColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_MonoRamColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64393d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_MonoRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64393f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamGraphResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamGraphResolution)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64393fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamTextUpdateRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AllocatedRam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6439454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_ReservedRam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643946c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MonoRam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioModuleState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleState)>(&::Tayx::Graphy::GraphyManager::set_AudioModuleState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x643948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioListener> (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioListener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioListener", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::AudioListener*)>(&::Tayx::Graphy::GraphyManager::set_AudioListener)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioListener", {}, { ::i2c::type_of<::UnityEngine::AudioListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FindAudioListenerInCameraIfNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_LookForAudioListener (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FindAudioListenerInCameraIfNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FindAudioListenerInCameraIfNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_LookForAudioListener)>(
    &::Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                                             { "set_FindAudioListenerInCameraIfNull", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_LookForAudioListener>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64397b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioGraphColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64397c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioGraphColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64397e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioGraphResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64397e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioTextUpdateRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioTextUpdateRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x643980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FftWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FFTWindow (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FftWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FftWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FftWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::FFTWindow)>(&::Tayx::Graphy::GraphyManager::set_FftWindow)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FftWindow", {}, { ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_SpectrumSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_SpectrumSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643984c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_SpectrumSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_SpectrumSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_SpectrumSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_SpectrumSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Spectrum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_Spectrum)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6439870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_Spectrum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxDB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxDB)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6439888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MaxDB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64398a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AdvancedModuleState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModuleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleState)>(&::Tayx::Graphy::GraphyManager::set_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64398a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AdvancedModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModulePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyManager_ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AdvancedModulePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModulePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModulePosition)>(
    &::Tayx::Graphy::GraphyManager::set_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6439948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AdvancedModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643a178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x643a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643a8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643aa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModulePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleType, ::Tayx::Graphy::GraphyManager_ModulePosition)>(
    &::Tayx::Graphy::GraphyManager::SetModulePosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x643aa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                         { "SetModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleType>(), ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModuleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModuleType, ::Tayx::Graphy::GraphyManager_ModuleState)>(
    &::Tayx::Graphy::GraphyManager::SetModuleMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x643ab08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                                { "SetModuleMode", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleType>(), ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleModes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x643ab9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "ToggleModes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::GraphyManager_ModulePreset)>(&::Tayx::Graphy::GraphyManager::SetPreset)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x643ac60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "SetPreset", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePreset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x643af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "ToggleActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Enable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x643af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Disable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x643aff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Init)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x643a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckForHotkeyPresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::CheckForHotkeyPresses)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x643a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "CheckForHotkeyPresses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor1KeyPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key)>(&::Tayx::Graphy::GraphyManager::CheckFor1KeyPress)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x643d2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "CheckFor1KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor2KeyPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(
    &::Tayx::Graphy::GraphyManager::CheckFor2KeyPress)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x643d168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                                             { "CheckFor2KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor3KeyPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(
    &::Tayx::Graphy::GraphyManager::CheckFor3KeyPress)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x643ce44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
            { "CheckFor3KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.UpdateAllParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::UpdateAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6438184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "UpdateAllParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.RefreshAllParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::RefreshAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x643aa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "RefreshAllParameters", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Tayx::Graphy::GraphyManager_Mode& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphyMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyMode;
}
constexpr ::Tayx::Graphy::GraphyManager_Mode const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphyMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyMode;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_graphyMode(::Tayx::Graphy::GraphyManager_Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyMode = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_enableOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableOnStartup;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_enableOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableOnStartup;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_enableOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableOnStartup = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_keepAlive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keepAlive;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_keepAlive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keepAlive;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_keepAlive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_keepAlive = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_background;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_background;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_background(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_background = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_backgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_backgroundColor = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_enableHotkeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableHotkeys;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_enableHotkeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enableHotkeys;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_enableHotkeys(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enableHotkeys = value;
}
constexpr ::UnityEngine::InputSystem::Key& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeKeyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeKeyCode;
}
constexpr ::UnityEngine::InputSystem::Key const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeKeyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeKeyCode;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleModeKeyCode(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleModeKeyCode = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeCtrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeCtrl;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeCtrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeCtrl;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleModeCtrl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleModeCtrl = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeAlt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeAlt;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleModeAlt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleModeAlt;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleModeAlt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleModeAlt = value;
}
constexpr ::UnityEngine::InputSystem::Key& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveKeyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveKeyCode;
}
constexpr ::UnityEngine::InputSystem::Key const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveKeyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveKeyCode;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleActiveKeyCode(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleActiveKeyCode = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveCtrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveCtrl;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveCtrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveCtrl;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleActiveCtrl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleActiveCtrl = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveAlt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveAlt;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_toggleActiveAlt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggleActiveAlt;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_toggleActiveAlt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggleActiveAlt = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphModulePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphModulePosition;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphModulePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphModulePosition;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_graphModulePosition(::Tayx::Graphy::GraphyManager_ModulePosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphModulePosition = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsModuleState = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_goodFpsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_goodFpsColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_goodFpsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_goodFpsColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_goodFpsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_goodFpsColor = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_goodFpsThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_goodFpsThreshold;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_goodFpsThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_goodFpsThreshold;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_goodFpsThreshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_goodFpsThreshold = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_cautionFpsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cautionFpsColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_cautionFpsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cautionFpsColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_cautionFpsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cautionFpsColor = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_cautionFpsThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cautionFpsThreshold;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_cautionFpsThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cautionFpsThreshold;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_cautionFpsThreshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cautionFpsThreshold = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_criticalFpsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_criticalFpsColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_criticalFpsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_criticalFpsColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_criticalFpsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_criticalFpsColor = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsGraphResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraphResolution;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsGraphResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraphResolution;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsGraphResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsGraphResolution = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsTextUpdateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsTextUpdateRate;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsTextUpdateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsTextUpdateRate;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsTextUpdateRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsTextUpdateRate = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramModuleState = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_allocatedRamColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocatedRamColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_allocatedRamColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocatedRamColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_allocatedRamColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_allocatedRamColor = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_reservedRamColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reservedRamColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_reservedRamColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reservedRamColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_reservedRamColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_reservedRamColor = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_monoRamColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_monoRamColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_monoRamColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_monoRamColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_monoRamColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_monoRamColor = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramGraphResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramGraphResolution;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramGraphResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramGraphResolution;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramGraphResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramGraphResolution = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramTextUpdateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramTextUpdateRate;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramTextUpdateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramTextUpdateRate;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramTextUpdateRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramTextUpdateRate = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioModuleState = value;
}
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_findAudioListenerInCameraIfNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_findAudioListenerInCameraIfNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::GraphyManager_LookForAudioListener value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_findAudioListenerInCameraIfNull = value;
}
constexpr ::UnityW<::UnityEngine::AudioListener>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioListener;
}
constexpr ::UnityW<::UnityEngine::AudioListener> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioListener;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioListener(::UnityW<::UnityEngine::AudioListener> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioListener = value;
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioGraphColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphColor;
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioGraphColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphColor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioGraphColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioGraphColor = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioGraphResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphResolution;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioGraphResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphResolution;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioGraphResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioGraphResolution = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioTextUpdateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioTextUpdateRate;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioTextUpdateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioTextUpdateRate;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioTextUpdateRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioTextUpdateRate = value;
}
constexpr ::UnityEngine::FFTWindow& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_FFTWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FFTWindow;
}
constexpr ::UnityEngine::FFTWindow const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_FFTWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FFTWindow;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_FFTWindow(::UnityEngine::FFTWindow value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FFTWindow = value;
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_spectrumSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spectrumSize;
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_spectrumSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spectrumSize;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_spectrumSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_spectrumSize = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModulePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModulePosition;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePosition const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModulePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModulePosition;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_advancedModulePosition(::Tayx::Graphy::GraphyManager_ModulePosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_advancedModulePosition = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_advancedModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_advancedModuleState = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_initialized;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_initialized = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_active;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_active;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_active = value;
}
constexpr bool& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_focused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_focused;
}
constexpr bool const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_focused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_focused;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_focused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_focused = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsManager>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsManager;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsManager> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsManager;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsManager(::UnityW<::Tayx::Graphy::Fps::G_FpsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamManager>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramManager;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamManager> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramManager;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramManager(::UnityW<::Tayx::Graphy::Ram::G_RamManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioManager>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioManager;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioManager> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioManager;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioManager(::UnityW<::Tayx::Graphy::Audio::G_AudioManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedData;
}
constexpr ::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedData;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_advancedData(::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_advancedData = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioMonitor = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_modulePresetState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modulePresetState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModulePreset const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_modulePresetState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modulePresetState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_modulePresetState(::Tayx::Graphy::GraphyManager_ModulePreset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_modulePresetState = value;
}
inline void Tayx::Graphy::GraphyManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyManager_Mode Tayx::Graphy::GraphyManager::get_GraphyMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GraphyMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_Mode>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphyMode(::Tayx::Graphy::GraphyManager_Mode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GraphyMode", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_Mode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Tayx::Graphy::GraphyManager::get_EnableOnStartup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_EnableOnStartup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_KeepAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_Background() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_Background", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_Background(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_Background", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_BackgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_BackgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_BackgroundColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_BackgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager::get_GraphModulePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GraphModulePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModulePosition>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphModulePosition(::Tayx::Graphy::GraphyManager_ModulePosition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GraphModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager::get_FpsModuleState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsModuleState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModuleState>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_GoodFPSColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GoodFPSColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GoodFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CautionFPSColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CautionFPSColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CautionFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CriticalFPSColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CriticalFPSColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CriticalFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CriticalFPSColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_GoodFPSThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_GoodFPSThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_GoodFPSThreshold", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_CautionFPSThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CautionFPSThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_CautionFPSThreshold", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsGraphResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FpsTextUpdateRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FpsTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_CurrentFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_CurrentFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_AverageFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AverageFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MinFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MinFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MaxFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager::get_RamModuleState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamModuleState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModuleState>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AllocatedRamColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AllocatedRamColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AllocatedRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AllocatedRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_ReservedRamColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_ReservedRamColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_ReservedRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_ReservedRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_MonoRamColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MonoRamColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_MonoRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_MonoRamColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamGraphResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_RamTextUpdateRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_RamTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_AllocatedRam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AllocatedRam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_ReservedRam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_ReservedRam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MonoRam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MonoRam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager::get_AudioModuleState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioModuleState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModuleState>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioListener> Tayx::Graphy::GraphyManager::get_AudioListener() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioListener", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioListener>>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioListener(::UnityEngine::AudioListener* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioListener", {}, { ::i2c::type_of<::UnityEngine::AudioListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::GraphyManager_LookForAudioListener Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FindAudioListenerInCameraIfNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_LookForAudioListener>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::GraphyManager_LookForAudioListener value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FindAudioListenerInCameraIfNull", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_LookForAudioListener>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AudioGraphColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioGraphColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioGraphColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioGraphResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioGraphResolution", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AudioTextUpdateRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AudioTextUpdateRate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::FFTWindow Tayx::Graphy::GraphyManager::get_FftWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_FftWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FFTWindow>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FftWindow(::UnityEngine::FFTWindow value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_FftWindow", {}, { ::i2c::type_of<::UnityEngine::FFTWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_SpectrumSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_SpectrumSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_SpectrumSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_SpectrumSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> Tayx::Graphy::GraphyManager::get_Spectrum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_Spectrum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxDB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_MaxDB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyManager_ModuleState Tayx::Graphy::GraphyManager::get_AdvancedModuleState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AdvancedModuleState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModuleState>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AdvancedModuleState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::GraphyManager_ModulePosition Tayx::Graphy::GraphyManager::get_AdvancedModulePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "get_AdvancedModulePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyManager_ModulePosition>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModulePosition(::Tayx::Graphy::GraphyManager_ModulePosition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "set_AdvancedModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Tayx::Graphy::GraphyManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnApplicationFocus(bool isFocused) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void Tayx::Graphy::GraphyManager::SetModulePosition(::Tayx::Graphy::GraphyManager_ModuleType moduleType, ::Tayx::Graphy::GraphyManager_ModulePosition modulePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                       { "SetModulePosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleType>(), ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moduleType, modulePosition);
}
inline void Tayx::Graphy::GraphyManager::SetModuleMode(::Tayx::Graphy::GraphyManager_ModuleType moduleType, ::Tayx::Graphy::GraphyManager_ModuleState moduleState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                              { "SetModuleMode", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleType>(), ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moduleType, moduleState);
}
inline void Tayx::Graphy::GraphyManager::ToggleModes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "ToggleModes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::SetPreset(::Tayx::Graphy::GraphyManager_ModulePreset modulePreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "SetPreset", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePreset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modulePreset);
}
inline void Tayx::Graphy::GraphyManager::ToggleActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "ToggleActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::CheckForHotkeyPresses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "CheckForHotkeyPresses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor1KeyPress(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "CheckFor1KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor2KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
                                                           { "CheckFor2KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key1, key2);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor3KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2, ::UnityEngine::InputSystem::Key key3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Tayx::Graphy::GraphyManager*>(),
          { "CheckFor3KeyPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key1, key2, key3);
}
inline void Tayx::Graphy::GraphyManager::UpdateAllParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "UpdateAllParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::RefreshAllParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyManager*>(), { "RefreshAllParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyManager* Tayx::Graphy::GraphyManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyManager*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager::GraphyManager() {}
