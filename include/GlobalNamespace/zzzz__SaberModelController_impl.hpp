#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberModelController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SaberModelController::*)(::UnityEngine::Transform*, ::GlobalNamespace::Saber*, ::UnityEngine::Color)>(&::GlobalNamespace::SaberModelController::Init)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3bed748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.InitColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::SaberModelController::InitColor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3bed99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "InitColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)()>(&::GlobalNamespace::SaberModelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bedb28;

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
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SaberModelController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberModelController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SaberModelController::Init(::UnityEngine::Transform* parent, ::GlobalNamespace::Saber* saber, ::UnityEngine::Color trailTintColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, saber, trailTintColor);
}
inline void GlobalNamespace::SaberModelController::InitColor(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), "InitColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberType);
}
inline void GlobalNamespace::SaberModelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberModelController* GlobalNamespace::SaberModelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberModelController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberModelController::SaberModelController() {}
