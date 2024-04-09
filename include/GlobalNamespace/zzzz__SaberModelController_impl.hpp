#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SaberModelController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberModelController__InitData::*)()>(
    &::GlobalNamespace::__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x261f6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SaberModelController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberModelController__InitData::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x261f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__SaberModelController__InitData::__cordl_internal_get_trailTintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailTintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__SaberModelController__InitData::__cordl_internal_get_trailTintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailTintColor;
}
constexpr void GlobalNamespace::__SaberModelController__InitData::__cordl_internal_set_trailTintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailTintColor = value;
}
inline ::GlobalNamespace::__SaberModelController__InitData* GlobalNamespace::__SaberModelController__InitData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SaberModelController__InitData*>());
}
inline void GlobalNamespace::__SaberModelController__InitData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SaberModelController__InitData* GlobalNamespace::__SaberModelController__InitData::New_ctor(::UnityEngine::Color trailTintColor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SaberModelController__InitData*>(trailTintColor));
}
inline void GlobalNamespace::__SaberModelController__InitData::_ctor(::UnityEngine::Color trailTintColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trailTintColor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SaberModelController__InitData::__SaberModelController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)(::UnityEngine::Transform*, ::GlobalNamespace::Saber*)>(
    &::GlobalNamespace::SaberModelController::Init)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x261f32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)()>(&::GlobalNamespace::SaberModelController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x261f63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberTrail>& GlobalNamespace::SaberModelController::__cordl_internal_get__saberTrail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrail;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrail> const& GlobalNamespace::SaberModelController::__cordl_internal_get__saberTrail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrail;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__saberTrail(::UnityW<::GlobalNamespace::SaberTrail> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberTrail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*>&
GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberGlowColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberGlowColors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> const&
GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberGlowColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberGlowColors;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__setSaberGlowColors(
    ::ArrayW<::UnityW<::GlobalNamespace::SetSaberGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberGlowColor>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setSaberGlowColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*>&
GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberFakeGlowColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberFakeGlowColors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> const&
GlobalNamespace::SaberModelController::__cordl_internal_get__setSaberFakeGlowColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setSaberFakeGlowColors;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__setSaberFakeGlowColors(
    ::ArrayW<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>, ::Array<::UnityW<::GlobalNamespace::SetSaberFakeGlowColor>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setSaberFakeGlowColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::SaberModelController::__cordl_internal_get__saberLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::SaberModelController::__cordl_internal_get__saberLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberLight;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__saberLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SaberModelController__InitData*& GlobalNamespace::SaberModelController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberModelController__InitData*> const& GlobalNamespace::SaberModelController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__initData(::GlobalNamespace::__SaberModelController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SaberModelController::Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, saber);
}
inline ::GlobalNamespace::SaberModelController* GlobalNamespace::SaberModelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberModelController*>());
}
inline void GlobalNamespace::SaberModelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberModelController::SaberModelController() {}
