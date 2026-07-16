#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TrailElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrailElement.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElement::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TrailElement::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f4f880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(&::GlobalNamespace::TrailElement::CopyFrom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4f8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "CopyFrom", {}, { ::i2c::type_of<::GlobalNamespace::TrailElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.SetDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElement::*)(float_t)>(&::GlobalNamespace::TrailElement::SetDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "SetDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.UpdateLocalDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(&::GlobalNamespace::TrailElement::UpdateLocalDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f4f904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "UpdateLocalDistance", {}, { ::i2c::type_of<::GlobalNamespace::TrailElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElement::*)()>(&::GlobalNamespace::TrailElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4f9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::TrailElement::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TrailElement::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TrailElement::__cordl_internal_get_normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TrailElement::__cordl_internal_get_normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normal = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distance = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_localDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localDistance;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_localDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localDistance;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_localDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localDistance = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline void GlobalNamespace::TrailElement::SetData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(),
                                                           { "SetData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, time);
}
inline void GlobalNamespace::TrailElement::CopyFrom(::GlobalNamespace::TrailElement* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "CopyFrom", {}, { ::i2c::type_of<::GlobalNamespace::TrailElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TrailElement::SetDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "SetDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TrailElement::UpdateLocalDistance(::GlobalNamespace::TrailElement* prev) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { "UpdateLocalDistance", {}, { ::i2c::type_of<::GlobalNamespace::TrailElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prev);
}
inline void GlobalNamespace::TrailElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrailElement* GlobalNamespace::TrailElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrailElement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElement::TrailElement() {}
