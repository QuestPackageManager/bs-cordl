#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::setStaticF_none(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::getStaticF_none() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::setStaticF_editorCamera(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "editorCamera", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::getStaticF_editorCamera() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "editorCamera", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::DebugDisplaySettingsVolume_Styles() {}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_none(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_none() {
  return ::cordl_internals::getStaticField<::StringW, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_camera(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "camera", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_camera() {
  return ::cordl_internals::getStaticField<::StringW, "camera", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_parameter(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "parameter", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_parameter() {
  return ::cordl_internals::getStaticField<::StringW, "parameter", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_component(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "component", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_component() {
  return ::cordl_internals::getStaticField<::StringW, "component", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_debugViewNotSupported(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "debugViewNotSupported", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_debugViewNotSupported() {
  return ::cordl_internals::getStaticField<::StringW, "debugViewNotSupported", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_parameterNotOverrided(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "parameterNotOverrided", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_parameterNotOverrided() {
  return ::cordl_internals::getStaticField<::StringW, "parameterNotOverrided", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_volumeInfo(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "volumeInfo", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_volumeInfo() {
  return ::cordl_internals::getStaticField<::StringW, "volumeInfo", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_gameObject(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "gameObject", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_gameObject() {
  return ::cordl_internals::getStaticField<::StringW, "gameObject", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_resultValue(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "resultValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_resultValue() {
  return ::cordl_internals::getStaticField<::StringW, "resultValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_resultValueTooltip(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "resultValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_resultValueTooltip() {
  return ::cordl_internals::getStaticField<::StringW, "resultValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_globalDefaultValue(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "globalDefaultValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_globalDefaultValue() {
  return ::cordl_internals::getStaticField<::StringW, "globalDefaultValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_globalDefaultValueTooltip(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "globalDefaultValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_globalDefaultValueTooltip() {
  return ::cordl_internals::getStaticField<::StringW, "globalDefaultValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_qualityLevelValue(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "qualityLevelValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_qualityLevelValue() {
  return ::cordl_internals::getStaticField<::StringW, "qualityLevelValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_qualityLevelValueTooltip(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "qualityLevelValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_qualityLevelValueTooltip() {
  return ::cordl_internals::getStaticField<::StringW, "qualityLevelValueTooltip", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_global(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "global", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_global() {
  return ::cordl_internals::getStaticField<::StringW, "global", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_local(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "local", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_local() {
  return ::cordl_internals::getStaticField<::StringW, "local", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_volumeProfile(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "volumeProfile", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_volumeProfile() {
  return ::cordl_internals::getStaticField<::StringW, "volumeProfile", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::DebugDisplaySettingsVolume_Strings() {}
// Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: Some("{}") }, CppParam { name: "volumeProfile", ty:
// "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: Some("{}") }, CppParam { name: "volumeComponent", ty: "::UnityW<::UnityEngine::Rendering::VolumeComponent>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain(
    ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip nameAndTooltip, ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile,
    ::UnityW<::UnityEngine::Rendering::VolumeComponent> volumeComponent, ::UnityW<::UnityEngine::Rendering::Volume> volume) noexcept {
  this->nameAndTooltip = nameAndTooltip;
  this->volumeProfile = volumeProfile;
  this->volumeComponent = volumeComponent;
  this->volume = volume;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675a434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c._GenerateTableColumns_b__9_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_GenerateTableColumns_b__9_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x675a438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<GenerateTableColumns>b__9_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c.__cctor_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::__cctor_b__11_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x675a44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<.cctor>b__11_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::setStaticF___9(::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*, "<>9", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(
      std::forward<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(value));
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*, "<>9", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>();
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::setStaticF___9__9_2(::System::Func_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__9_2", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(
      std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::getStaticF___9__9_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__9_2", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>();
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_GenerateTableColumns_b__9_2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<GenerateTableColumns>b__9_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::__cctor_b__11_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<.cctor>b__11_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::WidgetFactory_DebugDisplaySettingsVolume___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6757d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0._CreateComponentSelector_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x675a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { "<CreateComponentSelector>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0._CreateComponentSelector_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__1)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x675a528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(),
                                                                                           { "<CreateComponentSelector>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0._CreateComponentSelector_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x675a604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { "<CreateComponentSelector>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0._CreateComponentSelector_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x675a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(),
                                                                                           { "<CreateComponentSelector>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::__cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { "<CreateComponentSelector>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(),
                                                                                         { "<CreateComponentSelector>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(), { "<CreateComponentSelector>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::_CreateComponentSelector_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>(),
                                                                                         { "<CreateComponentSelector>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67582ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0._CreateCameraSelector_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x675a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { "<CreateCameraSelector>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0._CreateCameraSelector_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__1)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x675a78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(),
                                                                                           { "<CreateCameraSelector>b__1", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0._CreateCameraSelector_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::*)()>(
        &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__2)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x675a954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { "<CreateCameraSelector>b__2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::__cordl_internal_set_panel(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { "<CreateCameraSelector>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__1(::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(),
                                                                                         { "<CreateCameraSelector>b__1", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::_CreateCameraSelector_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(), { "<CreateCameraSelector>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0._CreateVolumeTable_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_CreateVolumeTable_b__1)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x675aa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { "<CreateVolumeTable>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0._CreateVolumeTable_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_CreateVolumeTable_b__0)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x675aad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { "<CreateVolumeTable>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr float_t& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timer;
}
constexpr float_t const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timer;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_set_timer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timer = value;
}
constexpr float_t& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_refreshRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr float_t const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_refreshRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_set_refreshRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refreshRate = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_Table*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::UnityEngine::Rendering::DebugUI_Table* const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_set_table(::UnityEngine::Rendering::DebugUI_Table* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>>& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_volumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>> const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_get_volumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumes;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::__cordl_internal_set_volumes(::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumes = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_CreateVolumeTable_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { "<CreateVolumeTable>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::_CreateVolumeTable_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>(), { "<CreateVolumeTable>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass7_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::__cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1._GenerateTableColumns_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__0)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x675ad74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1._GenerateTableColumns_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x675af00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1._GenerateTableColumns_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x675af08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__3", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_set_chain(
    ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chain = value;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0*&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::__cordl_internal_set_CS$__8__locals1(
    ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::_GenerateTableColumns_b__3() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>(), { "<GenerateTableColumns>b__3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass9_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.CreateComponentSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_EnumField* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*,
                                                                                                        ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateComponentSelector)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x67575e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                             { "CreateComponentSelector",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                 ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.CreateCameraSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::DebugUI_ObjectPopupField* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*,
                                                            ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateCameraSelector)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x675807c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                         { "CreateCameraSelector",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                             ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.CreateVolumeParameterWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::StringW, bool, ::UnityEngine::Rendering::VolumeParameter*, ::System::Func_1<bool>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeParameterWidget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x675832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                            { "CreateVolumeParameterWidget",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>(), ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GetSelectedVolumeComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (*)(::UnityEngine::Rendering::VolumeProfile*, ::System::Type*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GetSelectedVolumeComponent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6758414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                             { "GetSelectedVolumeComponent", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GetResolutionChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GetResolutionChain)> {
  constexpr static std::size_t size = 0x9fc;
  constexpr static std::size_t addrs = 0x675859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                           { "GetResolutionChain", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.CreateVolumeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Table* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeTable)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6758f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                           { "CreateVolumeTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.SetTableColumnVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*, ::UnityEngine::Rendering::DebugUI_Table*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::SetTableColumnVisibility)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6759e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                         { "SetTableColumnVisibility", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GenerateTableColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::DebugUI_Table*, ::UnityEngine::Rendering::DebugDisplaySettingsVolume*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GenerateTableColumns)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x6759564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                         { "GenerateTableColumns",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(), ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GenerateTableRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::DebugUI_Table*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*)>(
        &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GenerateTableRows)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x67592e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                         { "GenerateTableRows",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::setStaticF_s_EmptyDebugUIValue(::UnityEngine::Rendering::DebugUI_Value* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DebugUI_Value*, "s_EmptyDebugUIValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(
      std::forward<::UnityEngine::Rendering::DebugUI_Value*>(value));
}
inline ::UnityEngine::Rendering::DebugUI_Value* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::getStaticF_s_EmptyDebugUIValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DebugUI_Value*, "s_EmptyDebugUIValue", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>();
}
inline ::UnityEngine::Rendering::DebugUI_EnumField*
UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateComponentSelector(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
                                                                                          ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* refresh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                         { "CreateComponentSelector",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                             ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_EnumField*>(nullptr, ___internal_method, panel, refresh);
}
inline ::UnityEngine::Rendering::DebugUI_ObjectPopupField* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateCameraSelector(
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
    ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>* refresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                       { "CreateCameraSelector",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                           ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_ObjectPopupField*>(nullptr, ___internal_method, panel, refresh);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeParameterWidget(::StringW name, bool isResultParameter,
                                                                                                                                               ::UnityEngine::Rendering::VolumeParameter* param,
                                                                                                                                               ::System::Func_1<bool>* isHiddenCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                          { "CreateVolumeParameterWidget",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>(), ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, name, isResultParameter, param, isHiddenCallback);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent>
UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GetSelectedVolumeComponent(::UnityEngine::Rendering::VolumeProfile* profile, ::System::Type* selectedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                           { "GetSelectedVolumeComponent", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>>(nullptr, ___internal_method, profile, selectedType);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*
UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GetResolutionChain(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                         { "GetResolutionChain", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*>(
      nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::DebugUI_Table* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeTable(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                         { "CreateVolumeTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Table*>(nullptr, ___internal_method, data);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::SetTableColumnVisibility(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data,
                                                                                                       ::UnityEngine::Rendering::DebugUI_Table* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                       { "SetTableColumnVisibility", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, table);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GenerateTableColumns(
    ::UnityEngine::Rendering::DebugUI_Table* table, ::UnityEngine::Rendering::DebugDisplaySettingsVolume* data,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                       { "GenerateTableColumns",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(), ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, table, data, resolutionChain);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GenerateTableRows(
    ::UnityEngine::Rendering::DebugUI_Table* table, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>* resolutionChain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                       { "GenerateTableRows",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, table, resolutionChain);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::DebugDisplaySettingsVolume_WidgetFactory() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6757134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Refresh)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x675af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityEngine::Object*)>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675b1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                            { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.__ctor_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675b1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                             { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugUI_Table*& UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__cordl_internal_get_m_VolumeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTable;
}
constexpr ::UnityEngine::Rendering::DebugUI_Table* const& UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__cordl_internal_get_m_VolumeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTable;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__cordl_internal_set_m_VolumeTable(::UnityEngine::Rendering::DebugUI_Table* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeTable = value;
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Refresh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__ctor_b__0_0(::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>* _, ::UnityEngine::Object* __) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                          { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::__ctor_b__0_1(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                           { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*
UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::DebugDisplaySettingsVolume_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_volumeDebugSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IVolumeDebugSettings* (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeDebugSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6757020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeDebugSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Rendering::IVolumeDebugSettings*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6757028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::IVolumeDebugSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67570d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_AreAnySettingsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.CreatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::CreatePanel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67570d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "CreatePanel", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::IVolumeDebugSettings*& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get__volumeDebugSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeDebugSettings_k__BackingField;
}
constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get__volumeDebugSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeDebugSettings_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set__volumeDebugSettings_k__BackingField(::UnityEngine::Rendering::IVolumeDebugSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeDebugSettings_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_volumeComponentEnumIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeComponentEnumIndex;
}
constexpr int32_t const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_volumeComponentEnumIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeComponentEnumIndex;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_volumeComponentEnumIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumeComponentEnumIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*&
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_debugState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugState;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const&
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_debugState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugState;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_debugState(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugState = value;
}
inline ::UnityEngine::Rendering::IVolumeDebugSettings* UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeDebugSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeDebugSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IVolumeDebugSettings*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::IVolumeDebugSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeDebugSettings);
}
inline bool UnityEngine::Rendering::DebugDisplaySettingsVolume::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_AreAnySettingsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::DebugDisplaySettingsVolume::CreatePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "CreatePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* UnityEngine::Rendering::DebugDisplaySettingsVolume::New_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(volumeDebugSettings));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr UnityEngine::Rendering::DebugDisplaySettingsVolume::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::DebugDisplaySettingsVolume::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::DebugDisplaySettingsVolume::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::DebugDisplaySettingsVolume::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume::DebugDisplaySettingsVolume() {}
