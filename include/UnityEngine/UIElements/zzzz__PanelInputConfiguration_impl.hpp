#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection::PanelInputConfiguration_PanelInputRedirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection::PanelInputConfiguration_PanelInputRedirection() {}
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection::AutoSwitch{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection::Never{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection::Always{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PanelInputConfiguration_Settings (*)()>(&::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_Default)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7245b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_processWorldSpaceInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_processWorldSpaceInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_interactionLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_interactionLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_maxInteractionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_maxInteractionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_defaultEventCameraIsMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_defaultEventCameraIsMainCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_eventCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_eventCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_eventCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_panelInputRedirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_panelInputRedirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_panelInputRedirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration_Settings.get_autoCreatePanelComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration_Settings::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration_Settings::get_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_autoCreatePanelComponents", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PanelInputConfiguration_Settings::setStaticF_s_Default(::UnityEngine::UIElements::PanelInputConfiguration_Settings value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PanelInputConfiguration_Settings, "s_Default", ::UnityEngine::UIElements::PanelInputConfiguration_Settings>(
      std::forward<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(value));
}
inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings UnityEngine::UIElements::PanelInputConfiguration_Settings::getStaticF_s_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PanelInputConfiguration_Settings, "s_Default", ::UnityEngine::UIElements::PanelInputConfiguration_Settings>();
}
inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings UnityEngine::UIElements::PanelInputConfiguration_Settings::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(nullptr, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration_Settings::get_processWorldSpaceInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_processWorldSpaceInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::UIElements::PanelInputConfiguration_Settings::get_interactionLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_interactionLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::PanelInputConfiguration_Settings::get_maxInteractionDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_maxInteractionDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration_Settings::get_defaultEventCameraIsMainCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_defaultEventCameraIsMainCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::UIElements::PanelInputConfiguration_Settings::get_eventCameras() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_eventCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration_Settings::get_panelInputRedirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_panelInputRedirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration_Settings::get_autoCreatePanelComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(), { "get_autoCreatePanelComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ProcessWorldSpaceInput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InteractionLayers", ty:
// "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxInteractionDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_DefaultEventCameraIsMainCamera", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EventCameras", ty:
// "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PanelInputRedirection", ty:
// "::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AutoCreatePanelComponents", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings::PanelInputConfiguration_Settings(
    bool m_ProcessWorldSpaceInput, ::UnityEngine::LayerMask m_InteractionLayers, float_t m_MaxInteractionDistance, bool m_DefaultEventCameraIsMainCamera,
    ::ArrayW<::UnityW<::UnityEngine::Camera>> m_EventCameras, ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection m_PanelInputRedirection,
    bool m_AutoCreatePanelComponents) noexcept {
  this->m_ProcessWorldSpaceInput = m_ProcessWorldSpaceInput;
  this->m_InteractionLayers = m_InteractionLayers;
  this->m_MaxInteractionDistance = m_MaxInteractionDistance;
  this->m_DefaultEventCameraIsMainCamera = m_DefaultEventCameraIsMainCamera;
  this->m_EventCameras = m_EventCameras;
  this->m_PanelInputRedirection = m_PanelInputRedirection;
  this->m_AutoCreatePanelComponents = m_AutoCreatePanelComponents;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings::PanelInputConfiguration_Settings() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> (*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7244fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelInputConfiguration*)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7245028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PanelInputConfiguration_Settings (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_settings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7245078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_processWorldSpaceInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_processWorldSpaceInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_processWorldSpaceInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x724508c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_processWorldSpaceInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_interactionLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72454c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_interactionLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_interactionLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_interactionLayers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x72454c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_interactionLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_maxInteractionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72454e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_maxInteractionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_maxInteractionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(float_t)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x72454e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_maxInteractionDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_defaultEventCameraIsMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_defaultEventCameraIsMainCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_defaultEventCameraIsMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x7245508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_defaultEventCameraIsMainCamera", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_eventCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_eventCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_eventCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_eventCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::ArrayW<::UnityEngine::Camera*>)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_eventCameras)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x724552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_eventCameras", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_panelInputRedirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_panelInputRedirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_panelInputRedirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_panelInputRedirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_panelInputRedirection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x724554c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                             { "set_panelInputRedirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_autoCreatePanelComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(
    &::UnityEngine::UIElements::PanelInputConfiguration::get_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7245564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_autoCreatePanelComponents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_autoCreatePanelComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(
    &::UnityEngine::UIElements::PanelInputConfiguration::set_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x724556c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_autoCreatePanelComponents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::OnEnable)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x7245588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::OnDisable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x724587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelInputConfiguration*)>(&::UnityEngine::UIElements::PanelInputConfiguration::Apply)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x72450a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7245ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings& UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings const& UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_set_m_Settings(::UnityEngine::UIElements::PanelInputConfiguration_Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF__current_k__BackingField(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "<current>k__BackingField", ::UnityEngine::UIElements::PanelInputConfiguration*>(
      std::forward<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> UnityEngine::UIElements::PanelInputConfiguration::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "<current>k__BackingField", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF_s_ActiveInstances(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ActiveInstances", ::UnityEngine::UIElements::PanelInputConfiguration*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::PanelInputConfiguration::getStaticF_s_ActiveInstances() {
  return ::cordl_internals::getStaticField<int32_t, "s_ActiveInstances", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF_onApply(::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*, "onApply", ::UnityEngine::UIElements::PanelInputConfiguration*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* UnityEngine::UIElements::PanelInputConfiguration::getStaticF_onApply() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*, "onApply", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> UnityEngine::UIElements::PanelInputConfiguration::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_current(::UnityEngine::UIElements::PanelInputConfiguration* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings UnityEngine::UIElements::PanelInputConfiguration::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelInputConfiguration_Settings>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_processWorldSpaceInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_processWorldSpaceInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_processWorldSpaceInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_processWorldSpaceInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::UIElements::PanelInputConfiguration::get_interactionLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_interactionLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_interactionLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_interactionLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelInputConfiguration::get_maxInteractionDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_maxInteractionDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_maxInteractionDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_maxInteractionDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_defaultEventCameraIsMainCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_defaultEventCameraIsMainCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_defaultEventCameraIsMainCamera(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_defaultEventCameraIsMainCamera", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::UIElements::PanelInputConfiguration::get_eventCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_eventCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_eventCameras(::ArrayW<::UnityEngine::Camera*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_eventCameras", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration::get_panelInputRedirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_panelInputRedirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_panelInputRedirection(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                           { "set_panelInputRedirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_autoCreatePanelComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "get_autoCreatePanelComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_autoCreatePanelComponents(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "set_autoCreatePanelComponents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::Apply(::UnityEngine::UIElements::PanelInputConfiguration* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                                                                                         { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelInputConfiguration* UnityEngine::UIElements::PanelInputConfiguration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelInputConfiguration*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelInputConfiguration::PanelInputConfiguration() {}
