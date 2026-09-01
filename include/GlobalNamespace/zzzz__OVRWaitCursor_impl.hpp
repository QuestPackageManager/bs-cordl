#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRWaitCursor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRWaitCursor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRWaitCursor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRWaitCursor::*)()>(&::GlobalNamespace::OVRWaitCursor::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f17f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRWaitCursor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRWaitCursor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRWaitCursor::*)()>(&::GlobalNamespace::OVRWaitCursor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f17fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRWaitCursor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRWaitCursor::__cordl_internal_get_rotateSpeeds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateSpeeds;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRWaitCursor::__cordl_internal_get_rotateSpeeds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateSpeeds;
}
constexpr void GlobalNamespace::OVRWaitCursor::__cordl_internal_set_rotateSpeeds(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotateSpeeds = value;
}
inline void GlobalNamespace::OVRWaitCursor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRWaitCursor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRWaitCursor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRWaitCursor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRWaitCursor* GlobalNamespace::OVRWaitCursor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRWaitCursor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRWaitCursor::OVRWaitCursor() {}
