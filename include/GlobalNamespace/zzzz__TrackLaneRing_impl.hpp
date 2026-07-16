#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRing.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRing_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.get_destRotZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackLaneRing::*)()>(&::GlobalNamespace::TrackLaneRing::get_destRotZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "get_destRotZ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::TrackLaneRing::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59a1de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.FixedUpdateRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)(float_t)>(&::GlobalNamespace::TrackLaneRing::FixedUpdateRing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59a1e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "FixedUpdateRing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.LateUpdateRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)(float_t)>(&::GlobalNamespace::TrackLaneRing::LateUpdateRing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59a1ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "LateUpdateRing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.SetDestRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)(float_t, float_t)>(&::GlobalNamespace::TrackLaneRing::SetDestRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "SetDestRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.GetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackLaneRing::*)()>(&::GlobalNamespace::TrackLaneRing::GetRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "GetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.GetDestinationRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackLaneRing::*)()>(&::GlobalNamespace::TrackLaneRing::GetDestinationRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "GetDestinationRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)(float_t, float_t)>(&::GlobalNamespace::TrackLaneRing::SetPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "SetPosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRing::*)()>(&::GlobalNamespace::TrackLaneRing::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a1f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__prevRotZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRotZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__prevRotZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRotZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__prevRotZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRotZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__rotZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__rotZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__rotZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__destRotZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destRotZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__destRotZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destRotZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__destRotZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destRotZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__rotationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSpeed;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__rotationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationSpeed;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__rotationSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationSpeed = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__prevPosZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__prevPosZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__prevPosZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPosZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__posZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__posZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__posZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__destPosZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destPosZ;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__destPosZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destPosZ;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__destPosZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destPosZ = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRing::__cordl_internal_get__moveSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr float_t const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__moveSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__moveSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TrackLaneRing::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TrackLaneRing::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TrackLaneRing::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::TrackLaneRing::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline float_t GlobalNamespace::TrackLaneRing::get_destRotZ() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "get_destRotZ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRing::Init(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 positionOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, positionOffset);
}
inline void GlobalNamespace::TrackLaneRing::FixedUpdateRing(float_t fixedDeltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "FixedUpdateRing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixedDeltaTime);
}
inline void GlobalNamespace::TrackLaneRing::LateUpdateRing(float_t interpolationFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "LateUpdateRing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interpolationFactor);
}
inline void GlobalNamespace::TrackLaneRing::SetDestRotation(float_t destRotZ, float_t rotateSpeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "SetDestRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destRotZ, rotateSpeed);
}
inline float_t GlobalNamespace::TrackLaneRing::GetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "GetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TrackLaneRing::GetDestinationRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "GetDestinationRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRing::SetPosition(float_t destPosZ, float_t moveSpeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { "SetPosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destPosZ, moveSpeed);
}
inline void GlobalNamespace::TrackLaneRing::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRing*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLaneRing* GlobalNamespace::TrackLaneRing::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLaneRing*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRing::TrackLaneRing() {}
