#pragma once
// IWYU pragma private; include "GlobalNamespace\GameObjectKeywordSwitchEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectKeywordSwitchEffect_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectKeywordSwitchEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::*)()>(
    &::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59948a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
constexpr ::StringW& GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_get_keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr ::StringW const& GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_get_keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::__cordl_internal_set_keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyword = value;
}
inline void GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem* GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem::GameObjectKeywordSwitchEffect_GameObjectKeywordItem() {}
//  Writing Method size for method: ::GlobalNamespace::GameObjectKeywordSwitchEffect.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectKeywordSwitchEffect::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::GameObjectKeywordSwitchEffect::Initialize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5994758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect*>(), { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectKeywordSwitchEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectKeywordSwitchEffect::*)()>(&::GlobalNamespace::GameObjectKeywordSwitchEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59948a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__defaultGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__defaultGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultGameObject;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_set__defaultGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultGameObject = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>& GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__gameObjectKeywordItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectKeywordItems;
}
constexpr ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*> const&
GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__gameObjectKeywordItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectKeywordItems;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_set__gameObjectKeywordItems(::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectKeywordItems = value;
}
inline void GlobalNamespace::GameObjectKeywordSwitchEffect::Initialize(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect*>(), { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData);
}
inline void GlobalNamespace::GameObjectKeywordSwitchEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectKeywordSwitchEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameObjectKeywordSwitchEffect* GlobalNamespace::GameObjectKeywordSwitchEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectKeywordSwitchEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectKeywordSwitchEffect::GameObjectKeywordSwitchEffect() {}
