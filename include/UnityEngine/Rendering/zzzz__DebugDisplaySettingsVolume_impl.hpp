#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventArgs_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObservableList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::setStaticF_none(::UnityEngine::GUIContent* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>(std::forward<::UnityEngine::GUIContent*>(value));
}
inline ::UnityEngine::GUIContent* UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::getStaticF_none() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIContent*, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Styles::DebugDisplaySettingsVolume_Styles() {}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_cameraNeedsRendering(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "cameraNeedsRendering", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_cameraNeedsRendering() {
  return ::cordl_internals::getStaticField<::StringW, "cameraNeedsRendering", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_none(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_none() {
  return ::cordl_internals::getStaticField<::StringW, "none", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
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
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_priority(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "priority", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_priority() {
  return ::cordl_internals::getStaticField<::StringW, "priority", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
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
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::setStaticF_parameterNotCalculated(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "parameterNotCalculated", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::getStaticF_parameterNotCalculated() {
  return ::cordl_internals::getStaticField<::StringW, "parameterNotCalculated", ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_Strings::DebugDisplaySettingsVolume_Strings() {}
// Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "volumeProfile", ty: "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volumeComponent", ty:
// "::UnityW<::UnityEngine::Rendering::VolumeComponent>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers:
// "", def_value: Some("{}"), comment: None }]
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
  constexpr static std::size_t addrs = 0x6b77250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c._CreateVolumeParameterWidget_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_CreateVolumeParameterWidget_b__2_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b77254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<CreateVolumeParameterWidget>b__2_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c._CreateVolumeTable_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_CreateVolumeTable_b__7_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b772b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<CreateVolumeTable>b__7_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c._GenerateTableColumns_b__8_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_GenerateTableColumns_b__8_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b772b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<GenerateTableColumns>b__8_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c.__cctor_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::__cctor_b__10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b772cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<.cctor>b__10_0", {}, {} })));
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
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::setStaticF___9__2_0(::System::Func_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__2_0", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(
      std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__2_0", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>();
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::setStaticF___9__7_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__7_0", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__7_0", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>();
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::setStaticF___9__8_3(::System::Func_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__8_3", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(
      std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::getStaticF___9__8_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__8_3", ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>();
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_CreateVolumeParameterWidget_b__2_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<CreateVolumeParameterWidget>b__2_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_CreateVolumeTable_b__7_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<CreateVolumeTable>b__7_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::_GenerateTableColumns_b__8_3() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<GenerateTableColumns>b__8_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c::__cctor_b__10_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c*>(), { "<.cctor>b__10_0", {}, {} })));
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
  constexpr static std::size_t addrs = 0x6b751b8;

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
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b772e0;

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
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b77338;

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
  constexpr static std::size_t addrs = 0x6b7739c;

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
  constexpr static std::size_t addrs = 0x6b773f4;

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
  constexpr static std::size_t addrs = 0x6b753c0;

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
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b77458;

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
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b774b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>(),
                                                                                           { "<CreateCameraSelector>b__1", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
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
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass1_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b77038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::__cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b7703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1._GenerateTableColumns_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b77544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1._GenerateTableColumns_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b776a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1._GenerateTableColumns_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b776b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1._GenerateTableColumns_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::*)()>(
    &::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b776e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__4", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_set_chain(
    ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chain = value;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0*&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* const&
UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::__cordl_internal_set_CS$__8__locals1(
    ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::_GenerateTableColumns_b__4() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>(), { "<GenerateTableColumns>b__4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1* UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1::WidgetFactory_DebugDisplaySettingsVolume___c__DisplayClass8_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.CreateComponentSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_EnumField* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*,
                                                                                                        ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateComponentSelector)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x6b74ab0;

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
    ::UnityEngine::Rendering::DebugUI_CameraSelector* (*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*,
                                                          ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateCameraSelector)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6b75228;

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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::StringW, bool, ::UnityEngine::Rendering::VolumeParameter*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeParameterWidget)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6b754d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                            { "CreateVolumeParameterWidget", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GetSelectedVolumeComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (*)(::UnityEngine::Rendering::VolumeProfile*, ::System::Type*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GetSelectedVolumeComponent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6b75610;

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
  constexpr static std::size_t size = 0x9e0;
  constexpr static std::size_t addrs = 0x6b75798;

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
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6b76178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                                                                           { "CreateVolumeTable", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory.GenerateTableColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::DebugUI_Table*, ::UnityEngine::Rendering::DebugDisplaySettingsVolume*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Rendering::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::GenerateTableColumns)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x6b765d8;

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
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6b7634c;

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
inline ::UnityEngine::Rendering::DebugUI_CameraSelector* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateCameraSelector(
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* panel,
    ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>* refresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                       { "CreateCameraSelector",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                           ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityW<::UnityEngine::Object>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_CameraSelector*>(nullptr, ___internal_method, panel, refresh);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory::CreateVolumeParameterWidget(::StringW name, bool isResultParameter,
                                                                                                                                               ::UnityEngine::Rendering::VolumeParameter* param) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_WidgetFactory*>(),
                                       { "CreateVolumeParameterWidget", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, name, isResultParameter, param);
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
//  Writing Method size for method: ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b77818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*, ::UnityEngine::Object*)>(
    &::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b77cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(),
                            { "<.ctor>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0.__ctor_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b77ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(),
                                                             { "<.ctor>b__1", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0.__ctor_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b77cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(), { "<.ctor>b__2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*& UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* const&
UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__0(::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>* _,
                                                                                                               ::UnityEngine::Object* __) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(),
                          { "<.ctor>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline void UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__1(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(),
                                                           { "<.ctor>b__1", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline bool UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::__ctor_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>(), { "<.ctor>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0* UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0::SettingsPanel_DebugDisplaySettingsVolume___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b776e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b776f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x6b7431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.OnVolumeInfluenceChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityW<::UnityEngine::Rendering::Volume>>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::OnVolumeInfluenceChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b77820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                             { "OnVolumeInfluenceChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityW<::UnityEngine::Rendering::Volume>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Refresh)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x6b778a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), { "Refresh", {}, {} })));
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
inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::get_Flags() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void
UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::OnVolumeInfluenceChanged(::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* sender,
                                                                                           ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityW<::UnityEngine::Rendering::Volume>>* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(),
                                                           { "OnVolumeInfluenceChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityW<::UnityEngine::Rendering::Volume>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::Refresh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*
UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsVolume* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume_SettingsPanel::DebugDisplaySettingsVolume_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b734f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0._set_selectedComponentType_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::*)(::System::ValueTuple_2<::StringW, ::System::Type*>)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::_set_selectedComponentType_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b77d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*>(),
                                                             { "<set_selectedComponentType>b__0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Type*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Type* const& UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::__cordl_internal_set_value(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::_set_selectedComponentType_b__0(::System::ValueTuple_2<::StringW, ::System::Type*> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*>(),
                                                           { "<set_selectedComponentType>b__0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, ::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0* UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume___c__DisplayClass10_0::DebugDisplaySettingsVolume___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_volumeDebugSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IVolumeDebugSettings* (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeDebugSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b731a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeDebugSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_selectedComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b731b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.set_selectedComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedComponent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b731b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedComponent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.DestroyVolumeInterpolatedResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::DestroyVolumeInterpolatedResults)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b731fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "DestroyVolumeInterpolatedResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_selectedComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedComponentType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b73290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedComponentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.set_selectedComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::System::Type*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedComponentType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b733ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedComponentType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_volumeComponentsPathAndType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeComponentsPathAndType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b73308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeComponentsPathAndType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_selectedCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b734f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.set_selectedCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedCamera)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b734fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.OnSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::OnSelectionChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b731e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "OnSelectionChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.ClearInterpolationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::ClearInterpolationData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b73594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "ClearInterpolationData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.AreVolumesChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*,
                                                                ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::AreVolumesChanged)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b7360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                { "AreVolumesChanged",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.OnBeginVolumeStackUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::OnBeginVolumeStackUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b73764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                { "OnBeginVolumeStackUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.OnEndVolumeStackUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::OnEndVolumeStackUpdate)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6b73844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                { "OnEndVolumeStackUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.OnVolumeStackInterpolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(
    ::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Rendering::Volume*, float_t)>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::OnVolumeStackInterpolated)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b73b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
            { "OnVolumeStackInterpolated", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.GetVolumeWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Rendering::Volume*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::GetVolumeWeight)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6b73c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                           { "GetVolumeWeight", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.GetVolumesList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* (
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::GetVolumesList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b73dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "GetVolumesList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.UnityEngine_Rendering_IDebugDisplaySettingsData_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::UnityEngine_Rendering_IDebugDisplaySettingsData_Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b73dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "UnityEngine.Rendering.IDebugDisplaySettingsData.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)(::UnityEngine::Rendering::IVolumeDebugSettings*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b73df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::IVolumeDebugSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b73e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_resultVolumeComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_resultVolumeComponent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b73aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_resultVolumeComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.ExtractResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rendering::VolumeParameter*)>(&::UnityEngine::Rendering::DebugDisplaySettingsVolume::ExtractResult)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6b73eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                           { "ExtractResult", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsVolume.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugDisplaySettingsVolume::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsVolume::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b742b8;

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
  constexpr static std::size_t addrs = 0x6b742c0;

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
constexpr int32_t& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_SelectedComponentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedComponentIndex;
}
constexpr int32_t const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_SelectedComponentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedComponentIndex;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_SelectedComponentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedComponentIndex = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_SelectedCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_SelectedCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCamera;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_SelectedCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedCamera = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent>& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_VolumeInterpolatedResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeInterpolatedResults;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent> const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_VolumeInterpolatedResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeInterpolatedResults;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_VolumeInterpolatedResults(::UnityW<::UnityEngine::Rendering::VolumeComponent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeInterpolatedResults = value;
}
constexpr bool& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_StoreStackInterpolatedValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreStackInterpolatedValues;
}
constexpr bool const& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_StoreStackInterpolatedValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreStackInterpolatedValues;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_StoreStackInterpolatedValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StoreStackInterpolatedValues = value;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*& UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_InfluenceVolumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfluenceVolumes;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* const&
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_InfluenceVolumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfluenceVolumes;
}
constexpr void
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_InfluenceVolumes(::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfluenceVolumes = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>*&
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_VolumesWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumesWeights;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* const&
UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_get_m_VolumesWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumesWeights;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsVolume::__cordl_internal_set_m_VolumesWeights(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumesWeights = value;
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
inline ::UnityEngine::Rendering::IVolumeDebugSettings* UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeDebugSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeDebugSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IVolumeDebugSettings*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedComponent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedComponent(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedComponent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::DestroyVolumeInterpolatedResults() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "DestroyVolumeInterpolatedResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedComponentType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedComponentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedComponentType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedComponentType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* UnityEngine::Rendering::DebugDisplaySettingsVolume::get_volumeComponentsPathAndType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_volumeComponentsPathAndType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::DebugDisplaySettingsVolume::get_selectedCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_selectedCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::set_selectedCamera(::UnityEngine::Camera* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "set_selectedCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::OnSelectionChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "OnSelectionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::ClearInterpolationData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "ClearInterpolationData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugDisplaySettingsVolume::AreVolumesChanged(
    ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* influenceVolumes,
    /* [TupleElementNames(new[] { "volume", "weight" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>* volumesWeights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                              { "AreVolumesChanged",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::Volume>, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, influenceVolumes, volumesWeights);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::OnBeginVolumeStackUpdate(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                              { "OnBeginVolumeStackUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, camera);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::OnEndVolumeStackUpdate(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                           { "OnEndVolumeStackUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, camera);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::OnVolumeStackInterpolated(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Rendering::Volume* volume,
                                                                                          float_t interpolationFactor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
          { "OnVolumeStackInterpolated", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stack, volume, interpolationFactor);
}
inline float_t UnityEngine::Rendering::DebugDisplaySettingsVolume::GetVolumeWeight(::UnityEngine::Rendering::Volume* volume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "GetVolumeWeight", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, volume);
}
inline ::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::DebugDisplaySettingsVolume::GetVolumesList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "GetVolumesList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::UnityEngine_Rendering_IDebugDisplaySettingsData_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "UnityEngine.Rendering.IDebugDisplaySettingsData.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::IVolumeDebugSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeDebugSettings);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::DebugDisplaySettingsVolume::get_resultVolumeComponent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(), { "get_resultVolumeComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsVolume::ExtractResult(::UnityEngine::Rendering::VolumeParameter* param) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(),
                                                                                         { "ExtractResult", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, param);
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
/// @brief [Obsolete("This constructor has been obsoleted and will be removed in a future version. #from(6000.2)")]
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* UnityEngine::Rendering::DebugDisplaySettingsVolume::New_ctor(::UnityEngine::Rendering::IVolumeDebugSettings* volumeDebugSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>(volumeDebugSettings));
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* UnityEngine::Rendering::DebugDisplaySettingsVolume::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsVolume*>());
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
