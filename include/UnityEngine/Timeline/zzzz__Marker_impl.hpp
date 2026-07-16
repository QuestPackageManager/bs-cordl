#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/Marker.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.get_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::Marker::*)()>(&::UnityEngine::Timeline::Marker::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c08b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "get_parent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.set_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Marker::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::Marker::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c08bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "set_parent", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::Marker::*)()>(&::UnityEngine::Timeline::Marker::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c08c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Marker::*)(double_t)>(&::UnityEngine::Timeline::Marker::set_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69c08cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.UnityEngine_Timeline_IMarker_Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Marker::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::Marker::UnityEngine_Timeline_IMarker_Initialize)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x69c094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "UnityEngine.Timeline.IMarker.Initialize", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker.OnInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Marker::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::Marker::OnInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c0aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { ::i2c::class_of<::UnityEngine::Timeline::Marker*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Marker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Marker::*)()>(&::UnityEngine::Timeline::Marker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c0aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& UnityEngine::Timeline::Marker::__cordl_internal_get_m_Time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr double_t const& UnityEngine::Timeline::Marker::__cordl_internal_get_m_Time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr void UnityEngine::Timeline::Marker::__cordl_internal_set_m_Time(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Time = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& UnityEngine::Timeline::Marker::__cordl_internal_get__parent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& UnityEngine::Timeline::Marker::__cordl_internal_get__parent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent_k__BackingField;
}
constexpr void UnityEngine::Timeline::Marker::__cordl_internal_set__parent_k__BackingField(::UnityW<::UnityEngine::Timeline::TrackAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::Marker::get_parent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "get_parent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::Marker::set_parent(::UnityEngine::Timeline::TrackAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "set_parent", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::Marker::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::Marker::set_time(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::Marker::UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset* parentTrack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { "UnityEngine.Timeline.IMarker.Initialize", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentTrack);
}
inline void UnityEngine::Timeline::Marker::OnInitialize(::UnityEngine::Timeline::TrackAsset* aPent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::Marker*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aPent);
}
inline void UnityEngine::Timeline::Marker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Marker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::Marker* UnityEngine::Timeline::Marker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::Marker*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::IMarker"
constexpr UnityEngine::Timeline::Marker::operator ::UnityEngine::Timeline::IMarker*() noexcept {
  return static_cast<::UnityEngine::Timeline::IMarker*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::IMarker"
constexpr ::UnityEngine::Timeline::IMarker* UnityEngine::Timeline::Marker::i___UnityEngine__Timeline__IMarker() noexcept {
  return static_cast<::UnityEngine::Timeline::IMarker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::Marker::Marker() {}
