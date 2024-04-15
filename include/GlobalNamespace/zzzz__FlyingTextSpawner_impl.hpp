#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingTextSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.SpawnText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::StringW)>(&::GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x25c3428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "SpawnText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25c360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)()>(&::GlobalNamespace::FlyingTextSpawner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingTextSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* GlobalNamespace::FlyingTextSpawner::i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__xSpread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__xSpread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__xSpread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xSpread = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__targetYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__targetYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__targetYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetYPos = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__targetZPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__targetZPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__targetZPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetZPos = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__fontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSize = value;
}
constexpr bool& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::__FlyingTextEffect__Pool*& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__flyingTextEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingTextEffect__Pool*> const& GlobalNamespace::FlyingTextSpawner::__cordl_internal_get__flyingTextEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPool;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__cordl_internal_set__flyingTextEffectPool(::GlobalNamespace::__FlyingTextEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingTextEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingTextSpawner::SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "SpawnText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, rotation, inverseRotation, text);
}
inline void GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingTextSpawner* GlobalNamespace::FlyingTextSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlyingTextSpawner*>());
}
inline void GlobalNamespace::FlyingTextSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingTextSpawner::FlyingTextSpawner() {}
