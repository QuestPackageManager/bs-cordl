#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadsetHapticSettingsSampleController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22ab390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22ab428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22ab4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.HandleHapticSettingValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22ab560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(), "HandleHapticSettingValueDidChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ab5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__formattedFloatListSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const&
GlobalNamespace::HeadsetHapticSettingsSampleController::__get__formattedFloatListSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__formattedFloatListSettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formattedFloatListSettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSamplePlayDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSamplePlayDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticSamplePlayDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hapticSamplePlayDelay = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSampleDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticSampleDuration;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSampleDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticSampleDuration;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticSampleDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hapticSampleDuration = value;
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__headHapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headHapticPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__headHapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headHapticPreset;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__headHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headHapticPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackManager*& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__nextHapticSamplePlayTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nextHapticSamplePlayTime = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTimeEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTimeEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__nextHapticSamplePlayTimeEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nextHapticSamplePlayTimeEnd = value;
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* controller, float_t newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(), "HandleHapticSettingValueDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, newValue);
}
inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* GlobalNamespace::HeadsetHapticSettingsSampleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HeadsetHapticSettingsSampleController*>());
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadsetHapticSettingsSampleController::HeadsetHapticSettingsSampleController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
