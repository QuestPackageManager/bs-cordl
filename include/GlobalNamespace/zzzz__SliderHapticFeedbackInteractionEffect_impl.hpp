#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_impl.hpp"
#include "GlobalNamespace/zzzz__SliderHapticFeedbackInteractionEffect_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2392c34;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2392d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.StartEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)(float_t)>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2392eac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.EndEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2392ef4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect.Vibrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2392e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                               "Vibrate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderHapticFeedbackInteractionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(
    &::GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2392f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticPreset;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackManager*& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gamePause)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect(float_t saberInteractionParam) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberInteractionParam);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                             "Vibrate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderHapticFeedbackInteractionEffect* GlobalNamespace::SliderHapticFeedbackInteractionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>());
}
inline void GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderHapticFeedbackInteractionEffect*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderHapticFeedbackInteractionEffect::SliderHapticFeedbackInteractionEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
