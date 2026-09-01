#pragma once
// IWYU pragma private; include "GlobalNamespace\LineLightManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__LineLightManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineLightManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::Update)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x58713a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LineLightManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineLightManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5871750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LineLightManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LineLightManager::__cordl_internal_get__points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LineLightManager::__cordl_internal_get__points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__points(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____points = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LineLightManager::__cordl_internal_get__dirs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirs;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LineLightManager::__cordl_internal_get__dirs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirs;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__dirs(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirs = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LineLightManager::__cordl_internal_get__dirLengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirLengths;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LineLightManager::__cordl_internal_get__dirLengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirLengths;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__dirLengths(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirLengths = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LineLightManager::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LineLightManager::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
inline void GlobalNamespace::LineLightManager::setStaticF__activeLineLightsCountID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_activeLineLightsCountID", ::GlobalNamespace::LineLightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__activeLineLightsCountID() {
  return ::cordl_internals::getStaticField<int32_t, "_activeLineLightsCountID", ::GlobalNamespace::LineLightManager*>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightPointsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightPointsID", ::GlobalNamespace::LineLightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightPointsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightPointsID", ::GlobalNamespace::LineLightManager*>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightDirsID", ::GlobalNamespace::LineLightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightDirsID", ::GlobalNamespace::LineLightManager*>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirLengthsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightDirLengthsID", ::GlobalNamespace::LineLightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirLengthsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightDirLengthsID", ::GlobalNamespace::LineLightManager*>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightColorsID", ::GlobalNamespace::LineLightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightColorsID", ::GlobalNamespace::LineLightManager*>();
}
inline void GlobalNamespace::LineLightManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LineLightManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineLightManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LineLightManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LineLightManager* GlobalNamespace::LineLightManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LineLightManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LineLightManager::LineLightManager() {}
