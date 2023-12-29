#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackController_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__HapticFeedbackController__RumbleData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HapticFeedbackController__RumbleData::*)()>(
    &::GlobalNamespace::__HapticFeedbackController__RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa46c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticFeedbackController__RumbleData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr bool const& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr void GlobalNamespace::__HapticFeedbackController__RumbleData::__set_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___active = value;
}
constexpr bool& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr bool const& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr void GlobalNamespace::__HapticFeedbackController__RumbleData::__set_continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continuous = value;
}
constexpr float_t& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr float_t const& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void GlobalNamespace::__HapticFeedbackController__RumbleData::__set_strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
constexpr float_t& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_endTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr float_t const& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_endTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr void GlobalNamespace::__HapticFeedbackController__RumbleData::__set_endTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endTime = value;
}
constexpr float_t& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr float_t const& GlobalNamespace::__HapticFeedbackController__RumbleData::__get_frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr void GlobalNamespace::__HapticFeedbackController__RumbleData::__set_frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frequency = value;
}
inline ::GlobalNamespace::__HapticFeedbackController__RumbleData* GlobalNamespace::__HapticFeedbackController__RumbleData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HapticFeedbackController__RumbleData*>());
}
inline void GlobalNamespace::__HapticFeedbackController__RumbleData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HapticFeedbackController__RumbleData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HapticFeedbackController__RumbleData::__HapticFeedbackController__RumbleData() {}
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.get_continuousRumblePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Libraries::HM::HMLib::VR::HapticPresetSO* (::GlobalNamespace::HapticFeedbackController::*)()>(
    &::GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(),
                                                                               "get_continuousRumblePreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackController::*)()>(&::GlobalNamespace::HapticFeedbackController::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1fa3f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackController::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::HapticFeedbackController::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1fa4034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "PlayHapticFeedback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackController::*)()>(&::GlobalNamespace::HapticFeedbackController::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fa4238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(),
                                                                               "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.UpdateRumbles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackController::*)()>(
    &::GlobalNamespace::HapticFeedbackController::UpdateRumbles)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1fa423c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(),
                                                                               "UpdateRumbles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController.GetRumble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__HapticFeedbackController__RumbleData* (
    ::GlobalNamespace::HapticFeedbackController::*)(::UnityEngine::XR::XRNode, ::System::Object*)>(&::GlobalNamespace::HapticFeedbackController::GetRumble)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fa4118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "GetRumble", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackController::*)()>(&::GlobalNamespace::HapticFeedbackController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fa46c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::HapticFeedbackController::__get__controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersRumbleEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::HapticFeedbackController::__get__controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersRumbleEnabled;
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__controllersRumbleEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllersRumbleEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::HapticFeedbackController::__get__continuousRumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousRumblePreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::HapticFeedbackController::__get__continuousRumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousRumblePreset;
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__continuousRumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuousRumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::HapticFeedbackController::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::HapticFeedbackController::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                       ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>*&
GlobalNamespace::HapticFeedbackController::__get__rumblesByNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>*> const&
GlobalNamespace::HapticFeedbackController::__get__rumblesByNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblesByNode;
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__rumblesByNode(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                 ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblesByNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(),
                                                                             "get_continuousRumblePreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Libraries::HM::HMLib::VR::HapticPresetSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticFeedbackController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticFeedbackController::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "PlayHapticFeedback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::HapticFeedbackController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticFeedbackController::UpdateRumbles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(),
                                                                             "UpdateRumbles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__HapticFeedbackController__RumbleData* GlobalNamespace::HapticFeedbackController::GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), "GetRumble", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__HapticFeedbackController__RumbleData*, false>(this, ___internal_method, node, preset);
}
inline ::GlobalNamespace::HapticFeedbackController* GlobalNamespace::HapticFeedbackController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HapticFeedbackController*>());
}
inline void GlobalNamespace::HapticFeedbackController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HapticFeedbackController::HapticFeedbackController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
