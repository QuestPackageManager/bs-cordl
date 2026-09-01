#pragma once
// IWYU pragma private; include "GlobalNamespace\GameSessionAnalyticsManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameSessionAnalyticsManager_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSessionAnalyticsManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSessionAnalyticsManager::*)(bool)>(&::GlobalNamespace::GameSessionAnalyticsManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b0d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSessionAnalyticsManager.LogSessionEventOnFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSessionAnalyticsManager::*)(bool)>(&::GlobalNamespace::GameSessionAnalyticsManager::LogSessionEventOnFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b0d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionEventOnFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSessionAnalyticsManager.LogSessionFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSessionAnalyticsManager::*)()>(&::GlobalNamespace::GameSessionAnalyticsManager::LogSessionFinish)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58b0e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSessionAnalyticsManager.LogSessionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSessionAnalyticsManager::*)()>(&::GlobalNamespace::GameSessionAnalyticsManager::LogSessionStart)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58b0da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSessionAnalyticsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSessionAnalyticsManager::*)()>(&::GlobalNamespace::GameSessionAnalyticsManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b0f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr float_t& GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_get_lastSessionStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSessionStartTime;
}
constexpr float_t const& GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_get_lastSessionStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSessionStartTime;
}
constexpr void GlobalNamespace::GameSessionAnalyticsManager::__cordl_internal_set_lastSessionStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastSessionStartTime = value;
}
inline void GlobalNamespace::GameSessionAnalyticsManager::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::GameSessionAnalyticsManager::LogSessionEventOnFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionEventOnFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::GameSessionAnalyticsManager::LogSessionFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSessionAnalyticsManager::LogSessionStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { "LogSessionStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSessionAnalyticsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSessionAnalyticsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSessionAnalyticsManager* GlobalNamespace::GameSessionAnalyticsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSessionAnalyticsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSessionAnalyticsManager::GameSessionAnalyticsManager() {}
