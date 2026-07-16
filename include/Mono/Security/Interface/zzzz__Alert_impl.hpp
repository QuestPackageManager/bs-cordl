#pragma once
// IWYU pragma private; include "Mono/Security/Interface/Alert.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_impl.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::AlertLevel (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9ba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "get_Level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::AlertDescription (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9ba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "get_Description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::Alert::*)(::Mono::Security::Interface::AlertDescription)>(&::Mono::Security::Interface::Alert::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a9baa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.inferAlertLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::inferAlertLevel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a9baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "inferAlertLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a9bb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { ::i2c::class_of<::Mono::Security::Interface::Alert*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::AlertLevel& Mono::Security::Interface::Alert::__cordl_internal_get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr ::Mono::Security::Interface::AlertLevel const& Mono::Security::Interface::Alert::__cordl_internal_get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void Mono::Security::Interface::Alert::__cordl_internal_set_level(::Mono::Security::Interface::AlertLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___level = value;
}
constexpr ::Mono::Security::Interface::AlertDescription& Mono::Security::Interface::Alert::__cordl_internal_get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr ::Mono::Security::Interface::AlertDescription const& Mono::Security::Interface::Alert::__cordl_internal_get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr void Mono::Security::Interface::Alert::__cordl_internal_set_description(::Mono::Security::Interface::AlertDescription value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___description = value;
}
inline ::Mono::Security::Interface::AlertLevel Mono::Security::Interface::Alert::get_Level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "get_Level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertLevel>(this, ___internal_method);
}
inline ::Mono::Security::Interface::AlertDescription Mono::Security::Interface::Alert::get_Description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "get_Description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertDescription>(this, ___internal_method);
}
inline void Mono::Security::Interface::Alert::_ctor(::Mono::Security::Interface::AlertDescription description) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline void Mono::Security::Interface::Alert::inferAlertLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::Alert*>(), { "inferAlertLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::Interface::Alert::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::Alert*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::Interface::Alert* Mono::Security::Interface::Alert::New_ctor(::Mono::Security::Interface::AlertDescription description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::Alert*>(description));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::Alert::Alert() {}
