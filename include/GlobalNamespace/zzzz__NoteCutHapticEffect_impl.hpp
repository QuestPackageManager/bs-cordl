#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutHapticEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type::NoteCutHapticEffect_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type::NoteCutHapticEffect_Type() {}
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ChainHead{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ChainLink{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::Bomb{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::BadCut{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcHead{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcTail{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::NoteCutHapticEffect_Type GlobalNamespace::NoteCutHapticEffect_Type::ArcHeadAndTail{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect.HitNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)(::GlobalNamespace::SaberType, ::GlobalNamespace::NoteCutHapticEffect_Type)>(&::GlobalNamespace::NoteCutHapticEffect::HitNote)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57d7198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutHapticEffect_Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)()>(&::GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d7250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__normalPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__normalPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__normalPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainHeadPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainHeadPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainHeadPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainHeadPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__chainHeadPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chainHeadPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainLinkPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__chainLinkPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__chainLinkPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chainLinkPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__bombPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__bombPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__bombPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__badCutPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__badCutPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__badCutPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____badCutPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcHeadPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcHeadPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcTailPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcTailPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcTailPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcTailPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcTailPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcTailPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadAndTailPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadAndTailPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__arcHeadAndTailPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadAndTailPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__arcHeadAndTailPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcHeadAndTailPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteCutHapticEffect::HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::NoteCutHapticEffect_Type type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutHapticEffect_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberType, type);
}
inline void GlobalNamespace::NoteCutHapticEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutHapticEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutHapticEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect::NoteCutHapticEffect() {}
