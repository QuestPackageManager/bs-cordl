#pragma once
#include "Unity/XR/Oculus/zzzz__OculusSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__OculusSettings__StereoRenderingModeDesktop(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__OculusSettings__StereoRenderingModeDesktop() {}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::SinglePassInstanced{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__OculusSettings__StereoRenderingModeAndroid(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__OculusSettings__StereoRenderingModeAndroid() {}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::Multiview{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod::__OculusSettings__FoveationMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod::__OculusSettings__FoveationMethod() {}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod Unity::XR::Oculus::__OculusSettings__FoveationMethod::FixedFoveatedRendering{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod Unity::XR::Oculus::__OculusSettings__FoveationMethod::EyeTrackedFoveatedRendering{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings.GetStereoRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c783ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                                                                               "GetStereoRenderingMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c7bc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c7bc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeDesktop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StereoRenderingModeDesktop;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop const& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeDesktop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StereoRenderingModeDesktop;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeDesktop(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_StereoRenderingModeDesktop = value;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeAndroid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StereoRenderingModeAndroid;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid const& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeAndroid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StereoRenderingModeAndroid;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeAndroid(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_StereoRenderingModeAndroid = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SharedDepthBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SharedDepthBuffer;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SharedDepthBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SharedDepthBuffer;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SharedDepthBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SharedDepthBuffer = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_DepthSubmission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DepthSubmission;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_DepthSubmission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DepthSubmission;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DepthSubmission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DepthSubmission = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_DashSupport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DashSupport;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_DashSupport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DashSupport;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DashSupport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DashSupport = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LowOverheadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LowOverheadMode;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LowOverheadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LowOverheadMode;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LowOverheadMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___LowOverheadMode = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_OptimizeBufferDiscards() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___OptimizeBufferDiscards;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_OptimizeBufferDiscards() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___OptimizeBufferDiscards;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_OptimizeBufferDiscards(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___OptimizeBufferDiscards = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_PhaseSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PhaseSync;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_PhaseSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PhaseSync;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_PhaseSync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PhaseSync = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SymmetricProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SymmetricProjection;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SymmetricProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SymmetricProjection;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SymmetricProjection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SymmetricProjection = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SubsampledLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SubsampledLayout;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SubsampledLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SubsampledLayout;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SubsampledLayout(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SubsampledLayout = value;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod& Unity::XR::Oculus::OculusSettings::__get_FoveatedRenderingMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FoveatedRenderingMethod;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod const& Unity::XR::Oculus::OculusSettings::__get_FoveatedRenderingMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FoveatedRenderingMethod;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_FoveatedRenderingMethod(::Unity::XR::Oculus::__OculusSettings__FoveationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___FoveatedRenderingMethod = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LateLatching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LateLatching;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LateLatching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LateLatching;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___LateLatching = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LateLatchingDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LateLatchingDebug;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LateLatchingDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LateLatchingDebug;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatchingDebug(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___LateLatchingDebug = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_EnableTrackingOriginStageMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___EnableTrackingOriginStageMode;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_EnableTrackingOriginStageMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___EnableTrackingOriginStageMode;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_EnableTrackingOriginStageMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___EnableTrackingOriginStageMode = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SpaceWarp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SpaceWarp;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SpaceWarp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SpaceWarp;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SpaceWarp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SpaceWarp = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuest;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuest;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___TargetQuest = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuest2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuest2;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuest2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuest2;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___TargetQuest2 = value;
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuestPro() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuestPro;
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuestPro() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetQuestPro;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuestPro(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___TargetQuestPro = value;
}
constexpr ::UnityEngine::Texture2D*& Unity::XR::Oculus::OculusSettings::__get_SystemSplashScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SystemSplashScreen;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& Unity::XR::Oculus::OculusSettings::__get_SystemSplashScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SystemSplashScreen;
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SystemSplashScreen(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SystemSplashScreen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::XR::Oculus::OculusSettings::setStaticF_s_Settings(::Unity::XR::Oculus::OculusSettings* value) {
  ::cordl_internals::setStaticField<::Unity::XR::Oculus::OculusSettings*, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get>(
      std::forward<::Unity::XR::Oculus::OculusSettings*>(value));
}
inline ::Unity::XR::Oculus::OculusSettings* Unity::XR::Oculus::OculusSettings::getStaticF_s_Settings() {
  return ::cordl_internals::getStaticField<::Unity::XR::Oculus::OculusSettings*, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get>();
}
inline uint16_t Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                                                                             "GetStereoRenderingMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline void Unity::XR::Oculus::OculusSettings::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::OculusSettings* Unity::XR::Oculus::OculusSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Unity::XR::Oculus::OculusSettings*>());
}
inline void Unity::XR::Oculus::OculusSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::OculusSettings::OculusSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
