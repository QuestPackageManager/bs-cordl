#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.SpawnFlyingSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x23a1114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), "SpawnFlyingSprite", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a1df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)()>(&::GlobalNamespace::FlyingSpriteSpawner::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23a1f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingSpriteSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::FlyingSpriteSpawner::__get__sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::FlyingSpriteSpawner::__get__sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__sprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::FlyingSpriteSpawner::__get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::FlyingSpriteSpawner::__get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__material(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__get__xSpread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__get__xSpread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__xSpread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xSpread = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__get__targetYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__get__targetYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__targetYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetYPos = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__get__targetZPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__get__targetZPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__targetZPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetZPos = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingSpriteSpawner::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingSpriteSpawner::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr bool& GlobalNamespace::FlyingSpriteSpawner::__get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingSpriteSpawner::__get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::__FlyingSpriteEffect__Pool*& GlobalNamespace::FlyingSpriteSpawner::__get__flyingSpriteEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingSpriteEffect__Pool*> const& GlobalNamespace::FlyingSpriteSpawner::__get__flyingSpriteEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPool;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__set__flyingSpriteEffectPool(::GlobalNamespace::__FlyingSpriteEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingSpriteEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), "SpawnFlyingSprite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, rotation, inverseRotation);
}
inline void GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingSpriteSpawner* GlobalNamespace::FlyingSpriteSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingSpriteSpawner*>());
}
inline void GlobalNamespace::FlyingSpriteSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingSpriteSpawner::FlyingSpriteSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
