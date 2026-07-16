#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalEmitter.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalEmitter_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Timeline/zzzz__INotificationOptionProvider_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include "UnityEngine/Timeline/zzzz__SignalAsset_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.get_retroactive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::SignalEmitter::*)()>(&::UnityEngine::Timeline::SignalEmitter::get_retroactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c1244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_retroactive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.set_retroactive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalEmitter::*)(bool)>(&::UnityEngine::Timeline::SignalEmitter::set_retroactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c124c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_retroactive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.get_emitOnce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::SignalEmitter::*)()>(&::UnityEngine::Timeline::SignalEmitter::get_emitOnce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c1254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_emitOnce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.set_emitOnce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalEmitter::*)(bool)>(&::UnityEngine::Timeline::SignalEmitter::set_emitOnce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c125c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_emitOnce", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::SignalAsset> (::UnityEngine::Timeline::SignalEmitter::*)()>(
    &::UnityEngine::Timeline::SignalEmitter::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c1264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.set_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalEmitter::*)(::UnityEngine::Timeline::SignalAsset*)>(&::UnityEngine::Timeline::SignalEmitter::set_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c126c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_asset", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.UnityEngine_Playables_INotification_get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PropertyName (::UnityEngine::Timeline::SignalEmitter::*)()>(
    &::UnityEngine::Timeline::SignalEmitter::UnityEngine_Playables_INotification_get_id)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69c1274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "UnityEngine.Playables.INotification.get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter.UnityEngine_Timeline_INotificationOptionProvider_get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::NotificationFlags (::UnityEngine::Timeline::SignalEmitter::*)()>(
    &::UnityEngine::Timeline::SignalEmitter::UnityEngine_Timeline_INotificationOptionProvider_get_flags)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69c1304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "UnityEngine.Timeline.INotificationOptionProvider.get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalEmitter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalEmitter::*)()>(&::UnityEngine::Timeline::SignalEmitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_Retroactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retroactive;
}
constexpr bool const& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_Retroactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retroactive;
}
constexpr void UnityEngine::Timeline::SignalEmitter::__cordl_internal_set_m_Retroactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Retroactive = value;
}
constexpr bool& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_EmitOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmitOnce;
}
constexpr bool const& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_EmitOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmitOnce;
}
constexpr void UnityEngine::Timeline::SignalEmitter::__cordl_internal_set_m_EmitOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmitOnce = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::SignalAsset>& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::Timeline::SignalAsset> const& UnityEngine::Timeline::SignalEmitter::__cordl_internal_get_m_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr void UnityEngine::Timeline::SignalEmitter::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Timeline::SignalAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Asset = value;
}
inline bool UnityEngine::Timeline::SignalEmitter::get_retroactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_retroactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalEmitter::set_retroactive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_retroactive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::SignalEmitter::get_emitOnce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_emitOnce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalEmitter::set_emitOnce(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_emitOnce", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::SignalAsset> UnityEngine::Timeline::SignalEmitter::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::SignalAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalEmitter::set_asset(::UnityEngine::Timeline::SignalAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "set_asset", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PropertyName UnityEngine::Timeline::SignalEmitter::UnityEngine_Playables_INotification_get_id() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "UnityEngine.Playables.INotification.get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::NotificationFlags UnityEngine::Timeline::SignalEmitter::UnityEngine_Timeline_INotificationOptionProvider_get_flags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { "UnityEngine.Timeline.INotificationOptionProvider.get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::NotificationFlags>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalEmitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalEmitter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalEmitter* UnityEngine::Timeline::SignalEmitter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SignalEmitter*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr UnityEngine::Timeline::SignalEmitter::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotification"
constexpr ::UnityEngine::Playables::INotification* UnityEngine::Timeline::SignalEmitter::i___UnityEngine__Playables__INotification() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::INotificationOptionProvider"
constexpr UnityEngine::Timeline::SignalEmitter::operator ::UnityEngine::Timeline::INotificationOptionProvider*() noexcept {
  return static_cast<::UnityEngine::Timeline::INotificationOptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::INotificationOptionProvider"
constexpr ::UnityEngine::Timeline::INotificationOptionProvider* UnityEngine::Timeline::SignalEmitter::i___UnityEngine__Timeline__INotificationOptionProvider() noexcept {
  return static_cast<::UnityEngine::Timeline::INotificationOptionProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalEmitter::SignalEmitter() {}
