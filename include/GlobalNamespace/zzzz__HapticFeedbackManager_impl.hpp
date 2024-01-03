#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager.get_continuousRumblePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Libraries::HM::HMLib::VR::HapticPresetSO* (::GlobalNamespace::HapticFeedbackManager::*)()>(
    &::GlobalNamespace::HapticFeedbackManager::get_continuousRumblePreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f6dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(),
                                                                               "get_continuousRumblePreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager.PlayHapticFeedback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)(
    ::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x20f6dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(), "PlayHapticFeedback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)()>(&::GlobalNamespace::HapticFeedbackManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f700c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::HapticFeedbackManager::__get__controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersRumbleEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::HapticFeedbackManager::__get__controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersRumbleEnabled;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__set__controllersRumbleEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllersRumbleEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::HapticFeedbackManager::__get__continuousRumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousRumblePreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::HapticFeedbackManager::__get__continuousRumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousRumblePreset;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__set__continuousRumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuousRumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer*& GlobalNamespace::HapticFeedbackManager::__get__rumbleHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RumbleHapticFeedbackPlayer*> const& GlobalNamespace::HapticFeedbackManager::__get__rumbleHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumbleHapticFeedbackPlayer;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__set__rumbleHapticFeedbackPlayer(::GlobalNamespace::RumbleHapticFeedbackPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumbleHapticFeedbackPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IHapticFeedbackPlayer*& GlobalNamespace::HapticFeedbackManager::__get__advancedHapticFeedbackPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IHapticFeedbackPlayer*> const& GlobalNamespace::HapticFeedbackManager::__get__advancedHapticFeedbackPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advancedHapticFeedbackPlayer;
}
constexpr void GlobalNamespace::HapticFeedbackManager::__set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____advancedHapticFeedbackPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::HapticFeedbackManager::get_continuousRumblePreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(),
                                                                             "get_continuousRumblePreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Libraries::HM::HMLib::VR::HapticPresetSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(), "PlayHapticFeedback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline ::GlobalNamespace::HapticFeedbackManager* GlobalNamespace::HapticFeedbackManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HapticFeedbackManager*>());
}
inline void GlobalNamespace::HapticFeedbackManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HapticFeedbackManager::HapticFeedbackManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
