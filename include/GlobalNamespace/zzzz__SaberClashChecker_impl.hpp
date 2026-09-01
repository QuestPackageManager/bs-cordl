#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberClashChecker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)(::GlobalNamespace::SaberManager*)>(&::GlobalNamespace::SaberClashChecker::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f0120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SaberManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.AreSabersClashing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SaberClashChecker::*)(::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberClashChecker::AreSabersClashing)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x59eb5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { "AreSabersClashing", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.SegmentToSegmentDist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberClashChecker::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberClashChecker::SegmentToSegmentDist)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x59f0138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(),
                                                             { "SegmentToSegmentDist",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)()>(&::GlobalNamespace::SaberClashChecker::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f03b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SaberClashChecker::__cordl_internal_get__sabersAreClashing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr bool const& GlobalNamespace::SaberClashChecker::__cordl_internal_get__sabersAreClashing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr void GlobalNamespace::SaberClashChecker::__cordl_internal_set__sabersAreClashing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabersAreClashing = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberClashChecker::__cordl_internal_get__clashingPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clashingPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberClashChecker::__cordl_internal_get__clashingPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clashingPoint;
}
constexpr void GlobalNamespace::SaberClashChecker::__cordl_internal_set__clashingPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clashingPoint = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberClashChecker::__cordl_internal_get__leftSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberClashChecker::__cordl_internal_get__leftSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr void GlobalNamespace::SaberClashChecker::__cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftSaber = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberClashChecker::__cordl_internal_get__rightSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberClashChecker::__cordl_internal_get__rightSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr void GlobalNamespace::SaberClashChecker::__cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightSaber = value;
}
constexpr int32_t& GlobalNamespace::SaberClashChecker::__cordl_internal_get__prevGetFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevGetFrameNum;
}
constexpr int32_t const& GlobalNamespace::SaberClashChecker::__cordl_internal_get__prevGetFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevGetFrameNum;
}
constexpr void GlobalNamespace::SaberClashChecker::__cordl_internal_set__prevGetFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevGetFrameNum = value;
}
inline void GlobalNamespace::SaberClashChecker::Init(::GlobalNamespace::SaberManager* saberManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SaberManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberManager);
}
inline bool GlobalNamespace::SaberClashChecker::AreSabersClashing(::by_ref<::UnityEngine::Vector3> clashingPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { "AreSabersClashing", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clashingPoint);
}
inline float_t GlobalNamespace::SaberClashChecker::SegmentToSegmentDist(::UnityEngine::Vector3 fromA, ::UnityEngine::Vector3 toA, ::UnityEngine::Vector3 fromB, ::UnityEngine::Vector3 toB,
                                                                        ::by_ref<::UnityEngine::Vector3> inbetweenPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(),
                                                           { "SegmentToSegmentDist",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fromA, toA, fromB, toB, inbetweenPoint);
}
inline void GlobalNamespace::SaberClashChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberClashChecker* GlobalNamespace::SaberClashChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberClashChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberClashChecker::SaberClashChecker() {}
