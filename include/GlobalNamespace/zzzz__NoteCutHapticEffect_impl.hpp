#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
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
  constexpr static std::size_t addrs = 0x239a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)()>(&::GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239a954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::NoteCutHapticEffect::__get__normalPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::NoteCutHapticEffect::__get__normalPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__normalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::NoteCutHapticEffect::__get__shortNormalPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shortNormalPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::NoteCutHapticEffect::__get__shortNormalPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shortNormalPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortNormalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortNormalPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::NoteCutHapticEffect::__get__shortWeakPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shortWeakPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::NoteCutHapticEffect::__get__shortWeakPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shortWeakPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortWeakPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortWeakPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::NoteCutHapticEffect::__get__bombPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::NoteCutHapticEffect::__get__bombPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__bombPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::NoteCutHapticEffect::__get__badCutPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____badCutPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::NoteCutHapticEffect::__get__badCutPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____badCutPreset;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__badCutPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____badCutPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackManager*& GlobalNamespace::NoteCutHapticEffect::__get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& GlobalNamespace::NoteCutHapticEffect::__get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteCutHapticEffect::HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::__NoteCutHapticEffect__Type type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), "HitNote", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberType, type);
}
inline ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutHapticEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutHapticEffect*>());
}
inline void GlobalNamespace::NoteCutHapticEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutHapticEffect::NoteCutHapticEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
