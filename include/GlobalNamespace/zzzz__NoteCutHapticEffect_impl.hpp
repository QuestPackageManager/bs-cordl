#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type::__NoteCutHapticEffect__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type::__NoteCutHapticEffect__Type() {}
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type GlobalNamespace::__NoteCutHapticEffect__Type::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type GlobalNamespace::__NoteCutHapticEffect__Type::ShortNormal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type GlobalNamespace::__NoteCutHapticEffect__Type::ShortWeak{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type GlobalNamespace::__NoteCutHapticEffect__Type::Bomb{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type GlobalNamespace::__NoteCutHapticEffect__Type::BadCut{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect.HitNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)(::GlobalNamespace::SaberType, ::GlobalNamespace::__NoteCutHapticEffect__Type)>(&::GlobalNamespace::NoteCutHapticEffect::HitNote)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x235b9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)()>(&::GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235ba84;

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
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__shortNormalPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortNormalPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__shortNormalPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortNormalPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__shortNormalPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortNormalPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__shortWeakPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortWeakPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::NoteCutHapticEffect::__cordl_internal_get__shortWeakPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortWeakPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__cordl_internal_set__shortWeakPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortWeakPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void GlobalNamespace::NoteCutHapticEffect::HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::__NoteCutHapticEffect__Type type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberType, type);
}
inline ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutHapticEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutHapticEffect*>());
}
inline void GlobalNamespace::NoteCutHapticEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect::NoteCutHapticEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
