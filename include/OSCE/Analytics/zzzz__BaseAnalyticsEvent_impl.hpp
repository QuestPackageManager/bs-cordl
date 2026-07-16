#pragma once
// IWYU pragma private; include "OSCE/Analytics/BaseAnalyticsEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsEvent_def.hpp"
#include "OSCE/Networking/zzzz__IPureCSharpPoolElement_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.get_logger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::get_logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f371fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "get_logger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.set_logger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::StringW)>(&::OSCE::Analytics::BaseAnalyticsEvent::set_logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f37204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "set_logger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.get_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::get_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3720c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "get_CreatedByPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.set_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(bool)>(&::OSCE::Analytics::BaseAnalyticsEvent::set_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f37214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "set_CreatedByPool", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.EventRequiresAnalyticsID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::EventRequiresAnalyticsID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f37224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f37244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f37294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ConvertToLoggerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OSCE::Analytics::LoggerAnalyticsEvent (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ConvertToLoggerEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f37304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ApplyTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*, int32_t)>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ApplyTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f37370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f373f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3741c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get_client_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_time;
}
constexpr int32_t const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get_client_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_time;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set_client_time(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___client_time = value;
}
constexpr ::StringW& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__logger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger_k__BackingField;
}
constexpr ::StringW const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__logger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger_k__BackingField;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set__logger_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logger_k__BackingField = value;
}
constexpr bool& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__CreatedByPool_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr bool const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__CreatedByPool_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set__CreatedByPool_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreatedByPool_k__BackingField = value;
}
inline ::StringW OSCE::Analytics::BaseAnalyticsEvent::get_logger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "get_logger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::set_logger(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "set_logger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool OSCE::Analytics::BaseAnalyticsEvent::get_CreatedByPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "get_CreatedByPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::set_CreatedByPool(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { "set_CreatedByPool", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDType OSCE::Analytics::BaseAnalyticsEvent::GetIDType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline bool OSCE::Analytics::BaseAnalyticsEvent::EventRequiresAnalyticsID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::LoggerAnalyticsEvent OSCE::Analytics::BaseAnalyticsEvent::ConvertToLoggerEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::LoggerAnalyticsEvent>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ApplyTime(::OSCE::Analytics::AnalyticsManager* manager, int32_t timestamp) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, timestamp);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::BaseAnalyticsEvent* OSCE::Analytics::BaseAnalyticsEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Analytics::BaseAnalyticsEvent*>());
}
/// @brief Convert operator to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr OSCE::Analytics::BaseAnalyticsEvent::operator ::OSCE::Networking::IPureCSharpPoolElement*() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr ::OSCE::Networking::IPureCSharpPoolElement* OSCE::Analytics::BaseAnalyticsEvent::i___OSCE__Networking__IPureCSharpPoolElement() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::BaseAnalyticsEvent::BaseAnalyticsEvent() {}
