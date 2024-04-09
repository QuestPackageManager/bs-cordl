#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadsetHapticSettingsSampleController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25335f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2533688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2533758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.HandleHapticSettingValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25337c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(), "HandleHapticSettingValueDidChange",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2533810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__formattedFloatListSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const&
GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__formattedFloatListSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr void
GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__formattedFloatListSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formattedFloatListSettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSamplePlayDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSamplePlayDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticSamplePlayDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticSamplePlayDelay = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSampleDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSampleDuration;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSampleDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSampleDuration;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticSampleDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticSampleDuration = value;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__headHapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__headHapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__headHapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headHapticPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__nextHapticSamplePlayTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextHapticSamplePlayTime = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTimeEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTimeEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__nextHapticSamplePlayTimeEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextHapticSamplePlayTimeEnd = value;
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* controller, float_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(), "HandleHapticSettingValueDidChange",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, newValue);
}
inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* GlobalNamespace::HeadsetHapticSettingsSampleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HeadsetHapticSettingsSampleController*>());
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadsetHapticSettingsSampleController::HeadsetHapticSettingsSampleController() {}
