#pragma once
// IWYU pragma private; include "Tayx/Graphy/GraphyManager.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_impl.hpp"
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
constexpr ::Tayx::Graphy::__GraphyManager__Mode::__GraphyManager__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__Mode::__GraphyManager__Mode() {}
constexpr ::Tayx::Graphy::__GraphyManager__Mode Tayx::Graphy::__GraphyManager__Mode::FULL{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__Mode Tayx::Graphy::__GraphyManager__Mode::LIGHT{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType::__GraphyManager__ModuleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType::__GraphyManager__ModuleType() {}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType Tayx::Graphy::__GraphyManager__ModuleType::FPS{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType Tayx::Graphy::__GraphyManager__ModuleType::RAM{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType Tayx::Graphy::__GraphyManager__ModuleType::AUDIO{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType Tayx::Graphy::__GraphyManager__ModuleType::ADVANCED{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState::__GraphyManager__ModuleState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState::__GraphyManager__ModuleState() {}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::__GraphyManager__ModuleState::FULL{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::__GraphyManager__ModuleState::TEXT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::__GraphyManager__ModuleState::BASIC{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::__GraphyManager__ModuleState::BACKGROUND{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::__GraphyManager__ModuleState::OFF{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition::__GraphyManager__ModulePosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition::__GraphyManager__ModulePosition() {}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::__GraphyManager__ModulePosition::TOP_RIGHT{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::__GraphyManager__ModulePosition::TOP_LEFT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::__GraphyManager__ModulePosition::BOTTOM_RIGHT{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::__GraphyManager__ModulePosition::BOTTOM_LEFT{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::__GraphyManager__ModulePosition::FREE{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener::__GraphyManager__LookForAudioListener(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener::__GraphyManager__LookForAudioListener() {}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener Tayx::Graphy::__GraphyManager__LookForAudioListener::ALWAYS{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener Tayx::Graphy::__GraphyManager__LookForAudioListener::ON_SCENE_LOAD{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener Tayx::Graphy::__GraphyManager__LookForAudioListener::NEVER{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset::__GraphyManager__ModulePreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset::__GraphyManager__ModulePreset() {}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_BASIC{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT_RAM_TEXT{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_TEXT{ static_cast<int32_t>(0x4) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL{ static_cast<int32_t>(0x5) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT_RAM_TEXT_AUDIO_TEXT{ static_cast<int32_t>(0x6) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_TEXT_AUDIO_TEXT{ static_cast<int32_t>(0x7) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_TEXT{ static_cast<int32_t>(0x8) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL{ static_cast<int32_t>(0x9) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL{ static_cast<int32_t>(0xa) };
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset Tayx::Graphy::__GraphyManager__ModulePreset::FPS_BASIC_ADVANCED_FULL{ static_cast<int32_t>(0xb) };
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4468e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphyMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__Mode (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GraphyMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphyMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__Mode)>(
    &::Tayx::Graphy::GraphyManager::set_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GraphyMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_EnableOnStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_EnableOnStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_EnableOnStartup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_KeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_KeepAlive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Background
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_Background",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_Background
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::set_Background)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4468fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_Background",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_BackgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4468fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_BackgroundColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_BackgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4468fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_BackgroundColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphModulePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_GraphModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4468ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GraphModulePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphModulePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePosition)>(
    &::Tayx::Graphy::GraphyManager::set_GraphModulePosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4468ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GraphModulePosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_FpsModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446990c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsModuleState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(
    &::Tayx::Graphy::GraphyManager::set_FpsModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4469914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsModuleState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4469ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GoodFPSColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4469af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GoodFPSColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4469d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CautionFPSColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4469d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CautionFPSColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CriticalFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CriticalFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4469d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CriticalFPSColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CriticalFPSColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(
    &::Tayx::Graphy::GraphyManager::set_CriticalFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4469d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CriticalFPSColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GoodFPSThreshold",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GoodFPSThreshold", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CautionFPSThreshold",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CautionFPSThreshold", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsGraphResolution",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsGraphResolution", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsTextUpdateRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsTextUpdateRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CurrentFPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CurrentFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CurrentFPS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AverageFPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AverageFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AverageFPS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MinFPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MinFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MinFPS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxFPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4469e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MaxFPS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_RamModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4469e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamModuleState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(
    &::Tayx::Graphy::GraphyManager::set_RamModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4469e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamModuleState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x446a00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AllocatedRamColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AllocatedRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(
    &::Tayx::Graphy::GraphyManager::set_AllocatedRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AllocatedRamColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x446a1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_ReservedRamColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_ReservedRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(
    &::Tayx::Graphy::GraphyManager::set_ReservedRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_ReservedRamColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x446a218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MonoRamColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_MonoRamColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_MonoRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_MonoRamColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamGraphResolution",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamGraphResolution", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamTextUpdateRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamTextUpdateRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446a298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AllocatedRam",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446a2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_ReservedRam",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446a2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MonoRam",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_AudioModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioModuleState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(
    &::Tayx::Graphy::GraphyManager::set_AudioModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioModuleState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioListener> (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_AudioListener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioListener",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::AudioListener*)>(
    &::Tayx::Graphy::GraphyManager::set_AudioListener)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioListener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FindAudioListenerInCameraIfNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__LookForAudioListener (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FindAudioListenerInCameraIfNull",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FindAudioListenerInCameraIfNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__LookForAudioListener)>(
    &::Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FindAudioListenerInCameraIfNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__LookForAudioListener>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x446a67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioGraphColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioGraphColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                                                                               "get_AudioGraphResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioGraphResolution", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioTextUpdateRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioTextUpdateRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioTextUpdateRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FftWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FFTWindow (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FftWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FftWindow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FftWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::FFTWindow)>(&::Tayx::Graphy::GraphyManager::set_FftWindow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FftWindow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_SpectrumSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_SpectrumSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_SpectrumSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_SpectrumSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_SpectrumSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_SpectrumSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Spectrum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_Spectrum)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446a74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_Spectrum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxDB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxDB)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446a768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MaxDB",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AdvancedModuleState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModuleState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(
    &::Tayx::Graphy::GraphyManager::set_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x446a78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AdvancedModuleState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModulePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(
    &::Tayx::Graphy::GraphyManager::get_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x446a828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                                                                               "get_AdvancedModulePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModulePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePosition)>(
    &::Tayx::Graphy::GraphyManager::set_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x446a830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AdvancedModulePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x446affc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x446b590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x446b734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x446b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModulePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(
    ::Tayx::Graphy::__GraphyManager__ModuleType, ::Tayx::Graphy::__GraphyManager__ModulePosition)>(&::Tayx::Graphy::GraphyManager::SetModulePosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x446b910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetModulePosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModuleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleType, ::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::SetModuleMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x446b990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetModuleMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleModes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x446ba24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "ToggleModes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePreset)>(
    &::Tayx::Graphy::GraphyManager::SetPreset)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x446bb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetPreset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePreset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x446bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "ToggleActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Enable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Enable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x446bdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Enable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Disable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Disable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x446be38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Disable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Init)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x446b000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckForHotkeyPresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::CheckForHotkeyPresses)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x446b74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckForHotkeyPresses",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor1KeyPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key)>(
    &::Tayx::Graphy::GraphyManager::CheckFor1KeyPress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x446e054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor1KeyPress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor2KeyPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(
    &::Tayx::Graphy::GraphyManager::CheckFor2KeyPress)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x446deec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor2KeyPress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor3KeyPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(
    ::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(&::Tayx::Graphy::GraphyManager::CheckFor3KeyPress)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x446dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor3KeyPress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.UpdateAllParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::UpdateAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4468f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "UpdateAllParameters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.RefreshAllParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::RefreshAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x446b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "RefreshAllParameters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Tayx::Graphy::__GraphyManager__Mode& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphyMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyMode;
}
constexpr ::Tayx::Graphy::__GraphyManager__Mode const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphyMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyMode;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_graphyMode(::Tayx::Graphy::__GraphyManager__Mode value) {
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
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphModulePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphModulePosition;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_graphModulePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphModulePosition;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_graphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphModulePosition = value;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsModuleState;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_fpsModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_fpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
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
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramModuleState;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_ramModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_ramModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
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
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioModuleState;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_audioModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_audioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioModuleState = value;
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_findAudioListenerInCameraIfNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_findAudioListenerInCameraIfNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModulePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModulePosition;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModulePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModulePosition;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_advancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_advancedModulePosition = value;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModuleState;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_advancedModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_advancedModuleState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_advancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fpsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ramManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_advancedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fpsMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ramMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_modulePresetState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modulePresetState;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset const& Tayx::Graphy::GraphyManager::__cordl_internal_get_m_modulePresetState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modulePresetState;
}
constexpr void Tayx::Graphy::GraphyManager::__cordl_internal_set_m_modulePresetState(::Tayx::Graphy::__GraphyManager__ModulePreset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_modulePresetState = value;
}
inline ::Tayx::Graphy::GraphyManager* Tayx::Graphy::GraphyManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tayx::Graphy::GraphyManager*>());
}
inline void Tayx::Graphy::GraphyManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__Mode Tayx::Graphy::GraphyManager::get_GraphyMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GraphyMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__Mode, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphyMode(::Tayx::Graphy::__GraphyManager__Mode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GraphyMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Tayx::Graphy::GraphyManager::get_EnableOnStartup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_EnableOnStartup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_KeepAlive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_Background() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_Background",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_Background(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_Background",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_BackgroundColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_BackgroundColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_BackgroundColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_BackgroundColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::GraphyManager::get_GraphModulePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GraphModulePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModulePosition, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GraphModulePosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_FpsModuleState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsModuleState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsModuleState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_GoodFPSColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GoodFPSColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GoodFPSColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CautionFPSColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CautionFPSColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CautionFPSColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CriticalFPSColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CriticalFPSColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CriticalFPSColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CriticalFPSColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_GoodFPSThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_GoodFPSThreshold",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_GoodFPSThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_CautionFPSThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CautionFPSThreshold",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSThreshold(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_CautionFPSThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsGraphResolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsGraphResolution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FpsTextUpdateRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FpsTextUpdateRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_CurrentFPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_CurrentFPS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_AverageFPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AverageFPS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MinFPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MinFPS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxFPS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MaxFPS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_RamModuleState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamModuleState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamModuleState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AllocatedRamColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AllocatedRamColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AllocatedRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AllocatedRamColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_ReservedRamColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_ReservedRamColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_ReservedRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_ReservedRamColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_MonoRamColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MonoRamColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_MonoRamColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_MonoRamColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamGraphResolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamGraphResolution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_RamTextUpdateRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_RamTextUpdateRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_AllocatedRam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AllocatedRam",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_ReservedRam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_ReservedRam",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MonoRam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MonoRam",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_AudioModuleState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioModuleState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioModuleState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioListener> Tayx::Graphy::GraphyManager::get_AudioListener() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioListener",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioListener>, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioListener(::UnityEngine::AudioListener* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioListener", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__LookForAudioListener Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FindAudioListenerInCameraIfNull",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__LookForAudioListener, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FindAudioListenerInCameraIfNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__LookForAudioListener>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AudioGraphColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioGraphColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioGraphColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioGraphResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioGraphResolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphResolution(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioGraphResolution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AudioTextUpdateRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AudioTextUpdateRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::FFTWindow Tayx::Graphy::GraphyManager::get_FftWindow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_FftWindow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FFTWindow, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FftWindow(::UnityEngine::FFTWindow value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_FftWindow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_SpectrumSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_SpectrumSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_SpectrumSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_SpectrumSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<float_t, ::Array<float_t>*> Tayx::Graphy::GraphyManager::get_Spectrum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_Spectrum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxDB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_MaxDB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_AdvancedModuleState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "get_AdvancedModuleState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AdvancedModuleState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::GraphyManager::get_AdvancedModulePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                                                                             "get_AdvancedModulePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModulePosition, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "set_AdvancedModulePosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Tayx::Graphy::GraphyManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnApplicationFocus(bool isFocused) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isFocused);
}
inline void Tayx::Graphy::GraphyManager::SetModulePosition(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModulePosition modulePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetModulePosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moduleType, modulePosition);
}
inline void Tayx::Graphy::GraphyManager::SetModuleMode(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModuleState moduleState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetModuleMode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moduleType, moduleState);
}
inline void Tayx::Graphy::GraphyManager::ToggleModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "ToggleModes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::SetPreset(::Tayx::Graphy::__GraphyManager__ModulePreset modulePreset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "SetPreset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePreset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modulePreset);
}
inline void Tayx::Graphy::GraphyManager::ToggleActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "ToggleActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Enable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Enable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Disable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Disable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::CheckForHotkeyPresses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckForHotkeyPresses",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor1KeyPress(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor1KeyPress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor2KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor2KeyPress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key1, key2);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor3KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2, ::UnityEngine::InputSystem::Key key3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "CheckFor3KeyPress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key1, key2, key3);
}
inline void Tayx::Graphy::GraphyManager::UpdateAllParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "UpdateAllParameters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::RefreshAllParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(), "RefreshAllParameters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyManager::GraphyManager() {}
