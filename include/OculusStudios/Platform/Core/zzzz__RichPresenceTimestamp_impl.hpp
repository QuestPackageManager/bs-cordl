#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceTimestamp.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestamp_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp.get_timestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::RichPresenceTimestamp::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceTimestamp::get_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(), { "get_timestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::RichPresenceTimestampType (::OculusStudios::Platform::Core::RichPresenceTimestamp::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceTimestamp::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::RichPresenceTimestamp::*)(::StringW, ::OculusStudios::Platform::Core::RichPresenceTimestampType)>(
    &::OculusStudios::Platform::Core::RichPresenceTimestamp::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f2c248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OculusStudios::Platform::Core::RichPresenceTimestampType>() } })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::RichPresenceTimestamp::get_timestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(), { "get_timestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::RichPresenceTimestampType OculusStudios::Platform::Core::RichPresenceTimestamp::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::RichPresenceTimestampType>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Core::RichPresenceTimestamp::_ctor(::StringW timestamp, ::OculusStudios::Platform::Core::RichPresenceTimestampType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::RichPresenceTimestamp>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OculusStudios::Platform::Core::RichPresenceTimestampType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timestamp, type);
}
// Ctor Parameters [CppParam { name: "_timestamp_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type_k__BackingField", ty:
// "::OculusStudios::Platform::Core::RichPresenceTimestampType", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestamp::RichPresenceTimestamp(::StringW _timestamp_k__BackingField,
                                                                                        ::OculusStudios::Platform::Core::RichPresenceTimestampType _type_k__BackingField) noexcept {
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_type_k__BackingField = _type_k__BackingField;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestamp::RichPresenceTimestamp() {}
