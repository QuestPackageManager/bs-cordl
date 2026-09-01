#pragma once
// IWYU pragma private; include "GlobalNamespace\JumpMarker.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__JumpMarker_def.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585940c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_jumpDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::JumpDestinationMarker> (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_jumpDestination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5859414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { "get_jumpDestination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585941c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker>& GlobalNamespace::JumpMarker::__cordl_internal_get__destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination;
}
constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker> const& GlobalNamespace::JumpMarker::__cordl_internal_get__destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination;
}
constexpr void GlobalNamespace::JumpMarker::__cordl_internal_set__destination(::UnityW<::GlobalNamespace::JumpDestinationMarker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destination = value;
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::JumpMarker::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::JumpMarker::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::JumpMarker::__cordl_internal_set__id_k__BackingField(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::UnityEngine::PropertyName GlobalNamespace::JumpMarker::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::JumpDestinationMarker> GlobalNamespace::JumpMarker::get_jumpDestination() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { "get_jumpDestination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::JumpDestinationMarker>>(this, ___internal_method);
}
inline void GlobalNamespace::JumpMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpMarker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpMarker* GlobalNamespace::JumpMarker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JumpMarker*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr GlobalNamespace::JumpMarker::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotification"
constexpr ::UnityEngine::Playables::INotification* GlobalNamespace::JumpMarker::i___UnityEngine__Playables__INotification() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpMarker::JumpMarker() {}
