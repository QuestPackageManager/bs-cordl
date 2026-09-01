#pragma once
// IWYU pragma private; include "GlobalNamespace\SDFArrayManager.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__SDFArrayManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58730e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.InitIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::InitIfNeeded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58730e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "InitIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5873154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5873260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>>& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfPointArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfPointArray;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>> const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfPointArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfPointArray;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__sdfPointArray(::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sdfPointArray = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfArrayValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfArrayValues;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfArrayValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfArrayValues;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__sdfArrayValues(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sdfArrayValues = value;
}
constexpr bool& GlobalNamespace::SDFArrayManager::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void GlobalNamespace::SDFArrayManager::setStaticF__sdfPointsArray(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sdfPointsArray", ::GlobalNamespace::SDFArrayManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SDFArrayManager::getStaticF__sdfPointsArray() {
  return ::cordl_internals::getStaticField<int32_t, "_sdfPointsArray", ::GlobalNamespace::SDFArrayManager*>();
}
inline void GlobalNamespace::SDFArrayManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::InitIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "InitIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFArrayManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SDFArrayManager* GlobalNamespace::SDFArrayManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SDFArrayManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFArrayManager::SDFArrayManager() {}
